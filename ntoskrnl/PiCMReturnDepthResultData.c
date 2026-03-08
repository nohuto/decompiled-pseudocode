/*
 * XREFs of PiCMReturnDepthResultData @ 0x140967910
 * Callers:
 *     PiCMGetDeviceDepth @ 0x140966FB0 (PiCMGetDeviceDepth.c)
 * Callees:
 *     ProbeForWrite @ 0x1407C4030 (ProbeForWrite.c)
 */

__int64 __fastcall PiCMReturnDepthResultData(int a1, int a2, int a3, _DWORD *a4, unsigned int Length, _DWORD *a6)
{
  unsigned int v9; // ebx

  *a6 = 0;
  v9 = 0;
  if ( Length >= 0xC && a3 == 12 )
  {
    ProbeForWrite(a4, Length, 4u);
    *a4 = 12;
    a4[1] = a1;
    a4[2] = a2;
    *a6 = 12;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v9;
}
