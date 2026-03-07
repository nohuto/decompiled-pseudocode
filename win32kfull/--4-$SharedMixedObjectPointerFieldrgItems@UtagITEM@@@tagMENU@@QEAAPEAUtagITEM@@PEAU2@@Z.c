__int64 __fastcall tagMENU::SharedMixedObjectPointerFieldrgItems<tagITEM>::operator=(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(a1 - 6);
  if ( a2 )
    *(_QWORD *)(v2 + 32) = *(_QWORD *)(a2 + 8);
  else
    *(_QWORD *)(v2 + 32) = 0LL;
  *a1 = a2;
  return a2;
}
