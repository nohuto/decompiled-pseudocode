/*
 * XREFs of ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C0086318
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0085310 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C00788D0 (HMAssignmentLock.c)
 *     ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z @ 0x1C0086400 (-GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C00C7730 (xxxChangeForegroundKeyboardTable.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ApiSetEditionImmActivateAndUnloadThreadsLayout @ 0x1C023F138 (ApiSetEditionImmActivateAndUnloadThreadsLayout.c)
 */

void __fastcall xxxSetPKLinThreads(struct tagKL *a1, struct tagKL *a2)
{
  __int64 ThreadsWithPKL; // rsi
  int v5; // r8d
  struct tagTHREADINFO **v6; // r14
  __int64 *v7; // rax
  __int64 *v8[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]
  struct tagTHREADINFO **v11; // [rsp+70h] [rbp+8h] BYREF

  v11 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  ThreadsWithPKL = GetThreadsWithPKL(&v11, (struct _TL *)&v9, a2);
  if ( a1 && gptiForeground && *((struct tagKL **)gptiForeground + 55) == a2 )
    xxxChangeForegroundKeyboardTable(a2, a1);
  if ( (_DWORD)ThreadsWithPKL )
  {
    if ( a2 )
    {
      ApiSetEditionImmActivateAndUnloadThreadsLayout((_DWORD)v11, ThreadsWithPKL, v5, (_DWORD)a1, *((_DWORD *)a2 + 10));
    }
    else
    {
      v6 = v11;
      do
      {
        v7 = (__int64 *)((char *)*v6 + 440);
        v8[1] = (__int64 *)a1;
        v8[0] = v7;
        HMAssignmentLock(v8, 0);
        ++v6;
        --ThreadsWithPKL;
      }
      while ( ThreadsWithPKL );
    }
    if ( qword_1C02D66D0 )
      qword_1C02D66D0(&v9);
  }
  if ( a2 )
  {
    if ( *((struct tagKL **)a2 + 2) != a1 )
    {
      *(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL) = *((_QWORD *)a1 + 2);
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) = *((_QWORD *)a1 + 3);
      *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
      *((_QWORD *)a1 + 3) = a2;
      *(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL) = a1;
      *((_QWORD *)a2 + 2) = a1;
    }
  }
}
