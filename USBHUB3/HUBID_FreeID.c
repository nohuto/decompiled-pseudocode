/*
 * XREFs of HUBID_FreeID @ 0x1C001DB90
 * Callers:
 *     HUBPDO_ReturnDeviceConfigInfo @ 0x1C0016420 (HUBPDO_ReturnDeviceConfigInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall HUBID_FreeID(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x64334855u);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_DWORD *)(a1 + 4) = 0;
  }
}
