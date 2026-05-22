/*
 * XREFs of ?Reset@DragRecognizer@@UEAAXPEBVGestureSession@@@Z @ 0x180185220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DragRecognizer::Reset(DragRecognizer *this, const struct GestureSession *a2)
{
  __int16 v2; // r9

  *((_BYTE *)this + 30) &= 0xF0u;
  *((_DWORD *)this + 18) = 112;
  *((_QWORD *)this + 8) = 0LL;
  v2 = *((_WORD *)this + 8);
  *((_WORD *)this + 18) = v2;
  *((_WORD *)this + 19) = v2;
  if ( *((_DWORD *)a2 + 5) == 1 )
  {
    *((_WORD *)this + 18) = v2 + *((_WORD *)this + 10);
  }
  else if ( *((_DWORD *)a2 + 5) == 2 )
  {
    *((_WORD *)this + 19) = v2 + *((_WORD *)this + 10);
  }
  *((_DWORD *)this + 8) = 0;
}
