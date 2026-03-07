__int64 __fastcall sub_140071C04(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 232);
  if ( v4 )
  {
    sub_140071B78(v4, a1);
    *(_QWORD *)(a1 + 232) = 0LL;
  }
  result = sub_140071BD4(a2, a1);
  *(_QWORD *)(a1 + 232) = a2;
  return result;
}
