__int64 __fastcall SmmAcquireBlock(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  int v4; // r15d
  char v7; // bp
  char v8; // r12
  __int64 result; // rax
  _DWORD *v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rdi
  _QWORD *v13; // r13
  __int64 v14; // rax
  _QWORD *v15; // r8
  int v16; // edx
  int v17; // r8d
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // r8

  v4 = (unsigned __int8)a2;
  v7 = a3;
  v8 = a2;
  if ( (unsigned __int8)a2 > *(_BYTE *)(a1 + 1324) )
  {
    WdLogSingleEntry4(3LL, a1, (unsigned __int8)a2, (unsigned __int8)a3, a4);
    return 0LL;
  }
  v10 = (_DWORD *)(a1 + 24LL * (unsigned __int8)a2);
  if ( !(_BYTE)a3 || (result = SmmGetFreeBlockFromPool(a1 + 24LL * (unsigned __int8)a2, a2, a4)) == 0 )
  {
    if ( *(_DWORD **)v10 != v10 && !v7 )
      return SmmGetAnyFreeBlockFromPool(v10);
    LOBYTE(a3) = v7;
    v11 = SmmAcquireBlock(a1, (unsigned int)(v4 + 1), a3, a4);
    v12 = (_QWORD *)v11;
    if ( !v11 )
      return 0LL;
    v13 = (_QWORD *)v11;
    v14 = operator new[](0x28uLL, 0x36737844u, 64LL);
    v15 = (_QWORD *)v14;
    if ( !v14 )
    {
      _InterlockedIncrement(&dword_1C013BD4C);
      WdLogSingleEntry1(6LL, 1110LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            0,
            v16,
            v17,
            0LL,
            1,
            -1,
            L"Failed to allocate logical block",
            1110LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
      SmmReleaseBlock(a1, v12);
      return 0LL;
    }
    v18 = (unsigned __int64)(v8 & 0x3F) << 53;
    v19 = v18 & 0xFFEFFFFFFFFFFFFFuLL | v12[4] & 0xF80FFFFFFFFFFFFFuLL;
    v12[4] = v19;
    *(_QWORD *)(v14 + 32) = *(_QWORD *)(v14 + 32) & 0xF800000000000000uLL | v18 & 0xFFEFFFFFFFFFFFFFuLL | (v19 + (1LL << v4)) & 0xFFFFFFFFFFFFFLL;
    v20 = *v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 )
LABEL_25:
      __fastfail(3u);
    *v15 = v20;
    v15[1] = v12;
    *(_QWORD *)(v20 + 8) = v15;
    *v12 = v15;
    if ( v7 )
    {
      v21 = v15[4] & 0xFFFFFFFFFFFFFLL;
      if ( a4 < v21 || a4 >= (1LL << v4) + v21 )
      {
LABEL_23:
        v22 = *(_QWORD *)v10;
        v23 = v15 + 2;
        if ( *(_DWORD **)(*(_QWORD *)v10 + 8LL) == v10 )
        {
          *v23 = v22;
          result = (__int64)v13;
          v23[1] = v10;
          *(_QWORD *)(v22 + 8) = v23;
          *(_QWORD *)v10 = v23;
          ++v10[4];
          return result;
        }
        goto LABEL_25;
      }
    }
    else if ( (*(_DWORD *)(a1 + 1320) & 1) == 0 )
    {
      goto LABEL_23;
    }
    v13 = v15;
    v15 = v12;
    goto LABEL_23;
  }
  return result;
}
