/*
 * XREFs of RtlCalculateUnwindInfoSizeForRetpoline @ 0x14058FB88
 * Callers:
 *     RtlCopyRetpolineStubsUnwindInfo @ 0x14058FC30 (RtlCopyRetpolineStubsUnwindInfo.c)
 *     RtlCreateRetpolineStubsFunctionTable @ 0x14058FD18 (RtlCreateRetpolineStubsFunctionTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlCalculateUnwindInfoSizeForRetpoline(__int64 a1, __int64 a2, _DWORD *a3)
{
  _BYTE *v3; // r9
  int v4; // eax
  unsigned int v5; // edx
  __int64 result; // rax

  v3 = (_BYTE *)(a1 + *(unsigned int *)(a2 + 8));
  v4 = (unsigned __int8)v3[2];
  v5 = 2 * v4 + 6;
  if ( (v4 & 1) == 0 )
    v5 = 2 * v4 + 4;
  result = v5 + 8;
  if ( (*v3 & 0x18) == 0 )
    result = v5;
  if ( a3 )
    *a3 = (*v3 & 0x18) != 0 ? v5 : 0;
  return result;
}
