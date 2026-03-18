/*
 * XREFs of NtDCompositionGetFrameSurfaceUpdates @ 0x1C008A970
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0059B88 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionGetFrameSurfaceUpdates(ULONG64 a1, ULONG64 a2, _DWORD *a3, __int64 a4)
{
  _DWORD *v5; // r15
  int v6; // r12d
  DirectComposition::CConnection *v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v14; // rbx
  int v15; // eax
  __int64 v16; // rcx
  struct _ERESOURCE *v18; // rsi
  signed int v19; // [rsp+30h] [rbp-58h]
  __int64 v20; // [rsp+38h] [rbp-50h] BYREF
  __int64 v21; // [rsp+40h] [rbp-48h]
  unsigned __int64 v22; // [rsp+48h] [rbp-40h] BYREF
  _QWORD v23[7]; // [rsp+50h] [rbp-38h] BYREF
  int v24; // [rsp+90h] [rbp+8h] BYREF
  ULONG64 v25; // [rsp+98h] [rbp+10h]
  _DWORD *v26; // [rsp+A0h] [rbp+18h]
  int v27; // [rsp+A8h] [rbp+20h]

  v26 = a3;
  v25 = a2;
  v5 = (_DWORD *)a2;
  v24 = 0;
  v6 = 0;
  v27 = 0;
  v21 = 0LL;
  if ( a1 )
  {
    a2 = a1 + 8;
    if ( a1 + 8 < a1 || a2 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v21 = *(_QWORD *)a1;
    a1 = v21 == 0 ? 0xC000000D : 0;
    v19 = v21 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v19 = -1073741811;
  }
  if ( v19 >= 0 )
  {
    if ( (PVOID)PsGetCurrentProcess(a1, a2, a3, a4) == g_pepDwm )
    {
      KeEnterCriticalRegion();
      v7 = 0LL;
      v8 = 0LL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10, v9, v11, v12);
      if ( CurrentProcessWin32Process )
        v8 = *(_QWORD *)(CurrentProcessWin32Process + 256);
      if ( v8 )
      {
        v14 = *(struct _ERESOURCE **)(v8 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v14, 1u);
        v7 = *(DirectComposition::CConnection **)(v8 + 24);
        if ( v7 )
          _InterlockedIncrement((volatile signed __int32 *)v7);
        ExReleaseResourceLite(*(PERESOURCE *)(v8 + 32));
        KeLeaveCriticalRegion();
      }
      if ( v7 )
        goto LABEL_15;
      v18 = DirectComposition::CConnection::s_pSessionConnectionLock;
      if ( DirectComposition::CConnection::s_pSessionConnectionLock )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v18, 1u);
        v7 = DirectComposition::CConnection::s_pSessionConnection;
        if ( DirectComposition::CConnection::s_pSessionConnection )
          _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
        ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
        KeLeaveCriticalRegion();
      }
      if ( v7 )
      {
LABEL_15:
        v20 = 0LL;
        v15 = -1073741275;
        v16 = *((_QWORD *)v7 + 23);
        if ( v16 )
          v15 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v16 + 32LL))(v16, v21, &v20);
        v19 = v15;
        if ( v15 >= 0 )
        {
          v23[0] = 0LL;
          v22 = 0LL;
          v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, unsigned __int64 *))(**((_QWORD **)v7 + 32) + 56LL))(
                  *((_QWORD *)v7 + 32),
                  v23,
                  &v22);
          if ( v19 >= 0 )
            v6 = (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, unsigned __int64, int *))(*(_QWORD *)v20 + 48LL))(
                   v20,
                   v23[0],
                   v22 / 0xE0,
                   &v24);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(v7);
      }
      else
      {
        v19 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      v19 = -1073741790;
    }
  }
  if ( v5 + 1 < v5 || (unsigned __int64)(v5 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *v5 = v24;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v6;
  return (unsigned int)v19;
}
