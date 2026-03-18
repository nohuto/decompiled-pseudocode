/*
 * XREFs of PspWow64SetContextThread @ 0x140705578
 * Callers:
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     WbSetWowTrapFrame @ 0x140A0EE3C (WbSetWowTrapFrame.c)
 * Callees:
 *     IoThreadToProcess @ 0x1402321F0 (IoThreadToProcess.c)
 *     RtlInitializeExtendedContext @ 0x140295100 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
 *     PsGetThreadTeb @ 0x14029A290 (PsGetThreadTeb.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _alloca_probe @ 0x14042A4D0 (_alloca_probe.c)
 *     memset @ 0x140435E00 (memset.c)
 *     RtlCopyContext @ 0x140702F70 (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x140703290 (RtlpReadExtendedContext.c)
 *     PspSetContextThreadInternal @ 0x1407043D0 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1407045D0 (PspGetContextThreadInternal.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140704980 (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1407049DC (PspWow64ReadOrWriteThreadCpuArea.c)
 *     EtwTiLogSetContextThread @ 0x14070592C (EtwTiLogSetContextThread.c)
 *     RtlpWow64SetContextOnAmd64 @ 0x1407059D8 (RtlpWow64SetContextOnAmd64.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x140705DA4 (RtlGuardIsValidWow64StackPointer.c)
 */

__int64 __fastcall PspWow64SetContextThread(PETHREAD Thread, int *a2, int a3, char a4)
{
  _KPROCESS *Process; // r12
  __int64 v9; // rax
  __int64 result; // rax
  bool v11; // zf
  unsigned int v12; // edi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  void *v15; // rsp
  void *v16; // rsp
  int *v17; // r15
  __int64 v18; // rcx
  struct _KPROCESS *v19; // rbx
  __int64 ThreadTeb; // rax
  char v21; // bl
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  void *v24; // rsp
  void *v25; // rsp
  bool v26; // dl
  __int64 v27; // rcx
  int v28; // ebx
  _DWORD *v29; // r8
  int v30; // ecx
  int v31; // [rsp+20h] [rbp-30h]
  int v32; // [rsp+20h] [rbp-30h]
  int v33[2]; // [rsp+20h] [rbp-30h]
  int v34; // [rsp+28h] [rbp-28h]
  int v35; // [rsp+28h] [rbp-28h]
  __int16 v36; // [rsp+50h] [rbp+0h] BYREF
  char v37; // [rsp+52h] [rbp+2h]
  unsigned int v38; // [rsp+54h] [rbp+4h] BYREF
  unsigned int v39; // [rsp+58h] [rbp+8h] BYREF
  _DWORD v40[3]; // [rsp+5Ch] [rbp+Ch] BYREF
  __int64 v41; // [rsp+68h] [rbp+18h] BYREF
  PETHREAD Threada; // [rsp+70h] [rbp+20h]
  _DWORD v43[180]; // [rsp+80h] [rbp+30h] BYREF

  v37 = a4;
  v41 = 0LL;
  memset(v43, 0, 0x2CCuLL);
  v39 = 0;
  v36 = 0;
  memset(v40, 0, sizeof(v40));
  if ( a3 != 716 )
    return 3221225476LL;
  Threada = KeGetCurrentThread();
  Process = Thread->Process;
  if ( !Process[1].Affinity.StaticBitmap[30] || WORD2(Process[2].Affinity.StaticBitmap[20]) != 332 )
    return 3221225485LL;
  if ( a4 )
  {
    v9 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v9 = (__int64)a2;
    v38 = *(_DWORD *)v9;
  }
  else
  {
    v38 = *a2;
  }
  result = RtlpWow64SanitizeContextFlags((int *)&v38, a4);
  if ( (int)result >= 0 )
  {
    v11 = a4 == 0;
    v12 = v38;
    if ( v11 )
    {
      v17 = a2;
      *(_QWORD *)&v40[1] = a2 + 179;
      goto LABEL_15;
    }
    result = RtlGetExtendedContextLength(v38, (__int64)&v39);
    if ( (int)result >= 0 )
    {
      v13 = v39 + 15LL;
      if ( v13 <= v39 )
        v13 = 0xFFFFFFFFFFFFFF0LL;
      v14 = v13 & 0xFFFFFFFFFFFFFFF0uLL;
      v15 = alloca(v14);
      v16 = alloca(v14);
      v17 = (int *)&v36;
      result = RtlInitializeExtendedContext((__int64)&v36, v12, (__int64)&v40[1]);
      if ( (int)result >= 0 )
      {
        result = RtlpReadExtendedContext(v18, 1, *(__int64 *)&v40[1], v12, (__int64)a2, 0LL);
        if ( (int)result >= 0 )
        {
LABEL_15:
          v19 = IoThreadToProcess(Thread);
          if ( v19 != IoThreadToProcess(Threada)
            || (*(_DWORD *)&Process->0 & 0x20) == 0
            || (*v17 & 0x10001) != 0x10001
            || (ThreadTeb = PsGetThreadTeb((__int64)Thread),
                (unsigned int)RtlGuardIsValidWow64StackPointer((unsigned int)v17[49], ThreadTeb)) )
          {
            result = PspWow64ReadOrWriteThreadCpuArea(
                       Process,
                       (__int64)Thread,
                       1,
                       (__int64)v43,
                       v31,
                       v34,
                       v40,
                       (bool *)&v36);
            if ( (int)result >= 0 )
            {
              v21 = v36;
              if ( (_BYTE)v36 && (v12 & 0x10040) == 0x10040 )
              {
                return 3221225659LL;
              }
              else
              {
                result = RtlGetExtendedContextLength(1048607LL, (__int64)&v39);
                if ( (int)result >= 0 )
                {
                  v22 = v39 + 15LL;
                  if ( v22 <= v39 )
                    v22 = 0xFFFFFFFFFFFFFF0LL;
                  v23 = v22 & 0xFFFFFFFFFFFFFFF0uLL;
                  v24 = alloca(v23);
                  v25 = alloca(v23);
                  result = RtlInitializeExtendedContext((__int64)&v36, 0x10001Fu, (__int64)&v41);
                  if ( (int)result >= 0 )
                  {
                    result = PspGetContextThreadInternal((__int64)Thread, (__int64)&v36, 0, 1, 1);
                    if ( (int)result >= 0 )
                    {
                      result = v21
                             ? RtlCopyContext((__int64)v43, *v17, (__int64)v17)
                             : RtlpWow64SetContextOnAmd64(v43, &v36, v17, (char *)&v36 + 1);
                      if ( (int)result >= 0 )
                      {
                        if ( LOWORD(v43[2]) != 35 )
                        {
                          v26 = 0;
                          if ( (v12 & 0x10040) != 0x10040 )
                            v26 = (v12 & 0x10002) != 65538 && (v12 & 0x10020) != 65568;
                          if ( !v26 )
                            v40[0] |= 1u;
                        }
                        result = PspWow64ReadOrWriteThreadCpuArea(
                                   Process,
                                   (__int64)Thread,
                                   0,
                                   (__int64)v43,
                                   v32,
                                   v35,
                                   v40,
                                   0LL);
                        v28 = result;
                        if ( (int)result >= 0 )
                        {
                          if ( HIBYTE(v36) )
                          {
                            if ( (v12 & 0x10040) == 0x10040 )
                            {
                              v43[0] |= 0x100040u;
                              v29 = (_DWORD *)v41;
                              v30 = v40[1];
                              *(_QWORD *)(v41 + 16) = *(_QWORD *)(*(_QWORD *)&v40[1] + 16LL);
                              v29[4] += v30 - (_DWORD)v29;
                              v29[1] = v29[4] + v29[5] - *v29;
                            }
                            v28 = PspSetContextThreadInternal(Thread, (__int64)&v36, 0, 1, 1);
                          }
                          if ( v28 >= 0 )
                          {
                            if ( v37 )
                            {
                              LOBYTE(v27) = KeGetCurrentThread()->PreviousMode;
                              EtwTiLogSetContextThread(v27, Thread, v17, v38, *(_QWORD *)v33);
                            }
                          }
                          return (unsigned int)v28;
                        }
                      }
                    }
                  }
                }
              }
            }
            return result;
          }
          return 3221225485LL;
        }
      }
    }
  }
  return result;
}
