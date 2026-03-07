__int64 __fastcall MiRequestIoPageMdlCacheRelease(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  v1 = *(_QWORD *)(48 * a1 - 0x21FFFFFFFFF8LL);
  result = 0xFFFFF68000000000uLL;
  if ( v1 >= 0xFFFFF68000000000uLL )
  {
    result = 0xFFFFF6FFFFFFFFFFuLL;
    if ( v1 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v3 = (__int64)(v1 << 25) >> 16;
      if ( v3 < 0xFFFFF68000000000uLL || (result = 0xFFFFF6FFFFFFFFFFuLL, v3 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        result = 0x7FFFFFFEFFFFLL;
        if ( v3 <= 0x7FFFFFFEFFFFLL )
          return IoTryReleasePage(a1, a1);
      }
    }
  }
  return result;
}
