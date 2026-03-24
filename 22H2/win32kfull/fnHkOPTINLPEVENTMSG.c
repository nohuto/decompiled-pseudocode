/*
 * XREFs of fnHkOPTINLPEVENTMSG @ 0x1C0230F40
 * Callers:
 *     xxxHkCallHook @ 0x1C005CA10 (xxxHkCallHook.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C00522B4 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005236C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052430 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052468 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     HMValidateHandle @ 0x1C0067040 (HMValidateHandle.c)
 *     memset @ 0x1C016DE00 (memset.c)
 */

__int64 __fastcall fnHkOPTINLPEVENTMSG(int a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  bool v10; // zf
  int v11; // eax
  int v12; // ebx
  __int64 *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  ULONG64 v16; // rcx
  __int64 v17; // xmm0_8
  _QWORD v19[13]; // [rsp+50h] [rbp-68h] BYREF
  char v20; // [rsp+C0h] [rbp+8h] BYREF
  int v21; // [rsp+C8h] [rbp+10h] BYREF
  unsigned __int64 v22; // [rsp+D0h] [rbp+18h] BYREF

  v22 = 0LL;
  v21 = 0;
  memset(v19, 0, 0x48uLL);
  LODWORD(v19[0]) = a1;
  v19[1] = a2;
  LODWORD(v19[2]) = a3 != 0;
  if ( a3 )
  {
    *(_OWORD *)&v19[5] = *(_OWORD *)a3;
    v19[7] = *(_QWORD *)(a3 + 16);
  }
  v19[3] = a4;
  v19[4] = a5;
  LODWORD(v19[8]) = 0;
  if ( a2 )
  {
    v9 = HMValidateHandle(a2, 5u);
    if ( v9 )
    {
      v10 = (*(_BYTE *)(v9 + 64) & 4) == 0;
      v11 = v19[8];
      if ( !v10 )
        v11 = 1;
      LODWORD(v19[8]) = v11;
    }
  }
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a5);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v20);
  EtwTraceBeginCallback(49LL);
  v12 = KeUserModeCallback(49LL, v19, 72LL, &v22, &v21);
  EtwTraceEndCallback(49LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v20);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)&a5);
  if ( v12 >= 0 && v21 == 24 )
  {
    v13 = (__int64 *)v22;
    if ( v22 + 8 < v22 || v22 + 8 > MmUserProbeAddress )
      v13 = (__int64 *)MmUserProbeAddress;
    v14 = *v13;
    if ( !a3 )
      return v14;
    v15 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v15 || (*(_DWORD *)(v15 + 84) & 1) == 0 || *(_QWORD *)(v15 + 96) != a3 )
    {
      v16 = *(_QWORD *)(v22 + 16);
      if ( v16 + 24 < v16 || v16 + 24 > MmUserProbeAddress )
        v16 = MmUserProbeAddress;
      v17 = *(_QWORD *)(v16 + 16);
      *(_OWORD *)a3 = *(_OWORD *)v16;
      *(_QWORD *)(a3 + 16) = v17;
      return v14;
    }
  }
  return -1LL;
}
