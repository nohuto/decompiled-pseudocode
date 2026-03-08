/*
 * XREFs of ?InvalidateInputQueues@CInputQueueProp@@IEAAXXZ @ 0x1C00E4D1C
 * Callers:
 *     ?Delete@CInputQueueProp@@UEAAXXZ @ 0x1C00E4CF0 (-Delete@CInputQueueProp@@UEAAXXZ.c)
 * Callees:
 *     ?Reset@?$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C00E4DA4 (-Reset@-$CDynamicArray@PEAVIInputQueue@@$0HHHAHDFF@@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CInputQueueProp::InvalidateInputQueues(CInputQueueProp *this)
{
  __int64 i; // rbp
  __int64 v3; // rbx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * i);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  }
  CDynamicArray<IInputQueue *,2003858261>::Reset((char *)this + 24);
  if ( !*((_BYTE *)this + 48) )
    HMAssignmentUnlock((char *)this + 40);
}
