/*
 * XREFs of PopDeviceIdlePolicySettingCallback @ 0x14085FD40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDeviceIdlePolicySettingCallback(_QWORD *a1, int *a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // ecx

  v3 = *(_QWORD *)&GUID_DEVICE_IDLE_POLICY.Data1 - *a1;
  if ( *(_QWORD *)&GUID_DEVICE_IDLE_POLICY.Data1 == *a1 )
    v3 = *(_QWORD *)GUID_DEVICE_IDLE_POLICY.Data4 - a1[1];
  v4 = 0;
  if ( !v3 && a3 == 4 && a2 && (unsigned int)*a2 <= 1 )
    dword_140C3D4A8 = *a2;
  else
    return (unsigned int)-1073741811;
  return v4;
}
