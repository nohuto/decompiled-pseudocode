void __fastcall std::vector<CSM_REALIZATION_INFO>::_Resize<std::_Value_init_tag>(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v4; // rcx

  v2 = *a1;
  v4 = 0xCCCCCCCCCCCCCCCDuLL * ((a1[1] - *a1) >> 3);
  if ( a2 < v4 )
  {
    a1[1] = v2 + 40 * a2;
  }
  else if ( a2 > v4 )
  {
    if ( a2 <= 0xCCCCCCCCCCCCCCCDuLL * ((a1[2] - v2) >> 3) )
      a1[1] = std::_Uninitialized_value_construct_n<std::allocator<CSM_REALIZATION_INFO>>(a1[1], a2 - v4);
    else
      std::vector<CSM_REALIZATION_INFO>::_Resize_reallocate<std::_Value_init_tag>(a1);
  }
}
