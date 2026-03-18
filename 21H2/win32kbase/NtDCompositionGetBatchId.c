/*
 * XREFs of NtDCompositionGetBatchId @ 0x1C00828D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionGetBatchId(int a1, unsigned int a2, _DWORD *a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r14
  _DWORD *v7; // rdx
  __int64 v8; // r12
  int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v13; // rbx
  struct _RTL_GENERIC_TABLE *v14; // rcx
  _QWORD *v15; // rax
  struct _ERESOURCE *v16; // rdi
  int v17; // r13d
  _BYTE Buffer[12]; // [rsp+28h] [rbp-50h] BYREF
  int v20; // [rsp+34h] [rbp-44h]

  v5 = a2;
  v6 = 0LL;
  *(_QWORD *)Buffer = 0LL;
  if ( a3 )
  {
    v7 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v7 = (_DWORD *)MmUserProbeAddress;
    *v7 = *v7;
    v8 = 0LL;
    v9 = 0;
    v10 = 0LL;
    v11 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(MmUserProbeAddress, v7, v5, a4);
    if ( CurrentProcessWin32Process )
      v11 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v11 )
    {
      v13 = *(struct _ERESOURCE **)(v11 + 8);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v13, 1u);
      v14 = *(struct _RTL_GENERIC_TABLE **)v11;
      v10 = 0LL;
      *(_DWORD *)Buffer = a1;
      *(_QWORD *)&Buffer[4] = 0LL;
      v20 = 0;
      v15 = RtlLookupElementGenericTable(v14, Buffer);
      if ( v15 )
        v10 = v15[1];
      if ( v10 )
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
      else
        v9 = -1073741790;
      ExReleaseResourceLite(*(PERESOURCE *)(v11 + 8));
      KeLeaveCriticalRegion();
    }
    else
    {
      v9 = -1073741823;
    }
    if ( v10 )
    {
      v16 = *(struct _ERESOURCE **)(v10 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v16, 1u);
      v8 = v10;
    }
    if ( v9 >= 0 )
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8) == 1 )
      {
        v6 = v8;
      }
      else
      {
        v9 = -1073741811;
        (**(void (__fastcall ***)(__int64))v8)(v8);
      }
    }
    if ( v9 >= 0 )
    {
      if ( a2 == 2 )
      {
        v17 = *(_DWORD *)(v6 + 384);
      }
      else if ( a2 )
      {
        if ( a2 == 1 )
          v17 = *(_DWORD *)(v6 + 380);
        else
          v17 = 0;
      }
      else
      {
        v17 = *(_DWORD *)(v6 + 376);
      }
      (**(void (__fastcall ***)(__int64))v6)(v6);
      *a3 = v17;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
