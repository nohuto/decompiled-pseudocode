/*
 * XREFs of ?Disconnect@CConnection@@QEAAXXZ @ 0x1801B28AC
 * Callers:
 *     ?MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z @ 0x1801B04C0 (-MilCompositionEngine_Uninitialize@@YAJPEAUHMIL_CONNECTION__@@@Z.c)
 *     ??1CConnection@@UEAA@XZ @ 0x1801B27CC (--1CConnection@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CConnection::Disconnect(CConnection *this)
{
  void *v2; // rax

  if ( *((_BYTE *)this + 24) )
  {
    *((_BYTE *)this + 24) = 0;
    v2 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 40LL))(*((_QWORD *)this + 1));
    SetEvent(v2);
    WaitForSingleObject(*((HANDLE *)this + 5), 0xFFFFFFFF);
  }
}
