/*
 * XREFs of xxxGetWindowSmIcon @ 0x1C0085264
 * Callers:
 *     SendDwmIconChange @ 0x1C0085110 (SendDwmIconChange.c)
 *     xxxDrawCaptionTemp @ 0x1C00B97AC (xxxDrawCaptionTemp.c)
 *     xxxRealDrawMenuItem @ 0x1C0248CAC (xxxRealDrawMenuItem.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00407F4 (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0050D70 (xxxSendTransformableMessageTimeout.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x1C0060A44 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     xxxCreateWindowSmIcon @ 0x1C00A1774 (xxxCreateWindowSmIcon.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C00EB718 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall xxxGetWindowSmIcon(unsigned __int64 *BugCheckParameter2, int a2)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx
  _BYTE *v8; // rcx
  int WindowSmIcon; // eax
  _QWORD v10[2]; // [rsp+50h] [rbp-18h] BYREF
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v10, BugCheckParameter2[17]);
  v4 = BugCheckParameter2[5];
  v5 = *(_QWORD *)(v4 + 264);
  if ( !v5 || (v6 = HMValidateHandleNoSecure(*(_QWORD *)(v4 + 264), 3)) == 0 )
  {
    v6 = *(_QWORD *)(*(_QWORD *)v10[0] + 112LL);
    if ( !v6 )
    {
      v8 = (_BYTE *)BugCheckParameter2[5];
      if ( (v8[21] & 2) != 0 || (v8[20] & 8) != 0 && (v8[24] & 0x40) != 0 )
        goto LABEL_6;
      if ( a2 )
        goto LABEL_6;
      v11 = 0LL;
      if ( xxxSendTransformableMessageTimeout(
             BugCheckParameter2,
             0x37u,
             0LL,
             0LL,
             0,
             0x64u,
             (unsigned __int64 *)&v11,
             1,
             0) )
      {
        v5 = v11;
      }
      if ( !v5
        || (WindowSmIcon = xxxCreateWindowSmIcon(BugCheckParameter2, v5, 0LL),
            (v6 = HMValidateHandleNoSecure(WindowSmIcon, 3)) == 0) )
      {
LABEL_6:
        v6 = qword_1C032CB00;
      }
    }
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v10);
  return v6;
}
