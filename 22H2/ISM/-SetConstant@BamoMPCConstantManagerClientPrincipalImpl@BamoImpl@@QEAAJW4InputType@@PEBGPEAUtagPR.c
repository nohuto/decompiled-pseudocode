/*
 * XREFs of ?SetConstant@BamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@QEAAJW4InputType@@PEBGPEAUtagPROPVARIANT@@I@Z @ 0x180070060
 * Callers:
 *     ?Thunk_SetConstant_8@?$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180070720 (-Thunk_SetConstant_8@-$IMPCConstantManagerClientPrincipal_Receive@VBamoMPCConstantManagerClientP.c)
 * Callees:
 *     ?GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z @ 0x18000627C (-GetItem@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAPEAVConversationItem@23@II@Z.c)
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BBFC (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x18000BC64 (-AckReference@BamoProxyImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoMPCConstantManagerClientPrincipalImpl::SetConstant(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  int v9; // ecx
  _QWORD *i; // rbx
  __int64 v11; // r13
  __int64 v12; // rdx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v13; // rbp
  struct Microsoft::BamoImpl::ConversationItem *Item; // rax
  Microsoft::BamoImpl::BamoProxyImpl *v15; // rdi
  char *v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF

  v9 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 32LL);
  for ( i = *(_QWORD **)(a1 + 32); i && *(_DWORD *)(i[5] + 36LL) != v9; i = (_QWORD *)i[6] )
    ;
  v11 = (*(__int64 (__fastcall **)(_QWORD *))(*i + 24LL))(i);
  v12 = i[5];
  v13 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(v12 + 24) + 32LL);
  Item = Microsoft::BamoImpl::BaseBamoConnectionImpl::GetItem(v13, *(unsigned int *)(v12 + 36), a5);
  v15 = Item;
  if ( Item )
    v16 = (char *)Item - 16;
  else
    v16 = 0LL;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v23,
    v13);
  v17 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, char *))(*(_QWORD *)(a1 - 16) + 80LL))(
          a1 - 16,
          v11,
          a2,
          a3,
          a4,
          v16);
  if ( v17 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      8209LL,
      (__int64)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCMana"
               "gerBamo.MPCManagerBamo.bamo.h",
      (const char *)(unsigned int)v17);
  v20 = v23;
  if ( v23 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v23 + 128));
    *(_DWORD *)(v20 + 168) = GetCurrentThreadId();
  }
  if ( v15 )
    Microsoft::BamoImpl::BamoProxyImpl::AckReference(v15, v18, v19);
  return 0LL;
}
