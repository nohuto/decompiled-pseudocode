/*
 * XREFs of NtDCompositionGetFrameLegacyTokens @ 0x1C009E280
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0099D20 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

__int64 __fastcall NtDCompositionGetFrameLegacyTokens(ULONG64 a1, ULONG64 a2, _DWORD *a3, __int64 a4)
{
  _DWORD *v5; // r15
  int v6; // r13d
  int v7; // r12d
  DirectComposition::CConnection *v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rax
  struct _ERESOURCE *v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  struct _ERESOURCE *v17; // rsi
  signed int v18; // [rsp+30h] [rbp-68h]
  void *v19; // [rsp+38h] [rbp-60h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-58h] BYREF
  __int64 v21; // [rsp+48h] [rbp-50h] BYREF
  __int64 v22; // [rsp+50h] [rbp-48h]
  void *Src; // [rsp+58h] [rbp-40h] BYREF
  size_t Size; // [rsp+A0h] [rbp+8h] BYREF
  ULONG64 v25; // [rsp+A8h] [rbp+10h]
  _DWORD *v26; // [rsp+B0h] [rbp+18h]
  int v27; // [rsp+B8h] [rbp+20h] BYREF

  v26 = a3;
  v25 = a2;
  v5 = (_DWORD *)a2;
  v6 = 0;
  LODWORD(Size) = 0;
  v7 = 0;
  v22 = 0LL;
  if ( a1 )
  {
    a2 = a1 + 8;
    if ( a1 + 8 < a1 || a2 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v22 = *(_QWORD *)a1;
    a1 = v22 == 0 ? 0xC000000D : 0;
    v18 = v22 == 0 ? 0xC000000D : 0;
  }
  else
  {
    v18 = -1073741811;
  }
  if ( v18 >= 0 )
  {
    if ( PsGetCurrentProcess(a1, a2, a3, a4) == *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels )
    {
      KeEnterCriticalRegion();
      v8 = 0LL;
      v9 = 0LL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      if ( CurrentProcessWin32Process )
      {
        v12 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
        if ( v12 )
          v9 = *(_QWORD *)(v12 + 256);
      }
      if ( v9 )
      {
        v13 = *(struct _ERESOURCE **)(v9 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v13, 1u);
        v8 = *(DirectComposition::CConnection **)(v9 + 24);
        if ( v8 )
          _InterlockedIncrement((volatile signed __int32 *)v8);
        ExReleaseResourceLite(*(PERESOURCE *)(v9 + 32));
        KeLeaveCriticalRegion();
      }
      if ( v8 )
        goto LABEL_16;
      v17 = DirectComposition::CConnection::s_pSessionConnectionLock;
      if ( DirectComposition::CConnection::s_pSessionConnectionLock )
      {
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite(v17, 1u);
        v8 = DirectComposition::CConnection::s_pSessionConnection;
        if ( DirectComposition::CConnection::s_pSessionConnection )
          _InterlockedIncrement((volatile signed __int32 *)DirectComposition::CConnection::s_pSessionConnection);
        ExReleaseResourceLite(DirectComposition::CConnection::s_pSessionConnectionLock);
        KeLeaveCriticalRegion();
      }
      if ( v8 )
      {
LABEL_16:
        v21 = 0LL;
        v14 = -1073741275;
        v15 = *((_QWORD *)v8 + 23);
        if ( v15 )
          v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v15 + 32LL))(v15, v22, &v21);
        v18 = v14;
        if ( v14 >= 0 )
        {
          v19 = 0LL;
          v20 = 0LL;
          v18 = (*(__int64 (__fastcall **)(_QWORD, void **, unsigned __int64 *))(**((_QWORD **)v8 + 33) + 56LL))(
                  *((_QWORD *)v8 + 33),
                  &v19,
                  &v20);
          if ( v18 >= 0 )
          {
            do
            {
              Src = 0LL;
              LODWORD(Size) = 0;
              v27 = 0;
              v7 = (*(unsigned __int8 (__fastcall **)(__int64, void **, size_t *, int *))(*(_QWORD *)v21 + 40LL))(
                     v21,
                     &Src,
                     &Size,
                     &v27);
              if ( (_DWORD)Size )
              {
                memmove(v19, Src, (unsigned int)Size);
                v19 = (char *)v19 + (unsigned int)Size;
                v20 -= (unsigned int)Size;
                v6 += v27;
              }
            }
            while ( v7 && v20 >= 0x800 );
          }
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v8, 0xFFFFFFFF) == 1 )
          DirectComposition::CConnection::`scalar deleting destructor'(v8);
      }
      else
      {
        v18 = -1073741790;
      }
      KeLeaveCriticalRegion();
    }
    else
    {
      v18 = -1073741790;
    }
  }
  if ( v5 + 1 < v5 || (unsigned __int64)(v5 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *v5 = v6;
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v7;
  return (unsigned int)v18;
}
