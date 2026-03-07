void __fastcall CInteraction::SetHandledDeltaCurrentInteraction(CInteraction *this)
{
  *((_BYTE *)this + 1096) |= 7u;
  *((_DWORD *)this + 268) = 2;
}
