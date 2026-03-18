/*
 * XREFs of HalpGetProfileDescriptor @ 0x14037BB90
 * Callers:
 *     EmonSetInterval @ 0x14037BA00 (EmonSetInterval.c)
 *     HalpQueryProfileSource @ 0x140507C1C (HalpQueryProfileSource.c)
 *     HalpRemoveProfileSourceFromList @ 0x140507F60 (HalpRemoveProfileSourceFromList.c)
 *     EmonEnableMonitoring @ 0x14051D300 (EmonEnableMonitoring.c)
 *     Amd64EnableMonitoring @ 0x140529210 (Amd64EnableMonitoring.c)
 *     Amd64SetInterval @ 0x14052A160 (Amd64SetInterval.c)
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
