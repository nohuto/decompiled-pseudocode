void __fastcall CCursorState::ScheduleCompositionPass(CCursorState *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 7);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v1 + 656) + 32LL))(
      *(_QWORD *)(v1 + 656),
      0LL,
      0x200000LL);
}
