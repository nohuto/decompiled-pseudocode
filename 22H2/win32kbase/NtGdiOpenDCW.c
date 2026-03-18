/*
 * XREFs of NtGdiOpenDCW @ 0x1C005A5E0
 * Callers:
 *     <none>
 * Callees:
 *     PopThreadGuardedObject @ 0x1C003CB00 (PopThreadGuardedObject.c)
 *     UserGetDesktopDC @ 0x1C005A7D0 (UserGetDesktopDC.c)
 *     AllocFreeTmpBuffer @ 0x1C005AB80 (AllocFreeTmpBuffer.c)
 *     FreeTmpBuffer @ 0x1C005AD30 (FreeTmpBuffer.c)
 *     hdcOpenDCW @ 0x1C005ADC0 (hdcOpenDCW.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C008C460 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memmove @ 0x1C00D6F40 (memmove.c)
 *     ?CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z @ 0x1C0158750 (-CaptureDEVMODEW@@YAPEAU_devicemodeW@@REAU1@@Z.c)
 *     ?CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z @ 0x1C0158840 (-CaptureDriverInfo2W@@YAPEAU_DRIVER_INFO_2W@@PEAU1@@Z.c)
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
  unsigned int v13; // ecx
  char *v14; // r15
  size_t v15; // rdi
  void *v16; // rsi
  int v17; // edi
  int v18; // eax
  struct _devicemodeW *v19; // [rsp+60h] [rbp-48h]
  struct _DRIVER_INFO_2W *v20; // [rsp+68h] [rbp-40h]

  v11 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( !a1 )
    return UserGetDesktopDC(a4);
  v13 = *a1;
  v14 = (char *)*((_QWORD *)a1 + 1);
  if ( *a1 )
  {
    v15 = v13;
    v16 = (void *)AllocFreeTmpBuffer(v13 + 2);
    if ( v16 )
    {
      if ( &v14[v15] < v14 || (unsigned __int64)&v14[v15] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v16, v14, v15);
      *((_WORD *)v16 + (v15 >> 1)) = 0;
    }
  }
  else
  {
    v16 = 0LL;
  }
  if ( !a2 || (v19 = CaptureDEVMODEW(a2)) != 0LL )
  {
    v17 = 1;
    v18 = 1;
  }
  else
  {
    v18 = 0;
    v17 = 1;
  }
  if ( !v18 || a8 && (v20 = CaptureDriverInfo2W(a8)) == 0LL )
    v17 = 0;
  if ( v17 )
    v11 = hdcOpenDCW((PCWSTR)v16, a7, 0LL, (__int64)v20, a9, a6);
  if ( v16 )
    FreeTmpBuffer(v16, a2);
  if ( v19 )
  {
    PopThreadGuardedObject(&v19[-1].dmICMMethod);
    if ( v19 != (struct _devicemodeW *)32 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, &v19[-1].dmICMMethod);
  }
  if ( v20 )
  {
    PopThreadGuardedObject((_QWORD *)v20 - 4);
    if ( v20 != (struct _DRIVER_INFO_2W *)32 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v20 - 32);
  }
  return v11;
}
