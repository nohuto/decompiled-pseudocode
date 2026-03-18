/*
 * XREFs of NtGdiOpenDCW @ 0x1C0071250
 * Callers:
 *     <none>
 * Callees:
 *     PopThreadGuardedObject @ 0x1C0023630 (PopThreadGuardedObject.c)
 *     AllocFreeTmpBuffer @ 0x1C002FCF0 (AllocFreeTmpBuffer.c)
 *     FreeTmpBuffer @ 0x1C0030FE0 (FreeTmpBuffer.c)
 *     hdcOpenDCW @ 0x1C0071480 (hdcOpenDCW.c)
 *     UserGetDesktopDC @ 0x1C0071BC0 (UserGetDesktopDC.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C00CD710 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C00CDD80 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 */

__int64 __fastcall NtGdiOpenDCW(
        unsigned __int16 *a1,
        struct _devicemodeW *a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        struct _DRIVER_INFO_2W *a8,
        __int64 a9)
{
  __int64 v11; // r14
  unsigned int v12; // ecx
  char *v13; // r15
  size_t v14; // rdi
  void *v15; // rsi
  int v16; // edi
  int v17; // eax
  struct _devicemodeW *v19; // [rsp+60h] [rbp-48h]
  struct _DRIVER_INFO_2W *v20; // [rsp+68h] [rbp-40h]

  v11 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( !a1 )
    return UserGetDesktopDC(a4);
  v12 = *a1;
  v13 = (char *)*((_QWORD *)a1 + 1);
  if ( *a1 )
  {
    v14 = v12;
    v15 = (void *)AllocFreeTmpBuffer(v12 + 2);
    if ( v15 )
    {
      if ( &v13[v14] < v13 || (unsigned __int64)&v13[v14] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v15, v13, v14);
      *((_WORD *)v15 + (v14 >> 1)) = 0;
    }
  }
  else
  {
    v15 = 0LL;
  }
  if ( !a2 || (v19 = CaptureDEVMODEW(a2)) != 0LL )
  {
    v16 = 1;
    v17 = 1;
  }
  else
  {
    v17 = 0;
    v16 = 1;
  }
  if ( !v17 || a8 && (v20 = CaptureDriverInfo2W(a8)) == 0LL )
    v16 = 0;
  if ( v16 )
    v11 = hdcOpenDCW((PCWSTR)v15, a7, 0LL, (__int64)v20, a9, a6);
  if ( v15 )
    FreeTmpBuffer((char *)v15);
  if ( v19 )
  {
    PopThreadGuardedObject(&v19[-1].dmICMMethod);
    if ( v19 != (struct _devicemodeW *)32 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        &v19[-1].dmICMMethod);
  }
  if ( v20 )
  {
    PopThreadGuardedObject((_QWORD *)v20 - 4);
    if ( v20 != (struct _DRIVER_INFO_2W *)32 )
      NSInstrumentation::CLeakTrackingAllocator::Free(
        (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
        (char *)v20 - 32);
  }
  return v11;
}
