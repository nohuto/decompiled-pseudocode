__int64 __fastcall ReadFileInfo(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  if ( !a2 )
    return 1LL;
  while ( 1 )
  {
    v5 = *a1;
    v8 = 0LL;
    if ( !(unsigned int)Win32FileInfo(*(_QWORD *)(v5 + 80), v5, &v8) )
      break;
    v6 = *a1;
    ++v2;
    ++a1;
    *(_DWORD *)(v6 + 24) = v8;
    if ( v2 >= a2 )
      return 1LL;
  }
  return 0LL;
}
