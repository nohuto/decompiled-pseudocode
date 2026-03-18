/*
 * XREFs of NtDCompositionBeginFrame @ 0x1C0021CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C0021F80 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0083E50 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pq_EtwWriteTransfer @ 0x1C00DFA54 (McTemplateK0pq_EtwWriteTransfer.c)
 */

__int64 __fastcall NtDCompositionBeginFrame(unsigned __int64 a1, ULONG64 a2, _QWORD *a3)
{
  ULONG64 v4; // rbx
  DirectComposition::CConnection *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  struct _ERESOURCE *v14; // rbx
  volatile signed __int32 *v15; // rax
  int v16; // ebx
  __int64 v18; // rcx
  int v19; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v20[3]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+58h] [rbp-90h]
  __int128 v22; // [rsp+68h] [rbp-80h]
  __int128 v23; // [rsp+78h] [rbp-70h]
  __int64 v24; // [rsp+88h] [rbp-60h]
  __int128 v25; // [rsp+90h] [rbp-58h] BYREF
  __int128 v26; // [rsp+A0h] [rbp-48h]
  __int128 v27; // [rsp+B0h] [rbp-38h]
  __int64 v28; // [rsp+C0h] [rbp-28h]

  v4 = a2;
  v20[1] = a1;
  v20[2] = (unsigned __int64)a3;
  v6 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v20[0] = 0LL;
  if ( PsGetCurrentProcess(a1, a2, a3) != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    return 3221225506LL;
  if ( v4 )
  {
    if ( v4 + 56 < v4 || v4 + 56 > MmUserProbeAddress )
      v4 = MmUserProbeAddress;
    v21 = *(_OWORD *)v4;
    v22 = *(_OWORD *)(v4 + 16);
    v23 = *(_OWORD *)(v4 + 32);
    v24 = *(_QWORD *)(v4 + 48);
    v25 = v21;
    v26 = v22;
    v27 = v23;
    v28 = v24;
    v19 = 0;
  }
  else
  {
    v19 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v19 >= 0 )
  {
    v9 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    if ( CurrentProcessWin32Process )
    {
      v11 = -*(_QWORD *)CurrentProcessWin32Process;
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v13 = v7 & CurrentProcessWin32Process;
      if ( v13 )
        v9 = *(_QWORD *)(v13 + 256);
    }
    if ( v9 )
    {
      v14 = *(struct _ERESOURCE **)(v9 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v14, 1u);
      v15 = *(volatile signed __int32 **)(v9 + 24);
      if ( v15 && a1 == *(_QWORD *)(v9 + 16) )
      {
        _InterlockedIncrement(v15);
        v6 = *(DirectComposition::CConnection **)(v9 + 24);
        v16 = 0;
      }
      else
      {
        v16 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v9 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v16 = -1073741823;
    }
    v19 = v16;
    if ( v16 >= 0 )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
        McTemplateK0pq_EtwWriteTransfer(v11, &DCompBeginFrameEvent, v12, a1, DWORD1(v26));
      v19 = DirectComposition::CConnection::BeginFrame(v6, (const struct COMPOSITION_FRAME_INFO *)&v25, v20);
    }
  }
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = v20[0];
  }
  else
  {
    v19 = -1073741811;
  }
  if ( v19 < 0 )
  {
    LODWORD(v7) = v20[0];
    if ( v20[0] )
    {
      v18 = *((_QWORD *)v6 + 23);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 24LL))(v18);
    }
  }
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 )
      DirectComposition::CConnection::`scalar deleting destructor'(v6, v7);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v19;
}
