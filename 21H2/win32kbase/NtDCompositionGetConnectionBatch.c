/*
 * XREFs of NtDCompositionGetConnectionBatch @ 0x1C0087240
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCConnection@DirectComposition@@AEAAPEAXI@Z @ 0x1C0059B88 (--_GCConnection@DirectComposition@@AEAAPEAXI@Z.c)
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C00874F0 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C0213170 (-GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z.c)
 */

__int64 __fastcall NtDCompositionGetConnectionBatch(__int64 a1, unsigned __int64 *a2, struct UCE_RDP_HEADER **a3)
{
  _QWORD *v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v13; // rbx
  volatile signed __int32 *v14; // rax
  int v15; // ebx
  int Batches; // ebx
  __int64 v17; // rcx
  struct _ERESOURCE *v18; // rbx
  __int64 v19; // rax
  _QWORD *v20; // r8
  _QWORD **v21; // rcx
  _QWORD *i; // rdx
  int v24; // [rsp+20h] [rbp-58h]
  unsigned __int64 v25; // [rsp+28h] [rbp-50h]
  __int64 v26; // [rsp+88h] [rbp+10h] BYREF
  struct UCE_RDP_HEADER **v27; // [rsp+90h] [rbp+18h]
  struct UCE_RDP_HEADER *v28; // [rsp+98h] [rbp+20h] BYREF

  v27 = a3;
  v25 = 0LL;
  v28 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v25 = *a2;
    v5 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v5 = (_QWORD *)MmUserProbeAddress;
    *v5 = *v5;
    v24 = 0;
  }
  else
  {
    v24 = -1073741811;
  }
  if ( v24 >= 0 )
  {
    v6 = 0LL;
    KeEnterCriticalRegion();
    v7 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9, v8, v10, v11);
    if ( CurrentProcessWin32Process )
      v7 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v7 )
    {
      v13 = *(struct _ERESOURCE **)(v7 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v13, 1u);
      v14 = *(volatile signed __int32 **)(v7 + 24);
      if ( v14 && a1 == *(_QWORD *)(v7 + 16) )
      {
        _InterlockedAdd(v14, 1u);
        v6 = *(_QWORD *)(v7 + 24);
        v15 = 0;
      }
      else
      {
        v15 = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v7 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      v15 = -1073741823;
    }
    v24 = v15;
    if ( v15 >= 0 )
    {
      if ( v25 )
      {
        v26 = 0LL;
        Batches = -1073741275;
        v17 = *(_QWORD *)(v6 + 184);
        if ( v17 )
          Batches = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64 *))(*(_QWORD *)v17 + 32LL))(
                      v17,
                      v25,
                      &v26);
        if ( Batches >= 0 )
        {
          v18 = *(struct _ERESOURCE **)(v6 + 8);
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v18, 1u);
          if ( *(_DWORD *)(v6 + 148) )
          {
            if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 144), 1, 2) == 2 )
            {
              v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v26 + 64LL))(v26);
              if ( v19 )
                v20 = *(_QWORD **)(v19 + 8);
              else
                v20 = 0LL;
              v21 = *(_QWORD ***)(v6 + 112);
              if ( v21 )
              {
                for ( i = *v21; i; i = (_QWORD *)*i )
                  v21 = (_QWORD **)i;
                *v21 = v20;
              }
              else
              {
                *(_QWORD *)(v6 + 112) = v20;
              }
              Batches = DirectComposition::CConnection::RetrieveBatches((DirectComposition::CConnection *)v6, v25, &v28);
            }
            else
            {
              Batches = -1073740024;
            }
          }
          else
          {
            Batches = -1073741300;
          }
          ExReleaseResourceLite(*(PERESOURCE *)(v6 + 8));
          KeLeaveCriticalRegion();
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
        }
        v24 = Batches;
      }
      else
      {
        Batches = DirectComposition::CConnection::GetBatches((DirectComposition::CConnection *)v6, &v28);
        v24 = Batches;
      }
      if ( Batches >= 0 )
        *a3 = v28;
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6, 0xFFFFFFFF) == 1 && v6 )
        DirectComposition::CConnection::`scalar deleting destructor'((DirectComposition::CConnection *)v6);
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v24;
}
