/*
 * XREFs of HalpKdReleaseDebuggingDevice @ 0x140AB0A00
 * Callers:
 *     <none>
 * Callees:
 *     HalpFindDevice @ 0x140AAF410 (HalpFindDevice.c)
 */

__int64 __fastcall HalpKdReleaseDebuggingDevice(__int64 a1)
{
  __int64 *Device; // rax
  __int64 v3; // rdx
  __int64 **v4; // rcx

  if ( *(_DWORD *)(a1 + 220) != 3 )
  {
    Device = HalpFindDevice(a1);
    if ( Device )
    {
      v3 = *Device;
      if ( *(__int64 **)(*Device + 8) != Device || (v4 = (__int64 **)Device[1], *v4 != Device) )
        __fastfail(3u);
      *v4 = (__int64 *)v3;
      *(_QWORD *)(v3 + 8) = v4;
      --DevicesList;
    }
  }
  *(_BYTE *)(a1 + 18) = 0;
  return 0LL;
}
