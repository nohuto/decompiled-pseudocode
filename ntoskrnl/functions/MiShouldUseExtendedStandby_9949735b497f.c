__int64 __fastcall MiShouldUseExtendedStandby(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v5; // rcx
  unsigned int v6; // eax

  if ( *(_QWORD *)(a3 + 8) != -1LL
    && (*(_BYTE *)(a2 + 34) & 0xC0) == 0x40
    && !(unsigned int)MiGetPagePrivilege(a2, 1, 0LL) )
  {
    v5 = *(_QWORD *)(a2 + 16);
    if ( (v5 & 0x400) != 0 )
      return 1LL;
    if ( (v5 & 4) != 0 && (unsigned __int16)v5 >> 12 != *(_DWORD *)(a1 + 1188) )
    {
      v6 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 8LL * ((unsigned __int16)v5 >> 12) + 17056) + 204LL);
      LOWORD(v6) = ~(_WORD)v6;
      return (v6 >> 11) & 1;
    }
  }
  return 0LL;
}
