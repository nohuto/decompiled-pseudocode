/*
 * XREFs of ?IsCortanaApp@@YA_NPEAUIApplicationView@@@Z @ 0x180450F0C
 * Callers:
 *     ?CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x18044FA94 (-CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAU.c)
 * Callees:
 *     ?TryGetCortanaAumid@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x18004D404 (-TryGetCortanaAumid@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18008F018 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     WINRT_WindowsGetStringRawBuffer @ 0x180090D3A (WINRT_WindowsGetStringRawBuffer.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall IsCortanaApp(struct IApplicationView *a1)
{
  int (__fastcall *v2)(struct IApplicationView *, PCWSTR, int *); // rsi
  HSTRING *CortanaAumid; // rax
  bool v4; // bl
  PCWSTR StringRawBuffer; // rax
  bool result; // al
  int v7; // [rsp+48h] [rbp+10h] BYREF
  HSTRING v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = *(int (__fastcall **)(struct IApplicationView *, PCWSTR, int *))(*(_QWORD *)a1 + 152LL);
  try
  {
    CortanaAumid = (HSTRING *)CortanaExperienceHelpers::TryGetCortanaAumid(&v8);
    v4 = 1;
    StringRawBuffer = WINRT_WindowsGetStringRawBuffer(*CortanaAumid, 0LL);
    if ( v2(a1, StringRawBuffer, &v7) < 0 || !v7 )
      v4 = 0;
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v8);
    result = v4;
  }
  catch ( ... )
  {
    return 0;
  }
  return result;
}
