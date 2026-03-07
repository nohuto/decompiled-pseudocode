__int64 __fastcall NtGdiOpenDCW(
        unsigned __int16 *a1,
        struct _devicemodeW *a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        void *a7,
        struct _DRIVER_INFO_2W *a8,
        ULONG64 a9)
{
  HDC v12; // r14
  unsigned int v14; // ecx
  char *v15; // r15
  size_t v16; // rdi
  void *v17; // rsi
  int v18; // edi
  int v19; // eax
  struct _devicemodeW *v20; // [rsp+60h] [rbp-48h]
  struct _DRIVER_INFO_2W *v21; // [rsp+68h] [rbp-40h]

  v12 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  if ( !a1 )
    return UserGetDesktopDC(a4);
  v14 = *a1;
  v15 = (char *)*((_QWORD *)a1 + 1);
  if ( *a1 )
  {
    v16 = v14;
    v17 = (void *)AllocFreeTmpBuffer(v14 + 2);
    if ( v17 )
    {
      if ( &v15[v16] < v15 || (unsigned __int64)&v15[v16] > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v17, v15, v16);
      *((_WORD *)v17 + (v16 >> 1)) = 0;
    }
  }
  else
  {
    v17 = 0LL;
  }
  if ( !a2 || (v20 = CaptureDEVMODEW(a2)) != 0LL )
  {
    v18 = 1;
    v19 = 1;
  }
  else
  {
    v19 = 0;
    v18 = 1;
  }
  if ( !v19 || a8 && (v21 = CaptureDriverInfo2W(a8)) == 0LL )
    v18 = 0;
  if ( v18 )
    v12 = hdcOpenDCW((WCHAR *)v17, v20, a4, a5, a7, 0LL, (__int64)v21, a9, a6);
  if ( v17 )
    FreeTmpBuffer((__int64)v17);
  if ( v20 )
  {
    PopThreadGuardedObject(&v20[-1].dmICMMethod);
    if ( v20 != (struct _devicemodeW *)32 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, &v20[-1].dmICMMethod);
  }
  if ( v21 )
  {
    PopThreadGuardedObject((char *)v21 - 32);
    if ( v21 != (struct _DRIVER_INFO_2W *)32 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)v21 - 32);
  }
  return (__int64)v12;
}
