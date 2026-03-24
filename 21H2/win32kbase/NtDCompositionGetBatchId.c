/*
 * XREFs of NtDCompositionGetBatchId @ 0x1C0079E40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionGetBatchId(int a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // rdx
  _DWORD *v6; // rdi
  int v7; // esi
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v11; // rbx
  struct _RTL_GENERIC_TABLE *v12; // rcx
  _QWORD *v13; // rax
  struct _ERESOURCE *v14; // rdi
  int v15; // r12d
  int Buffer; // [rsp+38h] [rbp-50h] BYREF
  __int64 v18; // [rsp+3Ch] [rbp-4Ch]
  int v19; // [rsp+44h] [rbp-44h]

  if ( !a3 )
    return (unsigned int)-1073741811;
  v5 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v5 = (_DWORD *)MmUserProbeAddress;
  *v5 = *v5;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(MmUserProbeAddress);
  if ( CurrentProcessWin32Process )
    v9 = *(_QWORD *)(CurrentProcessWin32Process + 256);
  if ( v9 )
  {
    v11 = *(struct _ERESOURCE **)(v9 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v11, 1u);
    v12 = *(struct _RTL_GENERIC_TABLE **)v9;
    v8 = 0LL;
    Buffer = a1;
    v18 = 0LL;
    v19 = 0;
    v13 = RtlLookupElementGenericTable(v12, &Buffer);
    if ( v13 )
      v8 = v13[1];
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v6 = 0LL;
    }
    else
    {
      v7 = -1073741790;
    }
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
    v6 = (_DWORD *)v8;
  }
  if ( v7 >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6) == 1 )
      goto LABEL_16;
    v7 = -1073741811;
    (**(void (__fastcall ***)(_DWORD *))v6)(v6);
  }
  v6 = 0LL;
LABEL_16:
  if ( v7 >= 0 )
  {
    if ( a2 == 2 )
    {
      v15 = v6[96];
    }
    else if ( a2 )
    {
      if ( a2 == 1 )
        v15 = v6[95];
      else
        v15 = 0;
    }
    else
    {
      v15 = v6[94];
    }
    (**(void (__fastcall ***)(_DWORD *))v6)(v6);
    *a3 = v15;
  }
  return (unsigned int)v7;
}
