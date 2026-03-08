/*
 * XREFs of PiAuCheckClientInteractive @ 0x1409586E0
 * Callers:
 *     PiCMQueryRemove @ 0x140967304 (PiCMQueryRemove.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x1402BE740 (RtlSubAuthoritySid.c)
 *     RtlInitializeSid @ 0x14068E3A0 (RtlInitializeSid.c)
 *     RtlValidSid @ 0x1407C92A0 (RtlValidSid.c)
 *     PiAuCheckTokenMembership @ 0x1409587A0 (PiAuCheckTokenMembership.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiAuCheckClientInteractive(_BYTE *a1)
{
  void *Pool2; // rax
  void *v3; // rdi
  NTSTATUS v4; // ebx
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *a1 = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  Pool2 = (void *)ExAllocatePool2(256LL, 12LL, 538996816LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    v4 = RtlInitializeSid(Pool2, &IdentifierAuthority, 1u);
    if ( v4 >= 0 )
    {
      *RtlSubAuthoritySid(v3, 0) = 4;
      if ( RtlValidSid(v3) )
      {
        v4 = PiAuCheckTokenMembership(v3);
        if ( v4 >= 0 )
          *a1 = 0;
      }
      else
      {
        v4 = -1073741595;
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v4;
}
