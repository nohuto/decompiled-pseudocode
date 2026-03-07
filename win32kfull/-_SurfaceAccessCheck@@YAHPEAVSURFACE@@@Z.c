__int64 __fastcall _SurfaceAccessCheck(struct SURFACE *a1, __int64 a2, __int64 a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a1 + 28);
  if ( (v3 & 0x800) != 0 )
    return UserSurfaceAccessCheck(*((_QWORD *)a1 + 81), a2, a3);
  if ( (v3 & 0x10000000) != 0 )
    return UserScreenAccessCheck(a1, a2, a3);
  return 1LL;
}
