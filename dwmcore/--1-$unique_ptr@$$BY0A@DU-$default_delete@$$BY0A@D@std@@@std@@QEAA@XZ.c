/*
 * XREFs of ??1?$unique_ptr@$$BY0A@DU?$default_delete@$$BY0A@D@std@@@std@@QEAA@XZ @ 0x180116DF0
 * Callers:
 *     ?ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBGPEAPEAUGpuId@1@PEAI@Z @ 0x180101A24 (-ParseGpuIdListKey@CCommonRegistryData@@CA_NPEBGPEAPEAUGpuId@1@PEAI@Z.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180117154 (-ensure_extra_capacity@-$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 */

void __fastcall std::unique_ptr<char [0]>::~unique_ptr<char [0]>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
