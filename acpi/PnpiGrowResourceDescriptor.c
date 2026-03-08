/*
 * XREFs of PnpiGrowResourceDescriptor @ 0x1C0091DB0
 * Callers:
 *     PnpiUpdateResourceList @ 0x1C0092328 (PnpiUpdateResourceList.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1C003C6E8 (WPP_RECORDER_SF_ddL.c)
 *     ACPIInternalGrowBuffer @ 0x1C0087FDC (ACPIInternalGrowBuffer.c)
 */

__int64 __fastcall PnpiGrowResourceDescriptor(const void **a1, __int64 a2, int a3)
{
  _WORD *Pool2; // rax
  int v6; // edi

  if ( *a1 )
  {
    v6 = 32 * *((_DWORD *)*a1 + 1);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(WPP_GLOBAL_Control->DeviceExtension, 4, a3, 30);
    return ACPIInternalGrowBuffer(a1, v6 + 8, v6 + 264);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL(WPP_GLOBAL_Control->DeviceExtension, 2, a3, 29);
    Pool2 = (_WORD *)ExAllocatePool2(256LL, 264LL, 1383097153LL);
    *a1 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 1;
      *((_WORD *)*a1 + 1) = 1;
      *((_DWORD *)*a1 + 1) = 0;
      return 0LL;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
