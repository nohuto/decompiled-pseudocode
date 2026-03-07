__int64 __fastcall VIDMM_SEGMENT::MoveResourcesForAllocationPlacement(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _BYTE *a6,
        _QWORD *a7)
{
  __int64 v8; // rbx
  __int64 v10[3]; // [rsp+40h] [rbp-28h] BYREF
  char v11; // [rsp+58h] [rbp-10h]

  v8 = *MEMORY[0];
  VIDMM_LINEAR_POOL::FindBestDefragmentRegion(*(_QWORD *)(a1 + 152), v10);
  if ( v11 )
  {
    VIDMM_SEGMENT::DefragmentResourcesOverRange(a1, v10[0], v10[1], a5, (__int64)a6, (__int64)a7);
    return 0LL;
  }
  else
  {
    *a7 = v8;
    *a6 = 0;
    return 3221225495LL;
  }
}
