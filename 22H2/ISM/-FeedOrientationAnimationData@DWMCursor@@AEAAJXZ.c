/*
 * XREFs of ?FeedOrientationAnimationData@DWMCursor@@AEAAJXZ @ 0x18019CD54
 * Callers:
 *     ?CreateAnimationForProcess@DWMCursor@@QEAAJKPEA_K0@Z @ 0x18019C9D8 (-CreateAnimationForProcess@DWMCursor@@QEAAJKPEA_K0@Z.c)
 *     ?SetOrientation@DWMCursor@@UEAAJM@Z @ 0x18019D0C0 (-SetOrientation@DWMCursor@@UEAAJM@Z.c)
 * Callees:
 *     ?GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ @ 0x18002C214 (-GetAnimationDataProvider@ISMStatics@@SAPEAUIAnimationDataProvider@@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursor::FeedOrientationAnimationData(DWMCursor *this)
{
  struct IAnimationDataProvider *AnimationDataProvider; // rdi
  void (__fastcall *v3)(struct IAnimationDataProvider *, __int64 *, void (__fastcall ****)(_QWORD)); // rsi
  void (__fastcall ***v4)(_QWORD); // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  void (__fastcall ***v12)(_QWORD); // [rsp+38h] [rbp+10h] BYREF

  if ( !*((_QWORD *)this + 9) )
    return 0LL;
  AnimationDataProvider = ISMStatics::GetAnimationDataProvider();
  v3 = *(void (__fastcall **)(struct IAnimationDataProvider *, __int64 *, void (__fastcall ****)(_QWORD)))(*(_QWORD *)AnimationDataProvider + 48LL);
  v4 = (void (__fastcall ***)(_QWORD))*((_QWORD *)this + 9);
  v12 = v4;
  if ( v4 )
    (**v4)(v4);
  v3(AnimationDataProvider, &v11, &v12);
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v11 + 8) + 32LL))(v11 + 8, 3LL);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v9 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE5,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursor.cpp",
    (const char *)(unsigned int)v5);
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return v6;
}
