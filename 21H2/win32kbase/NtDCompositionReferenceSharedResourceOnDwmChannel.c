/*
 * XREFs of NtDCompositionReferenceSharedResourceOnDwmChannel @ 0x1C0014810
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0010204 (-ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0012424 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z @ 0x1C0013D2C (-AddSystemResourceRef@CBatch@DirectComposition@@QEAAJVResourceHandle@@@Z.c)
 *     ?IsSystemResourceOfType@CConnection@DirectComposition@@QEAA_NVResourceHandle@@W4MIL_RESOURCE_TYPE@@@Z @ 0x1C00146F4 (-IsSystemResourceOfType@CConnection@DirectComposition@@QEAA_NVResourceHandle@@W4MIL_RESOURCE_TYP.c)
 *     UserIsCurrentProcessDwm @ 0x1C0014970 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C0093F84 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionReferenceSharedResourceOnDwmChannel(
        __int64 a1,
        void *a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned int *a5)
{
  unsigned int v8; // edi
  int v9; // r12d
  unsigned int v10; // ebx
  int v11; // edi
  PVOID v12; // rsi
  struct DirectComposition::CDwmChannel *v13; // r14
  struct DirectComposition::CDwmChannel *v15; // [rsp+20h] [rbp-28h] BYREF
  PVOID Object; // [rsp+28h] [rbp-20h] BYREF

  v8 = a1;
  v9 = 0;
  v10 = 0;
  if ( (unsigned int)UserIsCurrentProcessDwm(a1) )
  {
    v15 = 0LL;
    v11 = DirectComposition::CDwmChannel::ReferenceHandleAndLock(v8, &v15);
    if ( v11 >= 0 )
    {
      Object = 0LL;
      v11 = DirectComposition::ResourceObject::ResolveHandle(
              a2,
              1u,
              1,
              (struct DirectComposition::ResourceObject **)&Object);
      if ( v11 >= 0 )
      {
        v12 = Object;
        if ( DirectComposition::CConnection::IsSystemResourceOfType(
               *((_QWORD *)Object + 5),
               *((_DWORD *)Object + 12),
               a3) )
        {
          v9 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 5) + 152LL) + 28LL);
          v10 = *((_DWORD *)v12 + 12);
          v13 = v15;
          DirectComposition::CApplicationChannel::PreallocateNextBatch(v15);
          v11 = DirectComposition::CBatch::AddSystemResourceRef(*((_QWORD *)v13 + 21), v10);
        }
        else
        {
          v11 = -1073741790;
        }
        ObfDereferenceObject(v12);
      }
      (**(void (__fastcall ***)(struct DirectComposition::CDwmChannel *))v15)(v15);
    }
  }
  else
  {
    v11 = -1073741790;
  }
  if ( v11 >= 0 )
  {
    if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = v9;
    if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a5 = v10;
  }
  return (unsigned int)v11;
}
