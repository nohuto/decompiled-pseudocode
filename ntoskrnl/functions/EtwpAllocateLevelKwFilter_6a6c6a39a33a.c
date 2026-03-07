__int64 __fastcall EtwpAllocateLevelKwFilter(__int64 a1, __int64 *a2)
{
  __int64 Pool2; // rdx
  _OWORD *v6; // rax

  if ( *a2 || *(_DWORD *)(a1 + 8) != 24 )
    return 3221225485LL;
  Pool2 = ExAllocatePool2(64LL, 24LL, 1182233669LL);
  if ( !Pool2 )
    return 3221225495LL;
  v6 = *(_OWORD **)a1;
  *(_OWORD *)Pool2 = *(_OWORD *)*(_QWORD *)a1;
  *(_QWORD *)(Pool2 + 16) = *((_QWORD *)v6 + 2);
  if ( !*(_QWORD *)Pool2 )
    *(_QWORD *)Pool2 = -1LL;
  if ( !*(_BYTE *)(Pool2 + 16) )
    *(_BYTE *)(Pool2 + 16) = -1;
  *a2 = Pool2;
  return 0LL;
}
