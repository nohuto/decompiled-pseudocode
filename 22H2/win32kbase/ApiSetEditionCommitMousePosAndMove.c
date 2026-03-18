/*
 * XREFs of ApiSetEditionCommitMousePosAndMove @ 0x1C0205CA0
 * Callers:
 *     ?CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MousePacketPerf@@@Z @ 0x1C00E5EBA (-CommitMousePosAndMoveCursor@CMouseProcessor@@AEAAXPEAVMouseInputDataEx@1@UtagPOINT@@AEAU_MouseP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     EditionCommitMousePosAndMove @ 0x1C02329AC (EditionCommitMousePosAndMove.c)
 */

__int64 __fastcall ApiSetEditionCommitMousePosAndMove(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  unsigned int v11; // ebx

  v11 = 0;
  if ( qword_1C0296BC0 && (int)qword_1C0296BC0() >= 0 )
    return (unsigned int)EditionCommitMousePosAndMove(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  return v11;
}
