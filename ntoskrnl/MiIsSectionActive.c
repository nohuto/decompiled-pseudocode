_BOOL8 __fastcall MiIsSectionActive(__int64 a1)
{
  return (*(_DWORD *)(a1 + 56) & 3) != 0
      || *(_QWORD *)(a1 + 112) > 1uLL && (*(_DWORD *)(a1 + 56) & 0x28) != 8
      || *(_QWORD *)(a1 + 48);
}
