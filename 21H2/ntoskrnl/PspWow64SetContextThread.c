/*
 * XREFs of PspWow64SetContextThread @ 0x1405F5270
 * Callers:
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 *     WbSetWowTrapFrame @ 0x140963DBC (WbSetWowTrapFrame.c)
 * Callees:
 *     PsGetThreadTeb @ 0x14022F9A0 (PsGetThreadTeb.c)
 *     RtlGetExtendedContextLength @ 0x140264410 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x140264490 (RtlInitializeExtendedContext.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140408680 (_alloca_probe.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlpWow64SanitizeContextFlags @ 0x1405F5D60 (RtlpWow64SanitizeContextFlags.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1405F5DB8 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     EtwTiLogSetContextThread @ 0x1405F6208 (EtwTiLogSetContextThread.c)
 *     RtlpWow64SetContextOnAmd64 @ 0x1405F62B4 (RtlpWow64SetContextOnAmd64.c)
 *     RtlGuardIsValidWow64StackPointer @ 0x1405F65E8 (RtlGuardIsValidWow64StackPointer.c)
 *     PspSetContextThreadInternal @ 0x14063CA8C (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x14063CC44 (PspGetContextThreadInternal.c)
 *     RtlCopyContext @ 0x14063CED8 (RtlCopyContext.c)
 *     RtlpReadExtendedContext @ 0x14063CFF0 (RtlpReadExtendedContext.c)
 */

NTSTATUS __fastcall PspWow64SetContextThread(PETHREAD Thread, ULONG *a2, int a3, char a4)
{
  __int64 v8; // rdx
  struct _KTHREAD *CurrentThread; // r14
  _KPROCESS *Process; // r12
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  NTSTATUS result; // eax
  bool v14; // zf
  ULONG v15; // edi
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  void *v18; // rsp
  void *v19; // rsp
  ULONG *v20; // r15
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
  PCONTEXT_EX v33; // r8
  int v34; // ecx
  int v35; // [rsp+20h] [rbp-30h]
  int v36; // [rsp+20h] [rbp-30h]
  int v37; // [rsp+28h] [rbp-28h]
  int v38; // [rsp+28h] [rbp-28h]
  __int16 v39; // [rsp+50h] [rbp+0h] BYREF
  char v40; // [rsp+52h] [rbp+2h]
  ULONG v41; // [rsp+54h] [rbp+4h] BYREF
  ULONG ContextLength; // [rsp+58h] [rbp+8h] BYREF
  _DWORD v43[3]; // [rsp+5Ch] [rbp+Ch] BYREF
  PCONTEXT_EX v44; // [rsp+68h] [rbp+18h] BYREF
  ULONG_PTR BugCheckParameter1; // [rsp+70h] [rbp+20h]
  _DWORD v46[180]; // [rsp+80h] [rbp+30h] BYREF

  v40 = a4;
  v44 = 0LL;
  memset(v46, 0, 0x2CCuLL);
  ContextLength = 0;
  v39 = 0;
  memset(v43, 0, sizeof(v43));
  if ( a3 != 716 )
    return -1073741820;
  CurrentThread = KeGetCurrentThread();
  Process = Thread->Process;
  BugCheckParameter1 = (ULONG_PTR)Process;
  v11 = Process[1].AffinityPadding[10];
  if ( !v11 || *(_WORD *)(v11 + 8) != 332 )
    return -1073741811;
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
  if ( result >= 0 )
  {
    v14 = a4 == 0;
    v15 = v41;
    if ( v14 )
    {
      v20 = a2;
      *(_QWORD *)&v43[1] = a2 + 179;
      goto LABEL_15;
    }
    result = RtlGetExtendedContextLength(v41, &ContextLength);
    if ( result >= 0 )
    {
      v16 = ContextLength + 15LL;
      if ( v16 <= ContextLength )
        v16 = 0xFFFFFFFFFFFFFF0LL;
      v17 = v16 & 0xFFFFFFFFFFFFFFF0uLL;
      v18 = alloca(v17);
      v19 = alloca(v17);
      v20 = (ULONG *)&v39;
      result = RtlInitializeExtendedContext((PCONTEXT)&v39, v15, (PCONTEXT_EX *)&v43[1]);
      if ( result >= 0 )
      {
        LOBYTE(v21) = 1;
        result = RtlpReadExtendedContext(v22, v21, v43[1], v15, (__int64)a2, 0LL);
        if ( result >= 0 )
        {
LABEL_15:
          if ( Thread != CurrentThread
            || (*(_DWORD *)&Process->0 & 0x20) == 0
            || (*v20 & 0x10001) != 0x10001
            || (ThreadTeb = PsGetThreadTeb((__int64)Thread),
                (unsigned int)RtlGuardIsValidWow64StackPointer(v20[49], ThreadTeb)) )
          {
            result = PspWow64ReadOrWriteThreadCpuArea((ULONG_PTR)Process, v35, v37, (__int64)v43, (__int64)&v39);
            if ( result >= 0 )
            {
              v24 = v39;
              if ( (_BYTE)v39 && (v15 & 0x10040) == 0x10040 )
              {
                return -1073741637;
              }
              else
              {
                result = RtlGetExtendedContextLength(0x10001Fu, &ContextLength);
                if ( result >= 0 )
                {
                  v25 = ContextLength + 15LL;
                  if ( v25 <= ContextLength )
                    v25 = 0xFFFFFFFFFFFFFF0LL;
                  v26 = v25 & 0xFFFFFFFFFFFFFFF0uLL;
                  v27 = alloca(v26);
                  v28 = alloca(v26);
                  result = RtlInitializeExtendedContext((PCONTEXT)&v39, 0x10001Fu, &v44);
                  if ( result >= 0 )
                  {
                    LOBYTE(v29) = 1;
                    result = PspGetContextThreadInternal((_DWORD)Thread, (unsigned int)&v39, 0, v29, 1);
                    if ( result >= 0 )
                    {
                      result = v24
                             ? RtlCopyContext((PCONTEXT)v46, *v20, (PCONTEXT)v20)
                             : RtlpWow64SetContextOnAmd64(v46, &v39, v20, (char *)&v39 + 1);
                      if ( result >= 0 )
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
                        if ( result >= 0 )
                        {
                          if ( HIBYTE(v39) )
                          {
                            if ( (v15 & 0x10040) == 0x10040 )
                            {
                              v46[0] |= 0x100040u;
                              v33 = v44;
                              v34 = v43[1];
                              v44->XState = *(CONTEXT_CHUNK *)(*(_QWORD *)&v43[1] + 16LL);
                              v33->XState.Offset += v34 - (_DWORD)v33;
                              v33->All.Length = v33->XState.Offset + v33->XState.Length - v33->All.Offset;
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
                          return v32;
                        }
                      }
                    }
                  }
                }
              }
            }
            return result;
          }
          return -1073741811;
        }
      }
    }
  }
  return result;
}
