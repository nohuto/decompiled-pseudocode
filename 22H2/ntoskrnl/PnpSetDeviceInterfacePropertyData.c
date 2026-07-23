/*
 * XREFs of PnpSetDeviceInterfacePropertyData @ 0x14077DDA8
 * Callers:
 *     IoSetDeviceInterfacePropertyData @ 0x14077DD60 (IoSetDeviceInterfacePropertyData.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402CC2B0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     PnpUnicodeStringToWstrFree @ 0x1406AE574 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1406B033C (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlSetObjectProperty @ 0x140741C2C (PiPnpRtlSetObjectProperty.c)
 *     RtlLCIDToCultureName @ 0x140916070 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpSetDeviceInterfacePropertyData(
        __int64 a1,
        __int64 a2,
        LCID a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        const wchar_t *a7)
{
  struct _KTHREAD *CurrentThread; // rax
  int v11; // ebx
  WCHAR *v13; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING String; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v15[176]; // [rsp+70h] [rbp-90h] BYREF

  memset(v15, 0, 0xAAuLL);
  *(_QWORD *)&String.Length = 0LL;
  v13 = 0LL;
  if ( !a1 || !*(_QWORD *)(a1 + 8) || !*(_WORD *)a1 )
    return (unsigned int)-1073741811;
  if ( a3 )
  {
    String.MaximumLength = 170;
    String.Buffer = (wchar_t *)v15;
    if ( !RtlLCIDToCultureName(a3, &String) )
      return (unsigned int)-1073741823;
  }
  else
  {
    String.Buffer = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpDevicePropertyLock, 1u);
  v11 = PnpUnicodeStringToWstr((__int16 **)&v13, 0LL, (unsigned __int16 *)a1);
  if ( v11 >= 0 )
    v11 = PiPnpRtlSetObjectProperty(*(__int64 *)&PiPnpRtlCtx, v13, 3, 0LL, (__int64)String.Buffer, a2, a5, a7, a6, 0);
  PnpUnicodeStringToWstrFree(v13, a1);
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v11 == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)v11;
}
