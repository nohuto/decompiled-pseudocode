/*
 * XREFs of ?xxxSetSlateAutoRotationState@CLegacyRotationMgr@@AEAAJH@Z @ 0x1C01CE1CC
 * Callers:
 *     ?RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ @ 0x1C01CD8B0 (-RotationLockTogglePressed@CLegacyRotationMgr@@UEAAXXZ.c)
 *     ?xxxSetAutoRotationState@CLegacyRotationMgr@@UEAAJH@Z @ 0x1C01CE000 (-xxxSetAutoRotationState@CLegacyRotationMgr@@UEAAJH@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z @ 0x1C00D12FC (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F027C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

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
    dword_1C0331998 = a2;
    if ( (unsigned int)dword_1C03263F8 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C03263F8, 0x200000000001LL) )
      {
        v9 = 0;
        v7 = &v5;
        v5 = a2;
        v8 = 4;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C03263F8,
          (unsigned __int8 *)dword_1C02EDB49,
          0LL,
          0LL,
          3u,
          &v6);
      }
    }
  }
  return (unsigned int)updated;
}
