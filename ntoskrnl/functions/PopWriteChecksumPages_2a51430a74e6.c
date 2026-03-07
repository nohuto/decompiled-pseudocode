ULONG_PTR __fastcall PopWriteChecksumPages(_QWORD *a1)
{
  __int64 v1; // r11
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r9
  ULONG_PTR result; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax

  v1 = a1[52];
  v2 = (unsigned __int64)(2 * v1 + 4095) >> 12;
  if ( v2 )
  {
    v3 = (unsigned __int64)(a1[47] + 4095LL) >> 12;
    result = (v3 + v2) << 12;
    if ( result <= qword_140C3CA70 )
    {
      v5 = __rdtsc();
      *(_QWORD *)(a1[25] + 128LL) = v1;
      *(_QWORD *)(a1[25] + 120LL) = v3;
      PopWriteHiberPages(a1, a1[54], v2, v3);
      v6 = __rdtsc();
      result = (((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6) - v5;
      qword_140C3D010 += result;
    }
  }
  return result;
}
