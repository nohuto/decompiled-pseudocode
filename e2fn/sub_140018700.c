unsigned __int64 __fastcall sub_140018700(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 592);
  result = sub_1400187FC() - v1;
  if ( result > *(_QWORD *)(a1 + 608) )
  {
    _mm_lfence();
    sub_140015018(*(_QWORD *)(a1 + 640), *(_DWORD *)(a1 + 600), result);
    result = sub_1400187FC();
    *(_DWORD *)(a1 + 600) = 0;
    *(_QWORD *)(a1 + 592) = result;
  }
  return result;
}
