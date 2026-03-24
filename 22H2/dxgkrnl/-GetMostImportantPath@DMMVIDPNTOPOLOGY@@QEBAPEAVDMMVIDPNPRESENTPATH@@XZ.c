/*
 * XREFs of ?GetMostImportantPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C0168160
 * Callers:
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x1C0167EA8 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     <none>
 */

struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::GetMostImportantPath(DMMVIDPNTOPOLOGY *this)
{
  char *v1; // r10
  DMMVIDPNTOPOLOGY *v2; // rax
  char *v3; // r9
  int v4; // r11d
  char *v5; // rax
  int v6; // edx
  int v7; // r8d
  char *v8; // rcx
  bool v9; // cc

  v1 = (char *)this + 24;
  v2 = (DMMVIDPNTOPOLOGY *)*((_QWORD *)this + 3);
  v3 = 0LL;
  v4 = 32;
  if ( v2 != (DMMVIDPNTOPOLOGY *)((char *)this + 24) )
  {
    v5 = (char *)v2 - 8;
    while ( v5 )
    {
      v6 = *((_DWORD *)v5 + 26);
      v7 = v4;
      v8 = (char *)*((_QWORD *)v5 + 1);
      v9 = v6 < v4;
      v4 = v6;
      if ( v9 )
        v3 = v5;
      v5 = v8 - 8;
      if ( v8 == v1 )
        v5 = 0LL;
      if ( v6 >= v7 )
        v4 = v7;
    }
  }
  return (struct DMMVIDPNPRESENTPATH *)v3;
}
