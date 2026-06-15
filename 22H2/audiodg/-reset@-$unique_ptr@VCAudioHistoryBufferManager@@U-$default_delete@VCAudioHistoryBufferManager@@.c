/*
 * XREFs of ?reset@?$unique_ptr@VCAudioHistoryBufferManager@@U?$default_delete@VCAudioHistoryBufferManager@@@wistd@@@wistd@@QEAAXPEAVCAudioHistoryBufferManager@@@Z @ 0x14001CAC0
 * Callers:
 *     _dynamic_atexit_destructor_for__g_AudioHistoryManager__ @ 0x14002DB20 (_dynamic_atexit_destructor_for__g_AudioHistoryManager__.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?RemoveAll@?$CAtlMap@_KV?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V?$CElementTraits@_K@ATL@@V?$CElementTraits@V?$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@@4@@ATL@@QEAAXXZ @ 0x140050158 (-RemoveAll@-$CAtlMap@_KV-$com_ptr_t@UICPAudioHistoryControl@@Uerr_returncode_policy@wil@@@wil@@V.c)
 */

void __fastcall wistd::unique_ptr<CAudioHistoryBufferManager,wistd::default_delete<CAudioHistoryBufferManager>>::reset(
        struct _RTL_CRITICAL_SECTION **a1,
        struct _RTL_CRITICAL_SECTION *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
  {
    ATL::CAtlMap<unsigned __int64,wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<wil::com_ptr_t<ICPAudioHistoryControl,wil::err_returncode_policy>>>::RemoveAll(&v2[1]);
    DeleteCriticalSection(v2);
    operator delete(v2);
  }
}
