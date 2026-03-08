/*
 * XREFs of ??_ECHolographicClient@@MEAAPEAXI@Z @ 0x1802A9270
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ??1CHolographicClient@@MEAA@XZ @ 0x1802A9040 (--1CHolographicClient@@MEAA@XZ.c)
 */

CHolographicClient *__fastcall CHolographicClient::`vector deleting destructor'(CHolographicClient *this, char a2)
{
  CHolographicClient::~CHolographicClient(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
