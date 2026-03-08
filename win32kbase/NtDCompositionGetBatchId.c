/*
 * XREFs of NtDCompositionGetBatchId @ 0x1C0093970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionGetBatchId(__int64 a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // r13
  int v4; // esi
  __int64 v5; // r15
  __int64 v6; // r12
  int v7; // r14d
  __int64 v8; // rbx
  __int64 v9; // rdi
  _QWORD *CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v11; // rbx
  struct _RTL_GENERIC_TABLE *v12; // rcx
  _QWORD *v13; // rax
  struct _ERESOURCE *v14; // rdi
  int Buffer; // [rsp+20h] [rbp-38h] BYREF
  __int64 v17; // [rsp+24h] [rbp-34h]
  int v18; // [rsp+2Ch] [rbp-2Ch]
  int v19; // [rsp+60h] [rbp+8h]

  v19 = a1;
  v3 = a3;
  v4 = 0;
  v5 = 0LL;
  if ( a3 )
  {
    v6 = 0LL;
    v7 = 0;
    v8 = 0LL;
    v9 = 0LL;
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
    if ( CurrentProcessWin32Process )
    {
      if ( !*CurrentProcessWin32Process )
        CurrentProcessWin32Process = 0LL;
      if ( CurrentProcessWin32Process )
        v9 = CurrentProcessWin32Process[32];
    }
    if ( v9 )
    {
      v11 = *(struct _ERESOURCE **)(v9 + 8);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v11, 1u);
      v12 = *(struct _RTL_GENERIC_TABLE **)v9;
      v8 = 0LL;
      Buffer = v19;
      v17 = 0LL;
      v18 = 0;
      v13 = RtlLookupElementGenericTable(v12, &Buffer);
      if ( v13 )
        v8 = v13[1];
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      else
        v7 = -1073741790;
      ExReleaseResourceLite(*(PERESOURCE *)(v9 + 8));
      KeLeaveCriticalRegion();
    }
    else
    {
      v7 = -1073741823;
    }
    if ( v8 )
    {
      v14 = *(struct _ERESOURCE **)(v8 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v14, 1u);
      v6 = v8;
    }
    if ( v7 >= 0 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6) == 1 )
      {
        v5 = v6;
      }
      else
      {
        v7 = -1073741811;
        (**(void (__fastcall ***)(__int64))v6)(v6);
      }
      if ( v7 >= 0 )
      {
        if ( a2 == 2 )
        {
          v4 = *(_DWORD *)(v5 + 392);
        }
        else if ( a2 )
        {
          if ( a2 == 1 )
            v4 = *(_DWORD *)(v5 + 388);
        }
        else
        {
          v4 = *(_DWORD *)(v5 + 384);
        }
        (**(void (__fastcall ***)(__int64))v5)(v5);
        if ( (unsigned __int64)v3 >= MmUserProbeAddress )
          v3 = (_DWORD *)MmUserProbeAddress;
        *v3 = v4;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
