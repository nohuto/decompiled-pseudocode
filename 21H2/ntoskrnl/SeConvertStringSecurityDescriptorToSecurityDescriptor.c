/*
 * XREFs of SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x14039E760
 * Callers:
 *     IoCreateDeviceSecure @ 0x14073C640 (IoCreateDeviceSecure.c)
 *     IopUpdateSecureDeviceClassState @ 0x1407BDFC4 (IopUpdateSecureDeviceClassState.c)
 *     PspIumVerifyParentSd @ 0x14090CE14 (PspIumVerifyParentSd.c)
 *     CmFcInitSystem2 @ 0x140A39398 (CmFcInitSystem2.c)
 *     CmFcManagerStartRuntimePhase @ 0x140A39784 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     LocalConvertStringSDToSD_Rev1 @ 0x140787774 (LocalConvertStringSDToSD_Rev1.c)
 */

__int64 __fastcall SeConvertStringSecurityDescriptorToSecurityDescriptor(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a1 && a3 )
  {
    if ( a2 != 1 )
    {
      LOWORD(result) = 1305;
      return (unsigned __int16)result | 0xC0070000;
    }
    result = LocalConvertStringSDToSD_Rev1(a1, 1, a3, a1, a3, a4);
  }
  else
  {
    result = 87LL;
  }
  if ( (int)result > 0 )
    return (unsigned __int16)result | 0xC0070000;
  return result;
}
