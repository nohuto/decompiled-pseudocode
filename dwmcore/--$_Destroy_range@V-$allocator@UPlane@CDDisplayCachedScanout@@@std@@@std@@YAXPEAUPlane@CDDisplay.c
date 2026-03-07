__int64 __fastcall std::_Destroy_range<std::allocator<CDDisplayCachedScanout::Plane>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(_QWORD *)(v3 + 8);
      if ( v4 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      v3 += 80LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
