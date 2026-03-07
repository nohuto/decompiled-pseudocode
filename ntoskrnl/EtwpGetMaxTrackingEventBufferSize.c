__int64 __fastcall EtwpGetMaxTrackingEventBufferSize(__int64 a1)
{
  int v2; // edx
  _QWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // rdx
  int v6; // eax
  __int64 *v7; // r8
  int v8; // eax
  __int64 result; // rax
  int v10; // ecx

  v2 = 0;
  v3 = (_QWORD *)(a1 + 96);
  v4 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 != v3 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( NtBuildLabEx[v5] );
    v2 = (v5 + 24) & 0xFFFFFFF8;
    do
    {
      v6 = *((_DWORD *)v4 + 5);
      v4 = (_QWORD *)*v4;
      v2 += (v6 + 19) & 0xFFFFFFF8;
    }
    while ( v4 != v3 );
  }
  v7 = *(__int64 **)(a1 + 1040);
  while ( v7 != (__int64 *)(a1 + 1040) )
  {
    v10 = *((_DWORD *)v7 + 4) + 16 * *((_DWORD *)v7 + 6) + 27;
    v7 = (__int64 *)*v7;
    v2 += v10 & 0xFFFFFFF8;
  }
  v8 = *(_DWORD *)(a1 + 120);
  if ( v8 )
    v2 += (32 * v8 + 23) & 0xFFFFFFF8;
  result = (unsigned int)(v2 + 72);
  if ( !v2 )
    return 0LL;
  return result;
}
