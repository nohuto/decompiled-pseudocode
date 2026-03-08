/*
 * XREFs of ??0PDOBaseEnum@@QEAA@XZ @ 0x1C02E1298
 * Callers:
 *     ?FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ @ 0x1C02E15D0 (-FinalizeCSAccountingAndSendETW@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01BCB60 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

PDOBaseEnum *__fastcall PDOBaseEnum::PDOBaseEnum(PDOBaseEnum *this)
{
  struct DXGGLOBAL *Global; // rax
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  struct DXGGLOBAL *v5; // rax

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_QWORD *)this + 1) = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)Global,
    (__int64 (__fastcall *)(_QWORD *, __int64))PDOBaseEnum::CountPDOs,
    (__int64)this,
    0);
  v3 = 8LL * *(unsigned int *)this;
  if ( !is_mul_ok(*(unsigned int *)this, 8uLL) )
    v3 = -1LL;
  v4 = operator new[](v3, 0x4B677844u, 256LL);
  *((_QWORD *)this + 1) = v4;
  if ( v4 )
  {
    v5 = DXGGLOBAL::GetGlobal();
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v5,
      (__int64 (__fastcall *)(_QWORD *, __int64))PDOBaseEnum::EnumPDOs,
      (__int64)this,
      0);
  }
  else
  {
    WdLogSingleEntry1(2LL, 263LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate PDOBase array",
      263LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return this;
}
