__int64 __fastcall IidCloneDeviceIdAcpi(__int64 a1, __int64 a2)
{
  void *v2; // rax
  __int64 v3; // r8
  _BYTE *v4; // rdx

  v2 = (void *)(a2 + 24);
  v3 = -1LL;
  *(_OWORD *)a2 = *(_OWORD *)a1;
  *(_QWORD *)(a2 + 16) = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 8) = a2 + 24;
  v4 = *(_BYTE **)(a1 + 8);
  do
    ++v3;
  while ( v4[v3] );
  memmove(v2, v4, v3 + 1);
  return 0LL;
}
