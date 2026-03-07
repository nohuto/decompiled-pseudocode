unsigned __int64 __fastcall MiInsertLargeUserMapping(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD **a3,
        int a4,
        unsigned int a5)
{
  __int64 v5; // r15
  unsigned __int64 v6; // rsi
  _KPROCESS *Process; // r13
  __int64 v10; // rcx
  unsigned __int64 v11; // rbp
  BOOL v12; // edi
  unsigned int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned __int64 result; // rax
  unsigned __int64 v17; // rbx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  unsigned int v20; // r13d
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  int v23; // r15d
  __int64 v24; // r8
  bool v25; // zf
  __int64 v26; // rax
  unsigned __int64 UsedPtesHandle; // rax
  unsigned __int64 v28; // [rsp+20h] [rbp-58h]
  _KPROCESS *v29; // [rsp+28h] [rbp-50h]
  unsigned __int64 v30; // [rsp+80h] [rbp+8h]
  __int64 v31; // [rsp+88h] [rbp+10h]
  __int64 v32; // [rsp+90h] [rbp+18h]
  BOOL v33; // [rsp+98h] [rbp+20h]

  v5 = a2;
  v6 = a2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v29 = Process;
  v32 = MiLargePageSizes[a4];
  if ( a4 != 2 )
  {
    v10 = (unsigned int)(2 - a4);
    do
    {
      v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v10;
    }
    while ( v10 );
  }
  v11 = v6;
  v28 = v6;
  v12 = v6 >= 0xFFFFF6FB7DBED000uLL && v6 <= 0xFFFFF6FB7DBEDFFFuLL;
  v13 = a5 | 0x80000000;
  v33 = v12;
  if ( (*(_DWORD *)(a1 + 48) & 0x600000) == 0x600000 )
    v13 = a5;
  if ( a4 != 2 )
    v13 |= 0x4000000u;
  v14 = 16LL;
  if ( a4 != 2 )
    v14 = 1LL;
  v15 = 0LL;
  v30 = v14;
  result = MiMakeValidPte(a2, 0LL, v13);
  v17 = result;
LABEL_15:
  v18 = *a3;
  if ( *a3 != a3 )
  {
    if ( (_QWORD **)v18[1] != a3 || (v19 = (_QWORD *)*v18, *(_QWORD **)(*v18 + 8LL) != v18) )
      __fastfail(3u);
    *a3 = v19;
    v19[1] = a3;
    v17 ^= (v17 ^ (0xAAAAAAAAAAAAB000uLL * ((__int64)(v18 + 0x44000000000LL) >> 4))) & 0xFFFFFFFFFF000LL;
    MiInitializeLargeUserBasePfn((__int64)v18, v5, (unsigned __int64)Process);
    v20 = 0;
    v21 = v30;
    v31 = v5 + 8 * v32;
    while ( 1 )
    {
      if ( !v12 )
      {
        v26 = *(_QWORD *)v6;
        *(_QWORD *)v6 = v17;
        if ( !v26 )
          ++v15;
        goto LABEL_31;
      }
      v22 = v17;
      v23 = 0;
      if ( MiPteInShadowRange(v6) )
      {
        if ( MiPteHasShadow() )
        {
          v23 = 1;
          if ( !HIBYTE(word_140C6697C) )
          {
            v25 = (v17 & 1) == 0;
            goto LABEL_26;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v25 = (v17 & 1) == 0;
LABEL_26:
          if ( !v25 )
            v22 = v17 | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v6 = v22;
      if ( v23 )
        MiWritePteShadow(v6, v22, v24);
      v21 = v30;
      v12 = v33;
LABEL_31:
      ++v20;
      v6 += 8LL;
      v17 ^= (v17 ^ (v17 + 4096)) & 0xFFFFFFFFFF000LL;
      result = v20;
      if ( v20 >= v21 )
      {
        v11 = v28;
        v5 = v31;
        Process = v29;
        goto LABEL_15;
      }
    }
  }
  if ( v15 )
  {
    UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v11 << 25) >> 16);
    return MiIncreaseUsedPtesCount(UsedPtesHandle, v15);
  }
  return result;
}
