__int64 __fastcall CBspNode::BuildPolygonList(CBspNode *this, struct CVisual *a2)
{
  unsigned int v3; // edi
  char *v4; // rcx
  char **v6; // rsi
  struct CPolygon **i; // rbx
  int v8; // eax
  __int64 v9; // rcx
  char v11; // [rsp+40h] [rbp+8h]

  v3 = 0;
  v4 = (char *)*((_QWORD *)this + 4);
  v6 = (char **)((char *)this + 40);
  if ( (unsigned __int64)((__int64)(*((_QWORD *)this + 5) - (_QWORD)v4) >> 3) > 1 )
    std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(v4, *v6, (*v6 - v4) >> 3, v11);
  for ( i = (struct CPolygon **)*((_QWORD *)this + 4); i != (struct CPolygon **)*v6; ++i )
  {
    v8 = CVisual::AddToBspPolygonList(a2, *i);
    v3 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0xCFu, 0LL);
      return v3;
    }
  }
  return v3;
}
