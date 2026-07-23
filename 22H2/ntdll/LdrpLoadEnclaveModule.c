/*
 * XREFs of LdrpLoadEnclaveModule @ 0x1800CD7E8
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800CCE50 (LdrLoadEnclaveModule.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     LdrpMapDllSearchPath @ 0x180060AD0 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180060E90 (LdrpMapDllFullPath.c)
 *     LdrpUnmapModule @ 0x180071DB0 (LdrpUnmapModule.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     NtLoadEnclaveData @ 0x18009F5B0 (NtLoadEnclaveData.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800CD34C (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800CD544 (LdrpEnclaveAddForwarderModules.c)
 */

__int64 __fastcall LdrpLoadEnclaveModule(unsigned __int16 *a1)
{
  __int64 v1; // rbp
  void *PageInformation; // r15
  _QWORD *v4; // r14
  __int64 result; // rax
  unsigned __int64 v6; // rdi
  int EnclaveData; // esi
  __int64 v8; // rcx
  signed __int64 v9; // rdx
  __int64 v10; // rax
  void *v11; // rdi
  ULONG PageInformationLength; // esi
  char *Heap; // rax
  __int64 v14; // rax

  v1 = *((_QWORD *)a1 + 7);
  PageInformation = 0LL;
  v4 = (_QWORD *)*((_QWORD *)a1 + 21);
  if ( (*((_DWORD *)a1 + 8) & 0x200) != 0 )
    result = LdrpMapDllFullPath((__m128i *)a1);
  else
    result = LdrpMapDllSearchPath((__int64)a1);
  if ( (int)result < 0 )
    return result;
  v6 = v4[11];
  EnclaveData = LdrpEnclaveAddDelayloadModules((__int64)a1);
  if ( EnclaveData >= 0 )
  {
    EnclaveData = LdrpEnclaveAddForwarderModules(a1);
    if ( EnclaveData >= 0 )
    {
      v8 = v4[9];
      if ( !v6 )
        v6 = (v8 + v4[10]) & 0xFFFFFFFFFFFFF000uLL;
      v9 = *(unsigned int *)(v1 + 64);
      if ( (__int64)(v6 - v8) >= v9 )
      {
        v11 = (void *)((v6 - v9) & 0xFFFFFFFFFFFFF000uLL);
        PageInformationLength = *a1 + 10;
        Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, PageInformationLength);
        PageInformation = Heap;
        if ( Heap )
        {
          *(_QWORD *)Heap = *((_QWORD *)a1 + 3);
          *((_WORD *)Heap + 4) = *a1;
          memmove(Heap + 10, *((const void **)a1 + 1), *a1);
          EnclaveData = NtLoadEnclaveData(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          v11,
                          0LL,
                          0LL,
                          0,
                          PageInformation,
                          PageInformationLength,
                          0LL,
                          0LL);
          if ( EnclaveData >= 0 )
          {
            v4[11] = v11;
            v14 = *(_QWORD *)(v1 + 152);
            *(_QWORD *)(v1 + 184) = v11;
            *(_DWORD *)(v14 + 56) = 9;
            v10 = v4[14];
            if ( !v10 )
            {
              v4[14] = v1;
              v10 = v1;
            }
            goto LABEL_12;
          }
        }
        else
        {
          EnclaveData = -1073741670;
        }
      }
      else
      {
        EnclaveData = -1073741800;
      }
    }
  }
  v4[14] = 0LL;
  v10 = 0LL;
LABEL_12:
  if ( EnclaveData < 0 || v1 != v10 )
    LdrpUnmapModule(v1);
  if ( PageInformation )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, PageInformation);
  NtClose(*((HANDLE *)a1 + 3));
  NtClose(*((HANDLE *)a1 + 22));
  *((_QWORD *)a1 + 3) = 0LL;
  result = (unsigned int)EnclaveData;
  *((_QWORD *)a1 + 22) = -1LL;
  return result;
}
