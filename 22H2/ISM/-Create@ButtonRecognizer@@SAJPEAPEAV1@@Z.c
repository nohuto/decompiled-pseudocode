/*
 * XREFs of ?Create@ButtonRecognizer@@SAJPEAPEAV1@@Z @ 0x180173230
 * Callers:
 *     ?Initialize@ComboButtonProcessor@@AEAAJXZ @ 0x180171F1C (-Initialize@ComboButtonProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002819C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ??0ButtonRecognizer@@QEAA@XZ @ 0x180172F1C (--0ButtonRecognizer@@QEAA@XZ.c)
 *     ?Initialize@ButtonRecognizer@@IEAAJXZ @ 0x180173834 (-Initialize@ButtonRecognizer@@IEAAJXZ.c)
 */

__int64 __fastcall ButtonRecognizer::Create(struct ButtonRecognizer **a1)
{
  unsigned int v2; // ebx
  __int64 v3; // r9
  __int64 v4; // rdx
  ButtonRecognizer *v5; // rax
  ButtonRecognizer *v6; // rbx
  ButtonRecognizer *v7; // rdi
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  ButtonRecognizer *v11; // [rsp+30h] [rbp+8h] BYREF
  ButtonRecognizer *v12; // [rsp+38h] [rbp+10h]

  v11 = 0LL;
  if ( a1 )
  {
    v5 = (ButtonRecognizer *)RefCountedObject::operator new(0xD0uLL);
    v6 = v5;
    v12 = v5;
    if ( v5 )
    {
      memset_0(v5, 0, 0xD0uLL);
      v7 = ButtonRecognizer::ButtonRecognizer(v6);
    }
    else
    {
      v7 = 0LL;
    }
    v11 = v7;
    if ( v7 )
    {
      v8 = ButtonRecognizer::Initialize(v7);
      v2 = v8;
      if ( v8 >= 0 )
      {
        v11 = 0LL;
        *a1 = v7;
        v2 = 0;
        goto LABEL_12;
      }
      v3 = (unsigned int)v8;
      v4 = 98LL;
    }
    else
    {
      v2 = -2147024882;
      v3 = 2147942414LL;
      v4 = 95LL;
    }
  }
  else
  {
    v2 = -2147024809;
    v3 = 2147942487LL;
    v4 = 90LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\combobutton\\system\\lib\\buttonrecognizer.cpp",
    (const char *)v3);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v11);
  return v2;
}
