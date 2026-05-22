/*
 * XREFs of ?TapOneFingerDown@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801868CC
 * Callers:
 *     ?Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180186390 (-Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z @ 0x180185040 (-ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z.c)
 *     ?ContactsWithinBoundingBox@TwoFingerClickRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x180186474 (-ContactsWithinBoundingBox@TwoFingerClickRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 */

__int64 __fastcall TwoFingerClickRecognizer::TapOneFingerDown(
        TwoFingerClickRecognizer *this,
        const struct GestureSession *a2,
        char a3,
        int a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  const struct TouchContactInfo *v8; // rdi
  GestureRecognizer *v9; // rcx
  unsigned int v10; // r9d
  struct tagPOINT v12; // [rsp+38h] [rbp+10h] BYREF

  v12 = (struct tagPOINT)a2;
  if ( (a3 & 4) != 0 )
    goto LABEL_7;
  if ( a5 > 2 )
    goto LABEL_7;
  v8 = a6;
  if ( !TwoFingerClickRecognizer::ContactsWithinBoundingBox(this, 1u, a6) )
    goto LABEL_7;
  if ( a5 == 2 )
  {
    v10 = *((unsigned __int16 *)this + 30);
    *((_DWORD *)this + 10) = *((unsigned __int16 *)v8 + 21);
    *(_QWORD *)((char *)this + 52) = *(_QWORD *)((char *)v8 + 44);
    v12.x = *((_DWORD *)v8 + 1) - *((_DWORD *)v8 + 11);
    v12.y = *((_DWORD *)v8 + 2) - *((_DWORD *)v8 + 12);
    if ( !GestureRecognizer::ExceedsThreshold(v9, &v12, v10, v10) )
    {
      *((_DWORD *)this + 6) = a4 + *((unsigned __int16 *)this + 32);
      *((_WORD *)this + 8) |= 0x10u;
      *((_DWORD *)this + 5) = 2;
      return 0LL;
    }
LABEL_7:
    *((_WORD *)this + 8) = 0;
    *((_DWORD *)this + 5) = 4;
  }
  return 0LL;
}
