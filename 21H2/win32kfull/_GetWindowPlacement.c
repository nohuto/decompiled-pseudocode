/*
 * XREFs of _GetWindowPlacement @ 0x1C007C658
 * Callers:
 *     NtUserGetWindowPlacement @ 0x1C007C550 (NtUserGetWindowPlacement.c)
 *     NtUserGetInternalWindowPos @ 0x1C01F4FA0 (NtUserGetInternalWindowPos.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     GetRect @ 0x1C00688B4 (GetRect.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     UpdateCheckpoint @ 0x1C007C924 (UpdateCheckpoint.c)
 *     CkptUpdate @ 0x1C007CA54 (CkptUpdate.c)
 *     GetMonitorRect @ 0x1C007CB08 (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C007CB4C (GetMonitorWorkRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall GetWindowPlacement(struct tagWND *a1, __int64 a2, int a3)
{
  int v6; // edi
  struct tagRECT *updated; // r15
  char v8; // cl
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  int v12; // ebx
  _QWORD *v13; // rcx
  __int64 v14; // rbx
  __int128 v15; // xmm0
  LONG left; // eax
  int v17; // ecx
  int v18; // eax
  __int64 Prop; // rax
  struct tagRECT v21; // xmm1
  __m128i v22; // xmm0
  int v23; // eax
  __int128 v24; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v25[16]; // [rsp+30h] [rbp-39h] BYREF
  struct tagRECT v26; // [rsp+40h] [rbp-29h] BYREF
  struct tagRECT v27; // [rsp+50h] [rbp-19h] BYREF
  struct tagRECT v28; // [rsp+60h] [rbp-9h]
  __m128i si128; // [rsp+70h] [rbp+7h]
  int v30; // [rsp+80h] [rbp+17h]

  v27 = 0LL;
  v30 = 0;
  v28 = 0LL;
  si128 = 0LL;
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0 )
    return 0LL;
  v6 = 0;
  if ( a3 )
  {
    updated = (struct tagRECT *)UpdateCheckpoint(a1);
    if ( updated )
      goto LABEL_4;
    return 0LL;
  }
  Prop = GetProp((__int64)a1, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
  updated = &v27;
  if ( Prop )
  {
    v21 = *(struct tagRECT *)(Prop + 16);
    v27 = *(struct tagRECT *)Prop;
    v22 = *(__m128i *)(Prop + 32);
    v23 = *(_DWORD *)(Prop + 48);
    v28 = v21;
    v30 = v23;
    si128 = v22;
  }
  else
  {
    v26 = 0LL;
    GetRect((__int64)a1, (__int64)&v26, 66);
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    v30 = 0;
    v27 = v26;
    v28 = v26;
    CkptUpdate(a1, &v26);
  }
LABEL_4:
  v8 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
  if ( (v8 & 0x20) != 0 )
    *(_DWORD *)(a2 + 8) = 2;
  else
    *(_DWORD *)(a2 + 8) = (2 * (v8 & 1)) | 1;
  *(struct tagRECT *)(a2 + 28) = *updated;
  if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480) + 224LL) & 1) != 0
    || (v10 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 480),
        (*(_BYTE *)(v10 + 224) & 0x20) != 0)
    || (v11 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 288LL),
        (((unsigned __int16)(v11 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                            v10,
                                                                            v9) >> 8)) & 0x1FF) == 0) )
  {
    v12 = 0;
  }
  else
  {
    v12 = 1;
    TransformRectBetweenCoordinateSpaces(a2 + 28, a2 + 28, 0LL, a1);
  }
  v13 = (_QWORD *)(a2 + 12);
  if ( (updated[3].left & 0x20) != 0 )
  {
    *v13 = *(_QWORD *)&updated[2].left;
    if ( v12 )
      TransformPointBetweenCoordinateSpaces(v13, a2 + 12, 0LL, a1);
  }
  else
  {
    *(_DWORD *)(a2 + 16) = -1;
    *(_DWORD *)v13 = -1;
  }
  if ( (updated[3].left & 0x40) == 0 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL) & 0x40) != 0 )
  {
    *(_DWORD *)(a2 + 24) = -1;
    *(_DWORD *)(a2 + 20) = -1;
  }
  else
  {
    *(_QWORD *)(a2 + 20) = *(_QWORD *)&updated[2].right;
    if ( v12 )
      TransformPointBetweenCoordinateSpaces(a2 + 20, a2 + 20, 0LL, a1);
  }
  if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) && *(char *)(*((_QWORD *)a1 + 5) + 24LL) >= 0 )
  {
    v14 = MonitorFromRect((struct tagRECT *)(a2 + 28), 1u, 0);
    v26 = *(struct tagRECT *)GetMonitorWorkRect(&v24, v14);
    v15 = *(_OWORD *)GetMonitorRect(v25, v14);
    left = updated[3].left;
    v24 = v15;
    if ( (left & 0x20) != 0 )
    {
      *(_DWORD *)(a2 + 12) += v15 - v26.left;
      *(_DWORD *)(a2 + 16) += DWORD1(v15) - v26.top;
    }
    v17 = v15 - v26.left;
    *(_DWORD *)(a2 + 28) += v15 - v26.left;
    *(_DWORD *)(a2 + 36) += v17;
    v18 = DWORD1(v15) - v26.top;
    *(_DWORD *)(a2 + 40) += DWORD1(v15) - v26.top;
    *(_DWORD *)(a2 + 32) += v18;
  }
  *(_DWORD *)(a2 + 4) = 0;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 && (updated[3].left & 1) != 0 )
  {
    *(_DWORD *)(a2 + 4) = 1;
    v6 = 1;
  }
  if ( (updated[3].left & 2) != 0 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
    *(_DWORD *)(a2 + 4) = v6 | 2;
  *(_DWORD *)a2 = 44;
  return 1LL;
}
