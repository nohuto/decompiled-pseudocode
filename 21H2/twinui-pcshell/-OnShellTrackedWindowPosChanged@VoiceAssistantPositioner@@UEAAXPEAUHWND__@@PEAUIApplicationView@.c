/*
 * XREFs of ?OnShellTrackedWindowPosChanged@VoiceAssistantPositioner@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x1804519A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180045D28 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall VoiceAssistantPositioner::OnShellTrackedWindowPosChanged(
        VoiceAssistantPositioner *this,
        HWND a2,
        struct IUnknown *a3,
        __int64 a4,
        unsigned int a5)
{
  void (__fastcall *v6)(char *, GUID *, IUnknown **); // rbx
  HRESULT v7; // eax
  int v8; // eax
  IUnknown *punk; // [rsp+20h] [rbp-10h] BYREF
  void *ppvOut; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]

  if ( (unsigned int)SHIsSameObject(*((struct IUnknown **)this + 27), a3) && a5 == 2 )
  {
    *((_BYTE *)this + 265) = 1;
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
    punk = 0LL;
    v6 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 20) + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
    v6((char *)this - 160, &GUID_00000000_0000_0000_c000_000000000046, &punk);
    v7 = IUnknown_QueryService(
           punk,
           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
           &ppvOut);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        986LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punk);
    v8 = (*(__int64 (__fastcall **)(void *, _QWORD, __int64))(*(_QWORD *)ppvOut + 32LL))(
           ppvOut,
           *((_QWORD *)this + 27),
           4LL);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        987LL,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppvOut);
  }
}
