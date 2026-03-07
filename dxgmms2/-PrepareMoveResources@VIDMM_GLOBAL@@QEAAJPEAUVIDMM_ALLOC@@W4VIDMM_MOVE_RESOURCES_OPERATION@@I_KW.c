__int64 __fastcall VIDMM_GLOBAL::PrepareMoveResources(
        VIDMM_GLOBAL *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        __int64 a9,
        void *a10,
        __int64 a11)
{
  __int64 v13; // rdx
  unsigned int v14; // ebx
  unsigned __int64 v16; // [rsp+20h] [rbp-48h]

  VIDMM_GLOBAL::StartPreparation((__int64)a1, 0xFFFFFFFF, 0LL, 0LL, 126);
  v14 = VIDMM_GLOBAL::MoveResources(a1, v13, 0, a4, v16, 0, a7, a8, 1u, a10, a11);
  VIDMM_GLOBAL::EndPreparation(a1, 0xFFFFFFFF, 0LL, 0, 0LL, 0LL);
  return v14;
}
