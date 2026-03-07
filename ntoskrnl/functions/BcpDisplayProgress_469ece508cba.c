__int64 __fastcall BcpDisplayProgress(unsigned int a1, int a2, __int64 a3)
{
  UNICODE_STRING *v5; // rcx
  __int64 v6; // r15
  __int64 v7; // r8
  __int64 v8; // r8
  UNICODE_STRING *v9; // rcx
  __int64 v10; // xmm0_8
  int v11; // r13d
  unsigned int v12; // ebx
  unsigned int v13; // esi
  _DWORD *v14; // rax
  int v15; // r12d
  int v16; // r14d
  unsigned int v17; // edi
  unsigned __int64 v19; // [rsp+48h] [rbp-19h]
  int v20; // [rsp+58h] [rbp-9h] BYREF
  int v21; // [rsp+5Ch] [rbp-5h] BYREF
  unsigned __int64 v22; // [rsp+60h] [rbp-1h] BYREF
  int v23; // [rsp+68h] [rbp+7h]
  __int64 v24; // [rsp+70h] [rbp+Fh] BYREF
  char *v25; // [rsp+78h] [rbp+17h]
  char v26; // [rsp+80h] [rbp+1Fh] BYREF

  v20 = 0;
  v21 = 0;
  v22 = 0LL;
  v5 = &stru_140C70760;
  v23 = 0;
  v6 = 9LL * a2;
  if ( a1 != 1 )
    v5 = &stru_140C70780;
  BcpDisplayCriticalString(&v5->Length, dword_140C0B590[18 * a2 + 2], a3, a2);
  v24 = 0x80000LL;
  v25 = &v26;
  BcpConvertProgressToString(a1, (__int64)&v24);
  BcpDisplayCriticalString((unsigned __int16 *)&v24, dword_140C0B590[2 * v6 + 2], v7, a2);
  v9 = &stru_140C70770;
  if ( a1 != 1 )
    v9 = &stru_140C70790;
  BcpDisplayCriticalString(&v9->Length, dword_140C0B590[2 * v6 + 2], v8, a2);
  v10 = BcpCursor;
  v11 = dword_140C646C0;
  v24 = BcpCursor;
  LODWORD(v25) = dword_140C646C0;
  if ( BcpCursorLessThan(&v24) )
  {
    v12 = BcpCursor;
    v13 = HIDWORD(BcpCursor);
    v14 = &dword_140C0B590[2 * v6];
    v15 = *(_DWORD *)(*(_QWORD *)(qword_140C70820 + 24) + 40LL);
    if ( BcpTextBoxLeftEdgeOverride )
      v16 = *(_DWORD *)BcpTextBoxLeftEdgeOverride;
    else
      v16 = v14[4] + v14[8];
    if ( BcpTextBoxRightEdgeOverride )
      v17 = *(_DWORD *)BcpTextBoxRightEdgeOverride;
    else
      v17 = v14[8] + v14[4] + dword_140C0B590[2 * v6 + 6];
LABEL_12:
    v22 = __PAIR64__(v13, v12);
    while ( BcpCursorLessThan(&v22) )
    {
      if ( (int)BgpDisplayCharacterEx(0x20u, (__int64 *)qword_140C70820, v12, v13, v15, v15, &v20, &v21, v19) < 0 )
        return 0LL;
      v12 += v20;
      LODWORD(v22) = v12;
      if ( v12 > v17 )
      {
        v13 += v21;
        v12 = v16;
        goto LABEL_12;
      }
    }
    v10 = v24;
  }
  if ( (dword_140C0E3B0 & 0x1000000) == 0 )
  {
    BcpProgressEnd = v10;
    dword_140C0E308 = v11;
  }
  return 0LL;
}
