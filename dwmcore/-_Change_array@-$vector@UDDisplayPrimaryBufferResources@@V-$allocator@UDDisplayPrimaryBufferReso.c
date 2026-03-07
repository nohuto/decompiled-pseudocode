void __fastcall std::vector<DDisplayPrimaryBufferResources>::_Change_array(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  DDisplayPrimaryBufferResources *v6; // rcx

  v6 = *(DDisplayPrimaryBufferResources **)a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<DDisplayPrimaryBufferResources>>(
      v6,
      *(DDisplayPrimaryBufferResources **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a2 + 32 * a3;
  *(_QWORD *)(a1 + 16) = a2 + 32 * a4;
}
