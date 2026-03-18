/*
 * XREFs of ??_GCPrimitiveBuffer@@QEAAPEAXI@Z @ 0x1800116B0
 * Callers:
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x18001018C (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 *     ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIBitmapResource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x18001119C (-Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV-$span@PEAVI.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800895A4 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010F4B8 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall CPrimitiveBuffer::`scalar deleting destructor'(void **this)
{
  operator delete(*this);
  operator delete(this, 0x10uLL);
  return this;
}
