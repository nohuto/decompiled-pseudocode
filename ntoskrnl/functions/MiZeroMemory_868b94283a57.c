void *__fastcall MiZeroMemory(__int64 a1, void *a2, size_t a3, int a4)
{
  if ( a4 == 1 )
    return (void *)KeZeroPages(a2, a3);
  else
    return memset(a2, 0, a3);
}
