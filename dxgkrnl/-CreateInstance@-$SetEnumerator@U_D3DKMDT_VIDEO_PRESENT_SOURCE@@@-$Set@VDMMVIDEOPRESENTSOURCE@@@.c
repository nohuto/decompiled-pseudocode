__int64 __fastcall Set<DMMVIDEOPRESENTSOURCE>::SetEnumerator<_D3DKMDT_VIDEO_PRESENT_SOURCE>::CreateInstance(__int64 a1)
{
  __int64 result; // rax

  result = operator new[](0x18uLL, 0x4E506456u, 256LL);
  if ( result )
  {
    *(_DWORD *)result = 305419896;
    *(_QWORD *)(result + 8) = a1;
    *(_QWORD *)(result + 16) = 0LL;
  }
  return result;
}
