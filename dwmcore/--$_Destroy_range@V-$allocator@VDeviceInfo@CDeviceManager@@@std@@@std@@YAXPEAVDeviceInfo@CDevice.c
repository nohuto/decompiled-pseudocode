__int64 __fastcall std::_Destroy_range<std::allocator<CDeviceManager::DeviceInfo>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = ReleaseInterface<CD3DDevice>(v3);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
