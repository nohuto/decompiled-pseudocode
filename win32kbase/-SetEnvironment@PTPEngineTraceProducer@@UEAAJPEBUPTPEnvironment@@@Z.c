/*
 * XREFs of ?SetEnvironment@PTPEngineTraceProducer@@UEAAJPEBUPTPEnvironment@@@Z @ 0x1C023B910
 * Callers:
 *     ?InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C020DF74 (-InitState@CPTPProcessor@@AEAAJPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C020FAF8 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     ?TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z @ 0x1C023B9C4 (-TraceEnvironment@PTPEngineTraceProducer@@AEAAXPEBUPTPEnvironment@@@Z.c)
 */

__int64 __fastcall PTPEngineTraceProducer::SetEnvironment(
        PTPEngineTraceProducer *this,
        const struct PTPEnvironment *a2)
{
  const struct PTPEnvironment *v2; // rdi
  __int64 result; // rax
  __int64 v5; // rcx
  char *v6; // rbx
  __int128 v7; // xmm1

  v2 = a2;
  PTPEngineTraceProducer::TraceEnvironment(this, a2);
  LODWORD(result) = (*(__int64 (__fastcall **)(_QWORD, const struct PTPEnvironment *))(**((_QWORD **)this + 3) + 8LL))(
                      *((_QWORD *)this + 3),
                      v2);
  v5 = 4LL;
  v6 = (char *)this + 40;
  do
  {
    *(_OWORD *)v6 = *(_OWORD *)v2;
    *((_OWORD *)v6 + 1) = *((_OWORD *)v2 + 1);
    *((_OWORD *)v6 + 2) = *((_OWORD *)v2 + 2);
    *((_OWORD *)v6 + 3) = *((_OWORD *)v2 + 3);
    *((_OWORD *)v6 + 4) = *((_OWORD *)v2 + 4);
    *((_OWORD *)v6 + 5) = *((_OWORD *)v2 + 5);
    *((_OWORD *)v6 + 6) = *((_OWORD *)v2 + 6);
    v6 += 128;
    v7 = *((_OWORD *)v2 + 7);
    v2 = (const struct PTPEnvironment *)((char *)v2 + 128);
    *((_OWORD *)v6 - 1) = v7;
    --v5;
  }
  while ( v5 );
  *(_OWORD *)v6 = *(_OWORD *)v2;
  *((_OWORD *)v6 + 1) = *((_OWORD *)v2 + 1);
  *((_QWORD *)v6 + 4) = *((_QWORD *)v2 + 4);
  *((_DWORD *)v6 + 10) = *((_DWORD *)v2 + 10);
  return (unsigned int)result;
}
