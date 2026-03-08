/*
 * XREFs of ?EmitBoundTrackerMarshalerUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0268BF8
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0268DC0 (-EmitUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::EmitBoundTrackerMarshalerUpdateCommands(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v2; // edi
  char v5; // si
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // rax
  char v9; // si
  __int128 v11; // [rsp+20h] [rbp-28h]

  v2 = 0;
  v5 = 1;
  if ( *((_QWORD *)this + 12) )
  {
    v6 = 0LL;
    do
    {
      v7 = *((_QWORD *)this + 13) * v6;
      v8 = *((_QWORD *)this + 9);
      v11 = *(_OWORD *)(v7 + v8);
      if ( *(_DWORD *)(v7 + v8 + 16) )
      {
        v9 = (*(__int64 (__fastcall **)(_QWORD, struct DirectComposition::CBatch **))(*(_QWORD *)v11 + 40LL))(v11, a2) & v5;
        v5 = (*(__int64 (__fastcall **)(_QWORD, struct DirectComposition::CBatch **))(**((_QWORD **)&v11 + 1) + 40LL))(
               *((_QWORD *)&v11 + 1),
               a2) & v9;
      }
      v6 = ++v2;
    }
    while ( (unsigned __int64)v2 < *((_QWORD *)this + 12) );
  }
  return v5;
}
