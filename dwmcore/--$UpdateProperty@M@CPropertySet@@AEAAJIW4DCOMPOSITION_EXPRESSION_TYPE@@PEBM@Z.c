__int64 __fastcall CPropertySet::UpdateProperty<float>(CResource *this, __int64 a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v6; // rcx
  int v7; // r8d
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r10
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)this + 88) )
    goto LABEL_9;
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  if ( *(_DWORD *)(*v6 + 8 * v8) == v7 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v6) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v9) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    *(_DWORD *)((*(_DWORD *)(v11 + 8 * v12 + 4) & 0x1FFFFFFF) + *(_QWORD *)(v10 + 32)) = *a4;
    v13 = CPropertySet::PropertyUpdated<float>(this, v12, 1, (__int64)a4);
    v15 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x19Eu, 0LL);
    else
      return 0;
  }
  else
  {
LABEL_9:
    v15 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, -2147024809, 0x197u, 0LL);
  }
  return v15;
}
