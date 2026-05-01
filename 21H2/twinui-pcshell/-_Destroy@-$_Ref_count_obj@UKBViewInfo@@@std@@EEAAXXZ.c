/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@UKBViewInfo@@@std@@EEAAXXZ @ 0x1803C61C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAXXZ @ 0x1800EE5CC (-_Tidy@-$vector@PEAXV-$allocator@PEAX@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Ref_count_obj<KBViewInfo>::_Destroy(__int64 a1)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  WindowsDeleteString(*(HSTRING *)(a1 + 128));
  *(_QWORD *)(a1 + 128) = 0LL;
  std::vector<void *>::_Tidy(a1 + 80);
  v2 = *(_QWORD ***)(a1 + 64);
  *v2[1] = 0LL;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x18);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*(void **)(a1 + 64), (const struct std::nothrow_t *)0x18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 32));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 24));
  return Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)(a1 + 16));
}
