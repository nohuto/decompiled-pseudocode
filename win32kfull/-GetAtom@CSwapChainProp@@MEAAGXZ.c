__int64 __fastcall CSwapChainProp::GetAtom(CSwapChainProp *this)
{
  return *((unsigned __int16 *)&WPP_MAIN_CB.AlignmentRequirement + 2);
}
