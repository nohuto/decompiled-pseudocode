/*
 * XREFs of PnpiBiosDmaToIoDescriptor @ 0x1C009168C
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C008EFDC (PnpBiosResourcesToNtResources.c)
 * Callees:
 *     PnpiUpdateResourceList @ 0x1C0092328 (PnpiUpdateResourceList.c)
 */

__int64 __fastcall PnpiBiosDmaToIoDescriptor(__int64 a1, unsigned __int8 a2, __int64 a3, unsigned int a4, __int16 a5)
{
  int v6; // edi
  int updated; // r8d
  _BYTE *v8; // rcx
  bool v9; // cf
  int v10; // eax
  _BYTE *v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = 0LL;
  v6 = a2;
  updated = PnpiUpdateResourceList(a3 + 8LL * a4, &v12);
  if ( updated >= 0 )
  {
    v8 = v12;
    v9 = a5 != 0;
    a5 = -a5;
    *v12 = v9 ? 8 : 0;
    *(_WORD *)(v8 + 1) = 260;
    *((_DWORD *)v8 + 2) = v6;
    *((_DWORD *)v8 + 3) = v6;
    if ( (*(_BYTE *)(a1 + 2) & 3) != 0 )
    {
      if ( (*(_BYTE *)(a1 + 2) & 3) == 1 )
      {
        *((_WORD *)v8 + 2) |= 4u;
      }
      else if ( (*(_BYTE *)(a1 + 2) & 3) == 2 )
      {
        *((_WORD *)v8 + 2) |= 1u;
      }
      else
      {
        *((_WORD *)v8 + 2) |= 2u;
      }
    }
    if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
      *((_WORD *)v8 + 2) |= 8u;
    v10 = *(_BYTE *)(a1 + 2) & 0x60;
    switch ( v10 )
    {
      case ' ':
        *((_WORD *)v8 + 2) |= 0x10u;
        break;
      case '@':
        *((_WORD *)v8 + 2) |= 0x20u;
        break;
      case '`':
        *((_WORD *)v8 + 2) |= 0x40u;
        break;
    }
  }
  return (unsigned int)updated;
}
