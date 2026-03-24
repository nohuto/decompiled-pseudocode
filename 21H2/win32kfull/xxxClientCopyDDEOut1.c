/*
 * XREFs of xxxClientCopyDDEOut1 @ 0x1C02324F4
 * Callers:
 *     ?xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z @ 0x1C021BB6C (-xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z.c)
 * Callees:
 *     ??1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C0052354 (--1ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ @ 0x1C005240C (--0ReleaseAndReacquirePerObjectLocks@@QEAA@XZ.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C00524D0 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0052508 (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1C022871C (-xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxClientCopyDDEOut1(__int64 a1)
{
  int v2; // ebx
  __int64 *v3; // rbx
  __int64 v4; // rbx
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  char v8; // [rsp+30h] [rbp-148h] BYREF
  _BYTE v9[3]; // [rsp+31h] [rbp-147h] BYREF
  _DWORD v10[3]; // [rsp+34h] [rbp-144h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-138h] BYREF
  __int64 v12; // [rsp+48h] [rbp-130h]
  _OWORD v13[5]; // [rsp+60h] [rbp-118h] BYREF
  __int128 v14; // [rsp+B0h] [rbp-C8h]
  __int128 v15; // [rsp+C0h] [rbp-B8h]
  volatile void *Address[2]; // [rsp+D0h] [rbp-A8h]
  volatile void *v17[2]; // [rsp+E0h] [rbp-98h]
  __int64 v18; // [rsp+F0h] [rbp-88h]
  _OWORD v19[4]; // [rsp+110h] [rbp-68h] BYREF
  __int64 v20; // [rsp+150h] [rbp-28h]

  memset(v13, 0, 0x48uLL);
  v11 = 0LL;
  v10[0] = 0;
  v19[0] = *(_OWORD *)a1;
  v19[1] = *(_OWORD *)(a1 + 16);
  v19[2] = *(_OWORD *)(a1 + 32);
  v19[3] = *(_OWORD *)(a1 + 48);
  v20 = *(_QWORD *)(a1 + 64);
  if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  ReleaseAndReacquirePerObjectLocks::ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v9);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v8);
  EtwTraceBeginCallback(62LL);
  v2 = KeUserModeCallback(62LL, v19, 72LL, &v11, v10);
  EtwTraceEndCallback(62LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)&v8);
  ReleaseAndReacquirePerObjectLocks::~ReleaseAndReacquirePerObjectLocks((ReleaseAndReacquirePerObjectLocks *)v9);
  if ( v2 >= 0 && v10[0] == 24 )
  {
    v3 = (__int64 *)v11;
    if ( v11 + 8 < v11 || v11 + 8 > MmUserProbeAddress )
      v3 = (__int64 *)MmUserProbeAddress;
    v4 = *v3;
    v12 = v4;
    if ( !v4 )
      return v4;
    v5 = *(_QWORD *)(gptiCurrent + 512LL);
    if ( !v5 || (*(_DWORD *)(v5 + 84) & 1) == 0 || *(_OWORD **)(v5 + 96) != v13 )
    {
      v6 = *(_QWORD *)(v11 + 16);
      if ( v6 + 72 < v6 || v6 + 72 > MmUserProbeAddress )
        v6 = MmUserProbeAddress;
      v14 = *(_OWORD *)v6;
      v15 = *(_OWORD *)(v6 + 16);
      *(_OWORD *)Address = *(_OWORD *)(v6 + 32);
      *(_OWORD *)v17 = *(_OWORD *)(v6 + 48);
      v18 = *(_QWORD *)(v6 + 64);
      v13[0] = v14;
      v13[1] = v15;
      v13[2] = *(_OWORD *)Address;
      v13[3] = *(_OWORD *)v17;
      *(_QWORD *)&v13[4] = v18;
      if ( *(_DWORD *)(a1 + 40) )
      {
        ProbeForWrite(Address[0], *(int *)(a1 + 40), 1u);
        memmove((void *)Address[0], (const void *)(a1 + 72), *(int *)(a1 + 40));
      }
      if ( *(_DWORD *)(a1 + 64) )
      {
        ProbeForWrite(v17[1], *(int *)(a1 + 64), 1u);
        memmove((void *)v17[1], (const void *)(*(int *)(a1 + 40) + a1 + 72), *(int *)(a1 + 64));
      }
      if ( *((_QWORD *)&v15 + 1) && (unsigned int)xxxClientCopyDDEOut2((struct tagINTDDEINFO *)v13) )
      {
        if ( (v13[1] & 0x800) != 0 )
          v4 = *((_QWORD *)&v13[1] + 1);
        v12 = v4;
      }
      *(_OWORD *)a1 = v13[0];
      *(_OWORD *)(a1 + 16) = v13[1];
      *(_OWORD *)(a1 + 32) = v13[2];
      *(_OWORD *)(a1 + 48) = v13[3];
      *(_QWORD *)(a1 + 64) = *(_QWORD *)&v13[4];
      return v4;
    }
  }
  return 0LL;
}
