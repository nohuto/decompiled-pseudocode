__int64 __fastcall AdtpWriteToEtw(__int64 a1, _BYTE *a2)
{
  unsigned int v4; // ebx
  int v5; // edi
  __int16 v6; // r12
  char v7; // si
  __int64 v8; // rcx
  __int16 v9; // dx
  unsigned int v10; // eax
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  bool v15; // zf
  unsigned int v16; // eax
  bool v17; // zf
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  bool v23; // zf
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  bool v32; // zf
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned __int64 v35; // rax
  unsigned __int16 v36; // cx
  char *v37; // rax
  __int64 v38; // rdx
  unsigned __int16 v40[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v41; // [rsp+44h] [rbp-BCh] BYREF
  int v42; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v43; // [rsp+50h] [rbp-B0h]
  _BYTE v44[320]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID v45; // [rsp+1A0h] [rbp+A0h] BYREF
  char v46; // [rsp+1A8h] [rbp+A8h] BYREF
  _OWORD v47[3]; // [rsp+4A0h] [rbp+3A0h] BYREF
  _BYTE v48[2048]; // [rsp+4D0h] [rbp+3D0h] BYREF

  v4 = 0;
  v40[0] = 0;
  v43 = 0LL;
  memset(v48, 0, sizeof(v48));
  memset(v44, 0, sizeof(v44));
  *a2 = 0;
  memset(v47, 0, sizeof(v47));
  AdtpNormalizeAuditInfoHelper(a1, 0LL);
  if ( !*(_QWORD *)(a1 + 48) )
  {
    v5 = -1073741811;
LABEL_66:
    v36 = v40[0];
    goto LABEL_67;
  }
  v6 = *(_WORD *)(a1 + 18);
  v7 = 2;
  v5 = AdtpPackageParameters(a1, 0LL, 2, (__int64)v48, (__int64)v44, (__int64)&v45, v40, (__int64)v47);
  if ( v5 < 0 )
    goto LABEL_66;
  if ( *(_WORD *)(a1 + 16)
    && (v8 = *(unsigned __int16 *)(a1 + 16), v41 = 0, v42 = 0, (int)AdtpGetCategoryAndSubCategoryId(v8, &v41, &v42) >= 0) )
  {
    v9 = v42 + (((_WORD)v41 + 48) << 8);
  }
  else
  {
    v9 = -256;
  }
  v10 = *(_DWORD *)(a1 + 4);
  if ( v10 <= 0x1349 )
  {
    if ( v10 == 4937 )
      goto LABEL_56;
    if ( v10 <= 0x125C )
    {
      if ( v10 == 4700 )
        goto LABEL_56;
      if ( v10 <= 0x1237 )
      {
        if ( v10 == 4663 )
          goto LABEL_56;
        v11 = v10 - 4616;
        if ( !v11 )
          goto LABEL_56;
        v12 = v11 - 8;
        if ( v12 )
        {
          v13 = v12 - 30;
          if ( v13 )
          {
            v14 = v13 - 2;
            if ( v14 )
            {
              v15 = v14 == 5;
              goto LABEL_55;
            }
          }
LABEL_56:
          v7 = 1;
          goto LABEL_57;
        }
LABEL_49:
        v7 = 3;
        goto LABEL_57;
      }
      v16 = v10 - 4688;
      if ( !v16 )
        goto LABEL_57;
      v18 = v16 - 9;
      v17 = v18 == 0;
      goto LABEL_21;
    }
    if ( v10 <= 0x1341 )
    {
      if ( v10 == 4929 )
        goto LABEL_56;
      v19 = v10 - 4701;
      if ( !v19 )
        goto LABEL_56;
      v20 = v19 - 1;
      if ( !v20 )
        goto LABEL_56;
      v21 = v20 - 17;
      if ( !v21 )
        goto LABEL_56;
      v22 = v21 - 97;
      if ( !v22 )
        goto LABEL_56;
      v15 = v22 == 112;
      goto LABEL_55;
    }
    v24 = v10 - 4930;
    v23 = v24 == 0;
LABEL_31:
    if ( v23 )
      goto LABEL_56;
    v18 = v24 - 1;
    v17 = v18 == 0;
LABEL_21:
    if ( v17 )
      goto LABEL_56;
    goto LABEL_52;
  }
  if ( v10 <= 0x1424 )
  {
    if ( v10 == 5156 )
      goto LABEL_56;
    if ( v10 <= 0x141B )
    {
      if ( v10 == 5147 )
        goto LABEL_56;
      v25 = v10 - 5058;
      if ( !v25 )
        goto LABEL_56;
      v26 = v25 - 1;
      if ( !v26 )
        goto LABEL_56;
      v27 = v26 - 66;
      if ( !v27 )
        goto LABEL_56;
      v28 = v27 - 15;
      if ( !v28 )
        goto LABEL_56;
      v15 = v28 == 6;
      goto LABEL_55;
    }
    v24 = v10 - 5150;
    v23 = v24 == 0;
    goto LABEL_31;
  }
  if ( v10 <= 0x1600 )
  {
    if ( v10 == 5632 )
      goto LABEL_56;
    v29 = v10 - 5157;
    if ( !v29 )
      goto LABEL_49;
    v30 = v29 - 219;
    if ( !v30 )
      goto LABEL_56;
    v31 = v30 - 1;
    if ( !v31 )
      goto LABEL_56;
    v33 = v31 - 74;
    v32 = v33 == 0;
    goto LABEL_53;
  }
  v34 = v10 - 6272;
  if ( v34 )
  {
    v18 = v34 - 1;
    if ( v18 )
    {
LABEL_52:
      v33 = v18 - 1;
      v32 = v33 == 0;
LABEL_53:
      if ( v32 )
        goto LABEL_56;
      v15 = v33 == 1;
LABEL_55:
      v7 = 0;
      if ( !v15 )
        goto LABEL_57;
      goto LABEL_56;
    }
  }
LABEL_57:
  LOWORD(v43) = *(_WORD *)(a1 + 4);
  v35 = 0x8020000000000000uLL;
  BYTE2(v43) = v7;
  if ( v6 != 8 )
    v35 = 0x8010000000000000uLL;
  *(_WORD *)((char *)&v43 + 3) = 10;
  v36 = v40[0];
  WORD3(v43) = v9;
  BYTE5(v43) = 0;
  *((_QWORD *)&v43 + 1) = v35;
  if ( !v40[0] )
    goto LABEL_64;
  v37 = &v46;
  v38 = v40[0];
  do
  {
    v4 += *(_DWORD *)v37;
    v37 += 16;
    --v38;
  }
  while ( v38 );
  if ( v4 <= 0xDC00 )
  {
LABEL_64:
    v5 = EtwWriteKMSecurityEvent();
    if ( v5 == -1073741058 )
      *a2 = 1;
    goto LABEL_66;
  }
  *a2 = 1;
  v5 = -2147483643;
LABEL_67:
  AdtpCleanupParameterAllocations(v47, &v45, v36);
  return (unsigned int)v5;
}
