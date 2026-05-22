/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180046A60
 * Callers:
 *     <none>
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BBFC (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ??1DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x18006E0B8 (--1DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v5; // [rsp+30h] [rbp+8h] BYREF

  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
      (Microsoft::BamoImpl::DropAndReacquireLock *)&v5,
      *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
    v3 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 56LL))((char *)this - 16);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        34804LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v3);
      __debugbreak();
    }
    Microsoft::BamoImpl::DropAndReacquireLock::~DropAndReacquireLock((Microsoft::BamoImpl::DropAndReacquireLock *)&v5);
  }
}
