/*
 * XREFs of ?SetPosition@CDragVisual@@UEAAXUtagPOINT@@_N@Z @ 0x180496260
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x1800348D4 (McGenEventWrite_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_ClearVisualFeedback@CDragVisual@@AEAAXXZ @ 0x1804968DC (-_ClearVisualFeedback@CDragVisual@@AEAAXXZ.c)
 *     ?_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnailOptions@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180497F14 (-_UpdateThumbnail@CDragVisual@@AEAAXW4DCompThumbnailAnimation@@W4DirtyBitFlags@@W4UpdateThumbnai.c)
 *     ?_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z @ 0x180498220 (-_UpdateThumbnailRect@CDragVisual@@AEAA_NW4DragVisualMode@@@Z.c)
 */

void __fastcall CDragVisual::SetPosition(CDragVisual *this, struct tagPOINT a2, char a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  bool v8; // zf
  __int64 v9; // rcx
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 39) != a2 )
  {
    v10.Ptr = (ULONGLONG)a2;
    v5 = *((unsigned int *)this + 31);
    *((_QWORD *)this + 39) = v10.Ptr;
    if ( (unsigned __int8)CDragVisual::_UpdateThumbnailRect((char *)this - 24, v5) )
    {
      if ( *((_BYTE *)this + 250) || *((_DWORD *)this + 31) == 6 && !*((_BYTE *)this + 300) && !*((_BYTE *)this + 301) )
        v7 = 1LL;
      else
        v7 = 5LL;
      CDragVisual::_UpdateThumbnail((char *)this - 24, v7, 1LL);
    }
    v8 = *((_DWORD *)this + 31) == 6;
    *((_BYTE *)this + 250) = 0;
    if ( v8 && !*((_BYTE *)this + 300) && !*((_BYTE *)this + 301) )
    {
      CDragVisual::_ClearVisualFeedback((CDragVisual *)((char *)this - 24));
      *((_BYTE *)this + 302) = 1;
    }
    if ( *((_BYTE *)this + 256) && SetWindowRgn(*((HWND *)this + 16), 0LL, 1) )
      *((_BYTE *)this + 256) = 0;
    v9 = *((_QWORD *)this + 9);
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9);
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 9) + 72LL))(*((_QWORD *)this + 9));
    }
    if ( a3 && *((_BYTE *)this + 248) && (Microsoft_Windows_Immersive_ShellEnableBits & 8) != 0 )
      McGenEventWrite_EventWriteTransfer(
        MICROSOFT_TWINUI_PUBLISHER_Context,
        &DragVisual_TargetChanged_Info,
        v6,
        1u,
        &v10);
  }
}
