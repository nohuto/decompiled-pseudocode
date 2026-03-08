/*
 * XREFs of MiIdentifyPatchImageDataPages @ 0x140A34ABC
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140A31BB8 (MiApplyDriverHotPatch.c)
 *     MiApplySingleSessionPatch @ 0x140A333E0 (MiApplySingleSessionPatch.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     RtlClearAllBitsEx @ 0x1402D4520 (RtlClearAllBitsEx.c)
 *     RtlSetBitsEx @ 0x14034CE90 (RtlSetBitsEx.c)
 */

__int64 __fastcall MiIdentifyPatchImageDataPages(__int64 a1, int a2)
{
  __int64 v3; // rsi
  __int64 v5; // rbx
  SIZE_T v6; // r12
  PVOID Pool; // rax
  __int64 v8; // rbp
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int16 v11; // ax
  __int64 v12; // rbx
  PVOID v13; // rax

  v3 = *(_QWORD *)(a1 + 8);
  v5 = *(unsigned int *)(**(_QWORD **)(a1 + 16) + 8LL);
  v6 = 8 * (((unsigned int)v5 >> 6) + ((v5 & 0x3F) != 0));
  Pool = MiAllocatePool(64, v6, 0x4D424450u);
  if ( !Pool )
    return 3221225626LL;
  v8 = (unsigned int)v5;
  *(_QWORD *)(v3 + 48) = v5;
  *(_QWORD *)(v3 + 56) = Pool;
  v9 = 0;
  v10 = *(_QWORD *)(a1 + 16) + 128LL;
  if ( *(_QWORD *)(a1 + 16) != -128LL )
  {
    do
    {
      v11 = *(_WORD *)(v10 + 32) >> 1;
      if ( (v11 & 2) == 0 && (!a2 || (v11 & 4) != 0) )
        RtlSetBitsEx(v3 + 48, v9, *(unsigned int *)(v10 + 44));
      v9 += *(_DWORD *)(v10 + 44);
      v10 = *(_QWORD *)(v10 + 16);
    }
    while ( v10 );
  }
  v12 = *(_QWORD *)(a1 + 8);
  v13 = MiAllocatePool(256, v6, 0x4D424450u);
  if ( !v13 )
    return 3221225626LL;
  *(_QWORD *)(v12 + 64) = v8;
  *(_QWORD *)(v12 + 72) = v13;
  RtlClearAllBitsEx(v12 + 64);
  return 0LL;
}
