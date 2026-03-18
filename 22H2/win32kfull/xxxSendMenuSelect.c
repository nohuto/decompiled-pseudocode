/*
 * XREFs of xxxSendMenuSelect @ 0x1C023FDCC
 * Callers:
 *     xxxMNCancel @ 0x1C0216E04 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0217510 (xxxMNCloseHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C02179AC (xxxMNDoubleClick.c)
 *     xxxMNSelectItem @ 0x1C0219AA0 (xxxMNSelectItem.c)
 *     xxxMNInvertItem @ 0x1C0235660 (xxxMNInvertItem.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C004D370 (xxxSendNotifyMessage.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00635B4 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C0064FE4 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C00652F4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C009D540 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C009E5C0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     xxxWindowEvent @ 0x1C00E71B0 (xxxWindowEvent.c)
 *     xxxCallMsgFilter @ 0x1C015208E (xxxCallMsgFilter.c)
 */

_QWORD *__fastcall xxxSendMenuSelect(__int64 *a1, struct tagWND *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // rsi
  _QWORD *v9; // rdx
  int v10; // ebx
  unsigned int v11; // ebx
  int v12; // r15d
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r9
  struct _LARGE_STRING **v17; // rax
  unsigned int v18; // ebx
  _QWORD v20[2]; // [rsp+38h] [rbp-31h] BYREF
  struct _LARGE_STRING **v21; // [rsp+48h] [rbp-21h]
  __int64 v22[3]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v23; // [rsp+68h] [rbp-1h] BYREF
  int v24; // [rsp+70h] [rbp+7h]
  int v25; // [rsp+74h] [rbp+Bh]
  unsigned __int64 v26; // [rsp+78h] [rbp+Fh]
  struct _LARGE_STRING *v27; // [rsp+80h] [rbp+17h]
  __int128 v28; // [rsp+88h] [rbp+1Fh]

  v6 = a4;
  v25 = 0;
  v28 = 0LL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>((__int64)v20, a3);
  if ( (int)v6 < 0 || *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a3 + 40LL) + 44LL) <= (unsigned int)v6 )
  {
    v14 = *(_QWORD *)(a3 + 16);
    if ( !v14 )
      v14 = **(_QWORD **)a3;
    SmartObjStackRefBase<tagMENU>::Init(v22, 0LL);
    v22[2] = -1LL;
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v22);
    v21 = 0LL;
    LOWORD(v12) = 0;
    SmartObjStackRefBase<tagMENU>::operator=(v20, 0LL);
    LODWORD(v6) = -1;
    v11 = 0xFFFF;
    if ( v14 != -1 )
      v11 = 0;
  }
  else
  {
    v9 = (_QWORD *)(*(_QWORD *)(**(_QWORD **)a3 + 88LL) + 96 * v6);
    v10 = *(_DWORD *)*v9 & 0x6B64 | *(_DWORD *)(*v9 + 4LL) & 0x8B;
    if ( v9[2] )
      v10 |= 0x10u;
    v11 = v10 & 0xFFFF5FFF;
    LOWORD(v12) = v6;
    if ( (v11 & 0x10) == 0 )
      v12 = *(_DWORD *)(*v9 + 8LL);
    if ( a5 )
    {
      v13 = v11 | 0x8000;
      if ( *(_DWORD *)(a5 + 20) != -1 )
        v13 = v11;
      v11 = v13;
      if ( (*(_DWORD *)(a5 + 8) & 2) != 0 )
        v11 = v13 | 0x2000;
    }
  }
  if ( a1 )
    v23 = *a1;
  else
    v23 = 0LL;
  v24 = 287;
  v26 = (unsigned __int16)v12 | (unsigned __int64)(v11 << 16);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v20) )
  {
    v27 = 0LL;
  }
  else
  {
    v17 = v21;
    if ( !v21 )
      v17 = *(struct _LARGE_STRING ***)v20[0];
    v27 = *v17;
  }
  if ( !(unsigned int)xxxCallMsgFilter((__int64)&v23, 2LL, v15, v16) )
    xxxSendNotifyMessage((struct tagWND *)a1, 0x11Fu, v26, v27, 1);
  if ( a2 )
  {
    if ( a2 == (struct tagWND *)a1 )
      v18 = (v11 >> 12) | 0xFFFFFFFD;
    else
      v18 = -4;
    xxxWindowEvent(0x8005u, a2, v18, v6 + 1, 0);
  }
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v20);
}
