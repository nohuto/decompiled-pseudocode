/*
 * XREFs of PspWow64SetContextThread @ 0x14067A140
 * Callers:
 *     NtSetInformationThread @ 0x14064A5A0 (NtSetInformationThread.c)
 *     WbSetWowTrapFrame @ 0x140963C2C (WbSetWowTrapFrame.c)
 * Callees:
 *     PsGetThreadTeb @ 0x140308F40 (PsGetThreadTeb.c)
 *     RtlGetExtendedContextLength @ 0x14033F480 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x14033F500 (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140407B20 (_alloca_probe.c)
 *     memset @ 0x140413800 (memset.c)
 *     RtlpWow64SanitizeContextFlags @ 0x14067AC30 (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x14067AC88 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     EtwTiLogSetContextThread @ 0x14067B0D8 (EtwTiLogSetContextThread.c)
 *     RtlpWow64SetContextOnAmd64 @ 0x14067B184 (RtlpWow64SetContextOnAmd64.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x14067B4B8 (RtlGuardIsValidWow64StackPointer.c)
 *     PspSetContextThreadInternal @ 0x1406C0A5C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1406C0C14 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x1406C0EA8 (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x1406C0FC0 (RtlpReadExtendedContext.c)
 */

__int64 __fastcall PspWow64SetContextThread(PETHREAD Thread, unsigned int *a2, int a3, char a4)
{
  __int64 v8; // rdx
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 result; // rax
  bool v14; // zf
  unsigned int v15; // edi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  unsigned int *v20; // r15
  int v21; // edx
  int v22; // ecx
  __int64 ThreadTeb; // rax
  char v24; // r12
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  void *v27; // rsp
  void *v28; // rsp
  int v29; // r9d
  bool v30; // dl
  __int64 v31; // rcx
  int v32; // ebx
  _DWORD *v33; // r8
  int v34; // ecx
  int v35; // [rsp+20h] [rbp-30h]
  int v36; // [rsp+20h] [rbp-30h]
  int v37; // [rsp+28h] [rbp-28h]
  int v38; // [rsp+28h] [rbp-28h]
  __int16 v39; // [rsp+50h] [rbp+0h] BYREF
  char v40; // [rsp+52h] [rbp+2h]
  unsigned int v41; // [rsp+54h] [rbp+4h] BYREF
  unsigned int v42; // [rsp+58h] [rbp+8h] BYREF
  _DWORD v43[3]; // [rsp+5Ch] [rbp+Ch] BYREF
  __int64 v44; // [rsp+68h] [rbp+18h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp+20h]
  _DWORD v46[180]; // [rsp+80h] [rbp+30h] BYREF

  v40 = a4;
  v44 = 0LL;
  memset(v46, 0, 0x2CCuLL);
  v42 = 0;
  v39 = 0;
  memset(v43, 0, sizeof(v43));
  if ( a3 != 716 )
    return 3221225476LL;
  CurrentThread = KeGetCurrentThread();
  Process = Thread->Process;
  BugCheckParameter1 = (ULONG_PTR)Process;
  v11 = Process[1].AffinityPadding[10];
  if ( !v11 || *(_WORD *)(v11 + 8) != 332 )
    return 3221225485LL;
  if ( a4 )
  {
    v12 = (__int64)a2;
    if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    v41 = *(_DWORD *)v12;
  }
  else
  {
    v41 = *a2;
  }
  LOBYTE(v8) = a4;
  result = RtlpWow64SanitizeContextFlags(&v41, v8);
  if ( (int)result >= 0 )
  {
    v14 = a4 == 0;
    v15 = v41;
    if ( v14 )
    {
      v20 = a2;
      *(_QWORD *)&v43[1] = a2 + 179;
      goto LABEL_15;
    }
    result = RtlGetExtendedContextLength(v41, (__int64)&v42);
    if ( (int)result >= 0 )
    {
      v16 = v42 + 15LL;
      if ( v16 <= v42 )
        v16 = 0xFFFFFFFFFFFFFF0LL;
      v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
      v18 = alloca(v17);
      v19 = alloca(v17);
      v20 = (unsigned int *)&v39;
      result = RtlInitializeExtendedContext((__int64)&v39, v15, (__int64)&v43[1]);
      if ( (int)result >= 0 )
      {
        LOBYTE(v21) = 1;
        result = RtlpReadExtendedContext(v22, v21, v43[1], v15, (__int64)a2, 0LL);
        if ( (int)result >= 0 )
        {
LABEL_15:
          if ( Thread != CurrentThread
            || (*(_DWORD *)&Process->0 & 0x20) == 0
            || (*v20 & 0x10001) != 0x10001
            || (ThreadTeb = PsGetThreadTeb((__int64)Thread),
                (unsigned int)RtlGuardIsValidWow64StackPointer(v20[49], ThreadTeb)) )
          {
            result = PspWow64ReadOrWriteThreadCpuArea((ULONG_PTR)Process, v35, v37, (__int64)v43, (__int64)&v39);
            if ( (int)result >= 0 )
            {
              v24 = v39;
              if ( (_BYTE)v39 && (v15 & 0x10040) == 0x10040 )
              {
                return 3221225659LL;
              }
              else
              {
                result = RtlGetExtendedContextLength(1048607LL, (__int64)&v42);
                if ( (int)result >= 0 )
                {
                  v25 = v42 + 15LL;
                  if ( v25 <= v42 )
                    v25 = 0xFFFFFFFFFFFFFF0LL;
                  v26 = v25 & 0xFFFFFFFFFFFFFFF0uLL;
                  v27 = alloca(v26);
                  v28 = alloca(v26);
                  result = RtlInitializeExtendedContext((__int64)&v39, 0x10001Fu, (__int64)&v44);
                  if ( (int)result >= 0 )
                  {
                    LOBYTE(v29) = 1;
                    result = PspGetContextThreadInternal((_DWORD)Thread, (unsigned int)&v39, 0, v29, 1);
                    if ( (int)result >= 0 )
                    {
                      result = v24
                             ? RtlCopyContext(v46, *v20, v20)
                             : RtlpWow64SetContextOnAmd64(v46, &v39, v20, (char *)&v39 + 1);
                      if ( (int)result >= 0 )
                      {
                        if ( LOWORD(v46[2]) != 35 )
                        {
                          v30 = 0;
                          if ( (v15 & 0x10040) != 0x10040 )
                            v30 = (v15 & 0x10002) != 65538 && (v15 & 0x10020) != 65568;
                          if ( !v30 )
                            v43[0] |= 1u;
                        }
                        result = PspWow64ReadOrWriteThreadCpuArea(BugCheckParameter1, v36, v38, (__int64)v43, 0LL);
                        v32 = result;
                        if ( (int)result >= 0 )
                        {
                          if ( HIBYTE(v39) )
                          {
                            if ( (v15 & 0x10040) == 0x10040 )
                            {
                              v46[0] |= 0x100040u;
                              v33 = (_DWORD *)v44;
                              v34 = v43[1];
                              *(_QWORD *)(v44 + 16) = *(_QWORD *)(*(_QWORD *)&v43[1] + 16LL);
                              v33[4] += v34 - (_DWORD)v33;
                              v33[1] = v33[4] + v33[5] - *v33;
                            }
                            v32 = PspSetContextThreadInternal(Thread, 1);
                          }
                          if ( v32 >= 0 )
                          {
                            if ( v40 )
                            {
                              LOBYTE(v31) = KeGetCurrentThread()->PreviousMode;
                              EtwTiLogSetContextThread(v31, Thread, v20, v41);
                            }
                          }
                          return (unsigned int)v32;
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
