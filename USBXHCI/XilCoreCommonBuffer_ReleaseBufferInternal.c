_QWORD *__fastcall XilCoreCommonBuffer_ReleaseBufferInternal(__int64 a1, __int64 a2)
{
  int v2; // r9d
  unsigned int v3; // eax
  _DWORD *v4; // rcx
  _DWORD *v5; // r8
  _QWORD *result; // rax
  __int64 v7; // rcx

  v2 = *(_DWORD *)(a2 + 40);
  v3 = 0;
  *(_QWORD *)(a2 + 72) = 0LL;
  v4 = (_DWORD *)(a1 + 32);
  *(_DWORD *)(a2 + 64) = 0;
  do
  {
    v5 = v4;
    if ( v2 == *v4 )
      break;
    ++v3;
    v4 += 16;
  }
  while ( v3 < 2 );
  result = v5 + 8;
  v7 = *((_QWORD *)v5 + 4);
  if ( *(_DWORD **)(v7 + 8) != v5 + 8 )
    __fastfail(3u);
  *(_QWORD *)a2 = v7;
  *(_QWORD *)(a2 + 8) = result;
  *(_QWORD *)(v7 + 8) = a2;
  *result = a2;
  ++v5[7];
  return result;
}
