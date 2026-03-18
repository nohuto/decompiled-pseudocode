/*
 * XREFs of fnHkINLPNOTIFYSTRUCT @ 0x1C022ADA8
 * Callers:
 *     ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x1C01E52B8 (-xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z.c)
 * Callees:
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     memset @ 0x1C0160540 (memset.c)
 */

__int64 __fastcall fnHkINLPNOTIFYSTRUCT(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  int v8; // ebx
  _QWORD *v9; // rcx
  _QWORD v11[13]; // [rsp+40h] [rbp-68h] BYREF
  char v12; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v13; // [rsp+B8h] [rbp+10h] BYREF
  int v14; // [rsp+C8h] [rbp+20h] BYREF
  int v15; // [rsp+CCh] [rbp+24h]

  v15 = HIDWORD(a4);
  v13 = 0LL;
  v14 = 0;
  memset(v11, 0, 0x60uLL);
  LODWORD(v11[0]) = a1;
  v11[1] = 0LL;
  v11[5] = *(_QWORD *)(a3 + 32);
  LODWORD(v11[6]) = *(_DWORD *)(a3 + 48);
  v11[7] = *(int *)(a3 + 40);
  v11[8] = *(int *)(a3 + 44);
  LODWORD(v11[9]) = *(_DWORD *)(a3 + 52);
  v11[2] = 0LL;
  v11[3] = a5;
  LODWORD(v11[4]) = *a6;
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  EtwTraceBeginCallback(127LL);
  v8 = KeUserModeCallback(127LL, v11, 96LL, &v13, &v14);
  EtwTraceEndCallback(127LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v12);
  if ( v8 < 0 || v14 != 24 )
    return 0LL;
  v9 = (_QWORD *)v13;
  if ( v13 + 8 < v13 || v13 + 8 > MmUserProbeAddress )
    v9 = (_QWORD *)MmUserProbeAddress;
  return (unsigned int)*v9;
}
