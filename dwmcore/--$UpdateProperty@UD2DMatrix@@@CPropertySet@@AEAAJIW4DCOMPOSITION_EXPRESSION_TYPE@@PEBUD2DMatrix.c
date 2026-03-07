__int64 __fastcall CPropertySet::UpdateProperty<D2DMatrix>(CResource *this, __int64 a2, int a3)
{
  __int64 v5; // rcx
  unsigned int v6; // edx
  _QWORD *v7; // r10
  __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  _OWORD *v13; // r11
  __int64 v14; // rax
  unsigned int v15; // ecx
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)this + 88) )
    goto LABEL_9;
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v5) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  if ( *(_DWORD *)(*v7 + 8LL * v6) == a3 )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v5) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(v8) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v14 = *(_QWORD *)(v12 + 32);
    v15 = *(_DWORD *)(v11 + 8 * v10 + 4) & 0x1FFFFFFF;
    *(_OWORD *)(v15 + v14) = *v13;
    *(_OWORD *)(v15 + v14 + 16) = v13[1];
    *(_OWORD *)(v15 + v14 + 32) = v13[2];
    *(_OWORD *)(v15 + v14 + 48) = v13[3];
    v16 = CPropertySet::PropertyUpdated<D2DMatrix>(this, v9);
    v18 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x19Eu, 0LL);
    else
      return 0;
  }
  else
  {
LABEL_9:
    v18 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024809, 0x197u, 0LL);
  }
  return v18;
}
