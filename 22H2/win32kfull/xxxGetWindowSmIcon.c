/*
 * XREFs of xxxGetWindowSmIcon @ 0x1C0038CA8
 * Callers:
 *     SendDwmIconChange @ 0x1C0038960 (SendDwmIconChange.c)
 *     xxxDrawCaptionTemp @ 0x1C0158B14 (xxxDrawCaptionTemp.c)
 *     xxxRealDrawMenuItem @ 0x1C024D2E4 (xxxRealDrawMenuItem.c)
 * Callees:
 *     xxxCreateWindowSmIcon @ 0x1C00250E0 (xxxCreateWindowSmIcon.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00598F0 (xxxSendTransformableMessageTimeout.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C0078D28 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     HMValidateHandleNoSecure @ 0x1C008C368 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00FF480 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall xxxGetWindowSmIcon(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 ThreadWin32Thread; // rdi
  _QWORD *v9; // rcx
  _BYTE *v11; // rcx
  __int64 WindowSmIcon; // rax
  __int64 v13; // rdx
  _QWORD v14[2]; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 LowLimit; // [rsp+70h] [rbp+8h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v14, *(_QWORD *)(a1 + 136));
  v5 = *(_QWORD *)(a1 + 40);
  v6 = *(_QWORD *)(v5 + 264);
  if ( !v6 || (LOBYTE(v4) = 3, (v7 = HMValidateHandleNoSecure(*(_QWORD *)(v5 + 264), v4)) == 0) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)v14[0] + 112LL);
    if ( !v7 )
    {
      v11 = *(_BYTE **)(a1 + 40);
      if ( (v11[21] & 2) != 0 || (v11[20] & 8) != 0 && (v11[24] & 0x40) != 0 )
        goto LABEL_8;
      if ( a2 )
        goto LABEL_8;
      LowLimit = 0LL;
      if ( xxxSendTransformableMessageTimeout(a1, 55, 0, 0, 0, 100, (unsigned __int64)&LowLimit, 1, 0) )
        v6 = LowLimit;
      if ( !v6
        || (WindowSmIcon = xxxCreateWindowSmIcon(a1, v6, 0),
            LOBYTE(v13) = 3,
            (v7 = HMValidateHandleNoSecure(WindowSmIcon, v13)) == 0) )
      {
LABEL_8:
        v7 = qword_1C03307D0;
      }
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v14);
  v9 = *(_QWORD **)(ThreadWin32Thread + 1472);
  if ( v9 )
    *(_QWORD *)(ThreadWin32Thread + 1472) = *v9;
  return v7;
}
