/*
 * XREFs of ?IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C01FC028
 * Callers:
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C01FC724 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C01FC878 (-OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 */

bool __fastcall CTouchProcessor::IsTouchDevice(CTouchProcessor *this, void *a2)
{
  __int64 v2; // rcx
  bool result; // al
  __int64 v4; // rcx
  int v5; // edx

  v2 = HMValidateHandleNoSecure((int)a2, 19);
  result = 0;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 472);
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 24);
      return (unsigned int)(v5 - 1) <= 2 || v5 == 4;
    }
  }
  return result;
}
