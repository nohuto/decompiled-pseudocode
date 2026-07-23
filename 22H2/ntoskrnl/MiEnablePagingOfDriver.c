/*
 * XREFs of MiEnablePagingOfDriver @ 0x1407A5740
 * Callers:
 *     MiEnablePagingTheExecutive @ 0x140A5456C (MiEnablePagingTheExecutive.c)
 * Callees:
 *     MiSetPagingOfDriver @ 0x140336B2C (MiSetPagingOfDriver.c)
 *     MiImagePagable @ 0x1406FE41C (MiImagePagable.c)
 *     MiSnapDriverRange @ 0x14075E738 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiEnablePagingOfDriver(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax
  unsigned int v4; // edi
  unsigned __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  v6 = 0LL;
  v5 = 0LL;
  result = MiImagePagable(a1, v1);
  if ( result )
  {
    v4 = 0;
    do
    {
      result = MiSnapDriverRange(a1, v4, 1, 0LL, &v5, &v6);
      v4 = result;
      if ( v5 )
        result = (__int64)MiSetPagingOfDriver(a1, v5, v6);
    }
    while ( v4 );
  }
  return result;
}
