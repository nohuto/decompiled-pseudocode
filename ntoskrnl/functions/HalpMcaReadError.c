__int64 __fastcall HalpMcaReadError(int a1, __int64 a2, int *a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r14d
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned int v8; // r12d
  int v9; // r15d
  __int64 MsrStatus; // rax
  unsigned __int64 v11; // rbx
  char v12; // r13
  char CpuVendor; // cl
  char v14; // al
  __int64 v15; // rax
  char v16; // bl
  char v17; // al
  char v19; // [rsp+38h] [rbp-31h]
  _WORD v20[2]; // [rsp+3Ch] [rbp-2Dh] BYREF
  char v21; // [rsp+40h] [rbp-29h]
  int v22; // [rsp+44h] [rbp-25h]
  unsigned int v23; // [rsp+48h] [rbp-21h]
  int v24; // [rsp+4Ch] [rbp-1Dh]
  __int128 v25; // [rsp+50h] [rbp-19h] BYREF
  __int64 v26; // [rsp+60h] [rbp-9h]
  __int64 v27; // [rsp+68h] [rbp-1h] BYREF
  __int64 v28; // [rsp+70h] [rbp+7h]
  __int64 v29; // [rsp+78h] [rbp+Fh]
  int *v30; // [rsp+80h] [rbp+17h]

  v29 = a4;
  v5 = 0;
  v26 = 0LL;
  v30 = a3;
  v22 = -1;
  v6 = 0LL;
  v28 = a2;
  v24 = a1;
  v20[0] = 0;
  v19 = 0;
  v25 = 0LL;
  if ( !HalpMcaNumberOfBanks )
  {
    v7 = __readmsr(0x179u);
    HalpMcaNumberOfBanks = v7;
  }
  v8 = 0;
  v23 = (unsigned __int8)HalpMcaNumberOfBanks;
  if ( !HalpMcaNumberOfBanks )
    return (unsigned int)-1073741275;
  v9 = 2;
  while ( 1 )
  {
    v27 = 0LL;
    MsrStatus = HalpWheaReadMsrStatus(a5, v8, (__int64)&v27);
    v11 = MsrStatus;
    if ( MsrStatus >= 0 )
      goto LABEL_39;
    *(_QWORD *)&v25 = MsrStatus;
    v12 = 0;
    v21 = HalpMcaRecoverySupported;
    BYTE8(v25) = HalpMcaRecoverySupported;
    v26 = a5;
    HIDWORD(v25) = v8;
    v20[0] = 0;
    if ( v24 != 16 )
      break;
    CpuVendor = HalpGetCpuVendor();
    if ( CpuVendor == 1 )
    {
      HalpMcaReadErrorUncorrectedAMD(&v25, v20);
      v12 = HIBYTE(v20[0]);
      v14 = v20[0];
      v11 = v25;
      goto LABEL_23;
    }
    v15 = (v11 >> 61) & 1;
    if ( CpuVendor == 2 )
    {
      if ( !v15 )
        goto LABEL_39;
      if ( (v11 & 0x1000000000000000LL) == 0 )
        goto LABEL_12;
      if ( (v11 & 0x200000000000000LL) != 0 || !v21 )
      {
        LOBYTE(v20[0]) = 1;
        goto LABEL_26;
      }
    }
    else
    {
      if ( !v15 )
        goto LABEL_39;
      if ( (v11 & 0x1000000000000000LL) == 0 )
      {
LABEL_12:
        HalpWheaWriteMsrStatus(a5, v8);
        goto LABEL_39;
      }
      if ( (v11 & 0x200000000000000LL) != 0 || !v21 )
      {
        v14 = 1;
LABEL_23:
        if ( v14 )
        {
          if ( !v12 )
          {
LABEL_26:
            v22 = v8;
            v6 = v11;
            v19 = v12;
LABEL_27:
            if ( !v12 )
              goto LABEL_28;
            goto LABEL_39;
          }
LABEL_25:
          if ( v19 )
            goto LABEL_27;
          goto LABEL_26;
        }
        goto LABEL_39;
      }
    }
    if ( (v11 & 0x100000000000000LL) != 0 )
    {
      v12 = 1;
      LOBYTE(v20[0]) = 1;
      goto LABEL_25;
    }
LABEL_39:
    if ( ++v8 >= v23 )
    {
LABEL_28:
      v8 = v22;
LABEL_29:
      v16 = v19;
      goto LABEL_30;
    }
  }
  if ( v24 != 1 )
  {
    if ( v24 == 17 )
    {
      v6 = MsrStatus;
      goto LABEL_29;
    }
    goto LABEL_39;
  }
  HalpMcaReadErrorCorrected(&v25, v20);
  if ( !LOBYTE(v20[0]) )
    goto LABEL_39;
  v6 = v25;
  v16 = HIBYTE(v20[0]);
LABEL_30:
  if ( v8 == -1 )
    return (unsigned int)-1073741275;
  if ( v24 != 16 )
    HalpMcaStuckErrorCheck(v8, v6, a5);
  HalpMcaPopulateErrorData(a5, v8, v6, v29, v28);
  v17 = HalpGetCpuVendor();
  if ( (v6 & 0x2000000000000000LL) != 0 )
  {
    v9 = v16 == 0;
  }
  else if ( v17 == 1 && HalpMcaRecoverySupported && v16 )
  {
    v9 = 0;
  }
  *v30 = v9;
  return v5;
}
