/*
 * XREFs of RtlAreBitsClear @ 0x14036C910
 * Callers:
 *     HvGetHiveLogFileStatus @ 0x1407F7674 (HvGetHiveLogFileStatus.c)
 *     CmpMountPreloadedHives @ 0x140812EF4 (CmpMountPreloadedHives.c)
 *     CmpLoadHiveThread @ 0x140820360 (CmpLoadHiveThread.c)
 *     HvIsRangeDirty @ 0x140A22C54 (HvIsRangeDirty.c)
 *     MiCheckPatchPagesCallback @ 0x140A33660 (MiCheckPatchPagesCallback.c)
 *     HalpMmAllocCtxMarkHiberPhase @ 0x140A9269C (HalpMmAllocCtxMarkHiberPhase.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreBitsClear(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  BOOLEAN result; // al
  unsigned int *Buffer; // rcx
  char v6; // r11
  unsigned int *v7; // rdx
  unsigned int v8; // ebx
  unsigned int *v9; // r10
  unsigned int *v10; // rdx

  if ( StartingIndex >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( Length <= 1 )
  {
    if ( Length == 1 )
      return !_bittest(
                (const signed __int32 *)&BitMapHeader->Buffer[(unsigned __int64)StartingIndex >> 5],
                StartingIndex & 0x1F);
    return 0;
  }
  if ( BitMapHeader->SizeOfBitMap - StartingIndex < Length )
    return 0;
  Buffer = BitMapHeader->Buffer;
  v6 = StartingIndex + Length - 1;
  v7 = &Buffer[(unsigned __int64)StartingIndex >> 5];
  v8 = *v7;
  v9 = &Buffer[(unsigned __int64)(StartingIndex + Length - 1) >> 5];
  if ( v7 == v9 )
    return (v8 & (0xFFFFFFFF >> (32 - Length) << StartingIndex)) == 0;
  if ( (v8 & (-1 << StartingIndex)) != 0 )
    return 0;
  v10 = v7 + 1;
  if ( v10 == v9 )
    return ((0xFFFFFFFF >> ~v6) & *v10) == 0;
  result = 0;
  while ( !*v10 )
  {
    if ( ++v10 == v9 )
      return ((0xFFFFFFFF >> ~v6) & *v10) == 0;
  }
  return result;
}
