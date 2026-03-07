__int64 __fastcall HvpReleaseCellPaged(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  ULONG_PTR v4; // r8
  __int64 v5; // r10
  ULONG_PTR v6; // r11
  __int64 v7; // r10

  if ( !HvpGetCellMap(a1, *a2) )
    KeBugCheckEx(0x51u, 1uLL, v4, v6, 0x267uLL);
  HvpMapEntryReleaseBinAddress(v3, v2, v5 + 4);
  return HvpGetCellContextReinitialize(v7);
}
