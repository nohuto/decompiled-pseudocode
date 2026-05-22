/*
 * XREFs of ?UpdateNumberOfReaders@BamoDataProviderPrincipalImpl@BamoImpl@@QEAAJI@Z @ 0x180144D7C
 * Callers:
 *     ?Thunk_UpdateNumberOfReaders_5@?$IDataProviderPrincipal_Receive@VBamoDataProviderPrincipalImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180144C00 (-Thunk_UpdateNumberOfReaders_5@-$IDataProviderPrincipal_Receive@VBamoDataProviderPrincipalImpl@B.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BBFC (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BamoImpl::BamoDataProviderPrincipalImpl::UpdateNumberOfReaders(
        BamoImpl::BamoDataProviderPrincipalImpl *this,
        int a2)
{
  int v3; // ecx
  __int64 i; // rbx
  int v5; // eax
  __int64 v6; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 32LL) + 32LL);
  for ( i = *((_QWORD *)this + 4); i && *(_DWORD *)(*(_QWORD *)(i + 40) + 36LL) != v3; i = *(_QWORD *)(i + 48) )
    ;
  *(_DWORD *)(i + 64) = a2;
  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v9,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*((_QWORD *)this + 2) + 32LL));
  v5 = (*(__int64 (__fastcall **)(char *, __int64))(*((_QWORD *)this - 2) + 40LL))((char *)this - 16, i - 16);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      7535LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
      (const char *)(unsigned int)v5);
  v6 = v9;
  if ( v9 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 128));
    *(_DWORD *)(v6 + 168) = GetCurrentThreadId();
  }
  return 0LL;
}
