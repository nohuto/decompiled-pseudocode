char __fastcall PopPluginInitializeSocSubsystemStaticInfo(__int64 a1, __int64 a2)
{
  const wchar_t **v3; // rdi
  char v4; // si
  __int128 v6; // [rsp+20h] [rbp-28h]
  __int128 v7; // [rsp+30h] [rbp-18h]

  v6 = *(_OWORD *)(a2 + 16);
  v7 = *(_OWORD *)(a2 + 32);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(PopFxProcessorPlugin + 96))(37LL) )
    PopFxBugCheck(0x605uLL, 0x25uLL, PopFxProcessorPlugin, 0LL);
  if ( !PopFxValidateReturnedUnicodeString((unsigned __int16 *)(a2 + 16), *((__int64 *)&v6 + 1), WORD1(v6)) )
    PopFxBugCheck(0x706uLL, 0x25uLL, 0x504E616DuLL, a2 + 24);
  v3 = (const wchar_t **)(a2 + 40);
  v4 = PopFxValidateReturnedUnicodeString((unsigned __int16 *)(a2 + 32), *((__int64 *)&v7 + 1), WORD1(v7));
  if ( !v4 )
    PopFxBugCheck(0x706uLL, 0x25uLL, 0x534E616DuLL, (ULONG_PTR)v3);
  if ( !wcsncmp(*v3, *(const wchar_t **)(a2 + 24), 0x40uLL) )
    PopFxBugCheck(0x706uLL, 0x25uLL, 0x4E616D65uLL, (ULONG_PTR)v3);
  if ( *(_DWORD *)(a2 + 48) > 0x3E8u )
    PopFxBugCheck(0x706uLL, 0x25uLL, 0x4D436F75uLL, a2 + 48);
  return v4;
}
