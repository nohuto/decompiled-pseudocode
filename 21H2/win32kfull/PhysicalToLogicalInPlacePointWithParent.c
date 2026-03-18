/*
 * XREFs of PhysicalToLogicalInPlacePointWithParent @ 0x1C016B98A
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0058FB0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01EC438 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C022D444 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1C0069908 (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     FixedPointSubPixel @ 0x1C01DF7EC (FixedPointSubPixel.c)
 */

__int64 __fastcall PhysicalToLogicalInPlacePointWithParent(const struct tagWND *a1, int *a2, int *a3)
{
  float v3; // xmm0_4
  __int64 result; // rax
  __int64 v7; // rdi
  float *v8; // rdx
  float v9; // xmm3_4
  float v10; // xmm2_4
  __int64 v11; // rdx
  float v12; // xmm0_4
  __int64 v13; // rdx
  float v14; // xmm1_4

  result = (__int64)GetTopLevelOrDpiBoundaryWindow(a1);
  v7 = result;
  if ( result )
  {
    result = IsWindowDesktopComposed(result);
    if ( (_DWORD)result )
    {
      v8 = *(float **)(v7 + 216);
      if ( v8 )
      {
        v9 = 1.0 / *v8;
        v10 = 1.0 / v8[5];
        if ( a3 )
        {
          FixedPointSubPixel(*a3);
          v12 = (float)((float)(v3 + (float)*a2) - *(float *)(v11 + 48)) * v9;
          *a2 = (int)v12;
          FixedPointSubPixel(a3[1]);
          result = (unsigned int)(int)(float)((float)((float)(v12 + (float)a2[1]) - *(float *)(v13 + 52)) * v10);
        }
        else
        {
          v14 = (float)a2[1];
          *a2 = (int)(float)((float)((float)*a2 - v8[12]) * v9);
          result = (unsigned int)(int)(float)((float)(v14 - v8[13]) * v10);
        }
        a2[1] = result;
      }
    }
  }
  return result;
}
