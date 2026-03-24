/*
 * XREFs of ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C00BA340
 * Callers:
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C00BA214 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z @ 0x1C009F758 (-vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z.c)
 *     ?pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z @ 0x1C00A2E34 (-pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z.c)
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00BBCF8 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     cCapString @ 0x1C00BBE54 (cCapString.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 */

void __fastcall FHOBJ::vDelete(FHOBJ *this, struct PFEOBJ *a2)
{
  __int64 v4; // rax
  unsigned __int16 *v5; // rax
  __int64 v6; // r9
  struct _UNIVERSAL_FONT_ID *v7; // r9
  unsigned __int16 *v8; // rdx
  struct _HASHBUCKET *v9; // rax
  unsigned __int16 *v10; // rbx
  __int64 v11; // r9
  struct _HASHBUCKET *v13; // rax
  unsigned int v15; // [rsp+30h] [rbp-19h] BYREF
  __int64 v16; // [rsp+38h] [rbp-11h] BYREF
  unsigned __int16 v17[32]; // [rsp+40h] [rbp-9h] BYREF

  memset(v17, 0, sizeof(v17));
  v4 = *((_QWORD *)this + 1);
  v15 = 0;
  if ( *(_DWORD *)(v4 + 4)
    || _wcsicmp(
         (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 16LL)),
         (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 8LL))) )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 2 )
    {
      v7 = (struct _UNIVERSAL_FONT_ID *)&v16;
      v8 = 0LL;
      v16 = *(_QWORD *)(*(_QWORD *)a2 + 84LL);
    }
    else
    {
      v5 = FHOBJ::pwszName(this, a2);
      cCapString(v17, v5, 32LL, v6);
      v7 = 0LL;
      v8 = v17;
    }
    v9 = FHOBJ::pbktSearch(this, v8, &v15, v7, 0);
    FHOBJ::vDeletePFELink(this, v9, v15, a2);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 48LL) & 0x8000000) != 0
      && *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 1 )
    {
      v10 = FHOBJ::pwszName(this, a2);
      while ( *v10++ )
        ;
      while ( *v10 )
      {
        cCapString(v17, v10, 32LL, v11);
        v13 = FHOBJ::pbktSearch(this, v17, &v15, 0LL, 1);
        FHOBJ::vDeletePFELink(this, v13, v15, a2);
        while ( *v10++ )
          ;
      }
    }
  }
}
