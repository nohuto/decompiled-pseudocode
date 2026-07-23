/*
 * XREFs of PspWriteProcessSecurityDomain @ 0x14023AA3C
 * Callers:
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall PspWriteProcessSecurityDomain(__int64 a1, __int64 a2, int a3)
{
  *(_QWORD *)(a1 + 2528) = a2;
  if ( a3 )
    *(_QWORD *)(a1 + 2536) = a2;
}
