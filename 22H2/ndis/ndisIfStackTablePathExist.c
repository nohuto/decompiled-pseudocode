/*
 * XREFs of ndisIfStackTablePathExist @ 0x1C0026000
 * Callers:
 *     NdisIfAddIfStackEntry @ 0x1C00257C0 (NdisIfAddIfStackEntry.c)
 *     ndisIfStackTablePathExist @ 0x1C0026000 (ndisIfStackTablePathExist.c)
 * Callees:
 *     ndisIfStackTablePathExist @ 0x1C0026000 (ndisIfStackTablePathExist.c)
 */

char __fastcall ndisIfStackTablePathExist(int a1, unsigned int a2, __int16 a3)
{
  unsigned __int16 v3; // di
  PVOID *v6; // rbx
  PVOID *v7; // rax
  __int64 v9; // rcx

  v3 = a3 + 1;
  if ( (unsigned __int16)(a3 + 1) < 0x10u )
  {
    v6 = (PVOID *)qword_1C00E5B60;
    while ( v6 != &qword_1C00E5B60 )
    {
      v7 = v6;
      v6 = (PVOID *)*v6;
      if ( *((_DWORD *)v7 + 5) == a1 )
      {
        v9 = *((unsigned int *)v7 + 4);
        if ( (_DWORD)v9 == a2 || (unsigned __int8)ndisIfStackTablePathExist(v9, a2, v3) )
          return 1;
      }
    }
  }
  return 0;
}
