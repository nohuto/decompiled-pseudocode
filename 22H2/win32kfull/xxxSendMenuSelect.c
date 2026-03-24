/*
 * XREFs of xxxSendMenuSelect @ 0x1C0250E4C
 * Callers:
 *     xxxMNCancel @ 0x1C0236ED4 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0237760 (xxxMNCloseHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C0237DB8 (xxxMNDoubleClick.c)
 *     xxxMNSelectItem @ 0x1C023A5BC (xxxMNSelectItem.c)
 *     xxxMNInvertItem @ 0x1C024C7C0 (xxxMNInvertItem.c)
 * Callees:
 *     xxxSendNotifyMessage @ 0x1C00402D0 (xxxSendNotifyMessage.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C00479EC (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0078AA0 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxWindowEvent @ 0x1C0081440 (xxxWindowEvent.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A94C (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE190 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010104C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxCallMsgFilter @ 0x1C01E69DC (xxxCallMsgFilter.c)
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
  struct _LARGE_STRING **v15; // rax
  unsigned int v16; // ebx
  _QWORD v18[2]; // [rsp+38h] [rbp-31h] BYREF
  struct _LARGE_STRING **v19; // [rsp+48h] [rbp-21h]
  __int64 v20[3]; // [rsp+50h] [rbp-19h] BYREF
  __int64 v21; // [rsp+68h] [rbp-1h] BYREF
  int v22; // [rsp+70h] [rbp+7h]
  int v23; // [rsp+74h] [rbp+Bh]
  unsigned __int64 v24; // [rsp+78h] [rbp+Fh]
  struct _LARGE_STRING *v25; // [rsp+80h] [rbp+17h]
  __int128 v26; // [rsp+88h] [rbp+1Fh]

  v6 = a4;
  v23 = 0;
  v26 = 0LL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>((__int64)v18, a3);
  if ( (int)v6 < 0 || *(_DWORD *)(*(_QWORD *)(**(_QWORD **)a3 + 40LL) + 44LL) <= (unsigned int)v6 )
  {
    v14 = *(_QWORD *)(a3 + 16);
    if ( !v14 )
      v14 = **(_QWORD **)a3;
    SmartObjStackRefBase<tagMENU>::Init(v20, 0LL);
    v20[2] = -1LL;
    SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v20);
    v19 = 0LL;
    LOWORD(v12) = 0;
    SmartObjStackRefBase<tagMENU>::operator=(v18, 0LL);
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
    v21 = *a1;
  else
    v21 = 0LL;
  v22 = 287;
  v24 = (unsigned __int16)v12 | (unsigned __int64)(v11 << 16);
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v18) )
  {
    v25 = 0LL;
  }
  else
  {
    v15 = v19;
    if ( !v19 )
      v15 = *(struct _LARGE_STRING ***)v18[0];
    v25 = *v15;
  }
  if ( !(unsigned int)xxxCallMsgFilter((__int64)&v21, 2) )
    xxxSendNotifyMessage((__int64)a1, 0x11Fu, v24, v25, 1);
  if ( a2 )
  {
    if ( a2 == (struct tagWND *)a1 )
      v16 = (v11 >> 12) | 0xFFFFFFFD;
    else
      v16 = -4;
    xxxWindowEvent(0x8005u, a2, v16, v6 + 1, 0);
  }
  return SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v18);
}
