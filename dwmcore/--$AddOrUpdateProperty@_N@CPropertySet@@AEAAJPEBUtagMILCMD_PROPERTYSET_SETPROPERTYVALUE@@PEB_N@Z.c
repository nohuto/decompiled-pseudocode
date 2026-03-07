__int64 __fastcall CPropertySet::AddOrUpdateProperty<bool>(CResource *a1, __int64 a2, __int64 a3)
{
  int updated; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  __int64 v6; // r10
  CResource *v7; // r11
  __int64 v8; // rcx
  unsigned int v10; // [rsp+20h] [rbp-18h]
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( *(_BYTE *)(a2 + 20) )
  {
    updated = CPropertySet::AddProperty<bool>(a1, *(_DWORD *)(a2 + 8), a3);
    v5 = updated;
    if ( updated < 0 )
    {
      v10 = 326;
LABEL_10:
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, updated, v10, 0LL);
      return v5;
    }
    return 0;
  }
  if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId((char *)a1 + 88) )
    ModuleFailFastForHRESULT(2147942487LL, retaddr);
  v8 = *(unsigned int *)(v6 + 8);
  if ( *(_DWORD *)(v6 + 12) == (*(_DWORD *)(*((_QWORD *)v7 + 11) + 8 * v8 + 4) & 0x1FFFFFFF) )
  {
    updated = CPropertySet::UpdateProperty<bool>(v7);
    v5 = updated;
    if ( updated < 0 )
    {
      v10 = 336;
      goto LABEL_10;
    }
    return 0;
  }
  v5 = -2003303421;
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0x14Du, 0LL);
  return v5;
}
