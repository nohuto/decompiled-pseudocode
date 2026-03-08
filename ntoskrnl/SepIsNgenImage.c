/*
 * XREFs of SepIsNgenImage @ 0x14078E8D4
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x14070BBF8 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x140248480 (PsGetCurrentServerSilo.c)
 *     PsGetServerSiloGlobals @ 0x1402992FC (PsGetServerSiloGlobals.c)
 *     RtlEqualUnicodeString @ 0x1406EA560 (RtlEqualUnicodeString.c)
 */

char __fastcall SepIsNgenImage(unsigned __int16 *a1)
{
  __int64 CurrentServerSilo; // rax
  int *v3; // rbx
  int v4; // edx
  unsigned __int16 v5; // cx
  unsigned __int16 v7; // ax
  unsigned int v8; // edi
  UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)(&String1.MaximumLength + 1) = 0;
  CurrentServerSilo = PsGetCurrentServerSilo();
  v3 = (int *)*((_QWORD *)PsGetServerSiloGlobals(CurrentServerSilo) + 97);
  if ( !v3 )
    return 0;
  v4 = *v3;
  if ( !*v3 )
    return 0;
  v5 = *a1;
  if ( *a1 < *((_WORD *)v3 + 2) )
    return 0;
  if ( v5 > *((_WORD *)v3 + 3) )
    return 0;
  String1.Buffer = (wchar_t *)(*((_QWORD *)a1 + 1) + 8LL);
  v7 = a1[1];
  v8 = 0;
  String1.Length = v5 - 8;
  String1.MaximumLength = v7 - 8;
  if ( !v4 )
    return 0;
  while ( !RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)&v3[4 * v8 + 2], 1u) )
  {
    if ( ++v8 >= *v3 )
      return 0;
  }
  return 1;
}
