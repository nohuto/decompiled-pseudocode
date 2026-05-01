/*
 * XREFs of ?Close@AutoSysAppId@ProcessToken@ARI@@QEAAJXZ @ 0x1804D9A50
 * Callers:
 *     ?_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z @ 0x18003E8A0 (-_AnalyzeShellNotification@CApplicationManager@@AEAA_NPEAUHSHELL_DATA@1@@Z.c)
 * Callees:
 *     ?Free@ARI@@YAXPEAX@Z @ 0x1804D9A80 (-Free@ARI@@YAXPEAX@Z.c)
 */

__int64 __fastcall ARI::ProcessToken::AutoSysAppId::Close(ARI::ProcessToken::AutoSysAppId *this, void *a2)
{
  void *v3; // rcx

  v3 = *(void **)this;
  if ( v3 )
  {
    ARI::Free(v3, a2);
    *(_QWORD *)this = 0LL;
    *((_QWORD *)this + 1) = 0LL;
  }
  return 0LL;
}
