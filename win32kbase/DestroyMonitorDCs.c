__int64 DestroyMonitorDCs()
{
  char *v0; // rdi
  __int64 *v1; // rbx
  __int64 v2; // rcx
  __int64 *v3; // rax
  int v5; // eax
  int v6; // eax

  GreLockVisRgn(*((_QWORD *)gpDispInfo + 5));
  v0 = (char *)gpDispInfo + 24;
  v1 = (__int64 *)*((_QWORD *)gpDispInfo + 3);
  if ( v1 )
  {
    do
    {
      v2 = v1[11];
      if ( v2 && (unsigned int)HdevFromMonitor(v2) == -1 )
      {
        v5 = *((_DWORD *)v1 + 16);
        if ( v5 >= 0 )
        {
          DestroyCacheDC(v0, v1[1]);
        }
        else
        {
          v1[11] = 0LL;
          v6 = v5 | 0x4000000;
          *((_DWORD *)v1 + 16) = v6;
          if ( (v6 & 0x4000) != 0 )
          {
            if ( qword_1C02D6010 )
              qword_1C02D6010(v1[1], 0LL);
            *((_DWORD *)v1 + 16) &= ~0x4000u;
            v1[4] = 0LL;
          }
        }
      }
      v3 = *(__int64 **)v0;
      if ( v1 == *(__int64 **)v0 )
      {
        v3 = (__int64 *)*v1;
        v0 = (char *)v1;
      }
      v1 = v3;
    }
    while ( v3 );
  }
  return GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 5));
}
