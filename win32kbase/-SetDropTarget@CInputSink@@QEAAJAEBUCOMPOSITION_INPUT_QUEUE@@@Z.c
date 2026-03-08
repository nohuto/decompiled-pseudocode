/*
 * XREFs of ?SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00AB4C4
 * Callers:
 *     ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00AB2C4 (-SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 * Callees:
 *     ?CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEAVIInputQueue@@@Z @ 0x1C00AB948 (-CreateInputQueue@CInputSink@@CAJAEBUCOMPOSITION_INPUT_QUEUE@@AEBW4CompositionInputFlags@@PEAPEA.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CInputSink::SetDropTarget(CInputSink *this, const struct COMPOSITION_INPUT_QUEUE *a2)
{
  struct IInputQueue **v2; // rbx
  __int64 v4; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct IInputQueue **)((char *)this + 72);
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
    (*(void (__fastcall **)(struct IInputQueue *))(*(_QWORD *)*v2 + 8LL))(*v2);
    *v2 = 0LL;
  }
  v6 = 0;
  return CInputSink::CreateInputQueue(a2, (const enum CompositionInputFlags *)&v6, v2);
}
