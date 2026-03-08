/*
 * XREFs of GreSetLayout @ 0x1C00D1C50
 * Callers:
 *     _GetDCEx @ 0x1C003F6E0 (_GetDCEx.c)
 *     GreCreateCompatibleDC @ 0x1C0052510 (GreCreateCompatibleDC.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0053708 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C00550A0 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?dwSetLayout@DC@@QEAAKJK@Z @ 0x1C00D1CB0 (-dwSetLayout@DC@@QEAAKJK@Z.c)
 */

__int64 __fastcall GreSetLayout(HDC a1, int a2, unsigned int a3)
{
  unsigned int v5; // ebx
  DC *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
    v5 = DC::dwSetLayout(v7[0], a2, a3);
  else
    v5 = -1;
  if ( v7[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
  return v5;
}
