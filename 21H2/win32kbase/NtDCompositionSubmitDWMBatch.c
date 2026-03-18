/*
 * XREFs of NtDCompositionSubmitDWMBatch @ 0x1C0012DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SubmitDwmBatch@CDwmChannel@DirectComposition@@QEAAX_KPEBUSynchronizationObject@2@@Z @ 0x1C0012F5C (-SubmitDwmBatch@CDwmChannel@DirectComposition@@QEAAX_KPEBUSynchronizationObject@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C02137A4 (-ResolveHandle@SynchronizationObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 */

__int64 __fastcall NtDCompositionSubmitDWMBatch(__int64 a1, unsigned __int64 a2, void *a3, __int64 a4)
{
  int v4; // r13d
  int v6; // r12d
  DirectComposition::CDwmChannel *v7; // rsi
  int v8; // edi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // r14
  struct _ERESOURCE *v11; // rbx
  struct _RTL_GENERIC_TABLE *v12; // rcx
  __int64 v13; // rbp
  _QWORD *v14; // rax
  struct _ERESOURCE *v15; // rbx
  struct DirectComposition::SynchronizationObject *v16; // rbx
  int v18; // eax
  struct DirectComposition::SynchronizationObject *v19; // [rsp+20h] [rbp-48h] BYREF
  int Buffer; // [rsp+28h] [rbp-40h] BYREF
  __int64 v21; // [rsp+2Ch] [rbp-3Ch]
  int v22; // [rsp+34h] [rbp-34h]

  v4 = a4;
  v6 = a1;
  v7 = 0LL;
  v8 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3, a4);
  if ( CurrentProcessWin32Process && (v10 = *(_QWORD *)(CurrentProcessWin32Process + 256)) != 0 )
  {
    v11 = *(struct _ERESOURCE **)(v10 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v11, 1u);
    v12 = *(struct _RTL_GENERIC_TABLE **)v10;
    Buffer = v6;
    v21 = 0LL;
    v13 = 0LL;
    v22 = 0;
    v14 = RtlLookupElementGenericTable(v12, &Buffer);
    if ( v14 )
      v13 = v14[1];
    if ( v13 )
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    else
      v8 = -1073741790;
    ExReleaseResourceLite(*(PERESOURCE *)(v10 + 8));
    KeLeaveCriticalRegion();
    if ( v13 )
    {
      v15 = *(struct _ERESOURCE **)(v13 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v15, 1u);
      v7 = (DirectComposition::CDwmChannel *)v13;
    }
    if ( v8 >= 0 )
    {
      if ( (*(unsigned int (__fastcall **)(DirectComposition::CDwmChannel *))(*(_QWORD *)v7 + 8LL))(v7) == 2 )
      {
        v16 = 0LL;
        v19 = 0LL;
        if ( !a3
          || (v18 = DirectComposition::SynchronizationObject::ResolveHandle(a3, 1u, 1, &v19),
              v16 = v19,
              v8 = v18,
              v18 >= 0) )
        {
          if ( v4 )
            *((_BYTE *)v7 + 240) |= 0x30u;
          DirectComposition::CDwmChannel::SubmitDwmBatch(v7, a2, v16);
        }
        if ( v16 )
          ObfDereferenceObject(v16);
        (**(void (__fastcall ***)(DirectComposition::CDwmChannel *))v7)(v7);
      }
      else
      {
        (**(void (__fastcall ***)(DirectComposition::CDwmChannel *))v7)(v7);
        return (unsigned int)-1073741811;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v8;
}
