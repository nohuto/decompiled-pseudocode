bool __fastcall PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
        __int64 a1,
        unsigned int a2)
{
  return a2 < *(_DWORD *)(a1 + 24);
}
