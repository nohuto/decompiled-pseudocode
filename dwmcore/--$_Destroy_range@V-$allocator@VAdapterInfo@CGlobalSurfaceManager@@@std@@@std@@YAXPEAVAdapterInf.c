int __fastcall std::_Destroy_range<std::allocator<CGlobalSurfaceManager::AdapterInfo>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  char *v4; // rcx
  int result; // eax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(char **)(v3 + 8);
      result = (_DWORD)v4 - 1;
      if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        result = CloseHandle(v4);
      v3 += 24LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
