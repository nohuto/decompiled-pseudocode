/*
 * XREFs of InbvDetermineFunction @ 0x1403845A8
 * Callers:
 *     InbvDriverInitialize @ 0x140B47614 (InbvDriverInitialize.c)
 * Callees:
 *     _strupr @ 0x1403D2DE0 (_strupr.c)
 *     strstr @ 0x1403D3650 (strstr.c)
 */

__int64 __fastcall InbvDetermineFunction(__int64 a1)
{
  unsigned int v1; // edx
  char *v4; // rcx
  bool v5; // bl
  char *v6; // rax
  char *v7; // rax
  __int64 (__fastcall **v8)(); // rax

  v1 = dword_140C6A7C8;
  if ( !dword_140C6A7C8 )
  {
    v4 = *(char **)(a1 + 216);
    v5 = 1;
    if ( v4 )
    {
      v6 = strupr(v4);
      v7 = strstr(v6, "NOVGA");
      v1 = dword_140C6A7C8;
      v5 = v7 == 0LL;
    }
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 288LL) )
    {
      v8 = off_140C045A0;
      if ( !v5 )
        v8 = off_140C044E0;
      qword_140C6A7D0 = (__int64)v8;
      v1 = 2 * v5 + 1;
    }
    else
    {
      if ( !v5 )
        return v1;
      v1 = 2;
      qword_140C6A7D0 = (__int64)off_140C045A0;
    }
    dword_140C6A7C8 = v1;
  }
  return v1;
}
