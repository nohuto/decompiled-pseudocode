// local variable allocation has failed, the output may be wrong!
void __fastcall FxIFRStart(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *a2,
        _DRIVER_OBJECT *RegistryPath)
{
  unsigned int v4; // edi
  __int64 Pool2; // rax
  unsigned __int64 v6; // rdx
  unsigned __int64 *v7; // r8
  void *v8; // r10
  const _UNICODE_STRING *preciseTimeStamp; // [rsp+68h] [rbp+10h] OVERLAPPED BYREF
  _DRIVER_OBJECT *useTimeStamp; // [rsp+70h] [rbp+18h] OVERLAPPED BYREF
  unsigned int size; // [rsp+78h] [rbp+20h] BYREF

  useTimeStamp = RegistryPath;
  preciseTimeStamp = a2;
  size = 0;
  LOBYTE(useTimeStamp) = 0;
  LOBYTE(preciseTimeStamp) = 0;
  if ( !unk_1C009FF60 )
  {
    if ( FxDriverGlobals )
    {
      if ( !FxDriverGlobals->WdfLogHeader )
      {
        FxIFRGetSettings(
          FxDriverGlobals,
          a2,
          &size,
          (unsigned __int8 *)&useTimeStamp,
          (unsigned __int8 *)&preciseTimeStamp);
        v4 = size;
        Pool2 = ExAllocatePool2(64LL, size, 1733064774LL);
        if ( Pool2 )
        {
          *(_DWORD *)(Pool2 + 28) = 0;
          *(_QWORD *)(Pool2 + 16) = Pool2 + 72;
          *(_DWORD *)(Pool2 + 24) = v4 - 72;
          *(_BYTE *)(Pool2 + 68) = (_BYTE)useTimeStamp;
          *(_BYTE *)(Pool2 + 69) = (_BYTE)preciseTimeStamp;
          *(_GUID *)Pool2 = WdfTraceGuid;
          RtlStringCopyWorkerA((char *)(Pool2 + 36), v6, v7, FxDriverGlobals->Public.DriverName);
          FxDriverGlobals->WdfLogHeader = v8;
          _InterlockedIncrement(&FxDriverGlobals->WdfLogHeaderRefCount);
          WPP_IFR_SF_(FxDriverGlobals, 4u, 0x11u, 0xAu, WPP_tracing_cpp_Traceguids);
          if ( size > 0x1000 )
            WPP_IFR_SF_dd(FxDriverGlobals, 4u, 0x11u, 0xBu, WPP_tracing_cpp_Traceguids, size, size >> 12);
        }
      }
    }
  }
}
