/*
 * XREFs of ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x1800810AC
 * Callers:
 *     ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x180080BD0 (-RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ.c)
 *     ??_GUniqueExtendedExecutionSession@@UEAAPEAXI@Z @ 0x180080FB0 (--_GUniqueExtendedExecutionSession@@UEAAPEAXI@Z.c)
 *     ?OnSessionRevoked@UniqueExtendedExecutionSession@@QEAAJPEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Z @ 0x180081090 (-OnSessionRevoked@UniqueExtendedExecutionSession@@QEAAJPEAUIInspectable@@PEAUIExtendedExecutionR.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002A49C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ExtendedExecutionClosed@AEA_N@CDMUtilsUnlockTelemetry@@SAXAEA_N@Z @ 0x180082178 (--$ExtendedExecutionClosed@AEA_N@CDMUtilsUnlockTelemetry@@SAXAEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall UniqueExtendedExecutionSession::CloseSession(UniqueExtendedExecutionSession *this, char a2)
{
  int v3; // edi
  __int64 v4; // rcx
  __int64 v5; // rax
  UniqueExtendedExecutionSession *v6; // rcx
  UniqueExtendedExecutionSession *v7; // rcx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, UniqueExtendedExecutionSession **); // rcx
  __int64 (__fastcall **v9)(_QWORD, GUID *, UniqueExtendedExecutionSession **); // rax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+20h]
  UniqueExtendedExecutionSession *v14; // [rsp+70h] [rbp+28h] BYREF
  char v15; // [rsp+78h] [rbp+30h] BYREF
  __int64 v16; // [rsp+80h] [rbp+38h] BYREF
  __int64 v17; // [rsp+88h] [rbp+40h] BYREF

  v15 = a2;
  AcquireSRWLockExclusive(&UniqueExtendedExecutionSession::s_extendedExecutionLock);
  v14 = 0LL;
  if ( UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession )
  {
    v14 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, GUID *, UniqueExtendedExecutionSession **))(*UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession
                                                                                  + 24LL))(
           UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession,
           &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
           &v14) < 0
      || !v14 )
    {
      v6 = (UniqueExtendedExecutionSession *)UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession;
      UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession = 0LL;
      if ( !v6 )
        goto LABEL_21;
      v5 = *(_QWORD *)v6;
      goto LABEL_20;
    }
    if ( this )
      (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)this + 8LL))(this);
    if ( v14 && this )
    {
      if ( v14 == this )
        goto LABEL_14;
      v17 = 0LL;
      v16 = 0LL;
      if ( (**(int (__fastcall ***)(UniqueExtendedExecutionSession *, GUID *, __int64 *))v14)(
             v14,
             &GUID_00000000_0000_0000_c000_000000000046,
             &v17) >= 0 )
      {
        v3 = (**(__int64 (__fastcall ***)(UniqueExtendedExecutionSession *, GUID *, __int64 *))this)(
               this,
               &GUID_00000000_0000_0000_c000_000000000046,
               &v16);
        if ( v3 >= 0 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        if ( v3 >= 0 && v17 == v16 )
        {
LABEL_14:
          v4 = UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession;
          UniqueExtendedExecutionSession::s_weakSharedExtendedExecutionSession = 0LL;
          if ( v4 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
        }
      }
    }
    if ( this )
    {
      v5 = *(_QWORD *)this;
      v6 = this;
LABEL_20:
      (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(v5 + 16))(v6);
    }
  }
LABEL_21:
  v7 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  ReleaseSRWLockExclusive(&UniqueExtendedExecutionSession::s_extendedExecutionLock);
  v8 = (__int64 (__fastcall ***)(_QWORD, GUID *, UniqueExtendedExecutionSession **))*((_QWORD *)this + 8);
  if ( v8 )
  {
    v14 = 0LL;
    v9 = *v8;
    v14 = 0LL;
    v10 = (*v9)(v8, &GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e, &v14);
    if ( v10 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)v14 + 48LL))(v14);
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xC4,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
          (const char *)(unsigned int)v11);
      CDMUtilsUnlockTelemetry::ExtendedExecutionClosed<bool &>(&v15);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC2,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
        (const char *)(unsigned int)v10);
    }
    v12 = *((_QWORD *)this + 8);
    *((_QWORD *)this + 8) = 0LL;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    if ( v14 )
      (*(void (__fastcall **)(UniqueExtendedExecutionSession *))(*(_QWORD *)v14 + 16LL))(v14);
  }
}
