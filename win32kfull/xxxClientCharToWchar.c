__int64 __fastcall xxxClientCharToWchar(__int16 a1, __int16 a2)
{
  int v2; // ebx
  ULONG64 v3; // rcx
  char v5; // [rsp+50h] [rbp+8h] BYREF
  __int16 v6; // [rsp+58h] [rbp+10h] BYREF
  __int16 v7; // [rsp+5Ah] [rbp+12h]
  int v8; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = 0LL;
  v8 = 0;
  v6 = a1;
  v7 = a2;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v5);
  EtwTraceBeginCallback(82LL);
  v2 = KeUserModeCallback(82LL, &v6, 4LL, &v9, &v8);
  EtwTraceEndCallback(82LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v5);
  if ( v2 < 0 || v8 != 24 )
    return 95LL;
  v3 = v9;
  if ( v9 + 8 < v9 || v9 + 8 > MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  return *(_QWORD *)v3;
}
