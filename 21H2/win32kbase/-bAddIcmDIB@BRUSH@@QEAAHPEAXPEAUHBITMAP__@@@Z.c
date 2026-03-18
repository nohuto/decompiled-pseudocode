/*
 * XREFs of ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C0168DF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F08C (--1SURFREF@@QEAA@XZ.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0063C24 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00CB950 (HmgIncrementShareReferenceCount.c)
 *     ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1C0168EE0 (-hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z.c)
 */

__int64 __fastcall BRUSH::bAddIcmDIB(BRUSH *this, void *a2, HSURF a3)
{
  unsigned int v6; // ebx
  _QWORD *v8; // rdi
  struct OBJECT *v9; // rbx
  _BYTE v10[32]; // [rsp+20h] [rbp-38h] BYREF
  struct OBJECT *v11; // [rsp+40h] [rbp-18h]

  v6 = 0;
  if ( BRUSH::hFindIcmDIB(this, a2) )
    return 0LL;
  SURFREF::SURFREF((SURFREF *)v10, a3);
  if ( v11 )
  {
    v8 = (_QWORD *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                     (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                     260LL,
                     0x18uLL,
                     1818518087);
    if ( v8 )
    {
      v9 = v11;
      HmgIncrementShareReferenceCount(v11);
      ++*((_DWORD *)v9 + 42);
      *v8 = a2;
      v8[1] = a3;
      v8[2] = *((_QWORD *)this + 11);
      KeAcquireGuardedMutex(ghfmMemory);
      *((_QWORD *)this + 11) = v8;
      KeReleaseGuardedMutex(ghfmMemory);
      v6 = 1;
    }
  }
  SURFREF::~SURFREF((SURFREF *)v10);
  return v6;
}
