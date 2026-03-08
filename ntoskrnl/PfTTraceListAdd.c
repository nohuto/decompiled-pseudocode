/*
 * XREFs of PfTTraceListAdd @ 0x1407E797C
 * Callers:
 *     PfTGenerateTrace @ 0x1407E5150 (PfTGenerateTrace.c)
 *     PfpSectInfoHandleFullBuffer @ 0x1407E5A60 (PfpSectInfoHandleFullBuffer.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     PfTTraceListFree @ 0x1407E7AC8 (PfTTraceListFree.c)
 *     PfTTraceListTrim @ 0x14097C3AC (PfTTraceListTrim.c)
 *     PfTAccessTracingCleanup @ 0x140A844E0 (PfTAccessTracingCleanup.c)
 */

__int64 __fastcall PfTTraceListAdd(__int64 a1)
{
  __int64 v2; // rdx
  BOOL v3; // esi
  __int64 *v4; // rbx
  int *v5; // rcx
  __int64 **v6; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[1] = v8;
  v8[0] = v8;
  ExAcquireFastMutex(&stru_140C64FF0);
  v2 = (unsigned int)dword_140C64FDC;
  v3 = dword_140C64FD8 < (unsigned int)dword_140C64FDC;
  if ( *(_DWORD *)(a1 + 28) == 1 )
  {
    v4 = &qword_140C64FC8;
    v2 = (unsigned int)dword_140C64FE4;
    v5 = &dword_140C64FE0;
    if ( dword_140C64FE0 + 1 == dword_140C64FE4 )
      ++HIDWORD(xmmword_140C650D0);
  }
  else
  {
    v5 = &dword_140C64FD8;
    v4 = &qword_140C64FB8;
    if ( dword_140C64FD8 + 1 == dword_140C64FDC )
      ++DWORD2(xmmword_140C650D0);
    dword_140C64FE8 = 1;
  }
  v6 = (__int64 **)v4[1];
  if ( *v6 != v4 )
    __fastfail(3u);
  *(_QWORD *)a1 = v4;
  *(_QWORD *)(a1 + 8) = v6;
  *v6 = (__int64 *)a1;
  v4[1] = a1;
  if ( ++*v5 > (unsigned int)v2 )
    PfTTraceListTrim(*(unsigned int *)(a1 + 28), v2, v8);
  if ( v4 == &qword_140C64FB8 && (__int64 *)*v4 == v4 )
    dword_140C64FE8 = 0;
  if ( v3 && dword_140C64FD8 >= (unsigned int)dword_140C64FDC )
    PfTAccessTracingCleanup(&PfTGlobals, &PfKernelGlobals, 2LL);
  KeSetEvent(qword_140C65028, 0, 0);
  ExReleaseFastMutex(&stru_140C64FF0);
  return PfTTraceListFree(v8);
}
