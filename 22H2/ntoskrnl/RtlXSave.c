/*
 * XREFs of RtlXSave @ 0x14020DFD0
 * Callers:
 *     KiSaveNpxState @ 0x14020DD50 (KiSaveNpxState.c)
 *     KeSaveExtendedAndSupervisorState @ 0x14020DDFC (KeSaveExtendedAndSupervisorState.c)
 *     RtlXSaveS @ 0x14036DE54 (RtlXSaveS.c)
 *     ViCtxCaptureInitialIsrState @ 0x140AE5AB8 (ViCtxCaptureInitialIsrState.c)
 *     ViCtxCheckAndReleaseIsrState @ 0x140AE5B58 (ViCtxCheckAndReleaseIsrState.c)
 * Callees:
 *     XSaveCHelper @ 0x140429AD0 (XSaveCHelper.c)
 */

__int64 __fastcall RtlXSave(_DWORD *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // r8d
  int v6; // ecx

  if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    return XSaveCHelper(a1, a2, a3, a1);
  result = a2;
  if ( (a2 & 6) == 4 )
  {
    v5 = a1[6];
    v6 = a1[7];
    _xsave(a1, a2);
    a1[6] = v5;
    a1[7] = v6;
  }
  else
  {
    _xsave(a1, a2);
  }
  return result;
}
