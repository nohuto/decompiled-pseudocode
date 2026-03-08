/*
 * XREFs of ?DrvGetRemoteDeviceCount@@YAIXZ @ 0x1C01263F4
 * Callers:
 *     xxxRemoteReconnect @ 0x1C01267DC (xxxRemoteReconnect.c)
 *     DxgkEngGetRemoteDeviceCount @ 0x1C02727A0 (DxgkEngGetRemoteDeviceCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvGetRemoteDeviceCount(Gre::Base *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  bool v3; // zf
  unsigned int v4; // ecx

  v1 = 0;
  v2 = *((_QWORD *)Gre::Base::Globals(a1) + 158);
  while ( v2 )
  {
    v3 = (*(_DWORD *)(v2 + 160) & 0x4000000) == 0;
    v4 = v1 + 1;
    v2 = *(_QWORD *)(v2 + 128);
    if ( v3 )
      v4 = v1;
    v1 = v4;
  }
  return v1;
}
