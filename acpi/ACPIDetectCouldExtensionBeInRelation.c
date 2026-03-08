/*
 * XREFs of ACPIDetectCouldExtensionBeInRelation @ 0x1C00824A0
 * Callers:
 *     ACPIDetectEjectDevices @ 0x1C001A6C0 (ACPIDetectEjectDevices.c)
 *     ACPIDetectFilterMatch @ 0x1C0082650 (ACPIDetectFilterMatch.c)
 *     ACPIDetectPdoMatch @ 0x1C00826E0 (ACPIDetectPdoMatch.c)
 * Callees:
 *     ACPIDeviceHasFirmwareDependencies @ 0x1C00144D4 (ACPIDeviceHasFirmwareDependencies.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     ACPIMatchHardwareAddress @ 0x1C0088CE8 (ACPIMatchHardwareAddress.c)
 *     ACPIMatchHardwareId @ 0x1C0088E00 (ACPIMatchHardwareId.c)
 */

__int64 __fastcall ACPIDetectCouldExtensionBeInRelation(__int64 a1, unsigned int *a2, char a3, char a4, _QWORD *a5)
{
  const signed __int64 *v5; // rdi
  char v8; // r14
  char v9; // r15
  __int64 result; // rax
  __int64 v11; // rcx
  unsigned int i; // edi
  __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-18h] BYREF

  v5 = (const signed __int64 *)(a1 + 8);
  v13 = 0LL;
  v8 = 0;
  *a5 = 0LL;
  v9 = 0;
  String2 = 0LL;
  if ( a3 && !_bittest64(v5, 0x2Cu) || a4 && !_bittest64(v5, 0x2Du) )
    return 3221225524LL;
  if ( a2 && *a2 )
  {
    if ( (*v5 & 0x2000100000000000LL) != 0 )
    {
      v8 = 1;
      ACPIGet(a1, 0x5244415Fu, -1878785022, 0LL, 0, 0LL, 0LL, (__int64)&v13, 0LL);
    }
    if ( (*v5 & 0xA00000000000LL) != 0 && !ACPIDeviceHasFirmwareDependencies(a1) )
    {
      result = ACPIGet(v11, 0x4449485Fu, 268960278, 0LL, 0, 0LL, 0LL, (__int64)&String2.Buffer, (__int64)&String2);
      if ( (int)result < 0 )
        return result;
      v9 = 1;
      String2.MaximumLength = String2.Length;
    }
    for ( i = 0; i < *a2; ++i )
    {
      if ( !v9 || (int)ACPIMatchHardwareId(*(PDEVICE_OBJECT *)&a2[2 * i + 2], &String2) >= 0 )
      {
        if ( v8 )
          ACPIMatchHardwareAddress(*(PDEVICE_OBJECT *)&a2[2 * i + 2]);
      }
    }
  }
  return 0LL;
}
