/*
 * XREFs of RtlQueryProcessHeapInformation @ 0x1800D7C20
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x1800D7740 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlStringCbCopyW @ 0x18003BC7C (RtlStringCbCopyW.c)
 *     RtlQueryHeapInformation @ 0x180074FA0 (RtlQueryHeapInformation.c)
 *     RtlpEnumProcessHeaps @ 0x18007529C (RtlpEnumProcessHeaps.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     RtlStringCbPrintfW @ 0x1800D8550 (RtlStringCbPrintfW.c)
 *     RtlpCommitQueryDebugInfo @ 0x1800D88C8 (RtlpCommitQueryDebugInfo.c)
 */

__int64 __fastcall RtlQueryProcessHeapInformation(__int64 a1)
{
  unsigned int *DebugInfo; // rax
  unsigned int *v3; // rdi
  unsigned int v4; // r13d
  int v6; // ebx
  __int64 v7; // r14
  _DWORD *v8; // rax
  _DWORD *v9; // r15
  __int64 v10; // r15
  __int64 v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // ecx
  _QWORD *v14; // rax
  _QWORD *v15; // r14
  __int64 v16; // rdx
  size_t v17; // rcx
  unsigned int i; // r15d
  wchar_t *v19; // rcx
  unsigned int j; // ecx
  int v21; // ecx
  _QWORD v22[4]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD HeapInformation[2]; // [rsp+70h] [rbp-88h] BYREF
  int v24; // [rsp+80h] [rbp-78h]
  __int64 (__fastcall *v25)(); // [rsp+88h] [rbp-70h]
  _QWORD *v26; // [rsp+90h] [rbp-68h]
  unsigned int Size; // [rsp+100h] [rbp+8h]
  size_t Sizea; // [rsp+100h] [rbp+8h]
  __int64 v29; // [rsp+108h] [rbp+10h]

  *(_QWORD *)(a1 + 152) = NtCurrentPeb()->ProcessHeap;
  DebugInfo = (unsigned int *)RtlpCommitQueryDebugInfo((PRTL_DEBUG_INFORMATION)a1, 8uLL);
  v3 = DebugInfo;
  v4 = 0;
  if ( !DebugInfo )
    return 3221225495LL;
  *DebugInfo = 0;
  *(_QWORD *)(a1 + 112) = DebugInfo;
  RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
  v6 = RtlpEnumProcessHeaps((__int64 (__fastcall *)(void *, __int64))RtlpQueryProcessEnumHeapsRoutine, a1, 2);
  if ( v6 < 0 )
  {
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  else if ( (*(_BYTE *)(a1 + 64) & 8) != 0 )
  {
    v7 = RtlpGlobalTagHeap;
    if ( RtlpGlobalTagHeap && *(_QWORD *)(RtlpGlobalTagHeap + 232) )
    {
      v8 = RtlpCommitQueryDebugInfo((PRTL_DEBUG_INFORMATION)a1, 0x58uLL);
      v9 = v8;
      if ( v8 )
      {
        memset(v8, 0, 0x58uLL);
        *(_QWORD *)v9 = v7;
        v9[2] = *(_DWORD *)(v7 + 112);
        *((_WORD *)v9 + 6) = 16;
        ++*v3;
        goto LABEL_10;
      }
LABEL_8:
      v6 = -1073741801;
      goto LABEL_32;
    }
LABEL_10:
    while ( v4 < *v3 )
    {
      v10 = 22LL * v4;
      v11 = *(_QWORD *)(a1 + 128);
      if ( !v11 || v11 == *(_QWORD *)&v3[v10 + 2] )
      {
        v29 = *(_QWORD *)&v3[v10 + 2];
        v12 = *(unsigned __int16 *)(v29 + 224);
        v3[v10 + 10] = v12;
        v13 = 72 * v12;
        Size = 72 * v12;
        if ( *(_QWORD *)(v29 + 328) )
        {
          v3[v10 + 10] = v12 + 129;
          v13 += 9288;
          Size = v13;
        }
        v14 = RtlpCommitQueryDebugInfo((PRTL_DEBUG_INFORMATION)a1, v13);
        v15 = v14;
        if ( !v14 )
          goto LABEL_8;
        memset(v14, 0, Size);
        *(_QWORD *)&v3[v10 + 20] = v15;
        v16 = v29;
        v17 = *(_QWORD *)(v29 + 328);
        Sizea = v17;
        if ( v17 )
        {
          v3[v10 + 12] = 129;
          v3[v10 + 13] = 16;
          for ( i = 0; i <= 0x80; ++i )
          {
            *(_DWORD *)v15 = *(_DWORD *)v17;
            *((_DWORD *)v15 + 1) = *(_DWORD *)(v17 + 4);
            v15[1] = 16LL * *(_QWORD *)(v17 + 8);
            *((_WORD *)v15 + 8) = i | 0x8000;
            v19 = (wchar_t *)v15 + 10;
            if ( i >= 0x80 )
              RtlStringCbCopyW(v19, 0x30uLL, (__int64)L"VirtualAlloc");
            else
              RtlStringCbPrintfW(v19);
            v15 += 9;
            v17 = Sizea + 16;
            Sizea += 16LL;
          }
          v16 = v29;
        }
        memmove(v15, *(const void **)(v16 + 232), 72LL * *(unsigned __int16 *)(v16 + 224));
        for ( j = 0; j < *(unsigned __int16 *)(v29 + 224); ++j )
        {
          v15[1] *= 16LL;
          v15 += 9;
        }
      }
      ++v4;
    }
  }
  if ( v6 >= 0 )
  {
    v21 = *(_DWORD *)(a1 + 64);
    if ( (v21 & 0x210) != 0 )
    {
      HeapInformation[0] = -1LL;
      HeapInformation[1] = *(_QWORD *)(a1 + 128);
      v25 = RtlpWalkCallbackRoutine;
      v26 = v22;
      v24 = (v21 & 0x10) != 0 ? 5 : 3;
      v22[0] = a1;
      v22[1] = v3;
      v22[2] = 0LL;
      v22[3] = v3 + 2;
      v6 = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)2, HeapInformation, 0x58uLL, 0LL);
    }
  }
LABEL_32:
  RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
  return (unsigned int)v6;
}
