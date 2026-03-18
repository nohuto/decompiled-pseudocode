/*
 * XREFs of ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1C0150B20
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     HmgIncrementShareReferenceCount @ 0x1C003FFA0 (HmgIncrementShareReferenceCount.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C005E508 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z @ 0x1C0150C30 (-hFindIcmDIB@BRUSH@@QEAAPEAUHBITMAP__@@PEAX@Z.c)
 */

__int64 __fastcall BRUSH::bAddIcmDIB(BRUSH *this, void *a2, HSURF a3)
{
  unsigned int v6; // ebx
  _QWORD *v8; // rdi
  struct OBJECT *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rbx
  _BYTE v12[32]; // [rsp+20h] [rbp-38h] BYREF
  struct OBJECT *v13; // [rsp+40h] [rbp-18h]

  v6 = 0;
  if ( BRUSH::hFindIcmDIB(this, a2) )
    return 0LL;
  SURFREF::SURFREF((SURFREF *)v12, a3);
  if ( v13 )
  {
    v8 = (_QWORD *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                     gpLeakTrackingAllocator,
                     260LL,
                     0x18uLL,
                     0x6C646247u);
    if ( v8 )
    {
      v9 = v13;
      HmgIncrementShareReferenceCount(v13);
      ++*((_DWORD *)v9 + 42);
      *v8 = a2;
      v8[1] = a3;
      v10 = *((_QWORD *)this + 11);
      v8[2] = v10;
      v11 = *(_QWORD *)(SGDGetSessionState(v10) + 24);
      KeAcquireGuardedMutex(*(PKGUARDED_MUTEX *)(v11 + 144));
      *((_QWORD *)this + 11) = v8;
      KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(v11 + 144));
      v6 = 1;
    }
  }
  SURFREF::~SURFREF((SURFREF *)v12);
  return v6;
}
