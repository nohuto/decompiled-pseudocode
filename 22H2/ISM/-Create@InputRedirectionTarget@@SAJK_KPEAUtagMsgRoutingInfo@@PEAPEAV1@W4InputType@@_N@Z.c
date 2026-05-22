/*
 * XREFs of ?Create@InputRedirectionTarget@@SAJK_KPEAUtagMsgRoutingInfo@@PEAPEAV1@W4InputType@@_N@Z @ 0x18017F904
 * Callers:
 *     ?EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x18017F3B0 (-EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18002819C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@InputRedirectionTarget@@IEAAJXZ @ 0x18017FB4C (-Initialize@InputRedirectionTarget@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputRedirectionTarget::Create(
        int a1,
        __int64 a2,
        __int128 *a3,
        InputRedirectionTarget **a4,
        int a5,
        char a6)
{
  unsigned int v10; // edi
  __int64 v11; // r9
  __int64 v12; // rdx
  char *v13; // rax
  InputRedirectionTarget *v14; // rbx
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v17; // xmm0_8
  int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  InputRedirectionTarget *v21; // [rsp+68h] [rbp+20h] BYREF

  v21 = 0LL;
  if ( a4 )
  {
    v13 = (char *)RefCountedObject::operator new(0x78uLL);
    v14 = (InputRedirectionTarget *)v13;
    if ( v13 )
    {
      v15 = *a3;
      v16 = a3[1];
      v17 = *((_QWORD *)a3 + 4);
      *((_QWORD *)v13 + 2) = &RefCountedObject::`vftable';
      *((_DWORD *)v13 + 6) = 1;
      *(_QWORD *)v13 = &InputRedirectionTarget::`vftable'{for `IInputRedirectionTarget'};
      *((_QWORD *)v13 + 1) = &InputRedirectionTarget::`vftable'{for `IDCompInputTarget'};
      *((_QWORD *)v13 + 2) = &InputRedirectionTarget::`vftable'{for `RefCountedObject'};
      *((_QWORD *)v13 + 4) = 0LL;
      *((_DWORD *)v13 + 12) = a5;
      v13[52] = a6;
      *((_QWORD *)v13 + 7) = a2;
      *((_DWORD *)v13 + 16) = a1;
      *(_OWORD *)(v13 + 72) = v15;
      *(_OWORD *)(v13 + 88) = v16;
      *((_QWORD *)v13 + 13) = v17;
      *((_QWORD *)v13 + 14) = 0LL;
      *((_QWORD *)v13 + 5) = 0LL;
    }
    else
    {
      v14 = 0LL;
    }
    v21 = v14;
    if ( v14 )
    {
      v18 = InputRedirectionTarget::Initialize(v14);
      v10 = v18;
      if ( v18 >= 0 )
      {
        v21 = 0LL;
        *a4 = v14;
        v10 = 0;
        goto LABEL_12;
      }
      v11 = (unsigned int)v18;
      v12 = 94LL;
    }
    else
    {
      v10 = -2147024882;
      v11 = 2147942414LL;
      v12 = 91LL;
    }
  }
  else
  {
    v10 = -2147024809;
    v11 = 2147942487LL;
    v12 = 79LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\inputredirection\\system\\lib\\"
             "inputredirectiontarget.cpp",
    (const char *)v11);
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v21);
  return v10;
}
