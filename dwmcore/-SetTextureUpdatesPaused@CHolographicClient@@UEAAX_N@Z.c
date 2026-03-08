/*
 * XREFs of ?SetTextureUpdatesPaused@CHolographicClient@@UEAAX_N@Z @ 0x180107F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHolographicClient::SetTextureUpdatesPaused(CHolographicClient *this, char a2)
{
  *((_BYTE *)this + 200) = a2;
}
