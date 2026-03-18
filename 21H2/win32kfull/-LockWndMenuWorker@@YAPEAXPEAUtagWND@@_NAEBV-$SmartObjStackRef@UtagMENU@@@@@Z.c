/*
 * XREFs of ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0064708
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C004F920 (xxxSetWindowData.c)
 *     xxxGetSystemMenu @ 0x1C00BC098 (xxxGetSystemMenu.c)
 *     xxxSetDialogSystemMenu @ 0x1C0114B34 (xxxSetDialogSystemMenu.c)
 *     xxxSetSystemMenu @ 0x1C01468C8 (xxxSetSystemMenu.c)
 *     xxxSetMenu @ 0x1C0147E00 (xxxSetMenu.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0067394 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 */

__int64 __fastcall LockWndMenuWorker(__int64 a1, unsigned __int8 a2, _QWORD **a3)
{
  __int64 v4; // rbp
  __int64 v5; // r14
  __int64 v7; // rbx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v12; // rax
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
  if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator==(a3) && !*(_QWORD *)(**a3 + 80LL) )
  {
    v12 = *a3;
    v14[1] = a1;
    v14[0] = *v12 + 80LL;
    HMAssignmentLock(v14, 0LL);
  }
  v10 = a3[2];
  if ( a2 )
  {
    if ( !v10 )
      v10 = (_QWORD *)**a3;
    if ( v10 )
      v7 = v10[6];
    *(_QWORD *)(*(_QWORD *)(v5 - 120) + 160LL) = v7;
    v15[0] = v5;
  }
  else
  {
    if ( !v10 )
      v10 = (_QWORD *)**a3;
    if ( v10 )
      v7 = v10[6];
    *(_QWORD *)(*(_QWORD *)(v4 - 128) + 152LL) = v7;
    v15[0] = v4;
  }
  v15[1] = v10;
  return HMAssignmentLock(v15, 0LL);
}
