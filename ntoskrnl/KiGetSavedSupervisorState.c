__int64 __fastcall KiGetSavedSupervisorState(unsigned int a1, _QWORD *a2)
{
  unsigned __int8 CurrentIrql; // al
  __int64 v4; // rax
  __int64 v5; // rax

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u || CurrentIrql < 0xFu && !PoAllProcIntrDisabled )
    return 3221225473LL;
  if ( a1 >= (unsigned int)KeNumberProcessors_0 )
    return 3221225485LL;
  _mm_lfence();
  v4 = KiProcessorBlock[a1];
  if ( !v4 )
    return 3221225473LL;
  v5 = *(_QWORD *)(v4 + 1728);
  if ( !v5 )
    return 3221225473LL;
  *a2 = v5;
  return 0LL;
}
