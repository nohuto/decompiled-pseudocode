/*
 * XREFs of NtDCompositionBeginFrame @ 0x1C000BCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C000BF4C (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0059B88 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C015051C (McTemplateK0pq_EtwWriteTransfer.c)
 */

__int64 __fastcall NtDCompositionBeginFrame(unsigned __int64 a1, __int128 *a2, _QWORD *a3, __int64 a4)
{
  __int128 *v5; // rbx
  DirectComposition::CConnection *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _ERESOURCE *v16; // rbx
  volatile signed __int32 *v17; // rax
  int v18; // ebx
  __int64 v20; // rcx
  int v21; // [rsp+30h] [rbp-A8h]
  unsigned __int64 v22[3]; // [rsp+40h] [rbp-98h] BYREF
  __int128 v23; // [rsp+58h] [rbp-80h]
  __int128 v24; // [rsp+68h] [rbp-70h]
  __int128 v25; // [rsp+78h] [rbp-60h]
  __int128 v26; // [rsp+88h] [rbp-50h] BYREF
  __int128 v27; // [rsp+98h] [rbp-40h]
  __int128 v28; // [rsp+A8h] [rbp-30h]

  v5 = a2;
  v22[1] = a1;
  v22[2] = (unsigned __int64)a3;
  v7 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v22[0] = 0LL;
  if ( (PVOID)PsGetCurrentProcess(a1, a2, a3, a4) != g_pepDwm )
    return 3221225506LL;
  if ( v5 )
  {
    if ( v5 + 3 < v5 || (unsigned __int64)(v5 + 3) > MmUserProbeAddress )
      v5 = (__int128 *)MmUserProbeAddress;
    v23 = *v5;
    v24 = v5[1];
    v25 = v5[2];
    v26 = v23;
    v27 = v24;
    v28 = v25;
    v21 = 0;
  }
  else
  {
    v21 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v21 >= 0 )
  {
    v12 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9, v8, v10, v11);
    if ( CurrentProcessWin32Process )
      v12 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v12 )
    {
      v16 = *(struct _ERESOURCE **)(v12 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v16, 1u);
      v17 = *(volatile signed __int32 **)(v12 + 24);
      if ( v17 && a1 == *(_QWORD *)(v12 + 16) )
      {
        _InterlockedIncrement(v17);
        v7 = *(DirectComposition::CConnection **)(v12 + 24);
        v18 = 0;
      }
      else
      {
        v18 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v12 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v18 = -1073741823;
    }
    v21 = v18;
    if ( v18 >= 0 )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
        McTemplateK0pq_EtwWriteTransfer(v14, &DCompBeginFrameEvent, v15, a1, v27);
      v21 = DirectComposition::CConnection::BeginFrame(v7, (const struct COMPOSITION_FRAME_INFO *)&v26, v22);
    }
  }
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = v22[0];
  }
  else
  {
    v21 = -1073741811;
  }
  if ( v21 < 0 )
  {
    LODWORD(v8) = v22[0];
    if ( v22[0] )
    {
      v20 = *((_QWORD *)v7 + 23);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 24LL))(v20);
    }
  }
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
      DirectComposition::CConnection::`scalar deleting destructor'(v7, v8);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v21;
}
