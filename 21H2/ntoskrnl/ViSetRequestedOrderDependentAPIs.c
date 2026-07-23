/*
 * XREFs of ViSetRequestedOrderDependentAPIs @ 0x1405A1038
 * Callers:
 *     ViXdvSetRequestedAPIsforDIF @ 0x1409CA220 (ViXdvSetRequestedAPIsforDIF.c)
 * Callees:
 *     _stricmp @ 0x1403D1F40 (_stricmp.c)
 */

void ViSetRequestedOrderDependentAPIs()
{
  char **v0; // rbx
  __int64 *i; // rdi

  v0 = &VfOrderDependentThunks;
  if ( VfOrderDependentThunks )
  {
    do
    {
      for ( i = *(__int64 **)VfDifAPIThunkContextHead; i != (__int64 *)VfDifAPIThunkContextHead; i = (__int64 *)*i )
      {
        if ( !stricmp(*v0, (const char *)*(i - 2)) && *((_DWORD *)v0 + 12) != 0xFFFF )
        {
          *((_DWORD *)v0 + 6) |= 1u;
          *((_DWORD *)i - 2) |= *((_DWORD *)v0 + 6);
          *((_DWORD *)i + 12) = *((_DWORD *)v0 + 12);
        }
      }
      v0 += 7;
    }
    while ( *v0 );
  }
}
