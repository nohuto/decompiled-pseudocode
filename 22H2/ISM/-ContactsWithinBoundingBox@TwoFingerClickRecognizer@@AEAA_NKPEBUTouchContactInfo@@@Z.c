/*
 * XREFs of ?ContactsWithinBoundingBox@TwoFingerClickRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x180186474
 * Callers:
 *     ?TapOneFingerDown@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801868CC (-TapOneFingerDown@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@.c)
 *     ?TapOneFingerUp@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180186998 (-TapOneFingerUp@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?TapStarted@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x180186A0C (-TapStarted@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x180183DB8 (-MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z.c)
 */

char __fastcall TwoFingerClickRecognizer::ContactsWithinBoundingBox(
        TwoFingerClickRecognizer *this,
        unsigned int a2,
        const struct TouchContactInfo *a3)
{
  __int64 v3; // r11
  TwoFingerClickRecognizer *v6; // r10
  int v7; // eax
  __int64 v8; // rax
  unsigned int v9; // r8d
  GestureRecognizer *v10; // rcx
  int v11; // r11d
  struct tagPOINT v13; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  v6 = this;
  if ( !a2 )
    return 1;
  while ( 1 )
  {
    v7 = *((unsigned __int16 *)a3 + 20 * v3 + 1);
    if ( v7 == *((_DWORD *)v6 + 9) )
    {
      v8 = *(_QWORD *)((char *)v6 + 44);
    }
    else
    {
      if ( v7 != *((_DWORD *)v6 + 10) )
        return 0;
      v8 = *(_QWORD *)((char *)v6 + 52);
    }
    v9 = *((unsigned __int16 *)v6 + 33);
    v10 = (GestureRecognizer *)(unsigned int)(v8 - *((_DWORD *)a3 + 10 * v3 + 1));
    v13 = (struct tagPOINT)__PAIR64__(HIDWORD(v8) - *((_DWORD *)a3 + 10 * v3 + 2), (unsigned int)v10);
    if ( GestureRecognizer::MeetsThreshold(v10, &v13, v9) )
      break;
    v3 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v3 >= a2 )
      return 1;
  }
  return 0;
}
