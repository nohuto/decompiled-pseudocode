__int64 __fastcall NtDCompositionBeginFrame(unsigned __int64 a1, ULONG64 a2, _QWORD *a3, __int64 a4)
{
  ULONG64 v5; // rbx
  DirectComposition::CConnection *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  struct _ERESOURCE *v15; // rbx
  volatile signed __int32 *v16; // rax
  int v17; // ebx
  __int64 v19; // rcx
  int v20; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v21[3]; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+58h] [rbp-90h]
  __int128 v23; // [rsp+68h] [rbp-80h]
  __int128 v24; // [rsp+78h] [rbp-70h]
  __int64 v25; // [rsp+88h] [rbp-60h]
  __int128 v26; // [rsp+90h] [rbp-58h] BYREF
  __int128 v27; // [rsp+A0h] [rbp-48h]
  __int128 v28; // [rsp+B0h] [rbp-38h]
  __int64 v29; // [rsp+C0h] [rbp-28h]

  v5 = a2;
  v21[1] = a1;
  v21[2] = (unsigned __int64)a3;
  v7 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v21[0] = 0LL;
  if ( PsGetCurrentProcess(a1, a2, a3, a4) != *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    return 3221225506LL;
  if ( v5 )
  {
    if ( v5 + 56 < v5 || v5 + 56 > MmUserProbeAddress )
      v5 = MmUserProbeAddress;
    v22 = *(_OWORD *)v5;
    v23 = *(_OWORD *)(v5 + 16);
    v24 = *(_OWORD *)(v5 + 32);
    v25 = *(_QWORD *)(v5 + 48);
    v26 = v22;
    v27 = v23;
    v28 = v24;
    v29 = v25;
    v20 = 0;
  }
  else
  {
    v20 = -1073741811;
  }
  KeEnterCriticalRegion();
  if ( v20 >= 0 )
  {
    v10 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    if ( CurrentProcessWin32Process )
    {
      v12 = -*(_QWORD *)CurrentProcessWin32Process;
      v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v14 = v8 & CurrentProcessWin32Process;
      if ( v14 )
        v10 = *(_QWORD *)(v14 + 256);
    }
    if ( v10 )
    {
      v15 = *(struct _ERESOURCE **)(v10 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v15, 1u);
      v16 = *(volatile signed __int32 **)(v10 + 24);
      if ( v16 && a1 == *(_QWORD *)(v10 + 16) )
      {
        _InterlockedIncrement(v16);
        v7 = *(DirectComposition::CConnection **)(v10 + 24);
        v17 = 0;
      }
      else
      {
        v17 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v10 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v17 = -1073741823;
    }
    v20 = v17;
    if ( v17 >= 0 )
    {
      if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
        McTemplateK0pq_EtwWriteTransfer(v12, &DCompBeginFrameEvent, v13, a1, DWORD1(v27));
      v20 = DirectComposition::CConnection::BeginFrame(v7, (const struct COMPOSITION_FRAME_INFO *)&v26, v21);
    }
  }
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = v21[0];
  }
  else
  {
    v20 = -1073741811;
  }
  if ( v20 < 0 )
  {
    LODWORD(v8) = v21[0];
    if ( v21[0] )
    {
      v19 = *((_QWORD *)v7 + 23);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 24LL))(v19);
    }
  }
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
      DirectComposition::CConnection::`scalar deleting destructor'(v7, v8);
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v20;
}
