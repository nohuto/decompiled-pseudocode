__int64 __fastcall MiValidateStrongCodeDriverImage(__int64 a1, char a2)
{
  int v3; // r9d
  unsigned int *i; // r8
  unsigned int v5; // edx
  __int64 v6; // r10

  v3 = *(unsigned __int16 *)(a1 + 6);
  if ( !*(_WORD *)(a1 + 6) )
    return 0LL;
  for ( i = (unsigned int *)(a1 + *(unsigned __int16 *)(a1 + 20) + 40LL); ; i += 10 )
  {
    v5 = i[5];
    if ( (v5 & 0x20000000) == 0 )
      goto LABEL_9;
    if ( (v5 & 0x82000000) == 0x80000000 )
      break;
    v6 = *i;
    if ( ((v6 + 4095) & 0xFFFFFFFFFFFFF000uLL) < ((*(i - 2) + 4095LL) & 0xFFFFFFFFFFFFF000uLL) )
    {
      if ( (a2 & 1) != 0 )
      {
        dword_140C65490 = 195;
        return 3221225595LL;
      }
      if ( (_DWORD)v6 || (v5 & 0x2000000) == 0 )
      {
        dword_140C65490 = 196;
        return 3221225595LL;
      }
    }
LABEL_9:
    if ( !--v3 )
      return 0LL;
  }
  dword_140C65490 = 194;
  return 3221225595LL;
}
