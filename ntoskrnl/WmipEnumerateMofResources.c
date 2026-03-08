/*
 * XREFs of WmipEnumerateMofResources @ 0x140787950
 * Callers:
 *     WmipIoControl @ 0x140787290 (WmipIoControl.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     RtlStringCbCopyW @ 0x140244EC0 (RtlStringCbCopyW.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

__int64 __fastcall WmipEnumerateMofResources(unsigned int *a1, unsigned int a2, _DWORD *a3)
{
  unsigned __int64 v4; // rbx
  unsigned int v6; // r9d
  __int64 v7; // r11
  _QWORD *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // rcx
  _QWORD *v12; // r8
  unsigned __int64 v13; // rbp
  __int64 v14; // rsi
  unsigned __int64 v15; // r11
  unsigned int v16; // r12d
  _QWORD *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rax

  v4 = a2;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  v6 = 0;
  v7 = 0LL;
  v8 = *(_QWORD **)WmipMRHeadPtr;
  if ( *(_QWORD *)WmipMRHeadPtr == WmipMRHeadPtr )
    goto LABEL_17;
  do
  {
    v9 = -1LL;
    v10 = v6++;
    do
      ++v9;
    while ( *(_WORD *)(v8[6] + 2 * v9) );
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)(v8[5] + 2 * v11) );
    v8 = (_QWORD *)*v8;
    v12 = (_QWORD *)WmipMRHeadPtr;
    v7 += 2 * (v11 + v9) + 4;
  }
  while ( v8 != (_QWORD *)WmipMRHeadPtr );
  if ( !v6 )
  {
LABEL_17:
    *a1 = 0;
    LODWORD(v15) = 16;
  }
  else
  {
    v13 = v4;
    v14 = 12 * v10 + 16;
    v15 = v14 + v7;
    if ( v4 < v15 )
    {
      *a1 = v15;
      LODWORD(v15) = 4;
    }
    else
    {
      *a1 = v6;
      v16 = 0;
      v17 = (_QWORD *)*v12;
      if ( (_QWORD *)*v12 != v12 )
      {
        do
        {
          v18 = v16++;
          v19 = 3 * v18;
          LODWORD(v18) = v17[2] & 1;
          a1[v19 + 1] = v14;
          a1[v19 + 3] = v18;
          RtlStringCbCopyW((NTSTRSAFE_PWSTR)((char *)a1 + v14), v13 - v14, (NTSTRSAFE_PCWSTR)v17[5]);
          v20 = -1LL;
          do
            ++v20;
          while ( *(_WORD *)(v17[5] + 2 * v20) );
          v21 = v14 + 2 * v20 + 2;
          a1[v19 + 2] = v21;
          RtlStringCbCopyW((NTSTRSAFE_PWSTR)((char *)a1 + v21), v13 - v21, (NTSTRSAFE_PCWSTR)v17[6]);
          v22 = -1LL;
          do
            ++v22;
          while ( *(_WORD *)(v17[6] + 2 * v22) );
          v17 = (_QWORD *)*v17;
          v14 = v21 + 2 * v22 + 2;
        }
        while ( v17 != (_QWORD *)WmipMRHeadPtr );
      }
    }
  }
  *a3 = v15;
  KeReleaseMutex(&WmipSMMutex, 0);
  return 0LL;
}
