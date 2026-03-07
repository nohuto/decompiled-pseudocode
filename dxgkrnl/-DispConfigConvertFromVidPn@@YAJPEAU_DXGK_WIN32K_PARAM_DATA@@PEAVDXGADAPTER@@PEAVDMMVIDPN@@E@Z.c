__int64 __fastcall DispConfigConvertFromVidPn(
        struct _DXGK_WIN32K_PARAM_DATA *a1,
        struct DXGADAPTER *a2,
        struct DMMVIDPN *a3,
        char a4)
{
  ULONG *p_NumPathArrayElements; // rdi
  __int64 v8; // rsi
  unsigned __int64 *Pool2; // rax
  unsigned __int64 *v10; // rdi
  CCD_BTL *v12; // rax
  int v13; // ebx
  unsigned __int64 *v14; // rdx
  __int64 v15; // r8
  unsigned __int64 v16; // rcx
  int v17; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v18; // [rsp+54h] [rbp-1Ch]
  unsigned __int64 *v19; // [rsp+58h] [rbp-18h]
  unsigned __int64 *v20; // [rsp+60h] [rbp-10h]
  struct D3DKMT_GETPATHSMODALITY *v21; // [rsp+A0h] [rbp+30h] BYREF

  if ( !a1 || !a2 || !a3 )
  {
    WdLogSingleEntry1(1LL, 1780LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"io_pContext && i_pAdapter && i_pDmmVidPn",
      1780LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  p_NumPathArrayElements = &a1->NumPathArrayElements;
  if ( a1->NumModeArrayElements || *p_NumPathArrayElements )
  {
    WdLogSingleEntry1(1LL, 1781LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(io_pContext->NumModeArrayElements == 0) && (io_pContext->NumPathArrayElements == 0)",
      1781LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a1->PathsArray || a1->ModesArray )
  {
    WdLogSingleEntry1(1LL, 1782LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"(io_pContext->PathsArray == NULL) && (io_pContext->ModesArray == NULL)",
      1782LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = *((unsigned int *)a3 + 34);
  *p_NumPathArrayElements = v8;
  v17 = 0;
  v20 = 0LL;
  v18 = v8;
  Pool2 = (unsigned __int64 *)ExAllocatePool2(256LL, 216 * v8, 1313891414LL);
  v19 = Pool2;
  v10 = Pool2;
  a1->PathsArray = Pool2;
  if ( Pool2 )
  {
    if ( (_DWORD)v8 )
      memset(Pool2, 0, 216 * v8);
    v20 = v10;
    LOBYTE(v17) = 0;
    v21 = 0LL;
    a1->SDCFlags = (a4 != 0 ? 16 : 4640) | 0x80;
    v12 = CCD_BTL::Global();
    v13 = CCD_BTL::ConvertVidPnToPathsModality(v12, a3, &v21);
    if ( v13 >= 0 )
    {
      v13 = ConvertPathModalityToDisplayConfig(v21, 0, 0, (struct QDC_CONTEXT *)&v17);
      operator delete(v21);
      if ( v18 )
      {
        v14 = v19;
        v15 = v18;
        do
        {
          v16 = *v14 | 0x8000000000000000uLL;
          *v14 = v16;
          if ( a4 )
            *v14 = v16 & 0xFFFFFBFFFFFCF478uLL;
          v14 += 27;
          --v15;
        }
        while ( v15 );
      }
    }
    else
    {
      operator delete(v21);
    }
    return (unsigned int)v13;
  }
  else
  {
    WdLogSingleEntry1(6LL, (unsigned int)v8);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Unable to allocate %I64u dispconfig paths for conversion.",
      v8,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
