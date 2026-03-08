/*
 * XREFs of ViValidateTriageRules @ 0x140B94260
 * Callers:
 *     VfTriageSystem @ 0x140B49FDC (VfTriageSystem.c)
 * Callees:
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 */

__int64 __fastcall ViValidateTriageRules(unsigned int *a1, __int64 a2)
{
  unsigned int *v2; // r8
  unsigned __int64 v3; // rax

  v2 = (unsigned int *)((char *)a1 + a2);
  if ( a1 >= (unsigned int *)((char *)a1 + a2) )
  {
LABEL_5:
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: rules are ok.\n");
  }
  else
  {
    while ( 1 )
    {
      v3 = *a1;
      if ( (v3 & 0x70000) == 0 )
        break;
      a1 = (unsigned int *)((char *)a1 + (v3 >> 19) + 8);
      if ( a1 > v2 )
      {
        DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: invalid rules structure! \n");
        return 0LL;
      }
      if ( a1 >= v2 )
        goto LABEL_5;
    }
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: found zeroed rule during validation.\n");
  }
  return 1LL;
}
