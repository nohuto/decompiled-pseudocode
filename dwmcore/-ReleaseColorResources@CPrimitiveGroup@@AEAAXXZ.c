void __fastcall CPrimitiveGroup::ReleaseColorResources(CPrimitiveGroup *this)
{
  __int64 v1; // rbp
  char *i; // r14
  __int64 v4; // rbx

  v1 = 0LL;
  for ( i = (char *)this + 200; (unsigned int)v1 < *((_DWORD *)this + 56); v1 = (unsigned int)(v1 + 1) )
  {
    v4 = *(_QWORD *)i;
    CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(*(_QWORD *)i + 8 * v1));
    *(_QWORD *)(v4 + 8 * v1) = 0LL;
  }
  *((_DWORD *)i + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(i, 8LL);
}
