/*
 * XREFs of rimComputeHimetricGeometry @ 0x1C0179194
 * Callers:
 *     rimTransformGeometry @ 0x1C017CEA4 (rimTransformGeometry.c)
 * Callees:
 *     RIMTransformPointerDevicePointToPhysical @ 0x1C016544C (RIMTransformPointerDevicePointToPhysical.c)
 */

__int64 __fastcall rimComputeHimetricGeometry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v7; // ecx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  *(_OWORD *)a3 = 0LL;
  result = RIMTransformPointerDevicePointToPhysical(a1, *(_QWORD *)(a2 + 12), a3);
  v7 = *(_DWORD *)(a2 + 24);
  if ( v7 )
  {
    result = *(unsigned int *)(a2 + 28);
    if ( (_DWORD)result )
    {
      v8 = 0LL;
      RIMTransformPointerDevicePointToPhysical(a1, __SPAIR64__(result, v7), (__int64)&v8);
      *(_DWORD *)(a3 + 8) = v8;
      result = HIDWORD(v8);
      *(_DWORD *)(a3 + 12) = HIDWORD(v8);
    }
  }
  return result;
}
