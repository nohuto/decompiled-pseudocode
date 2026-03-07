__int64 __fastcall bFntCacheCreateHLink(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 *v2; // r8
  __int64 v3; // r9
  __int64 v4; // rbx
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v8; // rcx

  v1 = a1;
  v2 = *(__int64 **)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 19392LL);
  v3 = *v2;
  v4 = v1 % 0x3D;
  v5 = *(unsigned int *)(*v2 + 4 * v4 + 72);
  if ( (_DWORD)v5 == -1 )
  {
    *(_DWORD *)(v3 + 4 * v4 + 72) = *((_DWORD *)v2 + 2);
    return 1LL;
  }
  else
  {
    v6 = *(_DWORD *)(v3 + 16);
    if ( (unsigned int)v5 <= v6 )
    {
      do
      {
        v8 = v3 + 80 * (v5 + 4);
        v5 = *(unsigned int *)(v8 + 8);
        if ( (_DWORD)v5 == -1 )
        {
          *(_DWORD *)(v8 + 8) = *((_DWORD *)v2 + 2);
          return 1LL;
        }
      }
      while ( (unsigned int)v5 <= v6 );
      *((_DWORD *)v2 + 4) |= 2u;
    }
    return 0LL;
  }
}
