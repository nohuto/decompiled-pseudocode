/*
 * XREFs of HvpGetHiveHeader @ 0x140730880
 * Callers:
 *     HvLoadHive @ 0x14072F5C0 (HvLoadHive.c)
 *     HvRecoverFlushProtocolStateFromFiles @ 0x140A1A9B4 (HvRecoverFlushProtocolStateFromFiles.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvpHeaderCheckSum @ 0x140AF2414 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvpGetHiveHeader(__int64 a1, char **a2, _QWORD *a3)
{
  char **v4; // r15
  char *v6; // rax
  char *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // edi
  int v14; // eax
  int v16; // eax

  *a2 = 0LL;
  v4 = a2;
  LOBYTE(a2) = 1;
  v6 = (char *)(*(__int64 (__fastcall **)(_QWORD, char **, __int64))(a1 + 24))(
                 *(unsigned int *)(a1 + 132),
                 a2,
                 842222915LL);
  v7 = v6;
  if ( v6 )
  {
    memset(v6, 0, 0x1000uLL);
    if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, char *, _DWORD))(a1 + 48))(
           a1,
           0LL,
           0LL,
           v7,
           *(_DWORD *)(a1 + 136) << 9) >= 0 )
    {
      if ( *(_DWORD *)v7 == 1718052210 && *((_DWORD *)v7 + 127) == (unsigned int)HvpHeaderCheckSum(v7, v8, v9) )
      {
        v10 = *((_DWORD *)v7 + 10);
        if ( (unsigned int)(v10 - 1) <= 0x7FFFDFFF && (v10 & 0xFFF) == 0 )
        {
          if ( !*((_DWORD *)v7 + 7) )
          {
            v11 = *((_DWORD *)v7 + 5);
            if ( v11 <= 1 )
            {
              v12 = *((_DWORD *)v7 + 6);
              v13 = 3;
              if ( v12 >= 3 && (v12 <= 6 || v11 != 1) && *((_DWORD *)v7 + 8) == 1 )
              {
                *a3 = *(_QWORD *)(v7 + 12);
                v14 = *((_DWORD *)v7 + 2);
                *v4 = v7;
                if ( *((_DWORD *)v7 + 1) == v14 )
                  *((_DWORD *)v7 + 11) = 1;
                else
                  return 5;
                return v13;
              }
            }
          }
          goto LABEL_16;
        }
      }
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *, _DWORD))(a1 + 48))(
              a1,
              0LL,
              4096LL,
              v7,
              *(_DWORD *)(a1 + 136) << 9);
      if ( v16 == -1073741807 )
      {
LABEL_16:
        v13 = 0;
LABEL_26:
        (*(void (__fastcall **)(char *, _QWORD))(a1 + 32))(v7, *(unsigned int *)(a1 + 132));
        return v13;
      }
      if ( v16 >= 0 )
      {
        if ( *(_DWORD *)v7 == 1852400232 && !*((_DWORD *)v7 + 1) )
        {
          v13 = 4;
          *a3 = *(_QWORD *)(v7 + 20);
          goto LABEL_26;
        }
        goto LABEL_16;
      }
    }
    v13 = 7;
    goto LABEL_26;
  }
  return 2LL;
}
