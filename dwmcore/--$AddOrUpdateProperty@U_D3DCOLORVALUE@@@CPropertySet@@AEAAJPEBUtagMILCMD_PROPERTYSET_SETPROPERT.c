__int64 __fastcall CPropertySet::AddOrUpdateProperty<_D3DCOLORVALUE>(CResource *a1, __int64 a2, __int64 a3)
{
  int updated; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  _OWORD *v6; // r8
  unsigned int *v7; // r10
  CResource *v8; // r11
  __int64 v9; // rcx
  unsigned int v11; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(a2 + 20) )
  {
    updated = CPropertySet::AddProperty<_D3DCOLORVALUE>(a1, *(_DWORD *)(a2 + 8), a3);
    v5 = updated;
    if ( updated < 0 )
    {
      v11 = 326;
LABEL_10:
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, updated, v11, 0LL);
      return v5;
    }
    return 0;
  }
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)a1 + 88) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  v9 = v7[2];
  if ( v7[3] == (*(_DWORD *)(*((_QWORD *)v8 + 11) + 8 * v9 + 4) & 0x1FFFFFFF) )
  {
    updated = CPropertySet::UpdateProperty<_D3DCOLORVALUE>(v8, v7[2], v7[4], v6);
    v5 = updated;
    if ( updated < 0 )
    {
      v11 = 336;
      goto LABEL_10;
    }
    return 0;
  }
  v5 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2003303421, 0x14Du, 0LL);
  return v5;
}
