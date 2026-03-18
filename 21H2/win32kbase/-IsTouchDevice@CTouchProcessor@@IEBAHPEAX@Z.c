/*
 * XREFs of ?IsTouchDevice@CTouchProcessor@@IEBAHPEAX@Z @ 0x1C01CE7EC
 * Callers:
 *     ?OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C01CEE84 (-OnRimDeviceClosed@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C01CEFD8 (-OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0033980 (HMValidateHandleNoSecure.c)
 */

_BOOL8 __fastcall CTouchProcessor::IsTouchDevice(CTouchProcessor *this, void *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  _BOOL8 result; // rax

  v2 = HMValidateHandleNoSecure((int)a2, 19);
  result = 0;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 472);
    if ( v3 )
    {
      if ( (unsigned int)(*(_DWORD *)(v3 + 24) - 1) <= 3 )
        return 1;
    }
  }
  return result;
}
