/*
 * XREFs of ?CompleteReconnection@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C000A870
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000CF94 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z @ 0x1C001229C (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_NPEBUSynchronizationObject@2@@Z.c)
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C0098354 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::CompleteReconnection(
        DirectComposition::CApplicationChannel *this)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  char v4; // al
  __int64 v5; // rax
  struct _ERESOURCE *v6; // rbx
  __int64 v7; // rax
  _QWORD *i; // rcx
  unsigned __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  while ( 1 )
  {
    v2 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
           (DirectComposition::CApplicationChannel *)((char *)this + 112),
           &v9);
    v3 = v2;
    if ( !v2 )
      break;
    v2[1] = *((_QWORD *)this + 50);
    *((_QWORD *)this + 50) = v2;
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*v2 + 64LL))(v2) )
      *((_DWORD *)v3 + 4) |= 2u;
    for ( i = (_QWORD *)v3[5]; i; i = (_QWORD *)i[4] )
    {
      *i = *((_QWORD *)this + 55);
      *((_QWORD *)this + 55) = i;
    }
  }
  if ( *((_QWORD *)this + 211) )
    *((_BYTE *)this + 240) |= 0x80u;
  v4 = *((_BYTE *)this + 241);
  if ( *((_QWORD *)this + 212) )
    v4 |= 1u;
  if ( (v4 & 4) != 0 )
    v4 |= 2u;
  *((_BYTE *)this + 241) = v4 | 8;
  v5 = *((_QWORD *)this + 5);
  *((_DWORD *)this + 6) = 0;
  v6 = *(struct _ERESOURCE **)(v5 + 8);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v6, 1u);
  DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
    (DirectComposition::CApplicationChannel *)((char *)this + 1624),
    *(struct _EPROCESS **)(*((_QWORD *)this + 5) + 208LL));
  ExReleaseResourceLite(*(PERESOURCE *)(*((_QWORD *)this + 5) + 8LL));
  KeLeaveCriticalRegion();
  if ( (*((_BYTE *)this + 240) & 1) == 0 )
  {
    v7 = *((_QWORD *)this + 21);
    if ( !v7 || !*(_QWORD *)(v7 + 40) )
      DirectComposition::CApplicationChannel::Commit(this, 0LL, 0, 0LL);
  }
}
