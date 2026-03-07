__int64 __fastcall KiDisplayBlueScreen(int a1)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  unsigned __int64 *v4; // rsi
  __int64 v5; // rdx
  char *v6; // rcx
  _OWORD *v7; // rax
  unsigned __int16 v8; // cx
  char *v9; // rdx
  unsigned __int16 v10; // r8
  __int64 v11; // rdi
  _WORD *v12; // r9
  __int64 v13; // r10
  __int16 v14; // ax
  int v15; // r15d
  unsigned __int16 *v16; // r15
  unsigned __int16 *v17; // rbx
  _OWORD *v18; // rbx
  __int64 v19; // rdi
  _QWORD *v20; // rbx
  char v22; // [rsp+48h] [rbp-C0h] BYREF
  int v23; // [rsp+4Ch] [rbp-BCh] BYREF
  NTSTRSAFE_PSTR ppszDestEnd; // [rsp+50h] [rbp-B8h] BYREF
  NTSTRSAFE_PSTR ppszDestEnd_8[2]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v26[6]; // [rsp+68h] [rbp-A0h] BYREF
  char pszDest[16]; // [rsp+C8h] [rbp-40h] BYREF
  char v28; // [rsp+D8h] [rbp-30h] BYREF
  char v29; // [rsp+178h] [rbp+70h] BYREF

  memset(v26, 0, sizeof(v26));
  ppszDestEnd = 0LL;
  v23 = KiBugCheckData;
  v22 = 1;
  *(_OWORD *)ppszDestEnd_8 = 0LL;
  HeadlessDispatch(14LL, 0LL, 0LL, 0LL, 0LL);
  HeadlessDispatch(1LL, (__int64)&v22, 1LL, 0LL, 0LL);
  v2 = 4LL;
  HeadlessDispatch(20LL, (__int64)&v23, 4LL, 0LL, 0LL);
  IoSaveBugCheckProgress(129);
  v3 = KiBugCheckDriver;
  v4 = (unsigned __int64 *)&qword_140C42448;
  if ( KiBugCheckDriver || (KiDumpParameterImages(0LL), (v3 = KiBugCheckDriver) != 0) )
  {
    if ( *(_WORD *)v3 == 30 && !memcmp(*(const void **)(v3 + 8), L"VerifierExt.sys", 0x1EuLL) )
      LODWORD(v3) = 0;
  }
  v5 = 4LL;
  *((_QWORD *)&v26[1] + 1) = &v29;
  v6 = &v28;
  WORD1(v26[1]) = 256;
  v7 = &v26[2];
  do
  {
    *((_QWORD *)v7 + 1) = v6;
    v6 += 38;
    *(_DWORD *)v7++ = 2490404;
    --v5;
  }
  while ( v5 );
  if ( KeGetBugMessageText(KiBugCheckData, (__int64)ppszDestEnd_8) )
  {
    v9 = ppszDestEnd_8[1];
    v8 = (unsigned __int16)ppszDestEnd_8[0];
  }
  else
  {
    RtlStringCbPrintfExA(pszDest, 0xBuLL, &ppszDestEnd, 0LL, 0, "0x%08x", KiBugCheckData);
    v8 = (_WORD)ppszDestEnd - (unsigned __int16)pszDest;
    v9 = pszDest;
  }
  v10 = 0;
  v11 = *((_QWORD *)&v26[1] + 1);
  if ( v8 >= (unsigned __int16)((WORD1(v26[1]) >> 1) - 1) )
    v8 = (WORD1(v26[1]) >> 1) - 1;
  if ( v8 )
  {
    v12 = (_WORD *)*((_QWORD *)&v26[1] + 1);
    v13 = v8;
    v10 = v8;
    do
    {
      v14 = *v9++;
      *v12++ = v14;
      --v13;
    }
    while ( v13 );
  }
  LOWORD(v26[1]) = 2 * v10;
  *(_WORD *)(v11 + 2LL * v10) = 0;
  InbvAcquireDisplayOwnership();
  IoSaveBugCheckProgress(130);
  v15 = KiBugCheckData;
  v26[0] = 0LL;
  BgpFwAcquireLock();
  if ( (dword_140C0E3B0 & 2) != 0 )
  {
    BgpFwDisplayBugCheckScreen(v15, (unsigned int)&qword_140C42448, v3, (unsigned int)v26, a1);
    v11 = *((_QWORD *)&v26[1] + 1);
  }
  BgpFwReleaseLock();
  IoSaveBugCheckProgress(128);
  v16 = *(unsigned __int16 **)&v26[0];
  if ( *(_QWORD *)&v26[0] && (v17 = (unsigned __int16 *)*((_QWORD *)&v26[0] + 1)) != 0LL )
  {
    KiHeadlessDisplayString(L"\r\n", 6LL);
    KiHeadlessDisplayString(*((_QWORD *)v16 + 1), *v16);
    KiHeadlessDisplayString(L"\r\n", 6LL);
    KiHeadlessDisplayString(*((_QWORD *)v17 + 1), *v17);
  }
  else
  {
    v18 = &v26[2];
    v19 = 4LL;
    do
    {
      KiBugCheckConvertParameterValueToUnicodeString(*v4++, (__int64)v18++);
      --v19;
    }
    while ( v19 );
    v11 = *((_QWORD *)&v26[1] + 1);
  }
  KiHeadlessDisplayString(L"\r\n", 6LL);
  KiHeadlessDisplayString(v11, LOWORD(v26[1]));
  if ( KiBugCheckDriver )
  {
    KiHeadlessDisplayString(L"\r\n", 6LL);
    KiHeadlessDisplayString(*(_QWORD *)(KiBugCheckDriver + 8), *(unsigned __int16 *)KiBugCheckDriver);
  }
  KiHeadlessDisplayString(L"\r\n", 6LL);
  KiHeadlessDisplayString(L"\r\n", 6LL);
  v20 = (_QWORD *)&v26[2] + 1;
  do
  {
    KiHeadlessDisplayString(*v20, *((unsigned __int16 *)v20 - 4));
    KiHeadlessDisplayString(L"\r\n", 6LL);
    v20 += 2;
    --v2;
  }
  while ( v2 );
  return KiHeadlessDisplayString(L"\r\n", 6LL);
}
