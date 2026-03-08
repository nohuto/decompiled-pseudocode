/*
 * XREFs of ExpInitLicensing @ 0x1408102BC
 * Callers:
 *     sub_140606E08 @ 0x140606E08 (sub_140606E08.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpInitLicensing(char *a1)
{
  __int64 *v1; // rax
  __int64 result; // rax

  v1 = (__int64 *)(a1 + 904);
  if ( a1 == (char *)&PspHostSiloGlobals )
  {
    qword_140D9C7C0 = 81920LL;
    qword_140D5A950 = (__int64)ExpHostBootLicensingData;
    *v1 = (__int64)&qword_140D5A950;
  }
  result = *v1;
  *(_DWORD *)(result + 47032) = -1;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 46988) = 0;
  *(_QWORD *)(result + 46840) = 0LL;
  *(_QWORD *)(result + 47024) = 0LL;
  return result;
}
