/*
 * XREFs of PiDmaGuardProcessPreAddDevice @ 0x14079656C
 * Callers:
 *     PipCallDriverAddDevice @ 0x1406C644C (PipCallDriverAddDevice.c)
 * Callees:
 *     PipDmgSaveDeviceDmarPolicy @ 0x1408213C0 (PipDmgSaveDeviceDmarPolicy.c)
 *     PipDmgGetDeviceDmarPolicy @ 0x140842678 (PipDmgGetDeviceDmarPolicy.c)
 *     PiIommuSaveDeviceAtsSettings @ 0x14084B2A8 (PiIommuSaveDeviceAtsSettings.c)
 */

__int64 __fastcall PiDmaGuardProcessPreAddDevice(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  unsigned int DeviceDmarPolicy; // eax

  v2 = *a1;
  result = *(_QWORD *)(*a1 + 720);
  if ( result )
  {
    if ( (*(_BYTE *)(result + 16) & 0x10) != 0 )
    {
      DeviceDmarPolicy = 1;
    }
    else if ( (*(_DWORD *)(v2 + 560) & 0x100000) != 0 )
    {
      DeviceDmarPolicy = 2;
    }
    else
    {
      DeviceDmarPolicy = PipDmgGetDeviceDmarPolicy();
    }
    result = PipDmgSaveDeviceDmarPolicy(v2, a2, DeviceDmarPolicy);
    if ( (int)result >= 0 )
      return PiIommuSaveDeviceAtsSettings(v2, a2);
  }
  return result;
}
