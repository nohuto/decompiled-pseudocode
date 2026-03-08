/*
 * XREFs of GetBaseData @ 0x1C00055CA
 * Callers:
 *     ReadObject @ 0x1C0005BEE (ReadObject.c)
 *     DerefOf @ 0x1C0006500 (DerefOf.c)
 *     ObjTypeSizeOf @ 0x1C00067D0 (ObjTypeSizeOf.c)
 *     WriteObject @ 0x1C00532A0 (WriteObject.c)
 *     ParseSuperName @ 0x1C005C56C (ParseSuperName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBaseData(__int64 a1)
{
  __int16 v1; // ax

  while ( 1 )
  {
    while ( 1 )
    {
      v1 = *(_WORD *)(a1 + 2);
      if ( v1 != 128 )
        break;
      a1 = *(_QWORD *)(a1 + 16) + 64LL;
    }
    if ( v1 != 129 )
      break;
    a1 = *(_QWORD *)(a1 + 16);
  }
  return a1;
}
