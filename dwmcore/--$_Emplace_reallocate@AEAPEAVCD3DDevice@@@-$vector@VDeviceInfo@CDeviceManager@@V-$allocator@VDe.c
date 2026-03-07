unsigned __int64 __fastcall std::vector<CDeviceManager::DeviceInfo>::_Emplace_reallocate<CD3DDevice * &>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = *a3;
  v15 = v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL);
  v16 = v13;
  *(_BYTE *)(v15 + 8) = 0;
  *(_QWORD *)v15 = v14;
  if ( v14 )
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v14 + 8));
  v17 = a1[1];
  v18 = v16;
  v19 = *a1;
  if ( a2 != v17 )
  {
    std::_Uninitialized_move<CDeviceManager::DeviceInfo *>(v19, a2, v16);
    v17 = a1[1];
    v18 = v15 + 16;
    v19 = a2;
  }
  std::_Uninitialized_move<CDeviceManager::DeviceInfo *>(v19, v17, v18);
  std::vector<CDeviceManager::DeviceInfo>::_Change_array(a1, v16, v9, v3);
  return v15;
}
