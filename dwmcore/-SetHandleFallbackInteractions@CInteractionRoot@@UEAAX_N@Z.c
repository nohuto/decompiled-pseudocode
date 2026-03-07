void __fastcall CInteractionRoot::SetHandleFallbackInteractions(CInteractionRoot *this, char a2)
{
  *((_BYTE *)this + 1288) = (4 * a2) | *((_BYTE *)this + 1288) & 0xFB;
}
