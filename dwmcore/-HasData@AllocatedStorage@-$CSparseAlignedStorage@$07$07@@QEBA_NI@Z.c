bool __fastcall CSparseAlignedStorage<8,8>::AllocatedStorage::HasData(_DWORD *a1, char a2)
{
  return (__ROR4__(1, a2) & *a1) != 0;
}
