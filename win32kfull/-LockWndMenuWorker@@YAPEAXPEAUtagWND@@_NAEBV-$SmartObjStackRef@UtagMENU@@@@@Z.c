/*
 * XREFs of ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00E79FC
 * Callers:
 *     xxxGetSystemMenu @ 0x1C0021498 (xxxGetSystemMenu.c)
 *     xxxSetWindowData @ 0x1C002F9C8 (xxxSetWindowData.c)
 *     xxxSetDialogSystemMenu @ 0x1C00E7FF4 (xxxSetDialogSystemMenu.c)
 *     xxxSetMenu @ 0x1C0234BF0 (xxxSetMenu.c)
 *     xxxSetSystemMenu @ 0x1C0234C74 (xxxSetSystemMenu.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00A4F34 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 */

__int64 __fastcall LockWndMenuWorker(__int64 a1, unsigned __int8 a2, _QWORD **a3)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v7; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v13; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v15[5]; // [rsp+30h] [rbp-28h] BYREF

  v4 = a1 + 168;
  v5 = a1 + 160;
  v7 = 0LL;
  v9 = *(_QWORD *)(a1 + 8 * (a2 ^ 1LL) + 160);
  if ( v9 )
  {
    v13 = (_QWORD *)(v9 + 80);
    if ( *v13 == a1 )
      HMAssignmentUnlock(v13);
  }
  if ( !SmartObjStackRef<tagMENU>::operator==((__int64)a3) && !*(_QWORD *)(**a3 + 80LL) )
  {
    v10 = *a3;
    v14[1] = a1;
    v14[0] = *v10 + 80LL;
    HMAssignmentLock(v14, 0LL);
  }
  v11 = a3[2];
  if ( a2 )
  {
    if ( !v11 )
      v11 = (_QWORD *)**a3;
    if ( v11 )
      v7 = v11[6];
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 160LL) = v7;
    v15[0] = v5;
  }
  else
  {
    if ( !v11 )
      v11 = (_QWORD *)**a3;
    if ( v11 )
      v7 = v11[6];
    *(_QWORD *)(*(_QWORD *)(a1 + 40) + 152LL) = v7;
    v15[0] = v4;
  }
  v15[1] = v11;
  return HMAssignmentLock(v15, 0LL);
}
