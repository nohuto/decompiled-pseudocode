/*
 * XREFs of ViSetRequestedAPIs @ 0x1409C9BDC
 * Callers:
 *     ViXdvSetRequestedAPIsforDIF @ 0x1409CA220 (ViXdvSetRequestedAPIsforDIF.c)
 * Callees:
 *     _stricmp @ 0x1403D1F40 (_stricmp.c)
 */

void __fastcall ViSetRequestedAPIs(__int64 a1)
{
  __int64 i; // rbx
  __int64 *j; // rdi

  for ( i = a1; *(_QWORD *)i; i += 48LL )
  {
    for ( j = *(__int64 **)VfDifAPIThunkContextHead; j != (__int64 *)VfDifAPIThunkContextHead; j = (__int64 *)*j )
    {
      if ( !stricmp(*(const char **)i, (const char *)*(j - 2)) && *(_DWORD *)(i + 40) != 0xFFFF )
      {
        *(_DWORD *)(i + 24) |= 1u;
        *((_DWORD *)j - 2) |= *(_DWORD *)(i + 24);
        *((_DWORD *)j + 12) = *(_DWORD *)(i + 40);
      }
    }
  }
}
