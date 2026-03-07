__int64 __fastcall CPropertySet::UpdateProperty<D2DVector3>(CResource *this, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rcx
  int v7; // r8d
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebx
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
    v13 = *(_QWORD *)(v10 + 32);
    v14 = *(_DWORD *)(v11 + 8 * v12 + 4) & 0x1FFFFFFF;
    *(_QWORD *)(v14 + v13) = *(_QWORD *)a4;
    *(_DWORD *)(v14 + v13 + 8) = *(_DWORD *)(a4 + 8);
    v15 = CPropertySet::PropertyUpdated<D2DVector3>(this, v12);
    v17 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x19Eu, 0LL);
    else
      return 0;
  }
  else
  {
LABEL_9:
    v17 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v6, 0LL, 0, -2147024809, 0x197u, 0LL);
  }
  return v17;
}
