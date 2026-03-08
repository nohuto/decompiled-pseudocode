/*
 * XREFs of ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C0028890
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C0028AF8 (DrvBuildDevmodeList.c)
 * Callees:
 *     ldevLoadDriver @ 0x1C0024CA0 (ldevLoadDriver.c)
 *     ldevUnloadImage @ 0x1C002B6B0 (ldevUnloadImage.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
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
  struct _LDEV *v10; // r14
  __int64 (__fastcall *v11)(void *, _QWORD, struct _devicemodeW *); // rsi
  unsigned int v12; // eax
  unsigned int v13; // ebp
  struct _devicemodeW *v14; // rax
  unsigned int v15; // eax
  int v16; // ecx
  unsigned int v18; // r8d
  char *v19; // r9
  __int64 v20; // rdx
  unsigned int v21; // eax

  v5 = *((_DWORD *)a1 + 40) & 0x4000000;
  *a4 = 0LL;
  v8 = 0;
  Driver = ldevLoadDriver(a2, 1u, (v5 | 0x2000000u) >> 25);
  v10 = Driver;
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
                                       gpLeakTrackingAllocator,
                                       0x104uLL,
                                       v12,
                                       0x73726447u);
        *a4 = v14;
        if ( !v14 )
          break;
        v15 = v11(a3, v13, v14);
        v16 = *((_DWORD *)a1 + 40);
        v8 = v15;
        if ( (v16 & 0x800000) == 0 || v15 != -1 )
        {
          if ( (v16 & 0x4000000) != 0 )
          {
            v18 = 0;
            if ( v15 )
            {
              v19 = (char *)*a4;
              do
              {
                v20 = v18;
                v18 += *(unsigned __int16 *)&v19[v18 + 70] + *(unsigned __int16 *)&v19[v18 + 68];
                v21 = 0;
                if ( *(_DWORD *)&v19[v20 + 168] == 32 )
                  v21 = v8;
                v8 = v21;
              }
              while ( v18 < v21 );
            }
          }
          break;
        }
        if ( *a4 )
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *a4);
      }
    }
    ldevUnloadImage(v10);
    if ( v8 && ((*a4)->dmFields & 0x7C0000) != 0x7C0000 )
      return 0;
  }
  return v8;
}
