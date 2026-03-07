bool __fastcall xxxVolumeUpDownComboSupported(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( gPlatformRole != 8 )
    return 0;
  v3 = 0;
  v1 = SGDGetUserSessionState(a1);
  CBaseInput::EnumDevices(
    *(CBaseInput **)(v1 + 16840),
    &v3,
    (bool (*)(struct DEVICEINFO *const, void *))lambda_04b2d39c3388ff6f4197571aab3aef93_::_lambda_invoker_cdecl_);
  return v3 <= 1;
}
