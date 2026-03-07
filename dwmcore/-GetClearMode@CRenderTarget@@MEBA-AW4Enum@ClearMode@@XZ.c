__int64 __fastcall CRenderTarget::GetClearMode(__int64 a1)
{
  return *(_BYTE *)(a1 + 140) != 0 ? 2 : 0;
}
