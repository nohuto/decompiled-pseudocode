/*
 * XREFs of ?xxxSetSensorPresence@CLegacyRotationMgr@@UEAAXH@Z @ 0x1C01CE0F0
 * Callers:
 *     <none>
 * Callees:
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z @ 0x1C00D12FC (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F027C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall CLegacyRotationMgr::xxxSetSensorPresence(CLegacyRotationMgr *this, int a2)
{
  int v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  if ( (int)CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
              this,
              a2,
              L"SensorPresent",
              0,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation") >= 0 )
  {
    dword_1C033196C = a2;
    if ( !dword_1C033198C )
      dword_1C033198C = a2 != 0;
    if ( (unsigned int)dword_1C03263F8 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C03263F8, 0x400000000001LL) )
      {
        v7 = 0;
        v5 = &v3;
        v3 = a2;
        v6 = 4;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C03263F8,
          (unsigned __int8 *)dword_1C02EDC86,
          0LL,
          0LL,
          3u,
          &v4);
      }
    }
  }
}
