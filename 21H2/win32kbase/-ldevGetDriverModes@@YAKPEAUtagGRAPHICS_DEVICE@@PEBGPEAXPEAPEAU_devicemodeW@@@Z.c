/*
 * XREFs of ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x1C0015254
 * Callers:
 *     DrvBuildDevmodeList @ 0x1C0016E50 (DrvBuildDevmodeList.c)
 * Callees:
 *     ldevUnloadImage @ 0x1C00153B0 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C0015500 (ldevLoadDriver.c)
 *     Win32FreePool @ 0x1C002ADC0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C002AE08 (PALLOCMEM2.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ldevGetDriverModes(
        struct tagGRAPHICS_DEVICE *a1,
        const unsigned __int16 *a2,
        void *a3,
        struct _devicemodeW **a4)
{
  unsigned int v7; // ebx
  __int64 Driver; // rax
  __int64 v9; // rbp
  __int64 (__fastcall *v10)(void *, _QWORD, struct _devicemodeW *); // r14
  unsigned int v11; // edi
  struct _devicemodeW *v12; // rax
  int v13; // eax
  unsigned int v15; // r8d
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned int v18; // eax

  *a4 = 0LL;
  v7 = 0;
  Driver = ldevLoadDriver(a2);
  v9 = Driver;
  if ( Driver )
  {
    v10 = *(__int64 (__fastcall **)(void *, _QWORD, struct _devicemodeW *))(Driver + 392);
    if ( v10 )
    {
      while ( 1 )
      {
        v11 = v10(a3, 0LL, 0LL);
        if ( !v11 )
          break;
        if ( *(_DWORD *)(v9 + 56) < 0x30000u && v11 <= 0x10000 )
          v11 = 0x10000;
        v12 = (struct _devicemodeW *)PALLOCMEM2(v11);
        *a4 = v12;
        if ( !v12 )
          break;
        v7 = v10(a3, v11, v12);
        v13 = *((_DWORD *)a1 + 40);
        if ( (v13 & 0x800000) == 0 || v7 != -1 )
        {
          if ( (v13 & 0x4000000) != 0 )
          {
            v15 = 0;
            if ( v7 )
            {
              v16 = (__int64)*a4;
              do
              {
                v17 = v15;
                v15 += *(unsigned __int16 *)(v15 + v16 + 70) + *(unsigned __int16 *)(v15 + v16 + 68);
                v18 = 0;
                if ( *(_DWORD *)(v17 + v16 + 168) == 32 )
                  v18 = v7;
                v7 = v18;
              }
              while ( v15 < v18 );
            }
          }
          break;
        }
        Win32FreePool(*a4);
      }
    }
    ldevUnloadImage(v9);
    if ( v7 && ((*a4)->dmFields & 0x7C0000) != 0x7C0000 )
      return 0;
  }
  return v7;
}
