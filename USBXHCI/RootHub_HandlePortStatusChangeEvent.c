__int64 __fastcall RootHub_HandlePortStatusChangeEvent(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  __int64 v5; // rbp
  unsigned int v6; // r14d
  __int64 v7; // rsi
  int v8; // edx
  __int64 result; // rax
  __int64 v10; // rsi
  int Ulong; // eax
  int v12; // edx
  int v13; // ebx
  int v14; // edx
  char v15; // [rsp+28h] [rbp-20h]

  v2 = *(unsigned __int8 *)(a2 + 3);
  v4 = a1[1];
  v5 = *(_QWORD *)(v4 + 88);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = *(_BYTE *)(a2 + 3);
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d(*(_QWORD *)(v4 + 72), a2, 11, 210, (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids, v15);
  }
  v6 = v2 - 1;
  v7 = 16LL * (v2 - 1);
  RootHub_DumpPortData(v7 + a1[5], a1[1]);
  if ( (unsigned __int8)RootHub_HideInvalidDebugPortStatusAndChange(a1, v2) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(a1[1] + 72LL),
        v8,
        11,
        211,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        v2);
    }
    RootHub_AcquireReadModifyWriteLock(a1, v6);
    v10 = a1[5] + v7;
    Ulong = XilRegister_ReadUlong(v5, v10);
    v13 = Ulong;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_D(
        *(_QWORD *)(a1[1] + 72LL),
        v12,
        11,
        212,
        (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
        Ulong);
    }
    XilRegister_WriteUlong(v5, v10, v13 & 0xE00C200 | 0xFA0000u);
    RootHub_ReleaseReadModifyWriteLock(a1, v6);
    result = XilRegister_ReadUlong(v5, v10);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      return WPP_RECORDER_SF_D(
               *(_QWORD *)(a1[1] + 72LL),
               v14,
               11,
               213,
               (__int64)&WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids,
               result);
    }
  }
  else
  {
    result = RootHub_DetectAndAcknowledgePortResume(a1, v2, 0LL);
    if ( !(_BYTE)result )
      return ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C0064810)(UcxDriverGlobals, *a1);
  }
  return result;
}
