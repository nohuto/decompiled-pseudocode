/*
 * XREFs of PnpGetDeviceInstancePropertyData @ 0x1408A0D80
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402CC670 (ExAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 *     _PnpGetObjectProperty @ 0x1406B095C (_PnpGetObjectProperty.c)
 *     RtlLCIDToCultureName @ 0x140916070 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpGetDeviceInstancePropertyData(
        __int64 a1,
        __int64 a2,
        LCID a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8)
{
  int ObjectProperty; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v14; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING String; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v16[176]; // [rsp+80h] [rbp-80h] BYREF

  memset(v16, 0, 0xAAuLL);
  *(_QWORD *)&String.Length = 0LL;
  v14 = 0;
  if ( a3 )
  {
    String.Buffer = (wchar_t *)v16;
    String.MaximumLength = 170;
    if ( !RtlLCIDToCultureName(a3, &String) )
      return (unsigned int)-1073741823;
  }
  else
  {
    String.Buffer = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpDevicePropertyLock, 1u);
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     a1,
                     1LL,
                     0LL,
                     (__int64)String.Buffer,
                     a2,
                     (__int64)&v14,
                     a6,
                     a5,
                     a7,
                     0);
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( ObjectProperty >= 0 )
    *a8 = v14;
  if ( ObjectProperty == -1073741275 )
    return (unsigned int)-1073741772;
  return (unsigned int)ObjectProperty;
}
