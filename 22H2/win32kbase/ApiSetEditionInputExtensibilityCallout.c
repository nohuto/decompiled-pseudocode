/*
 * XREFs of ApiSetEditionInputExtensibilityCallout @ 0x1C020683C
 * Callers:
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C01DC5D0 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall ApiSetEditionInputExtensibilityCallout(__int64 a1, __int64 a2))(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C02965E0;
  if ( qword_1C02965E0 )
  {
    result = (__int64 (*)(void))qword_1C02965E0();
    if ( (int)result >= 0 )
    {
      result = (__int64 (*)(void))qword_1C02965E8;
      if ( qword_1C02965E8 )
        return (__int64 (*)(void))qword_1C02965E8(a1, a2);
    }
  }
  return result;
}
