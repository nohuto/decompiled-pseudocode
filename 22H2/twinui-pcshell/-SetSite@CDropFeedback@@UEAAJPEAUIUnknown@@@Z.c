/*
 * XREFs of ?SetSite@CDropFeedback@@UEAAJPEAUIUnknown@@@Z @ 0x180492D00
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800348D4 (McGenEventWrite_EventWriteTransfer.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180050E98 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_SetThreadPriority@CDropFeedback@@AEAAX_N@Z @ 0x18049351C (-_SetThreadPriority@CDropFeedback@@AEAAX_N@Z.c)
 */

__int64 __fastcall CDropFeedback::SetSite(CDropFeedback *this, struct IUnknown *a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+30h] [rbp-28h] BYREF

  if ( !a2 && *((_QWORD *)this + 2) )
  {
    v4 = (__int64 *)((char *)this + 128);
    v5 = *((_QWORD *)this + 16);
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 128LL))(v5);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v4);
    }
    v6 = *((_QWORD *)this + 17);
    if ( v6 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 128LL))(v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
    }
    DestroyWindow(*((HWND *)this + 8));
    CDropFeedback::_SetThreadPriority(this, 0);
    if ( (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McGenEventWrite_EventWriteTransfer(MICROSOFT_TWINUI_PUBLISHER_Context, &DropFeedback_Hide_Info, v7, 1u, &v9);
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 2, (__int64)a2);
  return 0LL;
}
