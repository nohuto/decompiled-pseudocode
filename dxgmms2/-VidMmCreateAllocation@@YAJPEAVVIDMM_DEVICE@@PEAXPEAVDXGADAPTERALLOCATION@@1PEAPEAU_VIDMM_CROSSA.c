__int64 __fastcall VidMmCreateAllocation(
        struct VIDMM_DEVICE *a1,
        _QWORD *a2,
        struct DXGADAPTERALLOCATION *a3,
        void *a4)
{
  return VIDMM_GLOBAL::CreateAllocation(
           *(_QWORD *)a1,
           a1,
           *((unsigned int *)a2 + 13),
           a2[2],
           a2[3],
           *((_DWORD *)a2 + 3));
}
