/*
 * XREFs of ?AddExclusiveModeProxy@CHolographicManager@@QEAAXPEAVCHolographicExclusiveMode@@@Z @ 0x1802A103C
 * Callers:
 *     ??0CHolographicExclusiveMode@@IEAA@PEAVCComposition@@@Z @ 0x1802A482C (--0CHolographicExclusiveMode@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?InternalRelease@CResource@@IEAAKXZ @ 0x180078858 (-InternalRelease@CResource@@IEAAKXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x1802A0D94 (--$_Emplace_reallocate@V-$com_ptr_t@VCHolographicExclusiveMode@@Uerr_returncode_policy@wil@@@wil.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1802A8D0C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

void __fastcall CHolographicManager::AddExclusiveModeProxy(
        CHolographicManager *this,
        struct CHolographicExclusiveMode *a2)
{
  struct CHolographicExclusiveMode **i; // rax
  _QWORD *v5; // rdx
  CHolographicInteropTaskQueue *v6; // rcx
  CResource *v7; // [rsp+50h] [rbp+8h] BYREF

  for ( i = (struct CHolographicExclusiveMode **)*((_QWORD *)this + 10);
        i != *((struct CHolographicExclusiveMode ***)this + 11);
        ++i )
  {
    if ( *i == a2 )
      return;
  }
  v7 = a2;
  if ( a2 )
    CMILRefCountImpl::AddReference((struct CHolographicExclusiveMode *)((char *)a2 + 8));
  v5 = (_QWORD *)*((_QWORD *)this + 11);
  if ( v5 == *((_QWORD **)this + 12) )
  {
    std::vector<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<CHolographicExclusiveMode,wil::err_returncode_policy>>(
      (__int64 *)this + 10,
      (__int64)v5,
      (__int64 *)&v7);
    if ( v7 )
      CResource::InternalRelease(v7);
  }
  else
  {
    *v5 = a2;
    *((_QWORD *)this + 11) += 8LL;
  }
  v6 = (CHolographicInteropTaskQueue *)*((_QWORD *)this + 6);
  if ( v6 )
  {
    if ( *((_BYTE *)this + 240) )
      CHolographicInteropTaskQueue::PostMessageW(
        v6,
        0x1Du,
        (struct IUnknown *)(((unsigned __int64)a2 + 64) & -(__int64)(a2 != 0LL)),
        0LL,
        0LL,
        0LL,
        0LL);
  }
}
