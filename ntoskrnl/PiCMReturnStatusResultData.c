/*
 * XREFs of PiCMReturnStatusResultData @ 0x1406C3F28
 * Callers:
 *     PiCMGetDeviceStatus @ 0x1406C3FD8 (PiCMGetDeviceStatus.c)
 * Callees:
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 */

__int64 __fastcall PiCMReturnStatusResultData(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        _DWORD *Address,
        SIZE_T Length,
        _DWORD *a8)
{
  unsigned int v12; // edi

  *a8 = 0;
  v12 = 0;
  if ( (unsigned int)Length >= 0x14 && a5 == 20 )
  {
    ProbeForWrite(Address, (unsigned int)Length, 4u);
    *Address = 20;
    Address[1] = a1;
    Address[2] = a2;
    Address[3] = a3;
    Address[4] = a4;
    *a8 = 20;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v12;
}
