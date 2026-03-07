__int64 __fastcall CWeakResourceReference::Get(struct CResource *a1, struct CWeakResourceReference **a2)
{
  unsigned int v2; // esi
  HANDLE ProcessHeap; // rax
  unsigned int v5; // ecx
  __int64 *v6; // rdi
  struct CResource *v7; // rax
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF
  struct CResource *v10; // [rsp+50h] [rbp+8h] BYREF

  v10 = a1;
  v2 = 0;
  if ( (*((_BYTE *)a1 + 32) & 8) != 0 )
  {
    v6 = *(__int64 **)(*(_QWORD *)std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Try_emplace<CResource const * const &,>(
                                    (__int64)a1,
                                    (__int64)v9,
                                    (__int64 *)&v10)
                     + 24LL);
    if ( v6 )
      (*(void (__fastcall **)(__int64 *))*v6)(v6);
  }
  else
  {
    ProcessHeap = GetProcessHeap();
    v6 = (__int64 *)HeapAlloc(ProcessHeap, 8u, 0x30uLL);
    if ( !v6 )
    {
      v2 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024882, 0x20u, 0LL);
      return v2;
    }
    v7 = v10;
    *((_DWORD *)v6 + 2) = 0;
    v6[3] = 0LL;
    v6[4] = 0LL;
    v6[5] = 0LL;
    *v6 = (__int64)&CWeakResourceReference::`vftable';
    v6[2] = (__int64)v7;
    *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<CResource const *,CWeakResourceReference *,std::_Uhash_compare<CResource const *,std::hash<CResource const *>,std::equal_to<CResource const *>>,std::allocator<std::pair<CResource const * const,CWeakResourceReference *>>,0>>::_Try_emplace<CResource const * const &,>(
                             (__int64)&CWeakResourceReference::`vftable',
                             (__int64)v9,
                             v6 + 2)
              + 24LL) = v6;
    *(_DWORD *)(v6[2] + 32) |= 8u;
    (*(void (__fastcall **)(__int64 *))*v6)(v6);
  }
  *a2 = (struct CWeakResourceReference *)v6;
  return v2;
}
