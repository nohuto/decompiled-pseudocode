/*
 * XREFs of xxxSetInternalWindowPos @ 0x1C0208D4C
 * Callers:
 *     NtUserSetInternalWindowPos @ 0x1C0201CC0 (NtUserSetInternalWindowPos.c)
 * Callees:
 *     UpdateCheckpoint @ 0x1C0041198 (UpdateCheckpoint.c)
 *     GetMonitorWorkRect @ 0x1C0041390 (GetMonitorWorkRect.c)
 *     GetMonitorRect @ 0x1C0041D58 (GetMonitorRect.c)
 *     _MonitorFromRect @ 0x1C0042270 (_MonitorFromRect.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00491B4 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 *     xxxSetWindowPos @ 0x1C006BBB4 (xxxSetWindowPos.c)
 *     _GetDesktopWindow @ 0x1C0070420 (_GetDesktopWindow.c)
 */

__int64 __fastcall xxxSetInternalWindowPos(struct tagWND *a1, unsigned __int8 a2, struct tagRECT *a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v9; // rdi
  __int64 v10; // rbx
  __m128i v11; // xmm6
  __int64 v12; // rcx
  int v13; // edx
  int v14; // eax
  __int64 v15; // rbx
  __m128i v16; // xmm6
  __int128 *MonitorRect; // rax
  __int128 v18; // xmm0
  unsigned int v19; // ecx
  char v20; // dl
  __int128 v21; // [rsp+40h] [rbp-38h] BYREF

  result = UpdateCheckpoint((__int64)a1);
  v9 = result;
  if ( result )
  {
    if ( a3 )
    {
      *(struct tagRECT *)result = *a3;
      if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
      {
        v10 = MonitorFromRect(a3, 1u, 0);
        v11 = *(__m128i *)GetMonitorWorkRect(&v21, v10);
        v12 = *(_QWORD *)GetMonitorRect(&v21, v10);
        v13 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 4)) - HIDWORD(v12);
        *(_DWORD *)(v9 + 12) += v13;
        v14 = _mm_cvtsi128_si32(v11) - v12;
        *(_DWORD *)v9 += v14;
        *(_DWORD *)(v9 + 8) += v14;
        *(_DWORD *)(v9 + 4) += v13;
      }
    }
    if ( !a4 || *(_DWORD *)a4 == -1 )
    {
      v19 = *(_DWORD *)(v9 + 48) & 0xFFFFFFDE;
    }
    else
    {
      *(_QWORD *)(v9 + 32) = *a4;
      if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
      {
        v15 = MonitorFromRect((struct tagRECT *)v9, 1u, 0);
        v16 = *(__m128i *)GetMonitorWorkRect(&v21, v15);
        MonitorRect = GetMonitorRect(&v21, v15);
        v18 = *MonitorRect;
        *(_DWORD *)(v9 + 32) += _mm_cvtsi128_si32(v16) - *MonitorRect;
        *(_DWORD *)(v9 + 36) += _mm_cvtsi128_si32(_mm_srli_si128(v16, 4)) - DWORD1(v18);
      }
      v19 = *(_DWORD *)(v9 + 48) | 0x21;
    }
    *(_DWORD *)(v9 + 48) = v19;
    v20 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
    if ( (v20 & 0x20) != 0 )
    {
      if ( (v19 & 0x20) != 0 )
        xxxSetWindowPos(a1, 0LL, *(unsigned int *)(v9 + 32), *(unsigned int *)(v9 + 36), 0, 0, 21);
    }
    else if ( (v20 & 1) == 0 && a3 )
    {
      xxxSetWindowPos(
        a1,
        0LL,
        (unsigned int)a3->left,
        (unsigned int)a3->top,
        a3->right - a3->left,
        a3->bottom - a3->top,
        4);
    }
    xxxShowWindowEx(a1, a2, 0);
    return 1LL;
  }
  return result;
}
