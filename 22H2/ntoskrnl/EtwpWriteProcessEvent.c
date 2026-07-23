/*
 * XREFs of EtwpWriteProcessEvent @ 0x140602B04
 * Callers:
 *     EtwTraceProcess @ 0x14060330C (EtwTraceProcess.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140206FC0 (KiUnstackDetachProcess.c)
 *     EtwTraceSiloKernelEvent @ 0x14025A0AC (EtwTraceSiloKernelEvent.c)
 *     KiStackAttachProcess @ 0x14025BB40 (KiStackAttachProcess.c)
 *     PsGetProcessServerSilo @ 0x14025C2E0 (PsGetProcessServerSilo.c)
 *     ExReleaseRundownProtection @ 0x140345500 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x1403459C0 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     EtwpBuildProcessEvent @ 0x140602610 (EtwpBuildProcessEvent.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     EtwpPsProvTraceProcess @ 0x140602CDC (EtwpPsProvTraceProcess.c)
 */

void __fastcall EtwpWriteProcessEvent(
        PEPROCESS Process,
        __int16 a2,
        _QWORD *a3,
        WCHAR *a4,
        unsigned __int16 *a5,
        __int64 a6)
{
  char v6; // r14
  char v11; // si
  _DWORD *v12; // r9
  __int64 ProcessServerSilo; // rax
  PVOID *v14; // [rsp+50h] [rbp-B0h]
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h]
  UNICODE_STRING UnicodeString; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v18[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-60h]
  _OWORD v20[3]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v21[18]; // [rsp+E0h] [rbp-20h] BYREF

  LODWORD(v15) = 0;
  v6 = 0;
  v16 = a6;
  v19 = 0LL;
  memset(v18, 0, sizeof(v18));
  v11 = 1;
  memset(v20, 0, sizeof(v20));
  UnicodeString = 0LL;
  if ( KeGetCurrentThread()->ApcState.Process != Process )
  {
    if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink) )
    {
      KiStackAttachProcess(Process, 0LL, (__int64)v20, v12);
      v6 = 1;
    }
    else
    {
      v11 = 0;
    }
  }
  v14 = (PVOID *)v16;
  *(_OWORD *)a5 = 0LL;
  EtwpBuildProcessEvent(
    Process,
    a2,
    v11,
    (__int64)v18,
    a3,
    (__int64)v21,
    (unsigned int *)&v15,
    a4,
    (PSTRING)&UnicodeString,
    a5,
    v14);
  if ( v6 )
  {
    KiUnstackDetachProcess((__int64)v20, 0);
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&Process[1].ProfileListHead.Blink);
  }
  if ( EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4516) & 1) != 0 )
    EtwpPsProvTraceProcess(Process, a2);
  ProcessServerSilo = PsGetProcessServerSilo((__int64)Process);
  EtwTraceSiloKernelEvent(ProcessServerSilo, (int)v21, v15, 1u, a2, 5249284);
  RtlFreeAnsiString(&UnicodeString);
}
