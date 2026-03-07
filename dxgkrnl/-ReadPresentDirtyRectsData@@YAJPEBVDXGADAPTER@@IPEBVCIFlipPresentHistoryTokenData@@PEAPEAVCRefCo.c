__int64 __fastcall ReadPresentDirtyRectsData(
        const struct DXGADAPTER *a1,
        int a2,
        const struct CIFlipPresentHistoryTokenData *a3,
        struct CRefCountedBuffer **a4)
{
  __int64 v6; // r15
  _DWORD *v7; // rax
  _OWORD *v8; // rdi
  BOOL v9; // r14d
  __int64 v10; // rax
  struct CRefCountedBuffer *v11; // rbx
  __int64 v13; // rbp
  void *Src; // [rsp+90h] [rbp+8h]

  *a4 = 0LL;
  v6 = (*(unsigned int (__fastcall **)(const struct CIFlipPresentHistoryTokenData *))(*(_QWORD *)a3 + 168LL))(a3);
  Src = (void *)(*(__int64 (__fastcall **)(const struct CIFlipPresentHistoryTokenData *))(*(_QWORD *)a3 + 176LL))(a3);
  v7 = (_DWORD *)(*(__int64 (__fastcall **)(const struct CIFlipPresentHistoryTokenData *))(*(_QWORD *)a3 + 184LL))(a3);
  v8 = v7;
  v9 = v7 && (*v7 || v7[2] || v7[1] || v7[3]);
  if ( (_DWORD)v6 || v9 )
  {
    v10 = operator new[]((unsigned int)(16 * (v9 + v6) + 40), 0x4B677844u, 64LL);
    v11 = (struct CRefCountedBuffer *)v10;
    if ( !v10 )
    {
      WdLogSingleEntry1(6LL, 1716LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for present dirty rects data",
        1716LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    *(_DWORD *)(v10 + 8) = 16 * (v9 + v6) + 24;
    *(_QWORD *)v10 = 0LL;
    *(_DWORD *)(v10 + 12) = 1;
    v13 = v10 + 40;
    *(_DWORD *)(v10 + 16) = 1;
    *(_DWORD *)(v10 + 24) = a2;
    *(_QWORD *)(v10 + 32) = v10 + 40;
    *(_DWORD *)(v10 + 28) = v9 + v6;
    memmove((void *)(v10 + 40), Src, 16 * v6);
    if ( v9 )
      *(_OWORD *)(16 * v6 + v13) = *v8;
    *a4 = v11;
  }
  return 0LL;
}
