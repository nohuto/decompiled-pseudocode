__int64 __fastcall IManipulation_Receive<CManipulationManager>::Thunk_UpdateHoverPointer_136(__int64 a1, __int64 **a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rbx

  v2 = a2[1];
  v3 = **a2;
  if ( *(float *)(v3 + 80) != *(float *)v2 || *(float *)(v3 + 84) != *((float *)v2 + 1) )
    *(_QWORD *)(v3 + 80) = *v2;
  CResource::InvalidateAnimationSources((CResource *)(v3 + 8), 0);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(v3 + 8) + 16LL))(v3 + 8);
  return 0LL;
}
