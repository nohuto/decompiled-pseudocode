/*
 * XREFs of ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x1C01B90D4
 * Callers:
 *     ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x1C01B90D4 (-xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z.c)
 *     EditionImmActivateThreadsLayout @ 0x1C01E9D70 (EditionImmActivateThreadsLayout.c)
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     LockW32Thread @ 0x1C00A1BCC (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00A1CA0 (PopAndFreeW32ThreadLock.c)
 *     ?xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z @ 0x1C00F5318 (-xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x1C01B90D4 (-xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z.c)
 */

__int64 __fastcall xxxImmActivateThreadsLayout(struct tagTHREADINFO *a1, struct tagTLBLOCK *a2, struct tagKL *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v10; // rbx
  int i; // esi
  _QWORD *v12; // r15
  __int64 v13; // rdi
  _QWORD v15[6]; // [rsp+50h] [rbp-2F8h] BYREF
  _QWORD v16[82]; // [rsp+80h] [rbp-2C8h] BYREF

  memset_0(v16, 0, 0x288uLL);
  v6 = 0;
  PtiCurrentShared(v7);
  while ( a1 )
  {
    v8 = *((_QWORD *)a1 + 55);
    if ( (struct tagKL *)v8 != a3 && (*((_DWORD *)a1 + 122) & 1) == 0 )
    {
      if ( *((_QWORD *)a1 + 98) )
      {
        LockW32Thread((__int64)a1, &v16[5 * v6 + 2]);
        v16[5 * v6++ + 1] = a1;
        if ( v6 == 16 )
          break;
      }
      else
      {
        *((_QWORD *)a1 + 100) = *(_QWORD *)(v8 + 40);
        v15[0] = (char *)a1 + 440;
        v15[1] = a3;
        HMAssignmentLock(v15, 0LL);
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
    v16[0] = a2;
    return xxxImmActivateThreadsLayout(*((struct tagTHREADINFO **)a1 + 83), (struct tagTLBLOCK *)v16, a3);
  }
LABEL_18:
  v16[0] = a2;
  v10 = v16;
  while ( v10 )
  {
    for ( i = v6 - 1; i >= 0; --i )
    {
      v12 = &v10[5 * i];
      v13 = v12[1];
      if ( (*(_DWORD *)(v13 + 488) & 1) == 0 )
      {
        xxxImmActivateLayout((struct tagTHREADINFO *)v12[1], a3);
        if ( (*(_DWORD *)(v13 + 488) & 1) == 0 )
        {
          *(_QWORD *)(*(_QWORD *)(v13 + 480) + 144LL) = *((_QWORD *)a3 + 5);
          *(_WORD *)(*(_QWORD *)(v13 + 480) + 152LL) = *((_WORD *)a3 + 36);
        }
      }
      PopAndFreeW32ThreadLock((__int64)(v12 + 2));
    }
    v10 = (_QWORD *)*v10;
    v6 = 16;
  }
  return 1LL;
}
