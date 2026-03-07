__int64 __fastcall HvLoadHive(ULONG_PTR BugCheckParameter2, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // r13
  char v6; // r12
  int HiveHeader; // eax
  __int64 v9; // rdx
  int v10; // r15d
  __int64 v11; // r8
  __int64 v12; // r14
  __int64 v13; // rax
  int inited; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // edx
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v24; // eax
  int v25; // ebx
  _DWORD *v26; // rax
  int v27; // ecx
  ULONG v28; // r9d
  int v29; // r9d
  int v30; // r12d
  int v31; // r9d
  int v32; // r9d
  int v33; // [rsp+20h] [rbp-E0h]
  int v34; // [rsp+20h] [rbp-E0h]
  __int64 v35; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v36; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+58h] [rbp-A8h] BYREF
  int v38; // [rsp+60h] [rbp-A0h]
  __int128 v39; // [rsp+68h] [rbp-98h] BYREF
  __int128 v40; // [rsp+78h] [rbp-88h]
  __int128 v41; // [rsp+88h] [rbp-78h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  PPRIVILEGE_SET v43[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v44; // [rsp+B0h] [rbp-50h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+C0h] [rbp-40h]
  _DWORD v46[24]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 *v48; // [rsp+150h] [rbp+50h]
  __int64 v49; // [rsp+158h] [rbp+58h]
  __int64 *v50; // [rsp+160h] [rbp+60h]
  __int64 v51; // [rsp+168h] [rbp+68h]
  __int64 *v52; // [rsp+170h] [rbp+70h]
  __int64 v53; // [rsp+178h] [rbp+78h]

  v37 = 0LL;
  v36 = 0;
  v35 = 0LL;
  v38 = a3;
  v42 = a2;
  v5 = 0LL;
  v6 = 0;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  *(_OWORD *)v43 = 0LL;
  v44 = 0LL;
  *(_OWORD *)Privileges = 0LL;
  memset(v46, 0, 0x5CuLL);
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8001) == 0 )
  {
    v24 = CmpFileFlush(BugCheckParameter2, 0LL);
    if ( v24 < 0 )
      SetFailureLocation(a4, 0, 6, v24, 8);
  }
  HiveHeader = HvpGetHiveHeader(BugCheckParameter2, &v35, &v37);
  v9 = 2LL;
  v10 = HiveHeader;
  switch ( HiveHeader )
  {
    case 2:
      v33 = 0;
      v29 = -1073741670;
LABEL_60:
      v15 = v29;
LABEL_63:
      SetFailureLocation(a4, 0, 6, v29, v33);
      v12 = v35;
      goto LABEL_26;
    case 7:
      v15 = -1073741491;
      v33 = 8;
LABEL_62:
      v29 = v15;
      goto LABEL_63;
    case 0:
      v15 = -1073741476;
      v33 = 16;
      goto LABEL_62;
  }
  v11 = 4LL;
  if ( (unsigned int)(HiveHeader - 4) > 1 )
  {
    v12 = v35;
    goto LABEL_7;
  }
  if ( !*(_DWORD *)(BugCheckParameter2 + 168) )
  {
    v29 = -1073741492;
    v33 = 32;
    goto LABEL_60;
  }
  v12 = v35;
  if ( HiveHeader == 5 )
  {
    v30 = *(_DWORD *)(v35 + 8);
  }
  else
  {
    if ( HiveHeader != 4 )
      goto LABEL_7;
    v30 = 0;
  }
  if ( *(_DWORD *)(BugCheckParameter2 + 168) == 1 )
  {
    v43[0] = (PPRIVILEGE_SET)BugCheckParameter2;
    *((_QWORD *)&v39 + 1) = HvpRecoverDataReadRoutine;
    v25 = 1;
    DWORD1(v44) = 1;
    *(_QWORD *)&v40 = v43;
    LODWORD(v39) = 1;
  }
  else
  {
    v25 = 2;
    v26 = (_DWORD *)&v44 + 1;
    v27 = 4;
    do
    {
      *(_QWORD *)(v26 - 5) = BugCheckParameter2;
      *v26 = v27++;
      v26 += 6;
      --v9;
    }
    while ( v9 );
    LODWORD(v39) = 4;
    *((_QWORD *)&v39 + 1) = HvpRecoverDataReadRoutine;
    *(_QWORD *)&v41 = HvpRecoverDataReadRoutine;
    *((_QWORD *)&v41 + 1) = (char *)&v44 + 8;
    *(_QWORD *)&v40 = v43;
    DWORD2(v40) = 5;
  }
  if ( v10 == 4 )
  {
    LOBYTE(v9) = 1;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(BugCheckParameter2 + 24))(4096LL, v9, 875777347LL);
    if ( !v5 )
    {
      v31 = -1073741670;
      v34 = 48;
LABEL_89:
      v15 = v31;
      goto LABEL_90;
    }
    LOBYTE(v11) = 1;
  }
  else
  {
    LOBYTE(v11) = 0;
  }
  inited = HvAnalyzeLogFiles((unsigned int)&v37, v30, v11, (unsigned int)&v39, v25, (__int64)v46, v5);
  v15 = inited;
  if ( inited < 0 )
  {
    v34 = 56;
LABEL_71:
    v31 = inited;
LABEL_90:
    SetFailureLocation(a4, 0, 6, v31, v34);
    goto LABEL_26;
  }
  if ( v10 == 4 )
  {
    *(_WORD *)(BugCheckParameter2 + 208) |= 0x40u;
    v12 = v5;
    v5 = 0LL;
  }
  if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 0x200000000000LL) )
  {
    v48 = &v35;
    v49 = v28;
    v50 = &v37;
    LODWORD(v35) = v10;
    v37 = 0x1000000LL;
    v51 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04328, (unsigned __int8 *)byte_140037631, 0LL, 0LL, v28, v47);
  }
  v6 = 0;
LABEL_7:
  v13 = v12;
  *(_QWORD *)(BugCheckParameter2 + 64) = v12;
  v12 = 0LL;
  *(_DWORD *)(BugCheckParameter2 + 220) = *(_DWORD *)(v13 + 24) - 4096 + (*(_DWORD *)(v13 + 20) << 12);
  inited = CmpInitializeActualFileSizes(BugCheckParameter2, &v36, v11);
  v15 = inited;
  if ( inited < 0 )
  {
    v34 = 128;
    goto LABEL_71;
  }
  v16 = v36;
  if ( v36 < *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) + 4096
    && (v38 & 0x20000) == 0
    && (BYTE2(NlsMbOemCodePageTag) || (CmpBootType & 6) != 0) )
  {
    if ( (unsigned int)dword_140C04328 > 5 && tlgKeywordOn((__int64)&dword_140C04328, 0x200000000000LL) )
    {
      LODWORD(v35) = v32;
      v48 = &v35;
      v49 = 4LL;
      v50 = (__int64 *)&v36;
      v36 = v16;
      v52 = &v37;
      v51 = 4LL;
      v37 = 0x1000000LL;
      v53 = 8LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04328, (unsigned __int8 *)word_140037682, 0LL, 0LL, 5u, v47);
    }
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4088LL) |= 4u;
    *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = (v16 - 4096) & 0xFFFFF000;
  }
  if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) - 1) > 0x7FFFDFFF )
  {
    v31 = -1073741492;
    v34 = 112;
    goto LABEL_89;
  }
  inited = HvpInitMap(BugCheckParameter2);
  v15 = inited;
  if ( inited < 0 )
  {
    v34 = 132;
    goto LABEL_71;
  }
  v17 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v17 & 0x20000) != 0 )
  {
    v18 = (v17 >> 22) & 2;
    v19 = v18 | 1;
    if ( (v17 & 0x8001) == 0 )
      v19 = v18;
    v20 = HvpViewMapStart(
            (int)BugCheckParameter2 + 224,
            *(_QWORD *)(BugCheckParameter2 + 1544),
            *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL),
            v42,
            v19);
    v15 = v20;
    if ( v20 < 0 )
    {
      SetFailureLocation(a4, 0, 6, v20, 136);
      goto LABEL_26;
    }
    inited = HvpMapHiveImageFromViewMap(
               BugCheckParameter2,
               0LL,
               *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL));
    v15 = inited;
    if ( inited < 0 )
    {
      v34 = 140;
      goto LABEL_71;
    }
  }
  else
  {
    inited = HvpMapHiveImageFromFile(BugCheckParameter2);
    v15 = inited;
    if ( inited < 0 )
    {
      v34 = 144;
      goto LABEL_71;
    }
  }
  CmpTraceHiveMountBaseFileMounted(
    *(_QWORD *)(BugCheckParameter2 + 1544),
    *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL));
  if ( v46[15] )
  {
    inited = HvpPerformLogFileRecovery(BugCheckParameter2, a4);
    v15 = inited;
    if ( inited < 0 )
    {
      v34 = 160;
      goto LABEL_71;
    }
    v6 = 1;
  }
  else
  {
    v21 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4LL);
    *(_DWORD *)(BugCheckParameter2 + 172) = v21;
    *(_DWORD *)(BugCheckParameter2 + 184) = v21;
    *(_DWORD *)(BugCheckParameter2 + 176) = v21;
    *(_BYTE *)(BugCheckParameter2 + 194) = 1;
  }
  inited = HvpAdjustHiveFreeDisplay(
             BugCheckParameter2,
             *(unsigned int *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL),
             0LL);
  v15 = inited;
  if ( inited < 0 )
  {
    v34 = 176;
    goto LABEL_71;
  }
  inited = HvpRemapAndEnlistHiveBins(BugCheckParameter2);
  v15 = inited;
  if ( inited == 1073741833 )
  {
    v6 = 1;
    goto LABEL_21;
  }
  if ( inited < 0 )
  {
    v34 = 192;
    goto LABEL_71;
  }
LABEL_21:
  v22 = *(_DWORD *)(BugCheckParameter2 + 160);
  if ( (v22 & 0x20000) == 0 )
    *(_DWORD *)(BugCheckParameter2 + 160) = v22 | 0x10000;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 4092LL) = 0;
  if ( v10 == 4 || v6 )
    v15 = 1073741833;
  else
    v15 = 0;
LABEL_26:
  if ( v43[1] )
    CmSiFreeMemory(v43[1]);
  if ( Privileges[0] )
    CmSiFreeMemory(Privileges[0]);
  if ( v5 )
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(v5, *(unsigned int *)(BugCheckParameter2 + 132));
  if ( v12 )
    (*(void (__fastcall **)(__int64, _QWORD))(BugCheckParameter2 + 32))(
      v12,
      *(unsigned int *)(BugCheckParameter2 + 132));
  return v15;
}
