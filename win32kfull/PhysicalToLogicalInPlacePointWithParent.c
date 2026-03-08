/*
 * XREFs of PhysicalToLogicalInPlacePointWithParent @ 0x1C0145150
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C75BC (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z @ 0x1C02166D0 (-AdjustMouseCoordinates@@YAXPEAUtagWND@@PEA_J@Z.c)
 * Callees:
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1C00A366C (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 *     FixedPointSubPixel @ 0x1C014511E (FixedPointSubPixel.c)
 */

__int64 __fastcall PhysicalToLogicalInPlacePointWithParent(const struct tagWND *a1, int *a2, int *a3)
{
  __int64 result; // rax
  __int64 v6; // rdi
  float *v7; // rdx
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm0_4
  __int64 v11; // rdx
  float v12; // xmm0_4
  __int64 v13; // rdx
  float v14; // xmm1_4

  result = (__int64)GetTopLevelOrDpiBoundaryWindow(a1);
  v6 = result;
  if ( result )
  {
    result = IsWindowDesktopComposed(result);
    if ( (_DWORD)result )
    {
      v7 = *(float **)(v6 + 216);
      if ( v7 )
      {
        v8 = 1.0 / *v7;
        v9 = 1.0 / v7[5];
        if ( a3 )
        {
          v10 = FixedPointSubPixel(*a3);
          *a2 = (int)(float)((float)((float)(v10 + (float)*a2) - *(float *)(v11 + 48)) * v8);
          v12 = FixedPointSubPixel(a3[1]);
          result = (unsigned int)(int)(float)((float)((float)(v12 + (float)a2[1]) - *(float *)(v13 + 52)) * v9);
        }
        else
        {
          v14 = (float)a2[1];
          *a2 = (int)(float)((float)((float)*a2 - v7[12]) * v8);
          result = (unsigned int)(int)(float)((float)(v14 - v7[13]) * v9);
        }
        a2[1] = result;
      }
    }
  }
  return result;
}
