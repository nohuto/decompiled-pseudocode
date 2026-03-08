/*
 * XREFs of CmpDoReDoSetSecurityDescriptor @ 0x140A27E50
 * Callers:
 *     CmpDoReDoRecord @ 0x140A27C2C (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     ZwSetSecurityObject @ 0x1404159D0 (ZwSetSecurityObject.c)
 *     CmpDoReOpenTransKey @ 0x140A27F24 (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoSetSecurityDescriptor(__int64 a1, __int64 a2)
{
  NTSTATUS v3; // ebx
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  Handle = 0LL;
  v3 = CmpDoReOpenTransKey(a1, a2 + 32, 0x40000LL, &Handle);
  if ( v3 >= 0 )
  {
    v3 = ZwSetSecurityObject(Handle, 4u, *(PSECURITY_DESCRIPTOR *)(a2 + 56));
    ZwClose(Handle);
  }
  return (unsigned int)v3;
}
