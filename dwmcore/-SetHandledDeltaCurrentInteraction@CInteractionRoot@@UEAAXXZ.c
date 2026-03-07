void __fastcall CInteractionRoot::SetHandledDeltaCurrentInteraction(CInteractionRoot *this)
{
  *((_BYTE *)this + 832) |= 7u;
  *((_DWORD *)this + 202) = 2;
}
