/*
 * XREFs of ?bInsert@FHOBJ@@QEAAHAEAVPFEOBJ@@@Z @ 0x1C00A03A4
 * Callers:
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C00A0258 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEBGAEAVPFEOBJ@@H@Z @ 0x1C009F988 (-bAddPFELink@FHOBJ@@QEAAHPEAU_HASHBUCKET@@IPEBGAEAVPFEOBJ@@H@Z.c)
 *     ?pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z @ 0x1C00A2E34 (-pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00BBCF8 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     cCapString @ 0x1C00BBE54 (cCapString.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

__int64 __fastcall FHOBJ::bInsert(FHOBJ *this, struct PFEOBJ *a2)
{
  __int64 v4; // rax
  unsigned __int16 *v5; // rax
  __int64 v6; // r9
  struct _UNIVERSAL_FONT_ID *v7; // r9
  unsigned __int16 *v8; // rdx
  struct _HASHBUCKET *v9; // rax
  unsigned __int16 *v11; // rbx
  __int64 v12; // r9
  struct _HASHBUCKET *v14; // rax
  unsigned int v16; // [rsp+30h] [rbp-19h] BYREF
  __int64 v17; // [rsp+38h] [rbp-11h] BYREF
  unsigned __int16 v18[32]; // [rsp+40h] [rbp-9h] BYREF

  memset(v18, 0, sizeof(v18));
  v4 = *((_QWORD *)this + 1);
  v16 = 0;
  if ( !*(_DWORD *)(v4 + 4)
    && !_wcsicmp(
          (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 16LL)),
          (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 8LL))) )
  {
    return 1LL;
  }
  if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 2 )
  {
    v7 = (struct _UNIVERSAL_FONT_ID *)&v17;
    v8 = 0LL;
    v17 = *(_QWORD *)(*(_QWORD *)a2 + 84LL);
  }
  else
  {
    v5 = FHOBJ::pwszName(this, a2);
    cCapString(v18, v5, 32LL, v6);
    v7 = 0LL;
    v8 = v18;
  }
  v9 = FHOBJ::pbktSearch(this, v8, &v16, v7, 0);
  if ( (unsigned int)FHOBJ::bAddPFELink(this, v9, v16, v18, a2, 0) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 48LL) & 0x8000000) != 0
      && *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 1 )
    {
      v11 = FHOBJ::pwszName(this, a2);
      while ( *v11++ )
        ;
      while ( *v11 )
      {
        cCapString(v18, v11, 32LL, v12);
        v14 = FHOBJ::pbktSearch(this, v18, &v16, 0LL, 1);
        if ( !(unsigned int)FHOBJ::bAddPFELink(this, v14, v16, v18, a2, 1) )
          return 0LL;
        while ( *v11++ )
          ;
      }
    }
    return 1LL;
  }
  return 0LL;
}
