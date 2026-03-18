/*
 * XREFs of DpiLdaPreStartChain @ 0x1C0066514
 * Callers:
 *     DpiLdaStartAdapterInChain @ 0x1C03A8934 (DpiLdaStartAdapterInChain.c)
 * Callees:
 *     DpiFdoCreateSysMmAdapter @ 0x1C0218C24 (DpiFdoCreateSysMmAdapter.c)
 */

__int64 __fastcall DpiLdaPreStartChain(struct _DEVICE_OBJECT *a1)
{
  int SysMmAdapter; // eax
  unsigned int v2; // ebx

  if ( *((_QWORD *)a1->DeviceExtension + 711) )
    return 0LL;
  SysMmAdapter = DpiFdoCreateSysMmAdapter(a1);
  v2 = SysMmAdapter;
  if ( SysMmAdapter >= 0 )
    return 0LL;
  WdLogSingleEntry1(2LL, SysMmAdapter);
  return v2;
}
