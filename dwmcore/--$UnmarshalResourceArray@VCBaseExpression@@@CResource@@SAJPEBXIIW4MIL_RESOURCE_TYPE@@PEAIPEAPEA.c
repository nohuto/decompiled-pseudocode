/*
 * XREFs of ??$UnmarshalResourceArray@VCBaseExpression@@@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAVCBaseExpression@@PEAVCResourceTable@@_N@Z @ 0x1801BAD5C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009F0A8 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTable@@_N@Z @ 0x1800E746C (-UnmarshalResourceArray@CResource@@SAJPEBXIIW4MIL_RESOURCE_TYPE@@PEAIPEAPEAPEAV1@PEAVCResourceTa.c)
 */

__int64 __fastcall CResource::UnmarshalResourceArray<CBaseExpression>(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        _QWORD *a6,
        __int64 a7)
{
  __int64 result; // rax
  void *v8; // [rsp+40h] [rbp-18h] BYREF

  result = CResource::UnmarshalResourceArray(a1, a2, a3, 0xBu, a5, &v8, a7, 0);
  *a6 = v8;
  return result;
}
