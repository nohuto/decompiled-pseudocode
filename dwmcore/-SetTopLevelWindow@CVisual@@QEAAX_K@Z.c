void __fastcall CVisual::SetTopLevelWindow(CVisual *this, __int64 a2)
{
  CSparseStorage *v2; // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (CVisual *)((char *)this + 224);
  if ( a2 == `CVisual::SetRelativeLayoutSizeInternal'::`2'::sc_defaultValue )
    *(_DWORD *)(*(_QWORD *)v2 + 4LL) &= ~0x80000000;
  else
    CSparseStorage::SetData(v2, 1u, 8u, &v3);
}
