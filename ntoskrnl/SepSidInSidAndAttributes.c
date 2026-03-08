/*
 * XREFs of SepSidInSidAndAttributes @ 0x1407439F8
 * Callers:
 *     SepFilterToken @ 0x14073FED0 (SepFilterToken.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x14074380C (SepRemoveDisabledGroupsAndPrivileges.c)
 * Callees:
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 */

char __fastcall SepSidInSidAndAttributes(unsigned __int8 **a1, unsigned int a2, __int64 a3, char *a4)
{
  unsigned __int8 **v6; // rbx
  int v8; // edi
  unsigned int v9; // r14d
  char v10; // r15
  unsigned __int8 *v11; // rdx

  v6 = a1;
  if ( !a1 )
    return 0;
  v8 = 0;
  v9 = 4 * (unsigned __int8)a4[1] + 8;
  if ( !a2 )
    return 0;
  v10 = *a4;
  while ( 1 )
  {
    v11 = *v6;
    if ( v10 == **v6 && v9 == 4 * v11[1] + 8 && !memcmp(a4, v11, v9) )
      break;
    v6 += 2;
    if ( ++v8 >= a2 )
      return 0;
  }
  return 1;
}
