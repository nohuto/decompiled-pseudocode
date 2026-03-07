_QWORD *__fastcall std::vector<CCursorState::MonitorData>::erase(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 i; // rdi
  std::_Ref_count_base *v8; // rcx
  _QWORD *result; // rax

  v3 = *(_QWORD *)(a1 + 8);
  for ( i = a3 + 144; i != v3; i += 144LL )
    CCursorState::MonitorData::operator=(i - 144, i);
  v8 = *(std::_Ref_count_base **)(*(_QWORD *)(a1 + 8) - 40LL);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  *(_QWORD *)(a1 + 8) -= 144LL;
  result = a2;
  *a2 = a3;
  return result;
}
