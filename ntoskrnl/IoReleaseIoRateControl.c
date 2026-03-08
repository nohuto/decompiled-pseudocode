/*
 * XREFs of IoReleaseIoRateControl @ 0x1402F80C0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 */

void __fastcall IoReleaseIoRateControl(struct _EX_RUNDOWN_REF **a1)
{
  __int64 v2; // rdi

  v2 = 2LL;
  do
  {
    if ( *a1 )
      ExReleaseRundownProtection_0(*a1 + 4);
    ++a1;
    --v2;
  }
  while ( v2 );
}
