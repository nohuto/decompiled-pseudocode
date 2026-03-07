__int64 __fastcall RootHub_WaitForPendingU3TransitionCompletion(_QWORD *a1, int a2, char a3)
{
  char v3; // r9
  unsigned int v4; // r8d
  unsigned int v5; // ebp
  __int64 v8; // r13
  unsigned int v9; // r15d
  __int64 v10; // r12
  int v11; // edi
  int v12; // eax
  _UNKNOWN **v13; // rdx
  int v14; // ebx
  char v15; // cl
  int v16; // r9d
  int v17; // ecx
  int Ulong; // eax
  int v20; // edx
  int v21; // r8d
  int v22; // r9d
  unsigned int v23; // ebx
  __int64 v24; // rax
  __int64 v25; // rax
  int v26; // [rsp+20h] [rbp-58h]
  __int64 v27; // [rsp+80h] [rbp+8h]
  __int64 v29; // [rsp+98h] [rbp+20h]

  v3 = a3;
  v4 = a2 - 1;
  v5 = 0;
  v8 = *(_QWORD *)(a1[1] + 88LL);
  v9 = -1073741823;
  v10 = a1[5] + 16LL * (unsigned int)(a2 - 1);
  v11 = -1;
  v27 = v8;
  v29 = (unsigned int)(a2 - 1);
  while ( 1 )
  {
    if ( v3 && v5 && v5 == 3 * (v5 / 3) )
    {
      RootHub_AcquireReadModifyWriteLock(a1, v4);
      Ulong = XilRegister_ReadUlong(v8, v10);
      v23 = Ulong & 0xE00C200 | 0x10060;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dDD(*(_QWORD *)(a1[1] + 72LL), v20, v21, v22, v26, a2, Ulong, 96);
      XilRegister_WriteUlong(v8, v10, v23);
      RootHub_ReleaseReadModifyWriteLock(a1, (unsigned int)(a2 - 1));
    }
    v12 = XilRegister_ReadUlong(v8, v10);
    v14 = v12;
    if ( v12 == v11 )
      goto LABEL_34;
    v11 = v12;
    v15 = *(_BYTE *)(a1[6] + 120 * v29 + 13);
    if ( v15 == 2 )
    {
      v13 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_9;
      v16 = 238;
      goto LABEL_8;
    }
    if ( v15 != 3 )
      break;
    v13 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = 239;
LABEL_8:
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a1[1] + 72LL),
        (_DWORD)v13,
        11,
        v16,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        a2,
        v12);
      v13 = &WPP_RECORDER_INITIALIZED;
    }
LABEL_9:
    v17 = v14 & 0x1E0;
    if ( v17 == 96
      || (v14 & 0x203) != 0x203
      || (v14 & 0x20000) != 0
      || v17 == 128
      || v17 == 480
      || v17 == 192
      || v17 == 320
      || v17 == 288
      || v17 == 352
      || (v14 & 0x10) != 0
      || *(_BYTE *)(a1[6] + 120 * v29 + 18) )
    {
      v9 = 0;
      goto LABEL_12;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1[1] + 72LL),
        (_DWORD)v13,
        11,
        241,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        a2,
        v5);
    }
    v8 = v27;
LABEL_34:
    KeStallExecutionProcessor(0xAu);
    if ( ++v5 >= 0x1900 )
      goto LABEL_12;
    v3 = a3;
    v4 = a2 - 1;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 2;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(a1[1] + 72LL),
      (_DWORD)v13,
      11,
      240,
      (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
      a2,
      v12);
  }
  v9 = 0;
LABEL_12:
  if ( v5 == 6400 )
  {
    v24 = a1[1];
    ++*(_DWORD *)(v24 + 492);
    ++*(_DWORD *)(v24 + 536);
    *(_BYTE *)(v24 + 472) = 1;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(a1[1] + 72LL),
        (_DWORD)v13,
        11,
        242,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        a2,
        v14);
    }
  }
  else if ( v5 )
  {
    if ( v5 > 0x960 )
    {
      v25 = a1[1];
      ++*(_DWORD *)(v25 + 496);
      ++*(_DWORD *)(v25 + 540);
      *(_BYTE *)(v25 + 472) = 1;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(a1[1] + 72LL),
        (_DWORD)v13,
        11,
        243,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        v5,
        a2);
    }
  }
  return v9;
}
