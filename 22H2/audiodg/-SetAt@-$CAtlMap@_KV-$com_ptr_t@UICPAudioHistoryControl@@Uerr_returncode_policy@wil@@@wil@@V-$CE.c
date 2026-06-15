/*
 * XREFs of ?SetAt@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAAPEAU__POSITION@@_KAEBV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1400502A4
 * Callers:
 *     ?Add@CAudioHistoryBufferManager@@QEAAJ_KPEAUICrossProcessMemory@@@Z @ 0x14004F8B0 (-Add@CAudioHistoryBufferManager@@QEAAJ_KPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 *     ?CreateNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x14004FB84 (-CreateNode@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?GetNode@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x14004FDF0 (-GetNode@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 */

__int64 __fastcall ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::SetAt(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 Node; // rax
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rcx
  unsigned int v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  Node = ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::GetNode(
           a1,
           a2,
           &v14,
           &v17,
           v15);
  v7 = Node;
  if ( Node )
  {
    v11 = *(_QWORD *)(Node + 8);
    v12 = *a3;
    *(_QWORD *)(Node + 8) = *a3;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  else
  {
    v8 = ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::CreateNode(
           a1,
           a2,
           v14,
           v17);
    try
    {
      v7 = v8;
      v17 = v8;
      v9 = *a3;
      v10 = *(_QWORD *)(v8 + 8);
      *(_QWORD *)(v8 + 8) = *a3;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    catch ( ... )
    {
      ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::RemoveAtPos(
        a1,
        v17);
      throw;
    }
  }
  return v7;
}
