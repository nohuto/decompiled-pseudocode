/*
 * XREFs of ?DragInDeadZone@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180185DB8
 * Callers:
 *     ?Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180185B90 (-Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z @ 0x180185040 (-ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z.c)
 *     ?ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x180185C9C (-ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 *     ?DeliverGesture@TwoFingerDragRecognizer@@AEAAX_NPEBUTouchContactInfo@@@Z @ 0x180185D60 (-DeliverGesture@TwoFingerDragRecognizer@@AEAAX_NPEBUTouchContactInfo@@@Z.c)
 */

__int64 __fastcall TwoFingerDragRecognizer::DragInDeadZone(
        TwoFingerDragRecognizer *this,
        const struct GestureSession *a2,
        char a3,
        __int64 a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  const struct TouchContactInfo *v7; // rdi
  unsigned int v8; // r9d
  struct tagPOINT v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = (struct tagPOINT)a2;
  if ( (a3 & 4) != 0 || (v7 = a6, !TwoFingerDragRecognizer::ContactsAreValid(this, a5, a6)) )
  {
    *((_WORD *)this + 8) = 0;
    *((_DWORD *)this + 5) = 4;
  }
  else
  {
    v8 = *((unsigned __int16 *)this + 39);
    v10.x = (*((_DWORD *)v7 + 11) + *((_DWORD *)v7 + 1)) / 2 - *((_DWORD *)this + 13);
    v10.y = (*((_DWORD *)v7 + 12) + *((_DWORD *)v7 + 2)) / 2 - *((_DWORD *)this + 14);
    if ( GestureRecognizer::ExceedsThreshold((GestureRecognizer *)2, &v10, v8, v8) )
    {
      TwoFingerDragRecognizer::DeliverGesture(this, 1, v7);
      *((_DWORD *)this + 5) = 3;
    }
  }
  return 0LL;
}
