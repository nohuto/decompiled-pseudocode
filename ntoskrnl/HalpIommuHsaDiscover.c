/*
 * XREFs of HalpIommuHsaDiscover @ 0x140B6C630
 * Callers:
 *     HalpIommuInitDiscard @ 0x140B6C3EC (HalpIommuInitDiscard.c)
 * Callees:
 *     HalpAcpiGetTable @ 0x14029C550 (HalpAcpiGetTable.c)
 *     HalpIommuProcessIvhdEntry @ 0x14052C244 (HalpIommuProcessIvhdEntry.c)
 */

int __fastcall HalpIommuHsaDiscover(_QWORD *a1)
{
  __int64 Table; // rax
  __int64 v3; // r14
  int result; // eax
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  int v7; // eax
  unsigned __int64 v8; // rbx
  bool v9; // si
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  _BYTE *v12; // rdx
  __int64 v13; // rax
  _BYTE *v14; // rdx
  char v15; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  qword_140C5F8C8 = (__int64)&HsaIvhdList;
  HsaIvhdList = (__int64)&HsaIvhdList;
  v15 = 0;
  if ( !HalpExtEnvLoaderBlock )
    return 0;
  Table = HalpAcpiGetTable(HalpExtEnvLoaderBlock, 1397904969, 0, 0);
  v3 = Table;
  if ( !Table )
    return 0;
  v5 = *(unsigned int *)(Table + 4);
  if ( (unsigned int)v5 < 0x5A )
    return 0;
  v6 = v3 + v5;
  v7 = *(_DWORD *)(v3 + 36);
  if ( (v7 & 1) == 0 )
    return 0;
  v8 = v3 + 48;
  if ( (v7 & 2) == 0 )
    goto LABEL_27;
  v9 = 1;
  v10 = v3 + 48;
  if ( v8 >= v6 )
  {
LABEL_29:
    *a1 ^= (*(_DWORD *)a1 ^ (2 * v9)) & 2;
    return 0;
  }
  while ( v10 + 4 <= v6 )
  {
    v11 = *(unsigned __int16 *)(v10 + 2);
    if ( (unsigned int)v11 < 4 || v10 + v11 > v6 )
      break;
    v12 = (_BYTE *)v10;
    v10 += *(unsigned __int16 *)(v10 + 2);
    if ( *v12 == 64 )
    {
      result = HalpIommuProcessIvhdEntry(v3, (__int64)v12, &v15);
      if ( result < 0 )
        return result;
      v9 = v9 && !v15;
    }
    if ( v10 >= v6 )
    {
      while ( v8 + 4 <= v6 )
      {
        v13 = *(unsigned __int16 *)(v8 + 2);
        if ( (unsigned int)v13 < 4 || v8 + v13 > v6 )
          break;
        v14 = (_BYTE *)v8;
        v8 += *(unsigned __int16 *)(v8 + 2);
        if ( *v14 == 17 )
        {
          result = HalpIommuProcessIvhdEntry(v3, (__int64)v14, &v15);
          if ( result < 0 )
            return result;
          if ( !v9 || v15 )
LABEL_27:
            v9 = 0;
          else
            v9 = 1;
        }
        if ( v8 >= v6 )
          goto LABEL_29;
      }
      return -1073741811;
    }
  }
  return -1073741811;
}
