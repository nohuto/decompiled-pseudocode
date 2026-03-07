__int64 __fastcall Set<DMMVIDPNTARGETMODE>::SetEnumerator<_D3DKMDT_VIDPN_TARGET_MODE>::CreateInstance(__int64 a1)
{
  __int64 Pool2; // rax
  __int64 v3; // rbx

  Pool2 = ExAllocatePool2(256LL, 96LL, 1313891414LL);
  v3 = Pool2;
  if ( !Pool2 )
    return 0LL;
  *(_DWORD *)Pool2 = 305419896;
  *(_QWORD *)(Pool2 + 8) = a1;
  memset((void *)(Pool2 + 16), 0, 0x50uLL);
  return v3;
}
