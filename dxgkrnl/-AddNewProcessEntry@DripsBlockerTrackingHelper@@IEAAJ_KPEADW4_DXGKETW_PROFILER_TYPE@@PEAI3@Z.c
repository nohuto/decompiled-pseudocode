__int64 __fastcall DripsBlockerTrackingHelper::AddNewProcessEntry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int *a5,
        _DWORD *a6)
{
  _BYTE *v7; // rax
  unsigned int v8; // r10d
  __int64 result; // rax
  __int64 v10; // rcx

  v7 = (_BYTE *)(a1 + 104);
  v8 = 0;
  while ( *v7 )
  {
    ++v8;
    v7 += 4720;
    if ( v8 >= 0x40 )
      return 3221226021LL;
  }
  *a5 = v8;
  *a6 = 0;
  v10 = 4720LL * v8;
  ++*(_DWORD *)(v10 + a1 + 44);
  *(_OWORD *)(v10 + a1 + 8) = *(_OWORD *)a3;
  *(_OWORD *)(v10 + a1 + 24) = *(_OWORD *)(a3 + 16);
  *(_BYTE *)(v10 + a1 + 40) = *(_BYTE *)(a3 + 32);
  result = 0LL;
  *(_QWORD *)(v10 + a1) = a2;
  *(_DWORD *)(v10 + a1 + 172) = a4;
  *(_BYTE *)(v10 + a1 + 104) = 1;
  *(_BYTE *)(a1 + 302128) = 0;
  return result;
}
