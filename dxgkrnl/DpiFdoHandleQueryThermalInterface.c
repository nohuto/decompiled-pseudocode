/*
 * XREFs of DpiFdoHandleQueryThermalInterface @ 0x1C039E600
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0004778 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     DpiEnableD3Requests @ 0x1C0180A2C (DpiEnableD3Requests.c)
 *     DpiQueryMiniportInterface @ 0x1C01F65F4 (DpiQueryMiniportInterface.c)
 */

__int64 __fastcall DpiFdoHandleQueryThermalInterface(_QWORD *Object, __int16 a2, __int16 a3, _QWORD *a4)
{
  __int64 v4; // rbx
  int MiniportInterface; // edi
  _BYTE *Pool2; // rax
  __int64 v11; // [rsp+20h] [rbp-50h]
  __int128 Src; // [rsp+30h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-30h]
  _QWORD v14[3]; // [rsp+50h] [rbp-20h] BYREF

  v4 = Object[8];
  Src = 0LL;
  v13 = 0LL;
  memset(v14, 0, sizeof(v14));
  if ( a3 != 1 )
  {
    WdLogSingleEntry1(3LL, 0LL);
    return 3221225659LL;
  }
  if ( (unsigned __int16)a2 < 0x38u )
  {
    WdLogSingleEntry1(2LL, -1073741789LL);
    return 3221225507LL;
  }
  KeEnterCriticalRegion();
  if ( *(_BYTE *)(v4 + 484) )
    DpiCheckForOutstandingD3Requests(v4);
  ExAcquireResourceSharedLite(*(PERESOURCE *)(v4 + 168), 1u);
  if ( *(_QWORD *)(v4 + 4880) )
    goto LABEL_19;
  MiniportInterface = DpiQueryMiniportInterface(
                        (__int64)Object,
                        (__int64)&GUID_THERMAL_COOLING_INTERFACE,
                        a2,
                        1,
                        v11,
                        (__int64)&Src);
  if ( MiniportInterface < 0 )
  {
LABEL_16:
    if ( *(_BYTE *)(v4 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    goto LABEL_26;
  }
  if ( *(_OWORD *)&v14[1] != 0LL )
  {
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, 64LL, 1953656900LL);
    *(_QWORD *)(v4 + 4880) = Pool2;
    if ( !Pool2 )
    {
      MiniportInterface = -1073741670;
      WdLogSingleEntry1(6LL, -1073741670LL);
      if ( *((_QWORD *)&v13 + 1) )
      {
        (*((void (__fastcall **)(_QWORD))&v13 + 1))(*((_QWORD *)&Src + 1));
        Src = 0LL;
        v13 = 0LL;
        memset(v14, 0, sizeof(v14));
      }
      goto LABEL_16;
    }
    *Pool2 = 0;
    *(_BYTE *)(*(_QWORD *)(v4 + 4880) + 1LL) = 0;
    *(_BYTE *)(*(_QWORD *)(v4 + 4880) + 2LL) = 0;
    *(_DWORD *)(*(_QWORD *)(v4 + 4880) + 4LL) = 100;
    memmove((void *)(*(_QWORD *)(v4 + 4880) + 8LL), &Src, 0x38uLL);
LABEL_19:
    memmove(a4, &unk_1C013ADD0, 0x38uLL);
    a4[1] = Object;
    if ( !*(_QWORD *)(*(_QWORD *)(v4 + 4880) + 48LL) )
      a4[5] = 0LL;
    if ( !*(_QWORD *)(*(_QWORD *)(v4 + 4880) + 56LL) )
      a4[6] = 0LL;
    ObfReferenceObject(Object);
    if ( *(_BYTE *)(v4 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
    MiniportInterface = 0;
    goto LABEL_26;
  }
  WdLogSingleEntry1(3LL, 0LL);
  if ( *(_BYTE *)(v4 + 484) )
    DpiEnableD3Requests(*(_QWORD *)(v4 + 24));
  MiniportInterface = -1073741637;
LABEL_26:
  ExReleaseResourceLite(*(PERESOURCE *)(v4 + 168));
  KeLeaveCriticalRegion();
  return (unsigned int)MiniportInterface;
}
