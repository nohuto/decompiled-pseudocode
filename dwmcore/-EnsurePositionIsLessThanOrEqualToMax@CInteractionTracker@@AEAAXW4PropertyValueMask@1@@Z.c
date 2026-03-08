/*
 * XREFs of ?EnsurePositionIsLessThanOrEqualToMax@CInteractionTracker@@AEAAXW4PropertyValueMask@1@@Z @ 0x18022EE84
 * Callers:
 *     ?NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ @ 0x18012E9A8 (-NotifyExpressionProcessingComplete@CInteractionTracker@@QEAAXXZ.c)
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x180231528 (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z @ 0x18012F062 (-SetPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@W4TrackerUpdateType@1@@Z.c)
 */

void __fastcall CInteractionTracker::EnsurePositionIsLessThanOrEqualToMax(__int64 a1, char a2)
{
  int v2; // eax
  __int64 v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h]

  if ( !*(_DWORD *)(a1 + 176) && (*(_BYTE *)(a1 + 540) & 0x20) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 88);
    v3 = *(_QWORD *)(a1 + 80);
    v4 = v2;
    if ( (a2 & 1) != 0 )
      LODWORD(v3) = fminf(*(float *)(a1 + 80), *(float *)(a1 + 104));
    if ( (a2 & 2) != 0 )
      HIDWORD(v3) = fminf(*(float *)(a1 + 84), *(float *)(a1 + 108));
    v4 = 0;
    CInteractionTracker::SetPosition(a1, (__int64)&v3, 0);
  }
}
