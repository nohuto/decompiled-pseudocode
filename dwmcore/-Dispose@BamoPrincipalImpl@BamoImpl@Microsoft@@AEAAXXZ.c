/*
 * XREFs of ?Dispose@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAAXXZ @ 0x1801B6520
 * Callers:
 *     ?TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ @ 0x1801B8B40 (-TryDisposeAndNotifyRemoteProxies@BamoPrincipalImpl@BamoImpl@Microsoft@@AEAA_NXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801B6250 (-DisableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x1801B674C (-EnableLockDrops@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z @ 0x1801B6784 (-FreePrincipalItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXI@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BamoPrincipalImpl::Dispose(
        Microsoft::BamoImpl::BamoPrincipalImpl *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v5; // rsi
  unsigned int v6; // edx
  __int64 i; // rax
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 j; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rdi
  _QWORD *v13; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 2) + 32LL);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::DisableLockDrops(v5, a2, a3, a4);
  v6 = *((_DWORD *)this + 6);
  *((_DWORD *)this + 6) = 0;
  if ( *((_QWORD *)v5 + 8) && v6 )
    Microsoft::BamoImpl::BaseBamoConnectionImpl::FreePrincipalItem(v5, v6);
  for ( i = *((_QWORD *)this + 4); i; i = *(_QWORD *)(i + 40) )
  {
    v8 = *(_QWORD *)(i + 32);
    v9 = 0LL;
    for ( j = *(_QWORD *)(v8 + 56); j; j = *(_QWORD *)(j + 48) )
    {
      if ( j == i )
      {
        v11 = *(_QWORD *)(i + 48);
        if ( v9 )
          *(_QWORD *)(v9 + 48) = v11;
        else
          *(_QWORD *)(v8 + 56) = v11;
        *(_QWORD *)(i + 48) = 0LL;
        break;
      }
      v9 = j;
    }
    if ( !j )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        257LL,
        (__int64)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoPeer.inl",
        (const char *)retaddr);
    *(_QWORD *)(i + 24) = 0LL;
    *(_BYTE *)(i + 56) = 0;
  }
  v12 = (_QWORD *)*((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = 0LL;
  Microsoft::BamoImpl::BaseBamoConnectionImpl::EnableLockDrops(v5);
  if ( v12 )
  {
    do
    {
      v13 = (_QWORD *)v12[5];
      v12[5] = 0LL;
      (*(void (__fastcall **)(_QWORD *))(*v12 + 8LL))(v12);
      v12 = v13;
    }
    while ( v13 );
  }
}
