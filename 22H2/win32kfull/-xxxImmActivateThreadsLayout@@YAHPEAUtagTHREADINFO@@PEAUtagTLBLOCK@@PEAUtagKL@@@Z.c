/*
 * XREFs of ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x1C01B7F34
 * Callers:
 *     ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x1C01B7F34 (-xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z.c)
 *     EditionImmActivateThreadsLayout @ 0x1C01E8C80 (EditionImmActivateThreadsLayout.c)
 * Callees:
 *     LockW32Thread @ 0x1C0061F84 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0062180 (PopAndFreeW32ThreadLock.c)
 *     ?xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z @ 0x1C00BD928 (-xxxImmActivateLayout@@YAXPEAUtagTHREADINFO@@PEAUtagKL@@@Z.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     ?xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z @ 0x1C01B7F34 (-xxxImmActivateThreadsLayout@@YAHPEAUtagTHREADINFO@@PEAUtagTLBLOCK@@PEAUtagKL@@@Z.c)
 */

__int64 __fastcall xxxImmActivateThreadsLayout(struct tagTHREADINFO *a1, struct tagTLBLOCK *a2, struct tagKL *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  _QWORD *v13; // rbx
  int i; // esi
  _QWORD *v15; // r15
  __int64 v16; // rdi
  _QWORD v18[6]; // [rsp+50h] [rbp-2F8h] BYREF
  _QWORD v19[82]; // [rsp+80h] [rbp-2C8h] BYREF

  memset_0(v19, 0, 0x288uLL);
  v6 = 0;
  PtiCurrentShared(v8, v7, v9, v10);
  while ( a1 )
  {
    v11 = *((_QWORD *)a1 + 55);
    if ( (struct tagKL *)v11 != a3 && (*((_DWORD *)a1 + 122) & 1) == 0 )
    {
      if ( *((_QWORD *)a1 + 98) )
      {
        LockW32Thread((__int64)a1, &v19[5 * v6 + 2]);
        v19[5 * v6++ + 1] = a1;
        if ( v6 == 16 )
          break;
      }
      else
      {
        *((_QWORD *)a1 + 100) = *(_QWORD *)(v11 + 40);
        v18[0] = (char *)a1 + 440;
        v18[1] = a3;
        HMAssignmentLock(v18, 0LL);
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
    v19[0] = a2;
    return xxxImmActivateThreadsLayout(*((struct tagTHREADINFO **)a1 + 83), (struct tagTLBLOCK *)v19, a3);
  }
LABEL_18:
  v19[0] = a2;
  v13 = v19;
  while ( v13 )
  {
    for ( i = v6 - 1; i >= 0; --i )
    {
      v15 = &v13[5 * i];
      v16 = v15[1];
      if ( (*(_DWORD *)(v16 + 488) & 1) == 0 )
      {
        xxxImmActivateLayout((struct tagTHREADINFO *)v15[1], a3);
        if ( (*(_DWORD *)(v16 + 488) & 1) == 0 )
        {
          *(_QWORD *)(*(_QWORD *)(v16 + 480) + 144LL) = *((_QWORD *)a3 + 5);
          *(_WORD *)(*(_QWORD *)(v16 + 480) + 152LL) = *((_WORD *)a3 + 36);
        }
      }
      PopAndFreeW32ThreadLock((__int64)(v15 + 2));
    }
    v13 = (_QWORD *)*v13;
    v6 = 16;
  }
  return 1LL;
}
