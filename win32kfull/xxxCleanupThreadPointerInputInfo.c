// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxCleanupThreadPointerInputInfo(__int64 a1)
{
  struct tagTHREADPOINTERDATA **v2; // rbx
  struct tagTHREADPOINTERDATA *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax

  if ( a1 == gptiManipulationThread )
  {
    v6 = SGDGetUserSessionState(a1);
    CTouchProcessor::CleanupManipulationThreadData(*(CTouchProcessor **)(v6 + 3424));
    gptiManipulationThread = 0LL;
  }
  v2 = (struct tagTHREADPOINTERDATA **)(a1 + 1128);
  v3 = *(struct tagTHREADPOINTERDATA **)(a1 + 1152);
  if ( v3 )
  {
    FreeThreadPointerHookData(v3);
    *(_QWORD *)(a1 + 1152) = 0LL;
  }
  while ( *v2 != (struct tagTHREADPOINTERDATA *)v2 )
    UnlinkAndFreeThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 1128), *v2);
  v5 = SGDGetUserSessionState(v3);
  if ( a1 == *(_QWORD *)(v5 + 16312) )
  {
    *(_QWORD *)(SGDGetUserSessionState(v4) + 16312) = 0LL;
    if ( *(_QWORD *)(v5 + 16184) )
      *(_DWORD *)(v5 + 16320) |= 1u;
  }
  if ( *(_WORD *)(SGDGetUserSessionState(v4) + 16280) )
  {
    if ( a1 == *(_QWORD *)(v5 + 16288) )
    {
      ForceCompletePendingPromotion();
      xxxProcessMousePromotionQueue();
    }
  }
}
