/*
 * XREFs of NtDCompositionCommitChannel @ 0x1C0012460
 * Callers:
 *     <none>
 * Callees:
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C0012700 (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1C0013A44 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C02137A4 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionCommitChannel(
        int a1,
        _DWORD *a2,
        struct DirectComposition::SynchronizationObject *a3,
        __int64 a4,
        void *a5)
{
  _DWORD *v5; // r15
  __int64 v6; // r14
  _BYTE *v7; // rdx
  __int64 v8; // r13
  int v9; // esi
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 CurrentProcessWin32Process; // rax
  struct _ERESOURCE *v13; // rbx
  struct _RTL_GENERIC_TABLE *v14; // rcx
  _QWORD *v15; // rax
  struct _ERESOURCE *v16; // rbx
  struct DirectComposition::SynchronizationObject *v17; // rdi
  int v18; // r13d
  int v19; // r12d
  struct DirectComposition::SynchronizationObject *v20; // rbx
  bool v21; // r12
  bool v22; // si
  bool v23; // r12
  struct DirectComposition::CBatch *v25; // [rsp+38h] [rbp-50h] BYREF
  _BYTE Buffer[12]; // [rsp+40h] [rbp-48h] BYREF
  int v27; // [rsp+4Ch] [rbp-3Ch]
  struct DirectComposition::SynchronizationObject *v29; // [rsp+A0h] [rbp+18h] BYREF
  int v30; // [rsp+A8h] [rbp+20h]

  v30 = a4;
  v29 = a3;
  v5 = a2;
  v6 = 0LL;
  *(_QWORD *)Buffer = 0LL;
  LODWORD(v25) = 0;
  if ( a3 )
  {
    if ( a2 )
    {
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        a2 = (_DWORD *)MmUserProbeAddress;
      *a2 = *a2;
    }
    v7 = a3;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      v7 = (_BYTE *)MmUserProbeAddress;
    *v7 = *v7;
    v8 = 0LL;
    v9 = 0;
    v10 = 0LL;
    v11 = 0LL;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(MmUserProbeAddress, v7, a3, a4);
    if ( CurrentProcessWin32Process )
      v11 = *(_QWORD *)(CurrentProcessWin32Process + 256);
    if ( v11 )
    {
      v13 = *(struct _ERESOURCE **)(v11 + 8);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v13, 1u);
      v14 = *(struct _RTL_GENERIC_TABLE **)v11;
      *(_DWORD *)Buffer = a1;
      *(_QWORD *)&Buffer[4] = 0LL;
      v27 = 0;
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
    v17 = v29;
    v18 = (int)v25;
    v19 = v30;
    if ( v9 < 0 )
    {
      v23 = 0;
    }
    else
    {
      v20 = 0LL;
      v29 = 0LL;
      if ( a5 )
      {
        DirectComposition::SynchronizationObject::ResolveHandle(a5, 1u, 1, &v29);
        v20 = v29;
      }
      v21 = v19 != 0;
      do
      {
        v29 = 0LL;
        v25 = 0LL;
        v22 = DirectComposition::CApplicationChannel::BuildBatch(
                (DirectComposition::CApplicationChannel *)v6,
                &v29,
                &v25,
                v21);
        if ( v29 )
          DirectComposition::CApplicationChannel::SubmitBatch(
            (DirectComposition::CApplicationChannel *)v6,
            v29,
            v25,
            *(_BYTE *)(v6 + 48) & 1,
            v20);
      }
      while ( !v22 );
      v23 = *(_DWORD *)(v6 + 516) != 0;
      v9 = 0;
      v18 = *(_DWORD *)(v6 + 376);
      if ( v20 )
        ObfDereferenceObject(v20);
      (**(void (__fastcall ***)(__int64))v6)(v6);
    }
    if ( v9 >= 0 )
    {
      if ( v5 )
        *v5 = v18;
      *(_BYTE *)v17 = v23;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v9;
}
