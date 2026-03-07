void __fastcall CComposition::RestoreCursors(CComposition *this)
{
  int v1; // ebx
  _QWORD *v2; // rdi
  __int64 v3; // rbp
  CExcludeVisualReference *v4; // rsi
  unsigned int v5; // edx

  v1 = *((_DWORD *)this + 248);
  if ( v1 > 0 )
  {
    v2 = (_QWORD *)((char *)this + 968);
    do
    {
      v3 = (unsigned int)(v1 - 1);
      v4 = *(CExcludeVisualReference **)(*v2 + 8 * v3);
      (*(void (__fastcall **)(CExcludeVisualReference *))(*(_QWORD *)v4 + 8LL))(v4);
      if ( !CExcludeVisualReference::GetVisual(v4) )
      {
        DynArray<CExcludeVisualReference *,0>::RemoveAt(v2, (unsigned int)v3);
        CExcludeVisualReference::`scalar deleting destructor'(v4, v5);
      }
      --v1;
    }
    while ( v1 > 0 );
  }
}
