/*
 * XREFs of MoveObjData @ 0x1C004C164
 * Callers:
 *     RefOf @ 0x1C00068B0 (RefOf.c)
 *     Name @ 0x1C00553B0 (Name.c)
 *     CopyObject @ 0x1C0056550 (CopyObject.c)
 *     Store @ 0x1C0058B60 (Store.c)
 *     ParseCall @ 0x1C005A6A0 (ParseCall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MoveObjData(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 != a2 )
  {
    result = 0LL;
    *(_OWORD *)a1 = *(_OWORD *)a2;
    *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  return result;
}
