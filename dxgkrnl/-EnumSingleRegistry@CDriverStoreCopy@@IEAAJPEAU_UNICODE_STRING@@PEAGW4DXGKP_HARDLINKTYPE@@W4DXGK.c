NTSTATUS __fastcall CDriverStoreCopy::EnumSingleRegistry(__int64 a1, const void **a2, size_t *a3, int a4, int a5)
{
  size_t v5; // rdi
  NTSTATUS result; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // rbx
  unsigned __int16 v12[264]; // [rsp+20h] [rbp-248h] BYREF

  v5 = *(unsigned __int16 *)a2;
  if ( (unsigned __int16)v5 >= 0x208u )
    return -1073741823;
  memmove(v12, a2[1], v5);
  if ( (v5 & 0xFFFE) >= 0x206 )
  {
    v11 = 518LL;
  }
  else
  {
    v11 = v5 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v5 & 0xFFFFFFFFFFFFFFFEuLL) >= 0x208 )
      _report_rangecheckfailure();
  }
  *(unsigned __int16 *)((char *)v12 + v11) = 0;
  result = RtlStringCbCatW(v12, v10, a3);
  if ( result >= 0 )
    return CDriverStoreCopy::EnumDriverFileLinks(a1, v12, a4, a5);
  return result;
}
