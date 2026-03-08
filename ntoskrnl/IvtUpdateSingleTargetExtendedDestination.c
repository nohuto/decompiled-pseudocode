/*
 * XREFs of IvtUpdateSingleTargetExtendedDestination @ 0x14052BBEC
 * Callers:
 *     IvtUpdateExtendedDestination @ 0x14052B6EC (IvtUpdateExtendedDestination.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtUpdateSingleTargetExtendedDestination(
        unsigned int a1,
        char a2,
        _DWORD *a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v5; // r11d
  unsigned __int64 v6; // rax
  __int64 v7; // rax

  v5 = a1;
  if ( a2 )
  {
    v6 = (unsigned int)(unsigned __int16)a1
       - 1
       - (((unsigned __int64)((unsigned int)(unsigned __int16)a1 - 1) >> 1) & 0x5555555555555555LL);
    v5 = (a1 >> 12) & 0xFFFF0 | ((unsigned int)((0x101010101010101LL
                                               * (((v6 & 0x3333333333333333LL)
                                                 + ((v6 >> 2) & 0x3333333333333333LL)
                                                 + (((v6 & 0x3333333333333333LL) + ((v6 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24);
  }
  v7 = 0LL;
  if ( a5 )
  {
    while ( v5 != *a3 )
    {
      v7 = (unsigned int)(v7 + 1);
      ++a3;
      if ( (unsigned int)v7 >= a5 )
        goto LABEL_8;
    }
    v5 = *(_DWORD *)(a4 + 4 * v7);
  }
LABEL_8:
  if ( a2 )
    return ((v5 & 0xFFFFFFF0) << 12) | (1 << (v5 & 0xF));
  return v5;
}
