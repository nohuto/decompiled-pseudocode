__int64 __fastcall RootHub_RestoreU1U2Timeouts(_QWORD *a1, int a2)
{
  unsigned int v2; // eax
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rbp
  unsigned int *v7; // r14
  __int64 v8; // rbx
  int Ulong; // eax
  int v10; // edx
  int v11; // edi
  unsigned int v12; // ebx
  __int64 result; // rax
  int v14; // edx

  v2 = a2 - 1;
  v4 = a1[1];
  v5 = 16LL * (unsigned int)(a2 - 1);
  v6 = *(_QWORD *)(v4 + 88);
  v7 = (unsigned int *)(v5 + a1[5] + 4LL);
  v8 = v2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_(*(_QWORD *)(v4 + 72), v5, 11, 223, (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids);
  }
  Ulong = XilRegister_ReadUlong(v6, v7);
  v11 = Ulong;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_D(
      *(_QWORD *)(a1[1] + 72LL),
      v10,
      11,
      224,
      (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
      Ulong);
  }
  v12 = (*(unsigned __int8 *)(120 * v8 + a1[6] + 22) << 8) | v11 & 0xFFFF0000 | *(unsigned __int8 *)(120 * v8 + a1[6] + 21);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 4;
    WPP_RECORDER_SF_D(
      *(_QWORD *)(a1[1] + 72LL),
      v10,
      11,
      225,
      (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
      v12);
  }
  XilRegister_WriteUlong(v6, v7, v12);
  result = XilRegister_ReadUlong(v6, v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    return WPP_RECORDER_SF_D(
             *(_QWORD *)(a1[1] + 72LL),
             v14,
             11,
             226,
             (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
             result);
  }
  return result;
}
