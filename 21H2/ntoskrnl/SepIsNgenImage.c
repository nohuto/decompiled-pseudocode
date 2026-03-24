/*
 * XREFs of SepIsNgenImage @ 0x140603AA8
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x140603818 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140252E18 (PsGetServerSiloGlobals.c)
 *     PsGetCurrentServerSilo @ 0x14025C9C0 (PsGetCurrentServerSilo.c)
 *     RtlEqualUnicodeString @ 0x140601410 (RtlEqualUnicodeString.c)
 */

char __fastcall SepIsNgenImage(__int64 a1, __int64 a2)
{
  __int64 CurrentServerSilo; // rax
  unsigned int *v4; // rbx
  unsigned int v5; // esi
  unsigned __int16 v6; // cx
  __int16 v8; // ax
  unsigned int v9; // edi
  UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(&String1.MaximumLength + 1) = 0;
  CurrentServerSilo = PsGetCurrentServerSilo(a1, a2);
  v4 = (unsigned int *)*((_QWORD *)PsGetServerSiloGlobals(CurrentServerSilo) + 97);
  if ( !v4 )
    return 0;
  v5 = *v4;
  if ( !*v4 )
    return 0;
  v6 = *(_WORD *)a1;
  if ( *(_WORD *)a1 < *((_WORD *)v4 + 2) )
    return 0;
  if ( v6 > *((_WORD *)v4 + 3) )
    return 0;
  String1.Buffer = (wchar_t *)(*(_QWORD *)(a1 + 8) + 8LL);
  v8 = *(_WORD *)(a1 + 2);
  v9 = 0;
  String1.Length = v6 - 8;
  String1.MaximumLength = v8 - 8;
  if ( !v5 )
    return 0;
  while ( !RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)&v4[4 * v9 + 2], 1u) )
  {
    if ( ++v9 >= v5 )
      return 0;
  }
  return 1;
}
