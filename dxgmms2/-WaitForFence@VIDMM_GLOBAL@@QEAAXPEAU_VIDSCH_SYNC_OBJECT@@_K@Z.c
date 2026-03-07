void __fastcall VIDMM_GLOBAL::WaitForFence(VIDMM_GLOBAL *this, struct _VIDSCH_SYNC_OBJECT *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // [rsp+48h] [rbp+10h] BYREF
  struct _VIDSCH_SYNC_OBJECT *v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a2;
  v3 = a3;
  VIDMM_GLOBAL::WaitForFences(this, &v4, &v3, 1u, 0LL);
}
