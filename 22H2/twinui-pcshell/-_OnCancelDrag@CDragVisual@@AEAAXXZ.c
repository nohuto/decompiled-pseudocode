/*
 * XREFs of ?_OnCancelDrag@CDragVisual@@AEAAXXZ @ 0x180497008
 * Callers:
 *     ?_OnCaptureChanged@CDragVisual@@AEAAXXZ @ 0x18049708C (-_OnCaptureChanged@CDragVisual@@AEAAXXZ.c)
 *     ?_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z @ 0x180497788 (-_OnPointerCaptureChanged@CDragVisual@@AEAAXI@Z.c)
 *     ?_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z @ 0x180498688 (-_WndProc@CDragVisual@@AEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UITabletModeInputCallback@@@?$ComPtr@UIDragVisualHost@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UITabletModeInputCallback@@@WRL@Microsoft@@@Details@12@@Z @ 0x180493E7C (--$As@UITabletModeInputCallback@@@-$ComPtr@UIDragVisualHost@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 */

void __fastcall CDragVisual::_OnCancelDrag(CDragVisual *this)
{
  __int64 v1; // rdx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 17);
  if ( v1 )
  {
    if ( *((_DWORD *)this + 36) != 6 || *((_BYTE *)this + 324) || *((_BYTE *)this + 325) )
    {
      v2 = 0LL;
      if ( (int)Microsoft::WRL::ComPtr<IDragVisualHost>::As<ITabletModeInputCallback>((_QWORD *)this + 17, &v2) >= 0 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v2);
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 48LL))(*((_QWORD *)this + 17));
    }
  }
}
