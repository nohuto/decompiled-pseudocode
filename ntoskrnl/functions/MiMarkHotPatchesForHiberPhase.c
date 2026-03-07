__int64 __fastcall MiMarkHotPatchesForHiberPhase(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  v1 = a1;
  v2 = ((unsigned int)dword_140C694FC + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
  if ( (*(_DWORD *)(a1 + 196) & 0x20) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 280);
    MiMarkNonPagedHiberPhasePages(*(_QWORD *)(v1 + 48), *(_QWORD *)(v1 + 48) + *(unsigned int *)(v1 + 64) + v2 - 1, 0LL);
  }
  result = MiEnumerateBasePatches(v1, MiMarkHotPatchForHiberPhase, v2);
  if ( qword_140C694F0 == v1 )
    return MiMarkNonPagedHiberPhasePages(
             *(_QWORD *)(qword_140C694E8 + 48),
             v2 + *(_QWORD *)(qword_140C694E8 + 48) + *(unsigned int *)(qword_140C694E8 + 64) - 1LL,
             0LL);
  return result;
}
