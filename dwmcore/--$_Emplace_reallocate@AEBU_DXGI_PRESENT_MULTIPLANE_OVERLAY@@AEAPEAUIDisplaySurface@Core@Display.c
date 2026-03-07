CDDisplayCachedScanout::Plane *__fastcall std::vector<CDDisplayCachedScanout::Plane>::_Emplace_reallocate<_DXGI_PRESENT_MULTIPLANE_OVERLAY const &,Windows::Devices::Display::Core::IDisplaySurface * &>(
        __int64 *a1,
        __int64 a2,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a3,
        struct Windows::Devices::Display::Core::IDisplaySurface **a4)
{
  unsigned __int64 v5; // rbx
  __int64 v9; // r14
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbp
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  SIZE_T size_of; // rax
  __int64 v15; // rax
  CDDisplayCachedScanout::Plane *v16; // r14
  __int64 v17; // rdi
  __int64 v18; // rdx
  char *v19; // r8
  __int64 v20; // rcx

  v5 = 0x333333333333333LL;
  v9 = (a2 - *a1) / 80;
  v10 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 4);
  if ( v10 == 0x333333333333333LL )
    std::_Xlength_error("vector too long");
  v11 = v10 + 1;
  v12 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - *a1) >> 4);
  v13 = v12 >> 1;
  if ( v12 <= 0x333333333333333LL - (v12 >> 1) )
  {
    v5 = v13 + v12;
    if ( v13 + v12 < v11 )
      v5 = v11;
  }
  size_of = std::_Get_size_of_n<80>(v5);
  v15 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v16 = (CDDisplayCachedScanout::Plane *)(v15 + 80 * v9);
  v17 = v15;
  CDDisplayCachedScanout::Plane::Plane(v16, a3, *a4);
  v18 = a1[1];
  v19 = (char *)v17;
  v20 = *a1;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<CDDisplayCachedScanout::Plane *>(v20, a2, v17);
    v18 = a1[1];
    v19 = (char *)v16 + 80;
    v20 = a2;
  }
  std::_Uninitialized_move<CDDisplayCachedScanout::Plane *>(v20, v18, v19);
  std::vector<CDDisplayCachedScanout::Plane>::_Change_array(a1, v17, v11, v5);
  return v16;
}
