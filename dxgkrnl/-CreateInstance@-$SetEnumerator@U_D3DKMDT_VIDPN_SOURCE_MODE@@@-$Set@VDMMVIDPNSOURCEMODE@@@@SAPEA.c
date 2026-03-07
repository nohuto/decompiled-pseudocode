__int64 __fastcall Set<DMMVIDPNSOURCEMODE>::SetEnumerator<_D3DKMDT_VIDPN_SOURCE_MODE>::CreateInstance(__int64 a1)
{
  __int64 result; // rax

  result = ExAllocatePool2(256LL, 56LL, 1313891414LL);
  if ( result )
  {
    *(_DWORD *)result = 305419896;
    *(_QWORD *)(result + 8) = a1;
    *(_OWORD *)(result + 16) = 0LL;
    *(_OWORD *)(result + 32) = 0LL;
    *(_QWORD *)(result + 48) = 0LL;
  }
  return result;
}
