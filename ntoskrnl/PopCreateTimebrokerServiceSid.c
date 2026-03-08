/*
 * XREFs of PopCreateTimebrokerServiceSid @ 0x140B43F40
 * Callers:
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     RtlInitializeSid @ 0x14068E3A0 (RtlInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x140782B90 (RtlLengthRequiredSid.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 PopCreateTimebrokerServiceSid()
{
  ULONG v0; // eax
  _DWORD *Pool2; // rax
  _DWORD *v2; // rbx
  NTSTATUS v3; // edi
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+30h] [rbp+8h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v0 = RtlLengthRequiredSid(6u);
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v0, 0x67696450u);
  v2 = Pool2;
  if ( Pool2 )
  {
    v3 = RtlInitializeSid(Pool2, &IdentifierAuthority, 6u);
    if ( v3 < 0 )
    {
      ExFreePoolWithTag(v2, 0x67696450u);
    }
    else
    {
      v2[2] = 80;
      v2[3] = 410965207;
      v2[4] = -1744070425;
      v2[5] = 1717734767;
      v2[6] = -1973635081;
      v2[7] = -539001157;
      PopTimeBrokerServiceSid = (__int64)v2;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v3;
}
