/*
 * XREFs of ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1C0036710
 * Callers:
 *     RIMDeviceClassNotifyUsingAsyncPnpWorkNotification @ 0x1C0037A80 (RIMDeviceClassNotifyUsingAsyncPnpWorkNotification.c)
 *     W32kEtwEnableCallback @ 0x1C00BE69C (W32kEtwEnableCallback.c)
 *     ?W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00D3750 (-W32kBaseInputEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     ?W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C00D44A0 (-W32kTraceLoggingEnableCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     Win32kBaseVideoPortCallout @ 0x1C00D9A00 (Win32kBaseVideoPortCallout.c)
 *     W32CalloutDispatch @ 0x1C00ED390 (W32CalloutDispatch.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C015C290 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z @ 0x1C0161760 (-InputCoreProviderCallback@@YAXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z.c)
 *     RIMDeviceNotifyUsingAsyncPnpWorkNotification @ 0x1C01D0004 (RIMDeviceNotifyUsingAsyncPnpWorkNotification.c)
 *     rimDeviceResetApc @ 0x1C01E2FC0 (rimDeviceResetApc.c)
 *     Win32kBaseDriverEntry @ 0x1C0320F10 (Win32kBaseDriverEntry.c)
 * Callees:
 *     ReferenceW32Thread @ 0x1C0036850 (ReferenceW32Thread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

CTempW32ThreadNonPaged *__fastcall CTempW32ThreadNonPaged::CTempW32ThreadNonPaged(CTempW32ThreadNonPaged *this)
{
  __int128 v2; // xmm0
  __int64 v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  __int64 v13; // rax
  CTempW32ThreadNonPaged *result; // rax
  __int128 v15; // [rsp+20h] [rbp-D8h]
  __int128 v16; // [rsp+30h] [rbp-C8h]
  __int128 v17; // [rsp+40h] [rbp-B8h]
  __int128 v18; // [rsp+50h] [rbp-A8h]
  __int128 v19; // [rsp+60h] [rbp-98h]
  __int128 v20; // [rsp+70h] [rbp-88h]
  __int128 v21; // [rsp+80h] [rbp-78h]
  __int128 v22; // [rsp+90h] [rbp-68h]
  _OWORD v23[4]; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-18h]

  memset(this, 0, 0xC8uLL);
  v2 = *(_OWORD *)this;
  v3 = *((_QWORD *)this + 24);
  v4 = *((_OWORD *)this + 1);
  *((_BYTE *)this + 200) = 0;
  v15 = v2;
  v16 = v4;
  v17 = *((_OWORD *)this + 2);
  v18 = *((_OWORD *)this + 3);
  v19 = *((_OWORD *)this + 4);
  v20 = *((_OWORD *)this + 5);
  v21 = *((_OWORD *)this + 6);
  v22 = *((_OWORD *)this + 7);
  v5 = *((_OWORD *)this + 9);
  v23[0] = *((_OWORD *)this + 8);
  v6 = *((_OWORD *)this + 10);
  v23[1] = v5;
  v7 = *((_OWORD *)this + 11);
  v23[2] = v6;
  v23[3] = v7;
  v24 = v3;
  v11 = (_QWORD *)((__int64 (__fastcall *)(__int64, _OWORD *, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))PsGetCurrentThreadWin32Thread)(
                    v8,
                    v23,
                    v9,
                    v10,
                    v15,
                    *((_QWORD *)&v15 + 1),
                    v16,
                    *((_QWORD *)&v16 + 1),
                    v17,
                    *((_QWORD *)&v17 + 1),
                    v18,
                    *((_QWORD *)&v18 + 1),
                    v19,
                    *((_QWORD *)&v19 + 1),
                    v20,
                    *((_QWORD *)&v20 + 1),
                    v21,
                    *((_QWORD *)&v21 + 1),
                    v22,
                    *((_QWORD *)&v22 + 1));
  v12 = v11;
  if ( v11 )
  {
    v13 = *v11;
    if ( v13 && *(_DWORD *)(v13 + 8) )
    {
      *(_QWORD *)this = v13;
      if ( (int)ReferenceW32Thread(*v12) <= 1 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 85LL);
    }
    return this;
  }
  else
  {
    ExInitializeFastOwnerEntry((char *)this + 56);
    ExInitializeFastOwnerEntry((char *)this + 128);
    *((_DWORD *)this + 11) |= 4u;
    PsSetThreadWin32Thread(KeGetCurrentThread(), this, 0LL);
    result = this;
    *((_BYTE *)this + 200) = 1;
  }
  return result;
}
