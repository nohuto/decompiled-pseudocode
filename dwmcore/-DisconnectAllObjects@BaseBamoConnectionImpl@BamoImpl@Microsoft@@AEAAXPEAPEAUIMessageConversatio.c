/*
 * XREFs of ?DisconnectAllObjects@BaseBamoConnectionImpl@BamoImpl@Microsoft@@AEAAXPEAPEAUIMessageConversation@@PEAPEAVBaseBamoPeerImpl@23@PEAPEAVBamoStubImpl@23@PEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAV?$vector@PEAVBamoProxyImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoProxyImpl@BamoImpl@Microsoft@@@std@@@8@@Z @ 0x1801B62C0
 * Callers:
 *     ?Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801B6B74 (-Leave@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x1800ACA2C (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x1800ACA60 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B44D0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801B6250 (-DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801B674C (-EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV?$vector@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@V?$allocator@PEAVBamoPrincipalImpl@BamoImpl@Microsoft@@@std@@@std@@PEAPEAVBamoStubImpl@23@2@Z @ 0x1801B708C (-OnDisconnected@BaseBamoPeerImpl@BamoImpl@Microsoft@@QEAAX_NPEAV-$vector@PEAVBamoPrincipalImpl@B.c)
 */

void __fastcall Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectAllObjects(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        struct Microsoft::BamoImpl::ConnectionIndirector **a2,
        struct Microsoft::BamoImpl::ConnectionIndirector **a3,
        _QWORD *a4,
        __int64 a5)
{
  struct Microsoft::BamoImpl::ConnectionIndirector *v9; // rcx
  struct Microsoft::BamoImpl::ConnectionIndirector *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  const char *v13; // r9
  __int64 v14; // r9
  struct Microsoft::BamoImpl::ConnectionIndirector *v15; // rbx
  __int64 i; // rdi
  struct Microsoft::BamoImpl::ConnectionIndirector *v17; // rcx
  int v18; // eax
  int v19; // edx
  struct Microsoft::BamoImpl::ConnectionIndirector *v20; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF
  __int64 v23; // [rsp+78h] [rbp+10h] BYREF
  Microsoft::BamoImpl::BamoImplObject *v24; // [rsp+80h] [rbp+18h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock((Microsoft::BamoImpl::InternalLock *)&v24, this[12]);
  v9 = this[8];
  *a2 = v9;
  (*(void (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *))(*(_QWORD *)v9 + 8LL))(v9);
  v10 = this[14];
  *a4 = 0LL;
  *a3 = v10;
  Microsoft::BamoImpl::BaseBamoConnectionImpl::DisableLockDrops(
    (Microsoft::BamoImpl::BaseBamoConnectionImpl *)this,
    v11,
    v12,
    v13);
  v15 = this[14];
  for ( i = 0LL; v15; i = v23 )
  {
    v17 = this[8];
    this[14] = (struct Microsoft::BamoImpl::ConnectionIndirector *)*((_QWORD *)v15 + 8);
    LOBYTE(v14) = 1;
    v18 = (*(__int64 (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *, _QWORD, _QWORD, __int64))(*(_QWORD *)v17 + 72LL))(
            v17,
            *((unsigned int *)v15 + 9),
            0LL,
            v14);
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        985LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        (const char *)(unsigned int)v18,
        (int)Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectProxyAtShutdown);
    LOBYTE(v19) = 1;
    Microsoft::BamoImpl::BaseBamoPeerImpl::OnDisconnected((_DWORD)v15, v19, a5, (unsigned int)&v22, (__int64)&v23);
    if ( *a4 )
      *(_QWORD *)(i + 48) = v22;
    else
      *a4 = v22;
    v15 = this[14];
  }
  v20 = this[8];
  this[8] = 0LL;
  if ( v20 )
    (*(void (__fastcall **)(struct Microsoft::BamoImpl::ConnectionIndirector *))(*(_QWORD *)v20 + 16LL))(v20);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::EnableLockDrops((Microsoft::BamoImpl::BaseBamoConnectionImpl *)this);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v24);
}
