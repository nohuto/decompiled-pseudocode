__int64 __fastcall bSpSpriteOnTopOfWndObjInZ(struct SPRITE *a1, struct EWNDOBJ *a2)
{
  unsigned int v2; // r9d
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 i; // rcx
  __int64 v7; // rax

  v2 = 0;
  if ( !*((_QWORD *)a1 + 9) )
    return 0LL;
  v4 = *((_QWORD *)a1 + 2);
  v5 = *(_QWORD *)(v4 + 8);
  for ( i = *(_QWORD *)(v4 + 1120); v5 != i; v5 = *(_QWORD *)(v5 + 24) )
  {
    if ( *(_QWORD *)(v5 + 72) == *((_QWORD *)a2 + 22) )
      break;
  }
  v7 = 0LL;
  if ( v5 != i )
    v7 = v5;
  if ( !v7 )
    return 1LL;
  LOBYTE(v2) = *((_DWORD *)a1 + 16) > *(_DWORD *)(v7 + 64);
  return v2;
}
