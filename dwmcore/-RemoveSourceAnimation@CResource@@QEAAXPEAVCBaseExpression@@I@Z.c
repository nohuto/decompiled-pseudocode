void __fastcall CResource::RemoveSourceAnimation(CResource *this, struct CBaseExpression *a2, unsigned int a3)
{
  __int64 Element; // rax
  _DWORD *v5; // rbx
  struct CBaseExpression *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  Element = CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::FindElement(*((_QWORD *)this + 5), a3);
  v5 = (_DWORD *)Element;
  if ( Element )
  {
    DynArray<CBaseExpression *,0>::Remove(Element + 8, &v6);
    if ( !v5[8] )
      CGenericTableMap<unsigned int,CAnimationSourceMapEntry>::RemoveElement(*((PRTL_GENERIC_TABLE *)this + 5), v5);
  }
}
