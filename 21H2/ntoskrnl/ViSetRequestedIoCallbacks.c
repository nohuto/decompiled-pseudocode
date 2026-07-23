/*
 * XREFs of ViSetRequestedIoCallbacks @ 0x1405A0FBC
 * Callers:
 *     ViXdvSetRequestedAPIsforDIF @ 0x1409CA220 (ViXdvSetRequestedAPIsforDIF.c)
 * Callees:
 *     _stricmp @ 0x1403D1F40 (_stricmp.c)
 */

void ViSetRequestedIoCallbacks()
{
  char **v0; // rbx
  __int64 *i; // rdi

  v0 = &VfXdvIoCallbackThunks;
  if ( VfXdvIoCallbackThunks )
  {
    do
    {
      for ( i = *(__int64 **)VfDifAPIThunkContextHead; i != (__int64 *)VfDifAPIThunkContextHead; i = (__int64 *)*i )
      {
        if ( !stricmp(*v0, (const char *)*(i - 2)) && *((_DWORD *)v0 + 6) != 0xFFFF )
        {
          *((_DWORD *)v0 + 2) |= 1u;
          *((_DWORD *)i - 2) |= *((_DWORD *)v0 + 2);
          *((_DWORD *)i + 12) = *((_DWORD *)v0 + 6);
        }
      }
      v0 += 4;
    }
    while ( *v0 );
  }
}
