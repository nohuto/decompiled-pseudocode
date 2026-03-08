/*
 * XREFs of CmpInitializeTrustedInstallerSid @ 0x140B50A80
 * Callers:
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 * Callees:
 *     RtlInitializeSid @ 0x14068E3A0 (RtlInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x140782B90 (RtlLengthRequiredSid.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

int CmpInitializeTrustedInstallerSid()
{
  ULONG v0; // eax
  void *Pool2; // rax
  _DWORD *v2; // rbx
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v0 = RtlLengthRequiredSid(6u);
  Pool2 = (void *)ExAllocatePool2(256LL, v0, 0x65536D43u);
  CmpTrustedInstallerSid = Pool2;
  v2 = Pool2;
  if ( Pool2 )
  {
    LODWORD(Pool2) = RtlInitializeSid(Pool2, &IdentifierAuthority, 6u);
    v2[2] = 80;
    v2[3] = 956008885;
    v2[4] = -876444647;
    v2[5] = 1831038044;
    v2[6] = 1853292631;
    v2[7] = -2023488832;
  }
  return (int)Pool2;
}
