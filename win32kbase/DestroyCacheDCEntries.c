__int64 __fastcall DestroyCacheDCEntries(__int64 a1)
{
  char *v2; // rdi
  char *v3; // rbx
  char *v4; // rax

  GreLockVisRgn(*((_QWORD *)gpDispInfo + 5));
  v2 = (char *)gpDispInfo + 24;
  v3 = (char *)*((_QWORD *)gpDispInfo + 3);
  if ( v3 )
  {
    do
    {
      if ( a1 == *((_QWORD *)v3 + 9) && (*((_DWORD *)v3 + 16) & 0x80000002) == 2 )
        DestroyCacheDC(v2, *((_QWORD *)v3 + 1));
      v4 = *(char **)v2;
      if ( v3 == *(char **)v2 )
      {
        v4 = *(char **)v3;
        v2 = v3;
      }
      v3 = v4;
    }
    while ( v4 );
  }
  return GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
}
