__int64 __fastcall HvRecoverFlushProtocolStateFromFiles(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  int HiveHeader; // eax
  PPRIVILEGE_SET *v6; // rdx
  char *v7; // r13
  unsigned int v8; // r15d
  int v9; // r9d
  unsigned int v10; // ebx
  int v11; // ebx
  int v12; // edx
  _DWORD *v13; // rcx
  __int64 v14; // r8
  char v15; // r8
  int v16; // eax
  unsigned int *v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // r9
  int v26; // [rsp+20h] [rbp-E0h]
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  char *v28; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v29[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall *v30)(unsigned int *, unsigned int, unsigned int, _QWORD *); // [rsp+58h] [rbp-A8h]
  PPRIVILEGE_SET *v31; // [rsp+60h] [rbp-A0h]
  __int64 v32; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v33)(unsigned int *, unsigned int, unsigned int, _QWORD *); // [rsp+70h] [rbp-90h]
  char *v34; // [rsp+78h] [rbp-88h]
  PPRIVILEGE_SET Privileges[2]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v36; // [rsp+90h] [rbp-70h] BYREF
  PPRIVILEGE_SET v37[2]; // [rsp+A0h] [rbp-60h]
  _QWORD v38[12]; // [rsp+B0h] [rbp-50h] BYREF

  v27 = 0LL;
  v2 = 0LL;
  v28 = 0LL;
  v29[1] = 0;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  v36 = 0LL;
  *(_OWORD *)v37 = 0LL;
  memset(v38, 0, 0x5CuLL);
  HiveHeader = HvpGetHiveHeader(a1, &v28, &v27);
  v7 = v28;
  v8 = 2;
  if ( HiveHeader == 2 )
  {
    v26 = 0;
LABEL_3:
    v9 = -1073741670;
    v10 = -1073741670;
LABEL_4:
    SetFailureLocation(a2, 0, 38, v9, v26);
    goto LABEL_33;
  }
  if ( HiveHeader == 7 )
  {
    v10 = -1073741491;
    v26 = 16;
LABEL_7:
    v9 = v10;
    goto LABEL_4;
  }
  if ( !HiveHeader )
  {
    v10 = -1073741476;
    v26 = 32;
    goto LABEL_7;
  }
  if ( HiveHeader == 3 )
  {
    v10 = 0;
  }
  else
  {
    if ( HiveHeader == 5 )
      v11 = *((_DWORD *)v28 + 2);
    else
      v11 = 0;
    if ( *(_DWORD *)(a1 + 168) == 1 )
    {
      Privileges[0] = (PPRIVILEGE_SET)a1;
      v30 = HvpRecoverDataReadRoutine;
      v8 = 1;
      DWORD1(v36) = 1;
      v31 = Privileges;
      v29[0] = 1;
    }
    else
    {
      v12 = 4;
      v13 = (_DWORD *)&v36 + 1;
      v14 = 2LL;
      do
      {
        *(_QWORD *)(v13 - 5) = a1;
        *v13 = v12++;
        v13 += 6;
        --v14;
      }
      while ( v14 );
      v29[0] = 4;
      v30 = HvpRecoverDataReadRoutine;
      v6 = Privileges;
      v33 = HvpRecoverDataReadRoutine;
      v34 = (char *)&v36 + 8;
      v31 = Privileges;
      LODWORD(v32) = 5;
    }
    if ( HiveHeader == 4 )
    {
      LOBYTE(v6) = 1;
      v2 = (*(__int64 (__fastcall **)(__int64, PPRIVILEGE_SET *, __int64))(a1 + 24))(4096LL, v6, 875777347LL);
      if ( !v2 )
      {
        v26 = 48;
        goto LABEL_3;
      }
      v15 = 1;
    }
    else
    {
      v15 = 0;
    }
    v16 = HvAnalyzeLogFiles(&v27, v11, v15, v29, v8, (__int64)v38, v2);
    v10 = v16;
    if ( v16 >= 0 )
    {
      *(_DWORD *)(a1 + 184) = HIDWORD(v38[8]);
      *(_DWORD *)(a1 + 168) = v38[9];
      *(_DWORD *)(a1 + 172) = v38[10];
      *(_DWORD *)(a1 + 176) = HIDWORD(v38[9]);
      *(_DWORD *)(a1 + 180) = HIDWORD(v38[10]);
      v19 = HIDWORD(v38[7]);
      *(_BYTE *)(a1 + 194) = 0;
      if ( v19 )
      {
        v17 = (unsigned int *)&v38[6] + 1;
        do
        {
          LOBYTE(v20) = HvpLogTypeToLogArrayIndex(v38[3 * *v17 + 1]);
          v17 = (unsigned int *)(v21 + 4);
          *(_BYTE *)(v20 + a1 + 192) = 1;
          v18 = v22 - 1;
        }
        while ( v18 );
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 64) + 12LL) = v27;
      v23 = HvpHeaderCheckSum(*(_QWORD *)(a1 + 64), v17, v18);
      *(_DWORD *)(v24 + 508) = v23;
      v10 = 0;
    }
    else
    {
      SetFailureLocation(a2, 0, 38, v16, 64);
    }
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(a1 + 32))(v2, 4096LL);
  }
LABEL_33:
  if ( v7 )
    (*(void (__fastcall **)(char *, _QWORD))(a1 + 32))(v7, *(unsigned int *)(a1 + 132));
  if ( Privileges[1] )
    CmSiFreeMemory(Privileges[1]);
  if ( v37[0] )
    CmSiFreeMemory(v37[0]);
  return v10;
}
