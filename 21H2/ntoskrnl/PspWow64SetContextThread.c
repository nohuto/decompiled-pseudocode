/*
 * XREFs of PspWow64SetContextThread @ 0x140695D20
 * Callers:
 *     NtSetInformationThread @ 0x1406FCE80 (NtSetInformationThread.c)
 *     WbSetWowTrapFrame @ 0x140963BDC (WbSetWowTrapFrame.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x140276470 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1402764F0 (RtlInitializeExtendedContext.c)
 *     PsGetThreadTeb @ 0x1402B17F0 (PsGetThreadTeb.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1404084A0 (_alloca_probe.c)
 *     memset @ 0x140414200 (memset.c)
 *     PspSetContextThreadInternal @ 0x140647C9C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140647E54 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x1406480E8 (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x140648200 (RtlpReadExtendedContext.c)
 *     RtlpWow64SanitizeContextFlags @ 0x140696810 (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140696868 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     EtwTiLogSetContextThread @ 0x140696CB8 (EtwTiLogSetContextThread.c)
 *     RtlpWow64SetContextOnAmd64 @ 0x140696D64 (RtlpWow64SetContextOnAmd64.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x140697098 (RtlGuardIsValidWow64StackPointer.c)
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
  __int16 *v20; // r15
  __int64 v21; // rcx
  __int64 ThreadTeb; // rax
  char v23; // r12
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rcx
  void *v26; // rsp
  void *v27; // rsp
  bool v28; // dl
  __int64 v29; // rcx
  int v30; // ebx
  _DWORD *v31; // r8
  int v32; // ecx
  int v33; // [rsp+20h] [rbp-30h]
  int v34; // [rsp+20h] [rbp-30h]
  int v35[2]; // [rsp+20h] [rbp-30h]
  int v36; // [rsp+28h] [rbp-28h]
  int v37; // [rsp+28h] [rbp-28h]
  __int16 v38; // [rsp+50h] [rbp+0h] BYREF
  char v39; // [rsp+52h] [rbp+2h]
  unsigned int v40; // [rsp+54h] [rbp+4h] BYREF
  unsigned int v41; // [rsp+58h] [rbp+8h] BYREF
  _DWORD v42[3]; // [rsp+5Ch] [rbp+Ch] BYREF
  __int64 v43; // [rsp+68h] [rbp+18h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp+20h]
  _DWORD v45[180]; // [rsp+80h] [rbp+30h] BYREF

  v39 = a4;
  v43 = 0LL;
  memset(v45, 0, 0x2CCuLL);
  v41 = 0;
  v38 = 0;
  memset(v42, 0, sizeof(v42));
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
    v40 = *(_DWORD *)v12;
  }
  else
  {
    v40 = *a2;
  }
  LOBYTE(v8) = a4;
  result = RtlpWow64SanitizeContextFlags(&v40, v8);
  if ( (int)result >= 0 )
  {
    v14 = a4 == 0;
    v15 = v40;
    if ( v14 )
    {
      v20 = (__int16 *)a2;
      *(_QWORD *)&v42[1] = a2 + 179;
      goto LABEL_15;
    }
    result = RtlGetExtendedContextLength(v40, (__int64)&v41);
    if ( (int)result >= 0 )
    {
      v16 = v41 + 15LL;
      if ( v16 <= v41 )
        v16 = 0xFFFFFFFFFFFFFF0LL;
      v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
      v18 = alloca(v17);
      v19 = alloca(v17);
      v20 = &v38;
      result = RtlInitializeExtendedContext((__int64)&v38, v15, (__int64)&v42[1]);
      if ( (int)result >= 0 )
      {
        result = RtlpReadExtendedContext(v21, 1u, *(__int64 *)&v42[1], v15, (__int64)a2, 0LL);
        if ( (int)result >= 0 )
        {
LABEL_15:
          if ( Thread != CurrentThread
            || (*(_DWORD *)&Process->0 & 0x20) == 0
            || (*(_DWORD *)v20 & 0x10001) != 0x10001
            || (ThreadTeb = PsGetThreadTeb((__int64)Thread),
                (unsigned int)RtlGuardIsValidWow64StackPointer(*((unsigned int *)v20 + 49), ThreadTeb)) )
          {
            result = PspWow64ReadOrWriteThreadCpuArea((ULONG_PTR)Process, v33, v36, (__int64)v42, (__int64)&v38);
            if ( (int)result >= 0 )
            {
              v23 = v38;
              if ( (_BYTE)v38 && (v15 & 0x10040) == 0x10040 )
              {
                return 3221225659LL;
              }
              else
              {
                result = RtlGetExtendedContextLength(1048607LL, (__int64)&v41);
                if ( (int)result >= 0 )
                {
                  v24 = v41 + 15LL;
                  if ( v24 <= v41 )
                    v24 = 0xFFFFFFFFFFFFFF0LL;
                  v25 = v24 & 0xFFFFFFFFFFFFFFF0uLL;
                  v26 = alloca(v25);
                  v27 = alloca(v25);
                  result = RtlInitializeExtendedContext((__int64)&v38, 0x10001Fu, (__int64)&v43);
                  if ( (int)result >= 0 )
                  {
                    result = PspGetContextThreadInternal((__int64)Thread, (__int64)&v38, 0, 1, 1);
                    if ( (int)result >= 0 )
                    {
                      result = v23
                             ? RtlCopyContext((__int64)v45, *(_DWORD *)v20, (__int64)v20)
                             : RtlpWow64SetContextOnAmd64(v45, &v38, v20, (char *)&v38 + 1);
                      if ( (int)result >= 0 )
                      {
                        if ( LOWORD(v45[2]) != 35 )
                        {
                          v28 = 0;
                          if ( (v15 & 0x10040) != 0x10040 )
                            v28 = (v15 & 0x10002) != 65538 && (v15 & 0x10020) != 65568;
                          if ( !v28 )
                            v42[0] |= 1u;
                        }
                        result = PspWow64ReadOrWriteThreadCpuArea(BugCheckParameter1, v34, v37, (__int64)v42, 0LL);
                        v30 = result;
                        if ( (int)result >= 0 )
                        {
                          if ( HIBYTE(v38) )
                          {
                            if ( (v15 & 0x10040) == 0x10040 )
                            {
                              v45[0] |= 0x100040u;
                              v31 = (_DWORD *)v43;
                              v32 = v42[1];
                              *(_QWORD *)(v43 + 16) = *(_QWORD *)(*(_QWORD *)&v42[1] + 16LL);
                              v31[4] += v32 - (_DWORD)v31;
                              v31[1] = v31[4] + v31[5] - *v31;
                            }
                            v30 = PspSetContextThreadInternal(Thread, (__int64)&v38, 0, 1, 1);
                          }
                          if ( v30 >= 0 )
                          {
                            if ( v39 )
                            {
                              LOBYTE(v29) = KeGetCurrentThread()->PreviousMode;
                              EtwTiLogSetContextThread(v29, Thread, v20, v40, *(_QWORD *)v35);
                            }
                          }
                          return (unsigned int)v30;
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
