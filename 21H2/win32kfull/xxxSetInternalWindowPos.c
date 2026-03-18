/*
 * XREFs of xxxSetInternalWindowPos @ 0x1C02108F0
 * Callers:
 *     NtUserSetInternalWindowPos @ 0x1C01FD640 (NtUserSetInternalWindowPos.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C0048A4C (xxxSetWindowPos.c)
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z @ 0x1C00699A0 (-xxxShowWindowEx@@YAHPEAUtagWND@@EW4MinMaxOptions@@@Z.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     UpdateCheckpoint @ 0x1C007C924 (UpdateCheckpoint.c)
 *     GetMonitorRect @ 0x1C007CB08 (GetMonitorRect.c)
 *     GetMonitorWorkRect @ 0x1C007CB4C (GetMonitorWorkRect.c)
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
  _BYTE v21[16]; // [rsp+40h] [rbp-38h] BYREF

  result = UpdateCheckpoint(a1);
  v9 = result;
  if ( result )
  {
    if ( a3 )
    {
      *(struct tagRECT *)result = *a3;
      if ( *((_QWORD *)a1 + 13) == GetDesktopWindow((__int64)a1) )
      {
        v10 = MonitorFromRect(a3, 1u, 0);
        v11 = *(__m128i *)GetMonitorWorkRect((__int64)v21, v10);
        v12 = *(_QWORD *)GetMonitorRect((__int64)v21, v10);
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
        v16 = *(__m128i *)GetMonitorWorkRect((__int64)v21, v15);
        MonitorRect = (__int128 *)GetMonitorRect((__int64)v21, v15);
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
    xxxShowWindowEx((ULONG_PTR)a1, a2, 0);
    return 1LL;
  }
  return result;
}
