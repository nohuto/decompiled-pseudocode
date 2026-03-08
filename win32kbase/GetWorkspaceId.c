/*
 * XREFs of GetWorkspaceId @ 0x1C00ED320
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A1CC (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall GetWorkspaceId(int a1)
{
  __int64 result; // rax

  result = HMValidateHandleNoSecure(a1, 19);
  if ( result )
    return *(unsigned int *)(result + 1324);
  return result;
}
