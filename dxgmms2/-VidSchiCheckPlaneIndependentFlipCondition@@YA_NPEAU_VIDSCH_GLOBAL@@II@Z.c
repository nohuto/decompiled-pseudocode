bool __fastcall VidSchiCheckPlaneIndependentFlipCondition(struct _VIDSCH_GLOBAL *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // eax

  if ( a2 != -1 )
  {
    v3 = *((_QWORD *)a1 + a2 + 400);
    v4 = 288LL * a3;
    v5 = *(int *)(v3 + v4 + 188);
    if ( (int)v5 <= -1 )
      return 1;
    v6 = *((_QWORD *)a1 + 416) + 160 * v5;
    if ( !v6 )
      return 1;
    v7 = *(_DWORD *)(v6 + 112);
    if ( v7 != 1 )
      return v7 == 2;
    if ( *(_BYTE *)(v6 + 98) && !*(_DWORD *)(v3 + v4 + 192) && *(_BYTE *)(v6 + 96) && !*(_DWORD *)(v3 + v4 + 196) )
      return 1;
  }
  return 0;
}
