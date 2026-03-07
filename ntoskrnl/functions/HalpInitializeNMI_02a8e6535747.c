__int64 __fastcall HalpInitializeNMI(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a2 + 8) == 3 )
  {
    dword_140C6A5A4 = 1;
    HalpNmiInfo = *(_DWORD *)(a2 + 28);
    dword_140C6A5A8 = 0;
  }
  return 0LL;
}
