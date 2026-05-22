/*
 * XREFs of ?Create@DragNDropProcessor@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@AEAV?$ComPtr@VActivationProcessor@@@34@PEAPEAV1@@Z @ 0x1800F8D40
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800272A4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002819C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0DragNDropProcessor@@AEAA@AEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@AEAV?$ComPtr@VActivationProcessor@@@23@@Z @ 0x1800F82C8 (--0DragNDropProcessor@@AEAA@AEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@AEAV-$ComPt.c)
 *     ?Initialize@DragNDropProcessor@@AEAAJXZ @ 0x1800FA098 (-Initialize@DragNDropProcessor@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall DragNDropProcessor::Create(__int64 *a1, _QWORD *a2, DragNDropProcessor **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // r9
  __int64 v8; // rdx
  void *v9; // rax
  DragNDropProcessor *v10; // rdi
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  DragNDropProcessor *v14; // [rsp+40h] [rbp+18h] BYREF
  void *v15; // [rsp+48h] [rbp+20h]

  v14 = 0LL;
  if ( a3 )
  {
    v9 = RefCountedObject::operator new(0x1F0uLL);
    v15 = v9;
    if ( v9 )
      v10 = (DragNDropProcessor *)DragNDropProcessor::DragNDropProcessor((__int64)v9, a1, a2);
    else
      v10 = 0LL;
    v14 = v10;
    if ( v10 )
    {
      v11 = DragNDropProcessor::Initialize(v10);
      v6 = v11;
      if ( v11 >= 0 )
      {
        v14 = 0LL;
        *a3 = v10;
        v6 = 0;
        goto LABEL_12;
      }
      v7 = (unsigned int)v11;
      v8 = 65LL;
    }
    else
    {
      v6 = -2147024882;
      v7 = 2147942414LL;
      v8 = 64LL;
    }
  }
  else
  {
    v6 = -2147024809;
    v7 = 2147942487LL;
    v8 = 60LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragndropprocessor.cpp",
    (const char *)v7);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v14);
  return v6;
}
