/*
 * XREFs of HalAllocateCommonBufferExV3 @ 0x14050C450
 * Callers:
 *     HalAllocateCommonBufferV3 @ 0x14050C4E0 (HalAllocateCommonBufferV3.c)
 * Callees:
 *     HalpAllocateDomainCommonBufferInternal @ 0x14050FF60 (HalpAllocateDomainCommonBufferInternal.c)
 */

__int64 __fastcall HalAllocateCommonBufferExV3(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, int a6)
{
  int *v7; // r9
  _QWORD v9[3]; // [rsp+50h] [rbp-18h] BYREF
  int v10; // [rsp+70h] [rbp+8h] BYREF

  v10 = 0;
  v9[0] = 0LL;
  if ( a5 && *(_BYTE *)(a1 + 445) )
  {
    v10 = 1;
    v7 = &v10;
  }
  else
  {
    v7 = 0LL;
  }
  HalpAllocateDomainCommonBufferInternal(*(_QWORD *)(a1 + 512), 0, (__int64)v7, a6, a4, (__int64)v9);
  return v9[0];
}
