bool (__fastcall *__fastcall VIDMM_GLOBAL::GetMoveableResourceCallback(
        VIDMM_GLOBAL *this))(struct _VIDMM_GLOBAL_ALLOC *)
{
  bool (__fastcall *result)(struct _VIDMM_GLOBAL_ALLOC *); // rax

  if ( !*(_BYTE *)(*((_QWORD *)this + 3) + 2873LL) )
    return VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB;
  result = VIDMM_SEGMENT::IsMovableResourceNoDisplayingCB;
  if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 744LL) + 152LL) == 1 )
    return VIDMM_SEGMENT::IsMovableResourceCB;
  return result;
}
