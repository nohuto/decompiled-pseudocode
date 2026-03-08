/*
 * XREFs of HalFreeCommonBufferDmarThin @ 0x140511580
 * Callers:
 *     <none>
 * Callees:
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     HalpPopCommonBufferEntry @ 0x14050DB00 (HalpPopCommonBufferEntry.c)
 *     HalpDmaDereferenceDomainObject @ 0x140510338 (HalpDmaDereferenceDomainObject.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall HalFreeCommonBufferDmarThin(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  __int64 *v4; // r14
  __int64 v6; // r12
  unsigned __int64 result; // rax
  void *v9; // rbp
  struct _MDL *v10; // rsi
  char v11; // di

  v4 = *(__int64 **)(a1 + 512);
  v6 = a2;
  result = HalpPopCommonBufferEntry((unsigned __int64)a4, (__int64)v4);
  v9 = (void *)result;
  if ( result )
  {
    v10 = *(struct _MDL **)(result + 40);
    v11 = *(_BYTE *)(result + 56);
    (*(void (__fastcall **)(__int64, __int64, unsigned __int64))(HalpDmaIommuInterfaceFcnTable + 64))(
      v4[5],
      a3,
      (unsigned __int64)(v6 + 4095) >> 12);
    if ( v11 )
    {
      MmUnmapLockedPages(a4, v10);
      MiFreePagesFromMdl((ULONG_PTR)v10, 0);
      ExFreePoolWithTag(v10, 0);
    }
    ExFreePoolWithTag(v9, 0);
    return HalpDmaDereferenceDomainObject(v4);
  }
  return result;
}
