/*
 * XREFs of NtDCompositionProcessChannelBatchBuffer @ 0x1C0065F60
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C0066180 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionProcessChannelBatchBuffer(__int64 a1, unsigned int a2, unsigned int *a3, bool *a4)
{
  unsigned int v4; // ebx
  __int64 v5; // r14
  __int64 v6; // r13
  int v7; // r15d
  __int64 v8; // rsi
  __int64 v9; // r12
  _QWORD *CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v11; // rdi
  struct _RTL_GENERIC_TABLE *v12; // rcx
  _QWORD *v13; // rax
  struct _ERESOURCE *v14; // rdi
  int v15; // edi
  bool v16; // r8
  unsigned int v18; // [rsp+30h] [rbp-58h] BYREF
  int v19; // [rsp+34h] [rbp-54h]
  int Buffer; // [rsp+38h] [rbp-50h] BYREF
  __int64 v21; // [rsp+3Ch] [rbp-4Ch]
  int v22; // [rsp+44h] [rbp-44h]
  int v23; // [rsp+90h] [rbp+8h]

  v23 = a1;
  v4 = 0;
  v5 = 0LL;
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
    Buffer = v23;
    v21 = 0LL;
    v22 = 0;
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
  }
  v19 = v7;
  if ( v7 < 0 )
  {
    v16 = 0;
  }
  else
  {
    v18 = 0;
    if ( a2 > *(_DWORD *)(v5 + 2712) )
    {
      v7 = -1073741811;
    }
    else
    {
      v7 = DirectComposition::CApplicationChannel::ProcessCommandBufferIterator(
             (DirectComposition::CApplicationChannel *)v5,
             *(void **)(v5 + 2720),
             a2,
             1,
             &v18);
      v4 = v18;
    }
    v15 = *(_DWORD *)(v5 + 524);
    v19 = v7;
    (**(void (__fastcall ***)(__int64))v5)(v5);
    v16 = v15 != 0;
  }
  if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a3 = v4;
  if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  *a4 = v16;
  return (unsigned int)v7;
}
