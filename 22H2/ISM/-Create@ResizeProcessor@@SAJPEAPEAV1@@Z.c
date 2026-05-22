/*
 * XREFs of ?Create@ResizeProcessor@@SAJPEAPEAV1@@Z @ 0x1800FDE78
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x1800272A4 (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002819C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ??0ResizeProcessor@@QEAA@XZ @ 0x1800FD878 (--0ResizeProcessor@@QEAA@XZ.c)
 *     ?Initialize@ResizeProcessor@@AEAAJXZ @ 0x1800FE2AC (-Initialize@ResizeProcessor@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ResizeProcessor::Create(struct ResizeProcessor **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // r9
  __int64 v4; // rdx
  ResizeProcessor *v5; // rax
  ResizeProcessor *v6; // rbx
  ResizeProcessor *v7; // rdi
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ResizeProcessor *v11; // [rsp+30h] [rbp+8h] BYREF
  ResizeProcessor *v12; // [rsp+38h] [rbp+10h]

  v11 = 0LL;
  if ( a1 )
  {
    v5 = (ResizeProcessor *)RefCountedObject::operator new(0x1A8uLL);
    v6 = v5;
    v12 = v5;
    if ( v5 )
    {
      memset_0(v5, 0, 0x1A8uLL);
      v7 = ResizeProcessor::ResizeProcessor(v6);
    }
    else
    {
      v7 = 0LL;
    }
    v11 = v7;
    if ( v7 )
    {
      v8 = ResizeProcessor::Initialize(v7);
      v2 = v8;
      if ( v8 >= 0 )
      {
        v11 = 0LL;
        *a1 = v7;
        v2 = 0;
        goto LABEL_12;
      }
      v3 = (unsigned int)v8;
      v4 = 48LL;
    }
    else
    {
      v2 = -2147024882;
      v3 = 2147942414LL;
      v4 = 47LL;
    }
  }
  else
  {
    v2 = -2147024809;
    v3 = 2147942487LL;
    v4 = 43LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\resize\\system\\lib\\resizeprocessor.cpp",
    (const char *)v3);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v11);
  return v2;
}
