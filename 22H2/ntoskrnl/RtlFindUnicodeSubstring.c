/*
 * XREFs of RtlFindUnicodeSubstring @ 0x1406D93E0
 * Callers:
 *     CmpTraceSecurityChanging @ 0x14070DD5C (CmpTraceSecurityChanging.c)
 *     PiDrvDbRegisterNode @ 0x140813CBC (PiDrvDbRegisterNode.c)
 *     PiDrvDbFindSystemFilePathToken @ 0x14096FFCC (PiDrvDbFindSystemFilePathToken.c)
 * Callees:
 *     NLS_UPCASE @ 0x14022D330 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D390 (PsGetCurrentServerSiloGlobals.c)
 *     memcmp @ 0x1403D9CF0 (memcmp.c)
 */

char *__fastcall RtlFindUnicodeSubstring(unsigned __int16 *a1)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 *v3; // rdx
  char v4; // r8
  __int64 v5; // rcx
  __int64 v6; // r15
  unsigned int v7; // eax
  char *v8; // rbx
  size_t v9; // rsi
  char *v10; // rdi
  unsigned __int16 *v11; // r14
  unsigned __int16 *v12; // rsi
  char *i; // r11
  unsigned __int16 *j; // r10
  unsigned __int16 v15; // bp
  unsigned __int16 v16; // ax
  __int16 v17; // r9
  const void *v19; // rbp

  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  v5 = *v3;
  v6 = CurrentServerSiloGlobals[154];
  v7 = *a1;
  if ( (unsigned __int16)v7 < (unsigned __int16)v5 )
    return 0LL;
  v8 = (char *)*((_QWORD *)a1 + 1);
  v9 = *v3;
  v10 = &v8[v7 - v5];
  if ( !v4 )
  {
    if ( v8 <= v10 )
    {
      v19 = (const void *)*((_QWORD *)v3 + 1);
      while ( memcmp(v8, v19, v9) )
      {
        v8 += 2;
        if ( v8 > v10 )
          return 0LL;
      }
      return v8;
    }
    return 0LL;
  }
  v11 = (unsigned __int16 *)*((_QWORD *)v3 + 1);
  v12 = (unsigned __int16 *)((char *)v11 + *v3);
  if ( v8 > v10 )
    return 0LL;
  for ( i = (char *)(v8 - (char *)v11); ; i += 2 )
  {
    for ( j = v11; j < v12; ++j )
    {
      v15 = *(unsigned __int16 *)((char *)j + (_QWORD)i);
      if ( v15 != *j )
      {
        NLS_UPCASE(v6, *j);
        v16 = NLS_UPCASE(v6, v15);
        if ( v16 != v17 )
          break;
      }
    }
    if ( j == v12 )
      break;
    v8 += 2;
    if ( v8 > v10 )
      return 0LL;
  }
  return v8;
}
