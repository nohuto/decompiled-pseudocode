char __fastcall std::_Uhash_compare<EffectDescriptionKey,std::hash<EffectDescriptionKey>,std::equal_to<EffectDescriptionKey>>::operator()<EffectDescriptionKey,EffectDescriptionKey>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  char v3; // al
  char v4; // cl

  if ( *(_DWORD *)a2 != *(_DWORD *)a3 )
    return 1;
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 8) + 96LL))(
         *(_QWORD *)(a2 + 8),
         *(_QWORD *)(a3 + 8));
  v4 = 0;
  if ( !v3 )
    return 1;
  return v4;
}
