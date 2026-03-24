/*
 * XREFs of PsFreeEnclaveModuleInfo @ 0x1405845F0
 * Callers:
 *     PsGetProcessEnclaveModuleInfo @ 0x14058464C (PsGetProcessEnclaveModuleInfo.c)
 *     DbgkpPostModuleMessages @ 0x1408852F0 (DbgkpPostModuleMessages.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PsFreeEnclaveModuleInfo(char *P, int a2)
{
  int v2; // edi
  PVOID *v4; // rbx

  if ( P )
  {
    v2 = a2;
    if ( a2 )
    {
      v4 = (PVOID *)&P[16 * a2];
      do
      {
        v4 -= 2;
        ExFreePoolWithTag(*v4, 0);
        --v2;
      }
      while ( v2 );
    }
    ExFreePoolWithTag(P, 0);
  }
}
