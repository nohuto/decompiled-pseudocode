/*
 * XREFs of ?vDelete@FHOBJ@@QEAAXAEAVPFEOBJ@@@Z @ 0x1C0117D44
 * Callers:
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C01172D8 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 * Callees:
 *     ?pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0114DE0 (-pbktSearch@FHOBJ@@QEAAPEAU_HASHBUCKET@@PEBGPEAIPEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 *     ?vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z @ 0x1C0117844 (-vDeletePFELink@FHOBJ@@QEAAXPEAU_HASHBUCKET@@IAEAVPFEOBJ@@@Z.c)
 *     ?pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z @ 0x1C0117F58 (-pwszName@FHOBJ@@QEAAPEAGAEAVPFEOBJ@@@Z.c)
 *     cCapString @ 0x1C0117F80 (cCapString.c)
 *     ?iHash@@YAIPEBGI@Z @ 0x1C01181D0 (-iHash@@YAIPEBGI@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

void __fastcall FHOBJ::vDelete(FHOBJ *this, struct PFEOBJ *a2)
{
  __int64 v4; // rax
  unsigned __int16 *v5; // rax
  unsigned int v6; // ebx
  struct _HASHBUCKET *v7; // r11
  __int64 v8; // r10
  struct _HASHBUCKET *i; // rdx
  unsigned __int16 *v10; // rax
  unsigned __int16 v11; // cx
  struct _HASHBUCKET *v12; // rax
  unsigned __int16 *v13; // rbx
  struct _HASHBUCKET *v15; // rax
  unsigned int v17; // [rsp+30h] [rbp-19h] BYREF
  __int64 v18; // [rsp+38h] [rbp-11h] BYREF
  unsigned __int16 v19[32]; // [rsp+40h] [rbp-9h] BYREF

  memset_0(v19, 0, sizeof(v19));
  v4 = *((_QWORD *)this + 1);
  v17 = 0;
  if ( *(_DWORD *)(v4 + 4)
    || _wcsicmp(
         (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 16LL)),
         (const wchar_t *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + *(int *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 8LL))) )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 2 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)a2 + 84LL);
      v12 = FHOBJ::pbktSearch(this, 0LL, &v17, (struct _UNIVERSAL_FONT_ID *)&v18, 0);
      v6 = v17;
      i = v12;
    }
    else
    {
      v5 = FHOBJ::pwszName(this, a2);
      cCapString(v19, v5, 32LL);
      v6 = iHash(v19, *(_DWORD *)(*((_QWORD *)this + 1) + 8LL));
      v17 = v6;
      for ( i = *(struct _HASHBUCKET **)(v8 + 8LL * v6 + 40); i; i = *(struct _HASHBUCKET **)i )
      {
        v10 = v19;
        if ( v19[0] == *((_WORD *)i + 30) )
        {
          v11 = v19[0];
          while ( v11 )
          {
            v11 = *++v10;
            if ( *v10 != *(unsigned __int16 *)((char *)v10 + i - (struct _HASHBUCKET *)v19 + 60) )
              goto LABEL_8;
          }
          if ( (*((_DWORD *)i + 8) & 2) == 0 )
            goto LABEL_11;
          v7 = i;
        }
LABEL_8:
        ;
      }
      i = v7;
    }
LABEL_11:
    FHOBJ::vDeletePFELink(this, i, v6, a2);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 32LL) + 48LL) & 0x8000000) != 0
      && *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) == 1 )
    {
      v13 = FHOBJ::pwszName(this, a2);
      while ( *v13++ )
        ;
      while ( *v13 )
      {
        cCapString(v19, v13, 32LL);
        v15 = FHOBJ::pbktSearch(this, v19, &v17, 0LL, 1);
        FHOBJ::vDeletePFELink(this, v15, v17, a2);
        while ( *v13++ )
          ;
      }
    }
  }
}
