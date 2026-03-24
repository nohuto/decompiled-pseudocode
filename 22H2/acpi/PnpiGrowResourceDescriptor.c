/*
 * XREFs of PnpiGrowResourceDescriptor @ 0x1C009CDEC
 * Callers:
 *     PnpiUpdateResourceList @ 0x1C009D638 (PnpiUpdateResourceList.c)
 * Callees:
 *     WPP_RECORDER_SF_ddL @ 0x1C0016FF8 (WPP_RECORDER_SF_ddL.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     ACPIInternalGrowBuffer @ 0x1C009BF88 (ACPIInternalGrowBuffer.c)
 */

__int64 __fastcall PnpiGrowResourceDescriptor(const void **a1, __int64 a2, __int64 a3)
{
  PVOID PoolWithTag; // rax
  int v6; // edi
  int v7; // [rsp+20h] [rbp-28h]

  if ( *a1 )
  {
    v6 = 32 * *((_DWORD *)*a1 + 1);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL((__int64)WPP_GLOBAL_Control->DeviceExtension, 4u, a3, 0x1Eu, v7);
    return ACPIInternalGrowBuffer(a1, v6 + 8, v6 + 264);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddL((__int64)WPP_GLOBAL_Control->DeviceExtension, 2u, a3, 0x1Du, v7);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x108uLL, 0x52706341u);
    *a1 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x108uLL);
      *(_WORD *)*a1 = 1;
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
