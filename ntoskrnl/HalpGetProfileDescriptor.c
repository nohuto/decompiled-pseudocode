/*
 * XREFs of HalpGetProfileDescriptor @ 0x1403781E0
 * Callers:
 *     EmonSetInterval @ 0x140378050 (EmonSetInterval.c)
 *     HalpQueryProfileSource @ 0x140505B3C (HalpQueryProfileSource.c)
 *     HalpRemoveProfileSourceFromList @ 0x140505E80 (HalpRemoveProfileSourceFromList.c)
 *     EmonEnableMonitoring @ 0x14051ADD0 (EmonEnableMonitoring.c)
 *     Amd64EnableMonitoring @ 0x140526CE0 (Amd64EnableMonitoring.c)
 *     Amd64SetInterval @ 0x140527C30 (Amd64SetInterval.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpGetProfileDescriptor(int a1, __int64 a2, _QWORD *a3)
{
  __int64 *i; // rax

  for ( i = (__int64 *)HalpProfileSourceDescriptorListHead; i != &HalpProfileSourceDescriptorListHead; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i - 2) == a1 )
    {
      *a3 = i - 1;
      return 0LL;
    }
  }
  return 3221225659LL;
}
