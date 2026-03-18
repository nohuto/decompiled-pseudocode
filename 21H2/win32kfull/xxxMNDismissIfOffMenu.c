/*
 * XREFs of xxxMNDismissIfOffMenu @ 0x1C0231190
 * Callers:
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01EC438 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00FB014 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     IsModalMenuStarted @ 0x1C01ECB98 (IsModalMenuStarted.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0231654 (xxxMNFindWindowFromPoint.c)
 */

__int64 __fastcall xxxMNDismissIfOffMenu(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned int v13; // ebx
  unsigned __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _QWORD v19[2]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v20; // [rsp+60h] [rbp-20h] BYREF
  __int64 v21; // [rsp+70h] [rbp-10h]
  char v22; // [rsp+90h] [rbp+10h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v19, 0LL);
  v21 = 0LL;
  v4 = *(_QWORD *)(a1 + 40);
  v20 = 0LL;
  if ( *(char *)(v4 + 20) < 0 || *(char *)(v4 + 19) < 0 || !(unsigned int)IsModalMenuStarted(*(_QWORD *)(a1 + 16)) )
    goto LABEL_17;
  v6 = *(_QWORD **)(v5 + 608);
  v7 = v6 ? *v6 : 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v19, v7);
  if ( !*(_QWORD *)v19[0] )
    goto LABEL_17;
  if ( !*(_QWORD *)(*(_QWORD *)v19[0] + 8LL) )
    goto LABEL_17;
  v8 = xxxMNFindWindowFromPoint(v19, &v22, a2);
  v9 = *(_QWORD *)(a1 + 40);
  if ( *(char *)(v9 + 20) < 0 || *(char *)(v9 + 19) < 0 || v8 )
    goto LABEL_17;
  v10 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 608LL);
  if ( v10 )
    v10 = (_QWORD *)*v10;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v19, (__int64)v10);
  if ( *(_QWORD *)v19[0] && *(_QWORD *)(*(_QWORD *)v19[0] + 8LL) )
  {
    v11 = *(_QWORD *)(*(_QWORD *)v19[0] + 8LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    *(_QWORD *)&v20 = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = &v20;
    *((_QWORD *)&v20 + 1) = v11;
    HMLockObject(v11);
    v13 = 1;
    v14 = *(unsigned __int64 **)(*(_QWORD *)v19[0] + 8LL);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout(v14, 0x1Fu, 0LL, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v16, v15, v17);
  }
  else
  {
LABEL_17:
    v13 = 0;
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v19);
  return v13;
}
