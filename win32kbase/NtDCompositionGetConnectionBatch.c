__int64 __fastcall NtDCompositionGetConnectionBatch(__int64 a1, unsigned __int64 *a2, struct UCE_RDP_HEADER **a3)
{
  struct UCE_RDP_HEADER **v3; // r12
  int Batches; // ebx
  unsigned __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rdx
  struct _ERESOURCE *v12; // rbx
  volatile signed __int32 *v13; // rax
  __int64 v14; // rcx
  struct _ERESOURCE *v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // r8
  _QWORD **v18; // rcx
  _QWORD *i; // rdx
  unsigned __int64 v21; // [rsp+20h] [rbp-48h]
  struct UCE_RDP_HEADER *v22[8]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v23; // [rsp+88h] [rbp+20h] BYREF

  v3 = a3;
  Batches = 0;
  v6 = 0LL;
  v21 = 0LL;
  v22[0] = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v6 = *a2;
    v21 = *a2;
  }
  else
  {
    Batches = -1073741811;
  }
  if ( Batches >= 0 )
  {
    KeEnterCriticalRegion();
    v7 = 0LL;
    v8 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    v11 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v11 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v11 )
      v8 = *(_QWORD *)(v11 + 256);
    if ( v8 )
    {
      v12 = *(struct _ERESOURCE **)(v8 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v12, 1u);
      v13 = *(volatile signed __int32 **)(v8 + 24);
      if ( v13 && a1 == *(_QWORD *)(v8 + 16) )
      {
        _InterlockedAdd(v13, 1u);
        v7 = *(_QWORD *)(v8 + 24);
        Batches = 0;
        v6 = v21;
      }
      else
      {
        Batches = -1073741790;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v8 + 32));
      KeLeaveCriticalRegion();
    }
    else
    {
      Batches = -1073741823;
    }
    if ( Batches >= 0 )
    {
      if ( v6 )
      {
        v23 = 0LL;
        Batches = -1073741275;
        v14 = *(_QWORD *)(v7 + 184);
        if ( v14 )
          Batches = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64 *))(*(_QWORD *)v14 + 32LL))(
                      v14,
                      v6,
                      &v23);
        if ( Batches >= 0 )
        {
          v15 = *(struct _ERESOURCE **)(v7 + 8);
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite(v15, 1u);
          if ( *(_DWORD *)(v7 + 148) )
          {
            if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 144), 1, 2) == 2 )
            {
              v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 64LL))(v23);
              if ( v16 )
                v17 = *(_QWORD **)(v16 + 8);
              else
                v17 = 0LL;
              v18 = *(_QWORD ***)(v7 + 112);
              if ( v18 )
              {
                for ( i = *v18; i; i = (_QWORD *)*i )
                  v18 = (_QWORD **)i;
                *v18 = v17;
              }
              else
              {
                *(_QWORD *)(v7 + 112) = v17;
              }
              Batches = DirectComposition::CConnection::RetrieveBatches((DirectComposition::CConnection *)v7, v21, v22);
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
          ExReleaseResourceLite(*(PERESOURCE *)(v7 + 8));
          KeLeaveCriticalRegion();
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
        }
      }
      else
      {
        Batches = DirectComposition::CConnection::GetBatches((DirectComposition::CConnection *)v7, v22);
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v7, 0xFFFFFFFF) == 1 && v7 )
        DirectComposition::CConnection::`scalar deleting destructor'((DirectComposition::CConnection *)v7);
    }
    KeLeaveCriticalRegion();
    if ( Batches >= 0 )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (struct UCE_RDP_HEADER **)MmUserProbeAddress;
      *v3 = v22[0];
    }
  }
  return (unsigned int)Batches;
}
