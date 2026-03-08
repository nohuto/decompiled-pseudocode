/*
 * XREFs of CmpVerifySetSecurityDescriptorLogRecord @ 0x140A1C774
 * Callers:
 *     CmpVerifyLogRecord @ 0x140A1C5E0 (CmpVerifyLogRecord.c)
 * Callees:
 *     RtlValidRelativeSecurityDescriptor @ 0x14071D120 (RtlValidRelativeSecurityDescriptor.c)
 */

__int64 __fastcall CmpVerifySetSecurityDescriptorLogRecord(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rdx
  unsigned int v3; // eax
  ULONG v4; // r10d

  v1 = *(_DWORD *)(a1 + 4);
  if ( v1 < 0x40 )
    return 3222863920LL;
  v2 = *(unsigned __int16 *)(a1 + 32);
  if ( (v2 & 1) != 0 )
    return 3222863920LL;
  v3 = v2 + 64;
  v4 = *(_DWORD *)(a1 + 48);
  if ( v4 + v3 < v3 || v1 < v4 + v3 )
    return 3222863920LL;
  else
    return RtlValidRelativeSecurityDescriptor((PSECURITY_DESCRIPTOR)(v2 + a1 + 64), v4, 0) != 0 ? 0 : 0xC0190030;
}
