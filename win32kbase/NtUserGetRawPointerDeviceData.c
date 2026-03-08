/*
 * XREFs of NtUserGetRawPointerDeviceData @ 0x1C0171100
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004E000 (UserSessionSwitchLeaveCrit.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C005040C (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     ?AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0068568 (-AllocateQuotaZInit@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C009B7C0 (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 *     ?GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C01F96B8 (-GetPointerRawDataInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIIPEBUtagPOINTER_DEVICE_PRO.c)
 */

__int64 __fastcall NtUserGetRawPointerDeviceData(__int64 a1, __int64 a2, __int64 a3, char *a4, volatile void *Address)
{
  __int64 v6; // rbx
  unsigned int v7; // esi
  int v8; // r15d
  unsigned __int64 v9; // rdx
  int PointerRawDataInternal; // edi
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r15
  int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rcx
  void *QuotaZInit; // rsi
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 CurrentProcessWow64Process; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  struct tagTHREADINFO *v34; // [rsp+58h] [rbp-50h]
  unsigned __int16 v35; // [rsp+B0h] [rbp+8h]
  unsigned int v36; // [rsp+B8h] [rbp+10h]
  unsigned int v37; // [rsp+C0h] [rbp+18h]

  v37 = a3;
  v36 = a2;
  v35 = a1;
  v6 = (unsigned int)a3;
  v7 = a2;
  v8 = a1;
  v34 = (struct tagTHREADINFO *)PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(a1, a2, a3, a4);
  PointerRawDataInternal = 0;
  if ( !v8
    || HIWORD(v8)
    || !v7
    || !(_DWORD)v6
    || !a4
    || !Address
    || (v11 = v6 * v7, v11 > 0xFFFFFFFF)
    || (v12 = 28LL * (unsigned int)v6, v12 > 0xFFFFFFFF) )
  {
    v13 = 87;
    goto LABEL_20;
  }
  if ( (unsigned int)v12 >= 0x2710000
    || (QuotaZInit = (void *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
                               (NSInstrumentation::CLeakTrackingAllocator *)0xFFFFFFFFLL,
                               v9,
                               (unsigned int)v12,
                               0x78707355u)) == 0LL )
  {
    v13 = 8;
LABEL_20:
    UserSetLastError(v13);
    goto LABEL_21;
  }
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(v15, v14, v17, v18);
  ProbeForWrite(Address, 4LL * (unsigned int)v11, CurrentProcessWow64Process != 0 ? 1 : 4);
  if ( v12 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v21, v20, v22, v23) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)&a4[v12] > MmUserProbeAddress || &a4[v12] < a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(QuotaZInit, a4, (unsigned int)v12);
  v28 = SGDGetUserSessionState(v25, v24, v26, v27);
  PointerRawDataInternal = CTouchProcessor::GetPointerRawDataInternal(
                             *(CTouchProcessor **)(v28 + 3424),
                             v34,
                             v35,
                             v36,
                             v37,
                             (const struct tagPOINTER_DEVICE_PROPERTY *)QuotaZInit,
                             v11,
                             (int *)Address);
  NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)QuotaZInit);
LABEL_21:
  UserSessionSwitchLeaveCrit(v30, v29, v31, v32);
  return PointerRawDataInternal;
}
