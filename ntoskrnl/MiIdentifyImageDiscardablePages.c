/*
 * XREFs of MiIdentifyImageDiscardablePages @ 0x140A349B4
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140A31BB8 (MiApplyDriverHotPatch.c)
 *     MiUnapplyDriverHotPatch @ 0x140A390F8 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     MiGetPteAddress @ 0x140288864 (MiGetPteAddress.c)
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     RtlSetBitsEx @ 0x14034CE90 (RtlSetBitsEx.c)
 *     MiSnapDriverRange @ 0x14072A118 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiIdentifyImageDiscardablePages(__int64 *a1)
{
  __int64 v1; // rax
  unsigned int v3; // edi
  PVOID Pool; // rax
  __int64 PteAddress; // r15
  unsigned int v7; // ebp
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  v1 = *a1;
  v10 = 0LL;
  v11 = 0LL;
  v3 = (*(_DWORD *)(v1 + 64) >> 12) + ((*(_DWORD *)(v1 + 64) & 0xFFF) != 0);
  Pool = MiAllocatePool(
           64,
           8
         * (((((unsigned __int8)(*(_DWORD *)(v1 + 64) >> 12) + ((*(_DWORD *)(v1 + 64) & 0xFFF) != 0)) & 0x3F) != 0)
          + (v3 >> 6)),
           0x4D424450u);
  if ( !Pool )
    return 3221225626LL;
  a1[11] = (__int64)Pool;
  a1[10] = v3;
  PteAddress = MiGetPteAddress(*(_QWORD *)(*a1 + 48));
  v7 = 0;
  do
  {
    v7 = MiSnapDriverRange(*a1, v7, 2, 0LL, &v10, &v11);
    if ( v10 )
    {
      v8 = (__int64)(v10 - PteAddress) >> 3;
      v9 = (__int64)(v11 - PteAddress) >> 3;
      if ( v8 < v3 )
      {
        if ( v9 >= v3 )
          v9 = v3 - 1;
        RtlSetBitsEx((__int64)(a1 + 10), v8, v9 - v8 + 1);
      }
    }
  }
  while ( v7 );
  return 0LL;
}
