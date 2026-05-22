/*
 * XREFs of ?TapStarted@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180186A0C
 * Callers:
 *     ?Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180186390 (-Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?ContactsWithinBoundingBox@TwoFingerClickRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x180186474 (-ContactsWithinBoundingBox@TwoFingerClickRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 *     ?SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z @ 0x180186680 (-SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z.c)
 */

__int64 __fastcall TwoFingerClickRecognizer::TapStarted(
        TwoFingerClickRecognizer *this,
        const struct GestureSession *a2,
        char a3,
        int a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  TwoFingerClickRecognizer *v8; // rbx

  v8 = this;
  if ( a5 != 2 )
  {
    if ( a5 == 1 )
    {
      if ( (a3 & 4) == 0 )
      {
        *((_DWORD *)this + 6) = a4 + *((unsigned __int16 *)this + 31);
        *((_WORD *)this + 8) |= 0x10u;
        *((_DWORD *)this + 5) = 3;
        return 0LL;
      }
      goto LABEL_5;
    }
LABEL_9:
    *((_WORD *)v8 + 8) = 0;
    *((_DWORD *)v8 + 5) = 4;
    return 0LL;
  }
  if ( !TwoFingerClickRecognizer::ContactsWithinBoundingBox(this, 2u, a6) )
    goto LABEL_9;
  if ( (a3 & 4) != 0 )
  {
    this = v8;
LABEL_5:
    TwoFingerClickRecognizer::SaveTapInfo(this, a4);
  }
  return 0LL;
}
