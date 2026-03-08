/*
 * XREFs of CmpCheckKcbStackAccess @ 0x140A18350
 * Callers:
 *     CmpSetKeySecurity @ 0x1406B7E3C (CmpSetKeySecurity.c)
 * Callees:
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14074CA68 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1407AF4E0 (CmpGetSecurityCacheEntryForKcbStack.c)
 */

__int64 __fastcall CmpCheckKcbStackAccess(__int64 a1, __int64 a2, KPROCESSOR_MODE a3, ACCESS_MASK a4, char a5)
{
  __int64 SecurityCacheEntryForKcbStack; // rax

  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a1, a2, 0LL);
  return CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(SecurityCacheEntryForKcbStack + 32), a3, a4, a5);
}
