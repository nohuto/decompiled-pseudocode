/*
 * XREFs of ViMakeVerifierSettings @ 0x140B940B4
 * Callers:
 *     VfTriageSystem @ 0x140B49FDC (VfTriageSystem.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140244EC0 (RtlStringCbCopyW.c)
 *     DbgPrintEx @ 0x1402BDD70 (DbgPrintEx.c)
 *     VfInitSetVerifyDriverTargets @ 0x140B93A90 (VfInitSetVerifyDriverTargets.c)
 */

NTSTATUS __fastcall ViMakeVerifierSettings(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r14
  const wchar_t *v3; // rdi
  const wchar_t *v5; // rbx
  unsigned int v6; // edx
  int v7; // esi

  VfVerifyMode = 1;
  v2 = a1 + 1;
  v3 = L"*";
  MmVerifyDriverLevel = a1[1];
  v5 = 0LL;
  v6 = *a1 >> 19;
  v7 = 0;
  if ( v6 )
    goto LABEL_4;
  if ( a2 )
  {
    a1 = a2;
    v6 = *a2 >> 19;
LABEL_4:
    v5 = (const wchar_t *)(a1 + 2);
    VfInitSetVerifyDriverTargets(a1 + 2, v6);
    DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: target drivers are `%ws'.\n", v5);
    goto LABEL_6;
  }
  v7 = 1;
  VfInitSetVerifyDriverTargets(L"*", 4u);
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: all drivers will be targetted.\n");
LABEL_6:
  VerifierTriageActionTaken = 1;
  DbgPrintEx(0x5Du, 3u, "CRASH TRIAGE: system will enable verification features %X.\n", *v2);
  if ( !v7 )
    v3 = v5;
  return RtlStringCbCopyW(&ViVerifyTargets, 0x200uLL, v3);
}
