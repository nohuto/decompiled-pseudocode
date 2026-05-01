/*
 * XREFs of ?Destroy@CMultitaskingViewManager@@UEAAJXZ @ 0x1803F7790
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z @ 0x1803F9184 (-_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z.c)
 */

__int64 __fastcall CMultitaskingViewManager::Destroy(CMultitaskingViewManager *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // ebp
  unsigned __int64 i; // rbx

  v2 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 40) & -(__int64)(this != 0LL));
  v3 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v2, 1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 11);
  for ( i = *((_QWORD *)this + 36); i; CMultitaskingViewManager::_DestroyMTVHost(this, i) )
    --i;
  if ( v3 >= 0 )
    LeaveCriticalSection(v2);
  return 0LL;
}
