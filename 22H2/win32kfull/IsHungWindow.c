/*
 * XREFs of IsHungWindow @ 0x1C0041810
 * Callers:
 *     ProcessHungWindow @ 0x1C00037AC (ProcessHungWindow.c)
 *     xxxRegisterGhostWindow @ 0x1C0003A40 (xxxRegisterGhostWindow.c)
 *     NtUserQueryWindow @ 0x1C0041510 (NtUserQueryWindow.c)
 *     xxxHungAppDemon @ 0x1C00416E0 (xxxHungAppDemon.c)
 *     xxxSimpleDoSyncPaint @ 0x1C006D7A0 (xxxSimpleDoSyncPaint.c)
 *     ShouldProcessHungWindow @ 0x1C01273E4 (ShouldProcessHungWindow.c)
 *     EditionHandleHungWindow @ 0x1C012C370 (EditionHandleHungWindow.c)
 *     NtUserSetWindowArrangement @ 0x1C0202730 (NtUserSetWindowArrangement.c)
 *     xxxRedrawHungWindow @ 0x1C0240D14 (xxxRedrawHungWindow.c)
 *     ?xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z @ 0x1C0241740 (-xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z.c)
 * Callees:
 *     IsPumpingInputMsgs @ 0x1C00418C8 (IsPumpingInputMsgs.c)
 */

__int64 __fastcall IsHungWindow(__int64 a1)
{
  _QWORD *v1; // rdi
  unsigned int v3; // ebx
  __int64 v4; // rax

  v1 = *(_QWORD **)(a1 + 16);
  v3 = 0;
  v4 = v1[56];
  if ( (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
     - *(_DWORD *)(v4 + 12) <= gdwHungAppTimeout
    || (*(_WORD *)(v4 + 10) & 0x1C07) != 0
    || (unsigned int)PsGetThreadFreezeCount(*v1)
    || (*(_DWORD *)(v1[53] + 12LL) & 0x40) != 0 )
  {
    if ( !(unsigned int)IsPumpingInputMsgs(a1) )
      return 1;
    return v3;
  }
  else
  {
    return 1;
  }
}
