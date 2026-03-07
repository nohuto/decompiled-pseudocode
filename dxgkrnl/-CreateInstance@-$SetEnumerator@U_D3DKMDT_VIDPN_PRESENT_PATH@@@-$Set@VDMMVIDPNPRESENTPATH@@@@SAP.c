__int64 __fastcall Set<DMMVIDPNPRESENTPATH>::SetEnumerator<_D3DKMDT_VIDPN_PRESENT_PATH>::CreateInstance(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx

  v2 = operator new[](0x178uLL, 0x4E506456u, 256LL);
  v3 = v2;
  if ( !v2 )
    return 0LL;
  *(_DWORD *)v2 = 305419896;
  *(_QWORD *)(v2 + 8) = a1;
  memset((void *)(v2 + 16), 0, 0x168uLL);
  return v3;
}
