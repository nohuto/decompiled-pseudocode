__int64 __fastcall xxxDefPointerProc(__int64 a1, int a2, unsigned __int16 a3, unsigned __int64 a4)
{
  __int64 v5; // rax

  if ( a3 == 1 )
  {
    SetMiPPromotion(gptiCurrent, a2);
  }
  else if ( a4 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
  {
    xxxPromotePointerToMouse(a3, 0x10000000u);
  }
  else
  {
    v5 = SGDGetUserSessionState(a1);
    CTouchProcessor::PromotePointerDataToMouse(*(CTouchProcessor **)(v5 + 3424), a4, 0x10000000u);
  }
  return 0LL;
}
