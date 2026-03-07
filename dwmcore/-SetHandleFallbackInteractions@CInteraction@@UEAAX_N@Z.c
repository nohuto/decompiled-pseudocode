void __fastcall CInteraction::SetHandleFallbackInteractions(CInteraction *this, char a2)
{
  *((_BYTE *)this + 1552) = (4 * a2) | *((_BYTE *)this + 1552) & 0xFB;
}
