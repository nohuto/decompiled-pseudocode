/*
 * XREFs of ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x1C01DDE1C
 * Callers:
 *     ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x1C01DDE1C (-xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z.c)
 *     EditionImmActivateThreadsLayout @ 0x1C0209220 (EditionImmActivateThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005BDE0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C007EAAC (LockW32Thread.c)
 *     ?xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z @ 0x1C0121D98 (-xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x1C01DDE1C (-xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z.c)
 */

__int64 __fastcall xxxImmActivateThreadsLayout(struct tagTHREADINFO *a1, struct tagTLBLOCK *a2, struct tagKL *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  _QWORD *v9; // rbx
  int i; // esi
  _QWORD *v11; // r15
  __int64 v12; // rdi
  _QWORD v14[6]; // [rsp+50h] [rbp-2F8h] BYREF
  _QWORD v15[82]; // [rsp+80h] [rbp-2C8h] BYREF

  memset(v15, 0, 0x288uLL);
  v6 = 0;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  while ( a1 )
  {
    v7 = *((_QWORD *)a1 + 55);
    if ( (struct tagKL *)v7 != a3 && (*((_DWORD *)a1 + 122) & 1) == 0 )
    {
      if ( *((_QWORD *)a1 + 98) )
      {
        LockW32Thread((__int64)a1, (__int64)&v15[5 * v6 + 2]);
        v15[5 * v6++ + 1] = a1;
        if ( v6 == 16 )
          break;
      }
      else
      {
        *((_QWORD *)a1 + 100) = *(_QWORD *)(v7 + 40);
        v14[0] = (char *)a1 + 440;
        v14[1] = a3;
        HMAssignmentLock(v14, 0LL);
        if ( *((_QWORD *)a1 + 99) )
          **((_QWORD **)a1 + 60) |= 0x40uLL;
        *(_QWORD *)(*((_QWORD *)a1 + 60) + 144LL) = *((_QWORD *)a3 + 5);
        *(_WORD *)(*((_QWORD *)a1 + 60) + 152LL) = *((_WORD *)a3 + 36);
      }
    }
    a1 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 83);
  }
  if ( a2 )
    goto LABEL_15;
  if ( !a1 )
  {
    if ( !v6 )
      return 0LL;
LABEL_15:
    if ( !a1 )
      goto LABEL_18;
  }
  if ( *((_QWORD *)a1 + 83) )
  {
    v15[0] = a2;
    return xxxImmActivateThreadsLayout(*((struct tagTHREADINFO **)a1 + 83), (struct tagTLBLOCK *)v15, a3);
  }
LABEL_18:
  v15[0] = a2;
  v9 = v15;
  while ( v9 )
  {
    for ( i = v6 - 1; i >= 0; --i )
    {
      v11 = &v9[5 * i];
      v12 = v11[1];
      if ( (*(_DWORD *)(v12 + 488) & 1) == 0 )
      {
        xxxImmActivateLayout((struct tagTHREADINFO *)v11[1], a3);
        if ( (*(_DWORD *)(v12 + 488) & 1) == 0 )
        {
          *(_QWORD *)(*(_QWORD *)(v12 + 480) + 144LL) = *((_QWORD *)a3 + 5);
          *(_WORD *)(*(_QWORD *)(v12 + 480) + 152LL) = *((_WORD *)a3 + 36);
        }
      }
      PopAndFreeW32ThreadLock((__int64)(v11 + 2));
    }
    v9 = (_QWORD *)*v9;
    v6 = 16;
  }
  return 1LL;
}
