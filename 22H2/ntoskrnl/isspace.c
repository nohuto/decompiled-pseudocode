/*
 * XREFs of isspace @ 0x1403D9A80
 * Callers:
 *     ?ScTrimString@@YAXPEAD@Z @ 0x14067531C (-ScTrimString@@YAXPEAD@Z.c)
 *     CmpGetToken @ 0x140B5E42C (CmpGetToken.c)
 * Callees:
 *     <none>
 */

int __cdecl isspace(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_140C00150[v1] & 8;
}
