/*
 * XREFs of ??1CWeakResourceReference@@MEAA@XZ @ 0x1800998A0
 * Callers:
 *     ??_ECWeakResourceReference@@MEAAPEAXI@Z @ 0x180099840 (--_ECWeakResourceReference@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?erase@?$_Hash@V?$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V?$_Uhash_compare@PEBVCResource@@U?$hash@PEBVCResource@@@std@@U?$equal_to@PEBVCResource@@@3@@std@@V?$allocator@U?$pair@QEBVCResource@@PEAVCWeakResourceReference@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBQEBVCResource@@@Z @ 0x180025108 (-erase@-$_Hash@V-$_Umap_traits@PEBVCResource@@PEAVCWeakResourceReference@@V-$_Uhash_compare@PEBV.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CWeakResourceReference::~CWeakResourceReference(CWeakResourceReference *this)
{
  char *v1; // rdi
  bool v3; // zf
  __int64 v4; // rcx

  v1 = (char *)this + 16;
  v3 = *((_QWORD *)this + 2) == 0LL;
  *(_QWORD *)this = &CWeakResourceReference::`vftable';
  if ( !v3 )
  {
    std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::erase(
      (__int64)this,
      (__int64)this + 16);
    *(_DWORD *)(*(_QWORD *)v1 + 32LL) &= ~8u;
  }
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 5) - v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 3) = 0LL;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 5) = 0LL;
  }
}
