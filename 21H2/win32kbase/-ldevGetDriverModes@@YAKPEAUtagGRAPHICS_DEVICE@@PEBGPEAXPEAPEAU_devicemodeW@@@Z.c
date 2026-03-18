/*
 * XREFs of ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C007A810
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C0079EE0 (DrvBuildDevmodeList.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C002FC74 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ldevUnloadImage @ 0x1C0075120 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C0075290 (ldevLoadDriver.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ldevGetDriverModes(
        struct tagGRAPHICS_DEVICE *a1,
        const unsigned __int16 *a2,
        void *a3,
        struct _devicemodeW **a4)
{
  int v5; // r8d
  unsigned int v8; // ebx
  struct _LDEV *Driver; // rax
  __int64 *v10; // r14
  __int64 (__fastcall *v11)(void *, _QWORD, struct _devicemodeW *); // rsi
  unsigned int v12; // eax
  unsigned int v13; // ebp
  struct _devicemodeW *v14; // rax
  int v15; // eax
  unsigned int v17; // r8d
  char *v18; // r9
  __int64 v19; // rdx
  unsigned int v20; // eax

  v5 = *((_DWORD *)a1 + 40) & 0x4000000;
  *a4 = 0LL;
  v8 = 0;
  Driver = ldevLoadDriver(a2, 1, (v5 | 0x2000000u) >> 25);
  v10 = (__int64 *)Driver;
  if ( Driver )
  {
    v11 = (__int64 (__fastcall *)(void *, _QWORD, struct _devicemodeW *))*((_QWORD *)Driver + 49);
    if ( v11 )
    {
      while ( 1 )
      {
        v12 = v11(a3, 0LL, 0LL);
        v13 = v12;
        if ( !v12 )
          break;
        v14 = (struct _devicemodeW *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                       (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
                                       260LL,
                                       v12,
                                       1936876615);
        *a4 = v14;
        if ( !v14 )
          break;
        v8 = v11(a3, v13, v14);
        v15 = *((_DWORD *)a1 + 40);
        if ( (v15 & 0x800000) == 0 || v8 != -1 )
        {
          if ( (v15 & 0x4000000) != 0 )
          {
            v17 = 0;
            if ( v8 )
            {
              v18 = (char *)*a4;
              do
              {
                v19 = v17;
                v17 += *(unsigned __int16 *)&v18[v17 + 70] + *(unsigned __int16 *)&v18[v17 + 68];
                v20 = 0;
                if ( *(_DWORD *)&v18[v19 + 168] == 32 )
                  v20 = v8;
                v8 = v20;
              }
              while ( v17 < v20 );
            }
          }
          break;
        }
        if ( *a4 )
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            *a4);
      }
    }
    ldevUnloadImage(v10);
    if ( v8 && ((*a4)->dmFields & 0x7C0000) != 0x7C0000 )
      return 0;
  }
  return v8;
}
