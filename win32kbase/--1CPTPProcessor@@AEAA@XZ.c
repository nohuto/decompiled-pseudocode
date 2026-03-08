/*
 * XREFs of ??1CPTPProcessor@@AEAA@XZ @ 0x1C020CC9C
 * Callers:
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C020F07C (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C007D0A0 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C00954DC (--1CTouchProcessor@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPTPProcessor::~CPTPProcessor(CPTPProcessor *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CPTPProcessor::`vftable'{for `CTouchProcessor'};
  *((_QWORD *)this + 20) = &CPTPProcessor::`vftable'{for `IPTPEngineClient'};
  v2 = *((_QWORD *)this + 68);
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 32LL))(v2, 1LL);
  *((_DWORD *)this + 129) &= ~4u;
  CInputDest::SetEmpty((CPTPProcessor *)((char *)this + 392));
  CInputDest::SetEmpty((CPTPProcessor *)((char *)this + 392));
  CTouchProcessor::~CTouchProcessor((PVOID *)this);
}
