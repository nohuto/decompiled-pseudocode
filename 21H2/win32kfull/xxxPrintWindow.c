/*
 * XREFs of xxxPrintWindow @ 0x1C01E82D0
 * Callers:
 *     NtUserPrintWindow @ 0x1C0200470 (NtUserPrintWindow.c)
 * Callees:
 *     GetStyleWindow @ 0x1C0071560 (GetStyleWindow.c)
 *     IntersectRect @ 0x1C0075160 (IntersectRect.c)
 *     NtGdiBitBltInternal @ 0x1C0088690 (NtGdiBitBltInternal.c)
 *     SetRedirectedWindow @ 0x1C00BD1BC (SetRedirectedWindow.c)
 *     UnsetRedirectedWindow @ 0x1C00EF7E8 (UnsetRedirectedWindow.c)
 *     GetRedirectionFlags @ 0x1C00F2430 (GetRedirectionFlags.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F5550 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C0270200 (GreSpDwmSyncCaptureSurfaceBits.c)
 */

__int64 __fastcall xxxPrintWindow(struct tagWND *a1, HDC a2, char a3)
{
  _DWORD *v3; // r9
  int v5; // edi
  LONG v6; // r12d
  int v7; // r14d
  int v8; // r13d
  int v9; // r15d
  struct tagWND *StyleWindow; // rax
  __int64 v11; // rcx
  struct tagWND *v12; // rbx
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int64 v15; // rax
  __m128i v16; // xmm0
  unsigned int v17; // edi
  int v18; // eax
  __int64 v19; // rcx
  HDC DCEx; // rbx
  __int128 v22; // [rsp+60h] [rbp-9h] BYREF
  __int64 v23; // [rsp+70h] [rbp+7h] BYREF
  int v24; // [rsp+78h] [rbp+Fh]
  int v25; // [rsp+7Ch] [rbp+13h]
  int v26[16]; // [rsp+80h] [rbp+17h] BYREF
  int v28; // [rsp+E0h] [rbp+77h]

  v28 = 0;
  v3 = (_DWORD *)*((_QWORD *)a1 + 5);
  *(_OWORD *)v26 = 0LL;
  v5 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    v6 = v3[26] - v3[22];
    v7 = v3[28] - v3[26];
    v8 = v3[27] - v3[23];
    v9 = v3[29] - v3[27];
  }
  else
  {
    v6 = 0;
    v7 = v3[24] - v3[22];
    v8 = 0;
    v9 = v3[25] - v3[23];
  }
  if ( (a3 & 2) != 0
    && (unsigned int)IsWindowDesktopComposed(a1)
    && (StyleWindow = (struct tagWND *)GetStyleWindow((__int64)a1, 2568), (v12 = StyleWindow) != 0LL) )
  {
    if ( StyleWindow != a1 )
    {
      v13 = *((_QWORD *)a1 + 5);
      if ( v5 )
        v14 = *(_OWORD *)(v13 + 104);
      else
        v14 = *(_OWORD *)(v13 + 88);
      v15 = *((_QWORD *)v12 + 5);
      v22 = v14;
      v16 = *(__m128i *)(v15 + 88);
      LODWORD(v15) = _mm_cvtsi128_si32(v16);
      HIDWORD(v22) -= v16.m128i_i32[1];
      DWORD1(v22) -= v16.m128i_i32[1];
      LODWORD(v22) = v22 - v15;
      DWORD2(v22) -= v15;
      v24 = v16.m128i_i32[2] - v15;
      v25 = v16.m128i_i32[3] - v16.m128i_i32[1];
      v23 = 0LL;
      v17 = IntersectRect(v26, (int *)&v23, (int *)&v22);
      if ( !v17 )
        return v17;
      v7 = v26[2] - v26[0];
      v8 = v26[1];
      v9 = v26[3] - v26[1];
    }
    if ( gdwInAtomicOperation )
    {
      v11 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v11);
    v17 = GreSpDwmSyncCaptureSurfaceBits(*(HWND *)v12, v8, v7, v9);
    EnterCrit(0LL, 1LL);
  }
  else
  {
    if ( (GetRedirectionFlags((__int64)a1) & 8) == 0 )
    {
      v18 = SetRedirectedWindow(a1, 8);
      v19 = *((_QWORD *)a1 + 5);
      if ( v18 < 0 )
        return (*(unsigned __int8 *)(v19 + 26) >> 5) & 1;
      *(_DWORD *)(v19 + 232) |= 4u;
      v28 = 1;
    }
    v17 = 1;
    xxxInternalUpdateWindow(a1, 1u);
    DCEx = (HDC)_GetDCEx(a1, 0LL, 3LL);
    NtGdiBitBltInternal(a2, 0, 0, v7, v9, DCEx, v6, v8, -2134114272, 0, 0);
    _ReleaseDC(DCEx);
    if ( v28 && (*(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) & 4) != 0 )
    {
      UnsetRedirectedWindow(a1, 8);
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) &= ~4u;
    }
  }
  return v17;
}
