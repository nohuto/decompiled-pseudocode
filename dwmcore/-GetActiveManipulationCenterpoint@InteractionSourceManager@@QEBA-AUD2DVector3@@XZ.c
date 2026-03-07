__int64 __fastcall InteractionSourceManager::GetActiveManipulationCenterpoint(InteractionSourceManager *a1, __int64 a2)
{
  InteractionSourceManager *v2; // rcx
  __int64 v3; // r10
  struct CManipulation *ActiveManipulation; // rax
  __int64 v5; // xmm0_8

  *(_QWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 8) = 0;
  if ( InteractionSourceManager::HasActiveManipulation(a1) )
  {
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(v2);
    v5 = *(_QWORD *)((char *)ActiveManipulation + 316);
    LODWORD(ActiveManipulation) = *((_DWORD *)ActiveManipulation + 81);
    *(_QWORD *)v3 = v5;
    *(_DWORD *)(v3 + 8) = (_DWORD)ActiveManipulation;
    *(float *)v3 = *(float *)v3 * -1.0;
    *(float *)(v3 + 4) = *(float *)(v3 + 4) * -1.0;
  }
  return v3;
}
