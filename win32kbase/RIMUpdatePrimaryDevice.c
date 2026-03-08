/*
 * XREFs of RIMUpdatePrimaryDevice @ 0x1C01BA144
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C01A98C0 (rimAbSuppressLowerRankActivityInFrame.c)
 *     RIMRemoveFromActiveDevices @ 0x1C01B9190 (RIMRemoveFromActiveDevices.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01D5678 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01D5A04 (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 * Callees:
 *     RIMGetPointerInputType @ 0x1C00EFC04 (RIMGetPointerInputType.c)
 *     RIMApiSetIsPointerInputTypeRedirected @ 0x1C01D1624 (RIMApiSetIsPointerInputTypeRedirected.c)
 */

__int64 __fastcall RIMUpdatePrimaryDevice(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  unsigned int v5; // eax

  result = 0LL;
  v4 = *(_QWORD *)(a1 + 480);
  if ( v4 )
    *(_DWORD *)(v4 + 360) &= ~1u;
  if ( a2 )
  {
    *(_DWORD *)(a2 + 360) |= 1u;
    *(_QWORD *)(a1 + 480) = a2;
    v5 = RIMGetPointerInputType(a2);
    result = RIMApiSetIsPointerInputTypeRedirected(v5);
  }
  else
  {
    *(_QWORD *)(a1 + 480) = 0LL;
  }
  *(_DWORD *)(a1 + 488) = result;
  return result;
}
