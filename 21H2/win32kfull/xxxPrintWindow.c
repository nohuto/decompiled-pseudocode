/*
 * XREFs of xxxPrintWindow @ 0x1C01E297C
 * Callers:
 *     NtUserPrintWindow @ 0x1C01FB1B0 (NtUserPrintWindow.c)
 * Callees:
 *     SetRedirectedWindow @ 0x1C001F9FC (SetRedirectedWindow.c)
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     GetStyleWindow @ 0x1C004CDA0 (GetStyleWindow.c)
 *     GetRedirectionFlags @ 0x1C0090390 (GetRedirectionFlags.c)
 *     UnsetRedirectedWindow @ 0x1C00B40A4 (UnsetRedirectedWindow.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00C9704 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ThreadLockExchangeAlways @ 0x1C010150C (ThreadLockExchangeAlways.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026DCB8 (GreSpDwmSyncCaptureSurfaceBits.c)
 */

__int64 __fastcall xxxPrintWindow(struct tagWND *a1, HDC a2, char a3)
{
  int v4; // ebx
  unsigned int v5; // r15d
  __int64 ThreadWin32Thread; // rax
  _DWORD *v8; // rdx
  LONG v9; // r12d
  int v10; // esi
  int v11; // r13d
  int v12; // r14d
  struct tagWND *StyleWindow; // rax
  struct tagWND *v14; // rbx
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  int v22; // eax
  __int64 v23; // rcx
  HDC DCEx; // rbx
  __int128 v26; // [rsp+68h] [rbp-31h] BYREF
  __int64 v27; // [rsp+78h] [rbp-21h] BYREF
  int v28; // [rsp+80h] [rbp-19h]
  int v29; // [rsp+84h] [rbp-15h]
  __int128 v30; // [rsp+88h] [rbp-11h] BYREF
  _QWORD v31[11]; // [rsp+98h] [rbp-1h] BYREF
  int v32; // [rsp+100h] [rbp+67h]
  int v35; // [rsp+118h] [rbp+7Fh]

  v4 = 0;
  v5 = 0;
  v31[2] = 0LL;
  v32 = 0;
  v30 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v31[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v31;
  v31[1] = a1;
  HMLockObject(a1);
  v8 = (_DWORD *)*((_QWORD *)a1 + 5);
  v35 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    v9 = v8[26] - v8[22];
    v10 = v8[28] - v8[26];
    v11 = v8[27] - v8[23];
    v12 = v8[29] - v8[27];
  }
  else
  {
    v9 = 0;
    v10 = v8[24] - v8[22];
    v11 = 0;
    v12 = v8[25] - v8[23];
  }
  if ( (a3 & 2) != 0 && (unsigned int)IsWindowDesktopComposed(a1) )
  {
    StyleWindow = (struct tagWND *)GetStyleWindow((__int64)a1, 2568);
    v14 = StyleWindow;
    if ( StyleWindow )
    {
      if ( StyleWindow != a1 )
      {
        v15 = *((_QWORD *)a1 + 5);
        if ( v35 )
          v16 = *(_OWORD *)(v15 + 104);
        else
          v16 = *(_OWORD *)(v15 + 88);
        v17 = *((_QWORD *)v14 + 5);
        v26 = v16;
        v18 = *(__m128i *)(v17 + 88);
        LODWORD(v17) = _mm_cvtsi128_si32(v18);
        HIDWORD(v26) -= v18.m128i_i32[1];
        DWORD1(v26) -= v18.m128i_i32[1];
        LODWORD(v26) = v26 - v17;
        DWORD2(v26) -= v17;
        v28 = v18.m128i_i32[2] - v17;
        v29 = v18.m128i_i32[3] - v18.m128i_i32[1];
        v27 = 0LL;
        v5 = IntersectRect(&v30, (int *)&v27, (int *)&v26);
        if ( !v5 )
          goto LABEL_26;
        v9 = v30;
        a1 = v14;
        v11 = DWORD1(v30);
        v10 = DWORD2(v30) - v30;
        v12 = HIDWORD(v30) - DWORD1(v30);
        ThreadLockExchangeAlways((__int64)v14, (__int64)v31);
      }
      v4 = 1;
    }
    else
    {
      v4 = 0;
    }
  }
  if ( (GetRedirectionFlags((__int64)a1) & 8) != 0 )
  {
LABEL_18:
    xxxInternalUpdateWindow(a1, 1);
    if ( v4 )
    {
      UserSessionSwitchLeaveCrit(v23);
      v5 = GreSpDwmSyncCaptureSurfaceBits(*(HWND *)a1, v11, v10, v12);
      EnterCrit(1LL, 0LL);
    }
    else
    {
      v5 = 1;
      DCEx = (HDC)_GetDCEx(a1, 0LL, 3LL);
      NtGdiBitBltInternal(a2, 0, 0, v10, v12, DCEx, v9, v11, -2134114272, 0, 0);
      _ReleaseDC(DCEx);
    }
    if ( v32 )
    {
      v20 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 232LL);
      if ( (v20 & 1) != 0 )
      {
        UnsetRedirectedWindow(a1, 8);
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~1u;
      }
    }
    goto LABEL_26;
  }
  v22 = SetRedirectedWindow(a1, 8);
  v20 = *((_QWORD *)a1 + 5);
  if ( v22 >= 0 )
  {
    *(_DWORD *)(v20 + 232) |= 1u;
    v32 = 1;
    goto LABEL_18;
  }
  if ( (*(_BYTE *)(v20 + 26) & 0x20) != 0 )
    v5 = 1;
LABEL_26:
  ThreadUnlock1(v20, v19, v21);
  return v5;
}
