__int64 __fastcall CcdLazyRetrieveSetIdFromRegistry(void *a1, const WCHAR *a2, __int64 a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(int *)a3 < 0 || !*(_WORD *)(a3 + 8) )
    return CcdRetrieveSetIdFromRegistry(a1, a2, a3);
  return result;
}
