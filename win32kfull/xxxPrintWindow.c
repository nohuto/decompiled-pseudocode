__int64 __fastcall xxxPrintWindow(struct tagWND *a1, HDC a2, char a3)
{
  unsigned int v3; // r15d
  struct tagWND *v5; // rdi
  int v6; // ebx
  _DWORD *v7; // rdx
  int v8; // r12d
  int v9; // esi
  int v10; // r13d
  int v11; // r14d
  __int64 StyleWindow; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 DCEx; // rbx
  int v24; // [rsp+68h] [rbp-29h]
  __int128 v25; // [rsp+70h] [rbp-21h] BYREF
  __int64 v26; // [rsp+80h] [rbp-11h] BYREF
  int v27; // [rsp+88h] [rbp-9h]
  int v28; // [rsp+8Ch] [rbp-5h]
  __int128 v29; // [rsp+90h] [rbp-1h] BYREF
  __int128 v30; // [rsp+A0h] [rbp+Fh] BYREF
  __int64 v31; // [rsp+B0h] [rbp+1Fh]
  int v34; // [rsp+110h] [rbp+7Fh]

  v3 = 0;
  v34 = 0;
  v30 = 0LL;
  v31 = 0LL;
  v5 = a1;
  v29 = 0LL;
  v6 = 0;
  ThreadLockAlways(a1, &v30);
  v7 = (_DWORD *)*((_QWORD *)v5 + 5);
  v24 = a3 & 1;
  if ( (a3 & 1) != 0 )
  {
    v8 = v7[26] - v7[22];
    v9 = v7[28] - v7[26];
    v10 = v7[27] - v7[23];
    v11 = v7[29] - v7[27];
  }
  else
  {
    v8 = 0;
    v9 = v7[24] - v7[22];
    v10 = 0;
    v11 = v7[25] - v7[23];
  }
  if ( (a3 & 2) != 0 && (unsigned int)IsWindowDesktopComposed(v5) )
  {
    StyleWindow = GetStyleWindow((__int64)v5, 2568);
    v13 = StyleWindow;
    if ( StyleWindow )
    {
      if ( (struct tagWND *)StyleWindow != v5 )
      {
        v14 = *((_QWORD *)v5 + 5);
        if ( v24 )
          v15 = *(_OWORD *)(v14 + 104);
        else
          v15 = *(_OWORD *)(v14 + 88);
        v16 = *(_QWORD *)(v13 + 40);
        v25 = v15;
        v17 = *(__m128i *)(v16 + 88);
        LODWORD(v16) = _mm_cvtsi128_si32(v17);
        HIDWORD(v25) -= v17.m128i_i32[1];
        DWORD1(v25) -= v17.m128i_i32[1];
        LODWORD(v25) = v25 - v16;
        DWORD2(v25) -= v16;
        v27 = v17.m128i_i32[2] - v16;
        v28 = v17.m128i_i32[3] - v17.m128i_i32[1];
        v26 = 0LL;
        v3 = IntersectRect(&v29, (int *)&v26, (int *)&v25);
        if ( !v3 )
          goto LABEL_30;
        v8 = v29;
        v5 = (struct tagWND *)v13;
        v10 = DWORD1(v29);
        v9 = DWORD2(v29) - v29;
        v11 = HIDWORD(v29) - DWORD1(v29);
        ThreadLockExchangeAlways(v13, (__int64)&v30);
      }
      v6 = 1;
    }
    else
    {
      v6 = 0;
    }
  }
  if ( (GetRedirectionFlags((__int64)v5) & 8) != 0 )
  {
LABEL_21:
    xxxInternalUpdateWindow(v5, 1u);
    if ( v6 )
    {
      UserSessionSwitchLeaveCrit(v21);
      v3 = GreSpDwmSyncCaptureSurfaceBits(*(HWND *)v5, v10, v9, v11);
      EnterCrit(1LL, 0LL);
    }
    else
    {
      v3 = 1;
      DCEx = _GetDCEx(v5, 0LL, 3LL);
      NtGdiBitBltInternal(a2, 0, 0, v9, v11, DCEx, v8, v10, -2134114272, 0, 0);
      _ReleaseDC(DCEx);
    }
    if ( v34 )
    {
      v19 = *(unsigned int *)(*((_QWORD *)v5 + 5) + 232LL);
      if ( (v19 & 1) != 0 || (*((_DWORD *)v5 + 80) & 0x20000000) != 0 )
      {
        UnsetRedirectedWindow(v5, 8);
        *(_DWORD *)(*((_QWORD *)v5 + 5) + 232LL) &= ~1u;
        *((_DWORD *)v5 + 80) &= ~0x20000000u;
      }
    }
    goto LABEL_30;
  }
  if ( (int)SetRedirectedWindow(v5, 8) >= 0 )
  {
    if ( v6 )
      *((_DWORD *)v5 + 80) |= 0x20000000u;
    else
      *(_DWORD *)(*((_QWORD *)v5 + 5) + 232LL) |= 1u;
    v34 = 1;
    goto LABEL_21;
  }
  if ( (*(_BYTE *)(*((_QWORD *)v5 + 5) + 26LL) & 0x20) != 0 )
    v3 = 1;
LABEL_30:
  ThreadUnlock1(v19, v18, v20);
  return v3;
}
