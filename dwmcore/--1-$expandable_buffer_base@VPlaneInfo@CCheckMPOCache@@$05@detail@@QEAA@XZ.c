/*
 * XREFs of ??1?$expandable_buffer_base@VPlaneInfo@CCheckMPOCache@@$05@detail@@QEAA@XZ @ 0x180116DCC
 * Callers:
 *     ??1?$vector_facade@VPlaneInfo@CCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x180116E44 (--1-$vector_facade@VPlaneInfo@CCheckMPOCache@@V-$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vl.c)
 * Callees:
 *     <none>
 */

void __fastcall detail::expandable_buffer_base<CCheckMPOCache::PlaneInfo,6>::~expandable_buffer_base<CCheckMPOCache::PlaneInfo,6>(
        void **a1)
{
  void *v1; // rdx
  bool v2; // zf

  v1 = *a1;
  v2 = *a1 == a1 + 3;
  *a1 = 0LL;
  if ( v2 )
    v1 = 0LL;
  operator delete(v1);
}
