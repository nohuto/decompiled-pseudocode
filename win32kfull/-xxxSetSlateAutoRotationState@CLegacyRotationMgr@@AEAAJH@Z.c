__int64 __fastcall CLegacyRotationMgr::xxxSetSlateAutoRotationState(CLegacyRotationMgr *this, int a2)
{
  int updated; // edi
  int v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  updated = CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
              this,
              a2,
              L"SlateEnable",
              0,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( updated >= 0 )
  {
    dword_1C035D608 = a2;
    if ( (unsigned int)dword_1C0357098 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C0357098, 0x200000000001LL) )
      {
        v9 = 0;
        v7 = &v5;
        v5 = a2;
        v8 = 4;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C0357098,
          (unsigned __int8 *)dword_1C031B449,
          0LL,
          0LL,
          3u,
          &v6);
      }
    }
  }
  return (unsigned int)updated;
}
