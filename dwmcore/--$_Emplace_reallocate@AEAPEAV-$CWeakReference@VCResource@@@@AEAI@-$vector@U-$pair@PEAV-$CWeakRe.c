/*
 * XREFs of ??$_Emplace_reallocate@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@?$vector@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@V?$allocator@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@@2@@std@@QEAAPEAU?$pair@PEAV?$CWeakReference@VCResource@@@@I@1@QEAU21@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@Z @ 0x18023B76C
 * Callers:
 *     ??$emplace_back@AEAPEAV?$CWeakReference@VCResource@@@@AEAI@?$vector@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@V?$allocator@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@@2@@std@@QEAA?A_TAEAPEAV?$CWeakReference@VCResource@@@@AEAI@Z @ 0x18023B8B0 (--$emplace_back@AEAPEAV-$CWeakReference@VCResource@@@@AEAI@-$vector@U-$pair@PEAV-$CWeakReference.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18004269C (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180085FF0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@V?$allocator@U?$pair@PEAV?$CWeakReference@VCResource@@@@I@std@@@2@@std@@AEAAXQEAU?$pair@PEAV?$CWeakReference@VCResource@@@@I@2@_K1@Z @ 0x18023C3F4 (-_Change_array@-$vector@U-$pair@PEAV-$CWeakReference@VCResource@@@@I@std@@V-$allocator@U-$pair@P.c)
 */

char *__fastcall std::vector<std::pair<CWeakReference<CResource> *,unsigned int>>::_Emplace_reallocate<CWeakReference<CResource> * &,unsigned int &>(
        __int128 **a1,
        char *a2,
        _QWORD *a3,
        _DWORD *a4)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r14
  __int64 v7; // rax
  __int128 *v9; // rbx
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  SIZE_T size_of; // rax
  _OWORD *v15; // rax
  char *v16; // r14
  _OWORD *v17; // r10
  __int128 *v18; // rdx
  __int128 *v19; // rcx
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  __int128 *v22; // rdx
  _OWORD *v23; // rcx
  __int128 v24; // xmm0

  v4 = 0xFFFFFFFFFFFFFFFLL;
  v5 = a2 - (char *)*a1;
  v7 = a1[1] - *a1;
  v9 = (__int128 *)a2;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v11 = v7 + 1;
  v12 = a1[2] - *a1;
  v13 = v12 >> 1;
  if ( v12 <= 0xFFFFFFFFFFFFFFFLL - (v12 >> 1) )
  {
    v4 = v13 + v12;
    if ( v13 + v12 < v11 )
      v4 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v4);
  v15 = (_OWORD *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v16 = (char *)v15 + (v5 & 0xFFFFFFFFFFFFFFF0uLL);
  v17 = v15;
  *(_QWORD *)v16 = *a3;
  *((_DWORD *)v16 + 2) = *a4;
  v18 = a1[1];
  v19 = *a1;
  if ( v9 == v18 )
  {
    while ( v19 != v18 )
    {
      v20 = *v19++;
      *v15++ = v20;
    }
  }
  else
  {
    while ( v19 != v9 )
    {
      v21 = *v19++;
      *v15++ = v21;
    }
    v22 = a1[1];
    if ( v9 != v22 )
    {
      v23 = v16 + 16;
      do
      {
        v24 = *v9++;
        *v23++ = v24;
      }
      while ( v9 != v22 );
    }
  }
  std::vector<std::pair<CWeakReference<CResource> *,unsigned int>>::_Change_array(a1, v17, v11, v4);
  return v16;
}
