/*
 * XREFs of ?Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180186390
 * Callers:
 *     <none>
 * Callees:
 *     ?TapInactive@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801867D8 (-TapInactive@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?TapOneFingerDown@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801868CC (-TapOneFingerDown@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@.c)
 *     ?TapOneFingerUp@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180186998 (-TapOneFingerUp@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?TapStarted@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180186A0C (-TapStarted@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 */

__int64 __fastcall TwoFingerClickRecognizer::Add(
        TwoFingerClickRecognizer *this,
        const struct GestureSession *a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  unsigned int v6; // r11d
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx

  v6 = 0;
  if ( (*((_BYTE *)this + 16) & 0x10) != 0 && a4 >= *((_DWORD *)this + 6) )
  {
    *((_WORD *)this + 8) = 0;
    *((_DWORD *)this + 5) = 4;
  }
  if ( (*((_DWORD *)a2 + 3) & *((_DWORD *)this + 2)) == 0 )
    return 0LL;
  if ( (a3 & 1) != 0 )
  {
    *((_WORD *)this + 8) &= ~0x10u;
    *((_WORD *)this + 8) |= 8u;
    *((_DWORD *)this + 5) = 0;
    v9 = 0;
  }
  else
  {
    v9 = *((_DWORD *)this + 5);
  }
  if ( !v9 )
    return (unsigned int)TwoFingerClickRecognizer::TapInactive(this, a2, a3, a4, a5, a6);
  v10 = v9 - 1;
  if ( !v10 )
    return (unsigned int)TwoFingerClickRecognizer::TapOneFingerDown(this, a2, a3, a4, a5, a6);
  v11 = v10 - 1;
  if ( !v11 )
    return (unsigned int)TwoFingerClickRecognizer::TapStarted(this, a2, a3, a4, a5, a6);
  if ( v11 == 1 )
    return (unsigned int)TwoFingerClickRecognizer::TapOneFingerUp(this, a2, a3, a4, a5, a6);
  return v6;
}
