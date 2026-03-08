/*
 * XREFs of NtDCompositionGetFrameSurfaceUpdates @ 0x1C009E710
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0099D20 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionGetFrameSurfaceUpdates(ULONG64 a1, ULONG64 a2, _DWORD *a3, __int64 a4)
{
  _DWORD *v5; // r15
  int v6; // r12d
  DirectComposition::CConnection *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rax
  struct _ERESOURCE *v12; // rbx
  int v13; // eax
  __int64 v14; // rcx
  struct _ERESOURCE *v16; // rsi
  signed int v17; // [rsp+30h] [rbp-58h]
  __int64 v18; // [rsp+38h] [rbp-50h] BYREF
  __int64 v19; // [rsp+40h] [rbp-48h]
  unsigned __int64 v20; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v21[7]; // [rsp+50h] [rbp-38h] BYREF
  int v22; // [rsp+90h] [rbp+8h] BYREF
  ULONG64 v23; // [rsp+98h] [rbp+10h]
  _DWORD *v24; // [rsp+A0h] [rbp+18h]
  int v25; // [rsp+A8h] [rbp+20h]

  v24 = a3;
  v23 = a2;
  v5 = (_DWORD *)a2;
  v22 = 0;
  v6 = 0;
  v25 = 0;
  v19 = 0LL;
  if ( a1 )
  {
    a2 = a1 + 8;
    if ( a1 + 8 < a1 || a2 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v19 = *(_QWORD *)a1;
    a1 = v19 == 0 ? 0xC000000D : 0;
    v17 = v19 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v17 = -1073741811;
  }
  if ( v17 >= 0 )
  {
    if ( PsGetCurrentProcess(a1, a2, a3, a4) == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      KeEnterCriticalRegion();
      v7 = 0LL;
      v8 = 0LL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
      if ( CurrentProcessWin32Process )
      {
        v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
        if ( v11 )
          v8 = *(_QWORD *)(v11 + 256);
      }
      if ( v8 )
      {
        v12 = *(struct _ERESOURCE **)(v8 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v12, 1u);
        v7 = *(DirectComposition::CConnection **)(v8 + 24);
        if ( v7 )
          _InterlockedIncrement((volatile signed __int32 *)v7);
        ExReleaseResourceLite(*(PERESOURCE *)(v8 + 32));
        KeLeaveCriticalRegion();
      }
      if ( v7 )
        goto LABEL_16;
      v16 = DirectComposition::CConnection::s_pSessionConnectionLock;
      if ( DirectComposition::CConnection::s_pSessionConnectionLock )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v16, 1u);
        v7 = DirectComposition::CConnection::s_pSessionConnection;
        if ( DirectComposition::CConnection::s_pSessionConnection )
          _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
        ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
        KeLeaveCriticalRegion();
      }
      if ( v7 )
      {
LABEL_16:
        v18 = 0LL;
        v13 = -1073741275;
        v14 = *((_QWORD *)v7 + 23);
        if ( v14 )
          v13 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v14 + 32LL))(v14, v19, &v18);
        v17 = v13;
        if ( v13 >= 0 )
        {
          v21[0] = 0LL;
          v20 = 0LL;
          v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, unsigned __int64 *))(**((_QWORD **)v7 + 33) + 56LL))(
                  *((_QWORD *)v7 + 33),
                  v21,
                  &v20);
          if ( v17 >= 0 )
            v6 = (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, unsigned __int64, int *))(*(_QWORD *)v18 + 48LL))(
                   v18,
                   v21[0],
                   v20 / 0xE0,
                   &v22);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 8LL))(v18);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(v7);
      }
      else
      {
        v17 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      v17 = -1073741790;
    }
  }
  if ( v5 + 1 < v5 || (unsigned __int64)(v5 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *v5 = v22;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v6;
  return (unsigned int)v17;
}
