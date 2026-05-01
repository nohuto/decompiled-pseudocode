/*
 * XREFs of ?SetPreferredAspectRatioHint@CFrameApplicationPresentation@@UEAAJUtagSIZE@@@Z @ 0x180067120
 * Callers:
 *     <none>
 * Callees:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_04a82b577b3b386ec811ea4ab7bdb179___ @ 0x180067150 (CFrameApplicationPresentation--_AddTaskToQueue__lambda_04a82b577b3b386ec811ea4ab7bdb179___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::SetPreferredAspectRatioHint(
        CFrameApplicationPresentation *this,
        struct tagSIZE a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = this;
  return CFrameApplicationPresentation::_AddTaskToQueue__lambda_04a82b577b3b386ec811ea4ab7bdb179___(this, v3);
}
