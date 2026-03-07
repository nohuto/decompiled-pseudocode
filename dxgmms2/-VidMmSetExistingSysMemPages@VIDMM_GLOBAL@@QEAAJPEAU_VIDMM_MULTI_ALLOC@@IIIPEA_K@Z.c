__int64 __fastcall VIDMM_GLOBAL::VidMmSetExistingSysMemPages(
        VIDMM_GLOBAL *this,
        __int64 **a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdi
  struct _KTHREAD **v11; // r15
  __int64 v12; // rcx
  __int64 Pool2; // rax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  char *v17; // rdx
  __int64 v18; // r8
  signed __int64 v19; // rcx

  v6 = a4;
  v7 = a3;
  v8 = **a2;
  if ( (*(_DWORD *)(v8 + 72) & 0x8000) == 0 )
  {
    WdLogSingleEntry1(1LL, a2);
LABEL_20:
    DxgkLogInternalTriageEvent(v9, 0x40000LL);
    return 3221225485LL;
  }
  v10 = *(_QWORD *)(v8 + 8) >> 12;
  if ( a5 >= (unsigned int)v10 || (unsigned int)v10 - a5 < a4 )
  {
    WdLogSingleEntry3(1LL, a5, a4, (unsigned int)v10);
    goto LABEL_20;
  }
  v11 = (struct _KTHREAD **)(v8 + 296);
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(v8 + 296));
  if ( *(_DWORD *)(v8 + 584) )
  {
    if ( *(_QWORD *)(v8 + 576) )
      goto LABEL_11;
  }
  else if ( *(_QWORD *)(v8 + 576) )
  {
    WdLogSingleEntry1(1LL, 2556LL);
LABEL_13:
    DxgkLogInternalTriageEvent(v12, 0x40000LL);
    v15 = -1073741811;
    goto LABEL_14;
  }
  *(_DWORD *)(v8 + 584) = 0;
  Pool2 = ExAllocatePool2(256LL, v7 + 8LL * (unsigned int)v10, 825715030LL);
  *(_QWORD *)(v8 + 576) = Pool2;
  if ( !Pool2 )
  {
    WdLogSingleEntry1(1LL, 2567LL);
    DxgkLogInternalTriageEvent(v14, 0x40000LL);
    v15 = -1073741801;
LABEL_14:
    DXGFASTMUTEX::Release(v11);
    return v15;
  }
LABEL_11:
  *(_DWORD *)(v8 + 584) += v6;
  if ( *(_DWORD *)(v8 + 584) > (unsigned int)v10 )
  {
    WdLogSingleEntry1(1LL, 2576LL);
    goto LABEL_13;
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v8 + 296));
  v17 = (char *)(v7 + *(_QWORD *)(v8 + 576) + 8LL * a5);
  if ( (_DWORD)v6 )
  {
    v18 = v6;
    v19 = (char *)a6 - v17;
    do
    {
      *(_QWORD *)v17 = *(_QWORD *)&v17[v19];
      v17 += 8;
      --v18;
    }
    while ( v18 );
  }
  return 0LL;
}
