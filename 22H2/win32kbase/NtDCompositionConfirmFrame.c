/*
 * XREFs of NtDCompositionConfirmFrame @ 0x1C0057920
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C0057C80 (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C0057DF0 (-NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C005FDC8 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C00AB6C4 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     ?ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z @ 0x1C00B60A0 (-ReleaseShellResourceAccess@CConnection@DirectComposition@@QEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionConfirmFrame(__int64 a1, __int64 *a2)
{
  DirectComposition::CConnection *v3; // rdi
  int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v8; // rbx
  volatile signed __int32 *v9; // rax
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  PERESOURCE *v13; // r14
  struct _ERESOURCE *v14; // rbx
  __int64 *v15; // rbx
  struct _ERESOURCE *v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  _QWORD *i; // rbx
  __int64 *v24; // rsi
  unsigned int v25; // edx
  __int64 v26; // rcx
  int v27; // [rsp+20h] [rbp-38h]
  __int64 v28; // [rsp+28h] [rbp-30h]
  DirectComposition::CConnection *v29; // [rsp+70h] [rbp+18h]
  __int64 v30; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v29 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v28 = *a2;
    if ( *a2 )
      v4 = 0;
    else
      v4 = -1073741811;
    if ( v4 >= 0 )
    {
      KeEnterCriticalRegion();
      v5 = 0LL;
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
      if ( CurrentProcessWin32Process )
        v5 = *(_QWORD *)(CurrentProcessWin32Process + 256);
      if ( v5 )
      {
        v8 = *(struct _ERESOURCE **)(v5 + 32);
        KeEnterCriticalRegion();
        ExAcquireResourceSharedLite(v8, 1u);
        v9 = *(volatile signed __int32 **)(v5 + 24);
        if ( v9 && a1 == *(_QWORD *)(v5 + 16) )
        {
          _InterlockedIncrement(v9);
          v3 = *(DirectComposition::CConnection **)(v5 + 24);
          v29 = v3;
          v4 = 0;
        }
        else
        {
          v4 = -1073741790;
        }
        ExReleaseResourceLite(*(PERESOURCE *)(v5 + 32));
        KeLeaveCriticalRegion();
      }
      else
      {
        v4 = -1073741823;
      }
      if ( v4 >= 0 )
      {
        v10 = 0LL;
        v30 = 0LL;
        v11 = -1073741275;
        v12 = *((_QWORD *)v3 + 23);
        if ( v12 )
        {
          v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v12 + 32LL))(v12, v28, &v30);
          v10 = v30;
        }
        v27 = v11;
        if ( v11 >= 0 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
          v13 = (PERESOURCE *)((char *)v3 + 8);
          v14 = (struct _ERESOURCE *)*((_QWORD *)v3 + 1);
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v14, 1u);
          v15 = (__int64 *)*((_QWORD *)v3 + 15);
          *((_QWORD *)v3 + 15) = 0LL;
          *((_QWORD *)v3 + 16) = 0LL;
          if ( v15 )
          {
            do
            {
              v24 = (__int64 *)*v15;
              *((_BYTE *)v15 + 32) &= ~2u;
              v25 = *((_DWORD *)v15 + 28);
              if ( v25 )
              {
                DirectComposition::CConnection::ReleaseShellResourceAccess(
                  *(DirectComposition::CConnection **)(v15[1] + 40),
                  v25);
                *((_DWORD *)v15 + 28) = 0;
              }
              if ( (v15[4] & 4) == 0 )
                DirectComposition::CApplicationChannel::NotifyBatchProcessed(
                  (DirectComposition::CApplicationChannel *)v15[1],
                  (struct DirectComposition::CBatch *)v15);
              DirectComposition::CApplicationChannel::ReturnProcessedBatch(
                (DirectComposition::CApplicationChannel *)v15[1],
                (struct DirectComposition::CBatch *)v15);
              v15 = v24;
            }
            while ( v24 );
          }
          v16 = (struct _ERESOURCE *)*((_QWORD *)v3 + 9);
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite(v16, 1u);
          v17 = 0LL;
          while ( 1 )
          {
            v18 = *((_QWORD *)v3 + 5);
            v19 = v17;
            if ( v17 < v18 )
            {
              v20 = (_QWORD *)(*((_QWORD *)v3 + 2) + v17 * *((_QWORD *)v3 + 6));
              do
              {
                if ( *v20 )
                  break;
                ++v19;
                v20 = (_QWORD *)((char *)v20 + *((_QWORD *)v3 + 6));
              }
              while ( v19 < v18 );
            }
            if ( v19 >= v18 )
              break;
            _mm_lfence();
            v17 = v19 + 1;
            v21 = *(_QWORD *)(v19 * *((_QWORD *)v3 + 6) + *((_QWORD *)v3 + 2));
            if ( !v21 )
              break;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
          }
          ExReleaseResourceLite(*((PERESOURCE *)v3 + 9));
          KeLeaveCriticalRegion();
          v3 = v29;
          for ( i = (_QWORD *)*((_QWORD *)v29 + 24); i != (_QWORD *)((char *)v29 + 192); i = (_QWORD *)*i )
          {
            if ( i[6] )
            {
              v26 = *(_QWORD *)(i[2] + 16LL);
              if ( v26 )
                MmUnmapViewOfSection(v26);
              i[6] = 0LL;
            }
            i[4] = 0LL;
            i[5] = 0LL;
          }
          ExReleaseResourceLite(*v13);
          KeLeaveCriticalRegion();
        }
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 1 )
        {
          DirectComposition::CConnection::~CConnection(v29);
          Win32FreePool((__int64)v29);
        }
        v4 = v27;
      }
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
