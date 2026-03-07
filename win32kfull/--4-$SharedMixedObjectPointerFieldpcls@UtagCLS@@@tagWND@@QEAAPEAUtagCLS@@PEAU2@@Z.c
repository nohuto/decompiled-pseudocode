__int64 __fastcall tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = *(a1 - 12);
  if ( a2 )
    *(_QWORD *)(v2 + 128) = *(_QWORD *)(a2 + 16);
  else
    *(_QWORD *)(v2 + 128) = 0LL;
  *a1 = a2;
  return a2;
}
