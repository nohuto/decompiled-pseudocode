/*
 * XREFs of ?DxgkEnableFormattingBuffer@@YAXH@Z @ 0x1C030D9E0
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C0020F18 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z @ 0x1C030DB3C (-EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z.c)
 */

void __fastcall DxgkEnableFormattingBuffer(int a1)
{
  DXGGLOBAL *Global; // rax

  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::EnableFormattingBuffer(Global, a1);
}
