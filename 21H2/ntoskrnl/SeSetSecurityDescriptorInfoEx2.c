/*
 * XREFs of SeSetSecurityDescriptorInfoEx2 @ 0x14066DEBC
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x14066CCFC (CmpSetSecurityDescriptorInfo.c)
 * Callees:
 *     RtlpSetSecurityObject @ 0x14065E3C0 (RtlpSetSecurityObject.c)
 */

__int64 __fastcall SeSetSecurityDescriptorInfoEx2(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        _QWORD *a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 *a8)
{
  if ( *a4 )
    return RtlpSetSecurityObject(0LL, *a2, a3, a4, 0, a6, a7, a8);
  else
    return 3221225687LL;
}
