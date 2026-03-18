/*
 * XREFs of EditionCommitMousePosAndMove @ 0x1C009B1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MousePacketPerf@@@Z @ 0x1C009B280 (-xxxMoveEventAbsolute@@YA-AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHP.c)
 */

__int64 __fastcall EditionCommitMousePosAndMove(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  __int64 v14; // rbx
  __int64 v15; // rax

  if ( *(_DWORD *)a4 == 2 )
    v14 = *(_QWORD *)(a4 + 8);
  else
    v14 = 0LL;
  v15 = UpconvertTime(a5, a2, a3, a4);
  return xxxMoveEventAbsolute(*a1, a1[1], a2, v14, a3, v15, a6, a7, a8, a9, a11);
}
