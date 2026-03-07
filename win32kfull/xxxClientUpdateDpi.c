__int64 __fastcall xxxClientUpdateDpi(int a1)
{
  int v1; // ebx
  ULONG64 v2; // rcx
  char v4; // [rsp+50h] [rbp+8h] BYREF
  int v5; // [rsp+58h] [rbp+10h] BYREF
  int v6; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  v7 = 0LL;
  v5 = 0;
  v6 = a1;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v4);
  EtwTraceBeginCallback(58LL);
  v1 = KeUserModeCallback(58LL, &v6, 4LL, &v7, &v5);
  EtwTraceEndCallback(58LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v4);
  if ( v1 < 0 || v5 != 24 )
    return 0LL;
  v2 = v7;
  if ( v7 + 8 < v7 || v7 + 8 > MmUserProbeAddress )
    v2 = MmUserProbeAddress;
  return *(_QWORD *)v2;
}
