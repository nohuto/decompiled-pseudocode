/*
 * XREFs of _GetWindowPlacement @ 0x1C0006898
 * Callers:
 *     NtUserGetWindowPlacement @ 0x1C0006790 (NtUserGetWindowPlacement.c)
 *     NtUserGetInternalWindowPos @ 0x1C01D3200 (NtUserGetInternalWindowPos.c)
 * Callees:
 *     _GetProp @ 0x1C002ED8C (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C0044670 (_GetDesktopWindow.c)
 *     GetRect @ 0x1C0067778 (GetRect.c)
 *     _MonitorFromRect @ 0x1C00AEE80 (_MonitorFromRect.c)
 *     UpdateCheckpoint @ 0x1C01009F4 (UpdateCheckpoint.c)
 *     CkptUpdate @ 0x1C0100B24 (CkptUpdate.c)
 *     GetMonitorWorkRect @ 0x1C0101744 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C0101788 (GetMonitorRect.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall GetWindowPlacement(struct tagWND *a1, __int64 a2, int a3)
{
  int v6; // edi
  __int128 *updated; // r15
  char v8; // cl
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  unsigned __int8 v10; // al
  int v11; // ebx
  _QWORD *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int128 v15; // xmm0
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  __int64 Prop; // rax
  __int128 v21; // xmm1
  __m128i v22; // xmm0
  int v23; // eax
  __int128 v24; // [rsp+20h] [rbp-60h] BYREF
  __int128 v25; // [rsp+30h] [rbp-50h] BYREF
  __int128 v26; // [rsp+40h] [rbp-40h] BYREF
  __int128 v27; // [rsp+50h] [rbp-30h]
  __m128i si128; // [rsp+60h] [rbp-20h]
  int v29; // [rsp+70h] [rbp-10h]

  v26 = 0LL;
  v29 = 0;
  v27 = 0LL;
  si128 = 0LL;
  if ( (*(_BYTE *)(_HMPheFromObject() + 25) & 1) != 0 )
    return 0LL;
  v6 = 0;
  if ( a3 )
  {
    updated = (__int128 *)UpdateCheckpoint(a1);
    if ( updated )
      goto LABEL_4;
    return 0LL;
  }
  Prop = GetProp(a1, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
  updated = &v26;
  if ( Prop )
  {
    v21 = *(_OWORD *)(Prop + 16);
    v26 = *(_OWORD *)Prop;
    v22 = *(__m128i *)(Prop + 32);
    v23 = *(_DWORD *)(Prop + 48);
    v27 = v21;
    v29 = v23;
    si128 = v22;
  }
  else
  {
    v25 = 0LL;
    GetRect(a1, &v25, 66LL);
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    v29 = 0;
    v26 = v25;
    v27 = v25;
    CkptUpdate(a1);
  }
LABEL_4:
  v8 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v8 & 0x20) != 0 )
    *(_DWORD *)(a2 + 8) = 2;
  else
    *(_DWORD *)(a2 + 8) = (2 * (v8 & 1)) | 1;
  *(_OWORD *)(a2 + 28) = *updated;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  v10 = ShouldVirtualizeWindowRect(a1, CurrentThreadDpiAwarenessContext);
  v11 = v10;
  if ( v10 )
    TransformRectBetweenCoordinateSpaces(a2 + 28, a2 + 28, 0LL, a1);
  v12 = (_QWORD *)(a2 + 12);
  v13 = 0xFFFFFFFFLL;
  if ( (updated[3] & 0x20) != 0 )
  {
    *v12 = *((_QWORD *)updated + 4);
    if ( v11 )
    {
      TransformPointBetweenCoordinateSpaces(a2 + 12, a2 + 12, 0LL, a1);
      v13 = 0xFFFFFFFFLL;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 16) = -1;
    *(_DWORD *)v12 = -1;
  }
  if ( (updated[3] & 0x40) == 0 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL) & 0x40) != 0 )
  {
    *(_DWORD *)(a2 + 24) = -1;
    *(_DWORD *)(a2 + 20) = -1;
  }
  else
  {
    *(_QWORD *)(a2 + 20) = *((_QWORD *)updated + 5);
    if ( v11 )
      TransformPointBetweenCoordinateSpaces(a2 + 20, a2 + 20, 0LL, a1);
  }
  if ( *((_QWORD *)a1 + 13) == GetDesktopWindow(a1, v13) && *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
  {
    v14 = MonitorFromRect(a2 + 28, 1LL);
    v25 = *(_OWORD *)GetMonitorWorkRect(&v24, v14);
    v15 = *(_OWORD *)GetMonitorRect(&v24, v14);
    v16 = *((_DWORD *)updated + 12);
    v24 = v15;
    if ( (v16 & 0x20) != 0 )
    {
      *(_DWORD *)v12 += v15 - v25;
      *(_DWORD *)(a2 + 16) += DWORD1(v15) - DWORD1(v25);
    }
    v17 = v15 - v25;
    *(_DWORD *)(a2 + 28) += v15 - v25;
    *(_DWORD *)(a2 + 36) += v17;
    v18 = DWORD1(v15) - DWORD1(v25);
    *(_DWORD *)(a2 + 40) += DWORD1(v15) - DWORD1(v25);
    *(_DWORD *)(a2 + 32) += v18;
  }
  *(_DWORD *)(a2 + 4) = 0;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 && (updated[3] & 1) != 0 )
  {
    *(_DWORD *)(a2 + 4) = 1;
    v6 = 1;
  }
  if ( (updated[3] & 2) != 0 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
    *(_DWORD *)(a2 + 4) = v6 | 2;
  *(_DWORD *)a2 = 44;
  return 1LL;
}
