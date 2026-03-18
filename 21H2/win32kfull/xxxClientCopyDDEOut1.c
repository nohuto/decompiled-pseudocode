/*
 * XREFs of xxxClientCopyDDEOut1 @ 0x1C022BEA8
 * Callers:
 *     ?xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z @ 0x1C02162C8 (-xxxCopyDDEOut@@YAPEAXPEAUtagINTDDEINFO@@PEAPEAX@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ??1LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A08 (--1LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     ??0LeaveEnterCritProperDisposition@@QEAA@XZ @ 0x1C0074A3C (--0LeaveEnterCritProperDisposition@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1C0222390 (-xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z.c)
 */

__int64 __fastcall xxxClientCopyDDEOut1(__int64 a1)
{
  int v2; // ebx
  __int64 *v3; // rcx
  __int64 v4; // rcx
  ULONG64 v5; // rcx
  __int64 v6; // rax
  _BYTE v8[4]; // [rsp+30h] [rbp-158h] BYREF
  int v9; // [rsp+34h] [rbp-154h] BYREF
  __int64 v10; // [rsp+38h] [rbp-150h]
  unsigned __int64 v11[3]; // [rsp+48h] [rbp-140h] BYREF
  _OWORD v12[5]; // [rsp+60h] [rbp-128h] BYREF
  __int128 v13; // [rsp+B0h] [rbp-D8h]
  __int128 v14; // [rsp+C0h] [rbp-C8h]
  volatile void *Address[2]; // [rsp+D0h] [rbp-B8h]
  volatile void *v16[2]; // [rsp+E0h] [rbp-A8h]
  __int64 v17; // [rsp+F0h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+F8h] [rbp-90h]
  _OWORD v19[4]; // [rsp+120h] [rbp-68h] BYREF
  __int64 v20; // [rsp+160h] [rbp-28h]

  memset(v12, 0, 0x48uLL);
  v11[0] = 0LL;
  v9 = 0;
  v19[0] = *(_OWORD *)a1;
  v19[1] = *(_OWORD *)(a1 + 16);
  v19[2] = *(_OWORD *)(a1 + 32);
  v19[3] = *(_OWORD *)(a1 + 48);
  v20 = *(_QWORD *)(a1 + 64);
  LeaveEnterCritProperDisposition::LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v8);
  EtwTraceBeginCallback(62LL);
  v2 = KeUserModeCallback(62LL, v19, 72LL, v11, &v9);
  EtwTraceEndCallback(62LL);
  LeaveEnterCritProperDisposition::~LeaveEnterCritProperDisposition((LeaveEnterCritProperDisposition *)v8);
  if ( v2 >= 0 && v9 == 24 )
  {
    v3 = (__int64 *)v11[0];
    if ( v11[0] + 8 < v11[0] || v11[0] + 8 > MmUserProbeAddress )
      v3 = (__int64 *)MmUserProbeAddress;
    v10 = *v3;
    if ( !v10 )
      return v10;
    CurrentThread = KeGetCurrentThread();
    v4 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)CurrentThread) + 512);
    if ( !v4 || (*(_DWORD *)(v4 + 84) & 1) == 0 || *(_OWORD **)(v4 + 96) != v12 )
    {
      v5 = *(_QWORD *)(v11[0] + 16);
      if ( v5 + 72 < v5 || v5 + 72 > MmUserProbeAddress )
        v5 = MmUserProbeAddress;
      v13 = *(_OWORD *)v5;
      v14 = *(_OWORD *)(v5 + 16);
      *(_OWORD *)Address = *(_OWORD *)(v5 + 32);
      *(_OWORD *)v16 = *(_OWORD *)(v5 + 48);
      v17 = *(_QWORD *)(v5 + 64);
      v12[0] = v13;
      v12[1] = v14;
      v12[2] = *(_OWORD *)Address;
      v12[3] = *(_OWORD *)v16;
      *(_QWORD *)&v12[4] = v17;
      if ( *(_DWORD *)(a1 + 40) )
      {
        ProbeForWrite(Address[0], *(int *)(a1 + 40), 1u);
        memmove((void *)Address[0], (const void *)(a1 + 72), *(int *)(a1 + 40));
      }
      if ( *(_DWORD *)(a1 + 64) )
      {
        ProbeForWrite(v16[1], *(int *)(a1 + 64), 1u);
        memmove((void *)v16[1], (const void *)(*(int *)(a1 + 40) + a1 + 72), *(int *)(a1 + 64));
      }
      if ( *((_QWORD *)&v14 + 1) && (unsigned int)xxxClientCopyDDEOut2((struct tagINTDDEINFO *)v12) )
      {
        v6 = v10;
        if ( (v12[1] & 0x800) != 0 )
          v6 = *((_QWORD *)&v12[1] + 1);
        v10 = v6;
      }
      *(_OWORD *)a1 = v12[0];
      *(_OWORD *)(a1 + 16) = v12[1];
      *(_OWORD *)(a1 + 32) = v12[2];
      *(_OWORD *)(a1 + 48) = v12[3];
      *(_QWORD *)(a1 + 64) = *(_QWORD *)&v12[4];
      return v10;
    }
  }
  return 0LL;
}
