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
  __int64 v6; // rdx
  int HeapInformation; // ebx
  __int64 v8; // r8
  __int64 v9; // r14
  _DWORD *v10; // rax
  _DWORD *v11; // r15
  __int64 v12; // r15
  __int64 v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  _QWORD *v16; // rax
  _QWORD *v17; // r14
  __int64 v18; // rdx
  size_t v19; // rcx
  unsigned int i; // r15d
  wchar_t *v21; // rcx
  unsigned int v22; // ecx
  int v23; // ecx
  _QWORD v24[4]; // [rsp+50h] [rbp-A8h] BYREF
  _QWORD v25[2]; // [rsp+70h] [rbp-88h] BYREF
  int v26; // [rsp+80h] [rbp-78h]
  __int64 (__fastcall *v27)(); // [rsp+88h] [rbp-70h]
  _QWORD *v28; // [rsp+90h] [rbp-68h]
  unsigned int Size; // [rsp+100h] [rbp+8h]
  size_t Sizea; // [rsp+100h] [rbp+8h]
  __int64 v31; // [rsp+108h] [rbp+10h]

  *(_QWORD *)(a1 + 152) = NtCurrentPeb()->ProcessHeap;
  DebugInfo = (unsigned int *)RtlpCommitQueryDebugInfo(a1, 8LL);
  v3 = DebugInfo;
  v4 = 0;
  if ( !DebugInfo )
    return 3221225495LL;
  *DebugInfo = 0;
  *(_QWORD *)(a1 + 112) = DebugInfo;
  RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
  HeapInformation = RtlpEnumProcessHeaps(
                      (__int64 (__fastcall *)(void *, __int64))RtlpQueryProcessEnumHeapsRoutine,
                      a1,
                      2LL);
  if ( HeapInformation < 0 )
  {
    *(_QWORD *)(a1 + 112) = 0LL;
  }
  else if ( (*(_BYTE *)(a1 + 64) & 8) != 0 )
  {
    v9 = RtlpGlobalTagHeap;
    if ( RtlpGlobalTagHeap && *(_QWORD *)(RtlpGlobalTagHeap + 232) )
    {
      v10 = (_DWORD *)RtlpCommitQueryDebugInfo(a1, 88LL);
      v11 = v10;
      if ( v10 )
      {
        memset(v10, 0, 0x58uLL);
        *(_QWORD *)v11 = v9;
        v11[2] = *(_DWORD *)(v9 + 112);
        *((_WORD *)v11 + 6) = 16;
        ++*v3;
        goto LABEL_10;
      }
LABEL_8:
      HeapInformation = -1073741801;
      goto LABEL_32;
    }
LABEL_10:
    while ( v4 < *v3 )
    {
      v12 = 22LL * v4;
      v13 = *(_QWORD *)(a1 + 128);
      if ( !v13 || v13 == *(_QWORD *)&v3[v12 + 2] )
      {
        v31 = *(_QWORD *)&v3[v12 + 2];
        v14 = *(unsigned __int16 *)(v31 + 224);
        v3[v12 + 10] = v14;
        v15 = 72 * v14;
        Size = 72 * v14;
        if ( *(_QWORD *)(v31 + 328) )
        {
          v3[v12 + 10] = v14 + 129;
          v15 += 9288;
          Size = v15;
        }
        v16 = (_QWORD *)RtlpCommitQueryDebugInfo(a1, v15);
        v17 = v16;
        if ( !v16 )
          goto LABEL_8;
        memset(v16, 0, Size);
        *(_QWORD *)&v3[v12 + 20] = v17;
        v18 = v31;
        v19 = *(_QWORD *)(v31 + 328);
        Sizea = v19;
        if ( v19 )
        {
          v3[v12 + 12] = 129;
          v3[v12 + 13] = 16;
          for ( i = 0; i <= 0x80; ++i )
          {
            *(_DWORD *)v17 = *(_DWORD *)v19;
            *((_DWORD *)v17 + 1) = *(_DWORD *)(v19 + 4);
            v17[1] = 16LL * *(_QWORD *)(v19 + 8);
            *((_WORD *)v17 + 8) = i | 0x8000;
            v21 = (wchar_t *)v17 + 10;
            if ( i >= 0x80 )
              RtlStringCbCopyW(v21, 0x30uLL, (__int64)L"VirtualAlloc");
            else
              RtlStringCbPrintfW(v21);
            v17 += 9;
            v19 = Sizea + 16;
            Sizea += 16LL;
          }
          v18 = v31;
        }
        memmove(v17, *(const void **)(v18 + 232), 72LL * *(unsigned __int16 *)(v18 + 224));
        v22 = 0;
        v6 = v31;
        while ( v22 < *(unsigned __int16 *)(v31 + 224) )
        {
          v17[1] *= 16LL;
          v17 += 9;
          ++v22;
        }
      }
      ++v4;
    }
  }
  if ( HeapInformation >= 0 )
  {
    v23 = *(_DWORD *)(a1 + 64);
    if ( (v23 & 0x210) != 0 )
    {
      v25[0] = -1LL;
      v25[1] = *(_QWORD *)(a1 + 128);
      v27 = RtlpWalkCallbackRoutine;
      v28 = v24;
      v26 = (v23 & 0x10) != 0 ? 5 : 3;
      v24[0] = a1;
      v24[1] = v3;
      v24[2] = 0LL;
      v24[3] = v3 + 2;
      HeapInformation = RtlQueryHeapInformation(0LL, 2, v25, 0x58uLL, 0LL);
    }
  }
LABEL_32:
  RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsListLock, v6, v8);
  return (unsigned int)HeapInformation;
}
