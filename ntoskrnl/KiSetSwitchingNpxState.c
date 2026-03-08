/*
 * XREFs of KiSetSwitchingNpxState @ 0x1402381AC
 * Callers:
 *     KiInitializeContextThread @ 0x140237E9C (KiInitializeContextThread.c)
 * Callees:
 *     <none>
 */

void __fastcall KiSetSwitchingNpxState(__int64 a1, char a2, __int64 a3)
{
  unsigned __int64 v3; // r9

  v3 = a3 | MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFBFFFCuLL | (a2 == 0);
  if ( (*(_DWORD *)(a1 + 116) & 0x100000) != 0 )
    v3 = a3 | MEMORY[0xFFFFF780000003D8] & 0xFFFFFFFFFFFBFFFCuLL | (2049LL - (a2 != 0));
  *(_QWORD *)(a1 + 592) = v3;
}
