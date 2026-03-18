/*
 * XREFs of ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C00171B4
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C00169E4 (DrvBuildDevmodeList.c)
 * Callees:
 *     ldevLoadDriver @ 0x1C0017300 (ldevLoadDriver.c)
 *     ldevUnloadImage @ 0x1C0017800 (ldevUnloadImage.c)
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0029EC8 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ldevGetDriverModes(
        struct tagGRAPHICS_DEVICE *a1,
        const unsigned __int16 *a2,
        void *a3,
        struct _devicemodeW **a4)
{
  unsigned int v7; // ebx
  __int64 Driver; // rax
  void *v9; // r14
  __int64 (__fastcall *v10)(void *, _QWORD, struct _devicemodeW *); // rsi
  unsigned int v11; // eax
  unsigned int v12; // ebp
  struct _devicemodeW *v13; // rax
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int v17; // r8d
  char *v18; // r9
  __int64 v19; // rdx
  unsigned int v20; // eax

  *a4 = 0LL;
  v7 = 0;
  Driver = ldevLoadDriver(a2);
  v9 = (void *)Driver;
  if ( Driver )
  {
    v10 = *(__int64 (__fastcall **)(void *, _QWORD, struct _devicemodeW *))(Driver + 392);
    if ( v10 )
    {
      while ( 1 )
      {
        v11 = v10(a3, 0LL, 0LL);
        v12 = v11;
        if ( !v11 )
          break;
        v13 = (struct _devicemodeW *)NSInstrumentation::CLeakTrackingAllocator::Allocate(
                                       gpLeakTrackingAllocator,
                                       0x104uLL,
                                       v11,
                                       0x73726447u);
        *a4 = v13;
        if ( !v13 )
          break;
        v14 = v10(a3, v12, v13);
        v15 = *((_DWORD *)a1 + 40);
        v7 = v14;
        if ( (v15 & 0x800000) == 0 || v14 != -1 )
        {
          if ( (v15 & 0x4000000) != 0 )
          {
            v17 = 0;
            if ( v14 )
            {
              v18 = (char *)*a4;
              do
              {
                v19 = v17;
                v17 += *(unsigned __int16 *)&v18[v17 + 70] + *(unsigned __int16 *)&v18[v17 + 68];
                v20 = 0;
                if ( *(_DWORD *)&v18[v19 + 168] == 32 )
                  v20 = v7;
                v7 = v20;
              }
              while ( v17 < v20 );
            }
          }
          break;
        }
        if ( *a4 )
          NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, *a4);
      }
    }
    ldevUnloadImage(v9);
    if ( v7 && ((*a4)->dmFields & 0x7C0000) != 0x7C0000 )
      return 0;
  }
  return v7;
}
