/*
 * XREFs of InitFNTCache @ 0x1C00E56F0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C009032C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     PALLOCMEM2 @ 0x1C009FE48 (PALLOCMEM2.c)
 *     QueryFontReg @ 0x1C00E5988 (QueryFontReg.c)
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C00E5A58 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     bFntCacheDisabled @ 0x1C00E5B48 (bFntCacheDisabled.c)
 *     bServicingStackModifiedFonts @ 0x1C00E5C90 (bServicingStackModifiedFonts.c)
 *     bSetFntCacheReg @ 0x1C00E5CE4 (bSetFntCacheReg.c)
 *     vGetLastBootTimeStatus @ 0x1C00E5D64 (vGetLastBootTimeStatus.c)
 *     ComputeFileviewCheckSum @ 0x1C00E6098 (ComputeFileviewCheckSum.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C00E6104 (-bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z.c)
 *     vGetFontDriverLWT @ 0x1C00E61FC (vGetFontDriverLWT.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C00E6588 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     bInitCacheTable @ 0x1C0288E4C (bInitCacheTable.c)
 */

void InitFNTCache()
{
  int v0; // ebx
  __int64 v1; // r8
  __int64 v2; // r9
  int FontReg; // eax
  int v4; // r12d
  const unsigned __int16 *v5; // rcx
  int *v6; // r9
  _DWORD *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rdi
  int v12; // edx
  _DWORD *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rcx
  int CurrentServiceSessionId; // eax
  char v18; // r10
  _DWORD *v19; // r8
  unsigned __int64 v20; // rdx
  int v21; // eax
  int v22; // eax
  int inited; // eax
  int v24; // ecx
  __int64 v25; // [rsp+40h] [rbp-38h] BYREF
  __int64 v26; // [rsp+48h] [rbp-30h] BYREF
  __int64 v27; // [rsp+50h] [rbp-28h]
  __int64 v28; // [rsp+58h] [rbp-20h]
  _QWORD v29[3]; // [rsp+60h] [rbp-18h] BYREF
  USHORT AnsiCodePage; // [rsp+C0h] [rbp+48h] BYREF
  USHORT OemCodePage; // [rsp+C8h] [rbp+50h] BYREF
  int v32; // [rsp+D0h] [rbp+58h]
  int v33; // [rsp+D8h] [rbp+60h]

  v0 = 0;
  v28 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v29[0] = ghsemFntCache;
  v25 = 0LL;
  v32 = 0;
  v33 = 0;
  AnsiCodePage = 0;
  OemCodePage = 0;
  GreAcquireSemaphore(ghsemFntCache);
  dword_1C033ABE0 = 0;
  if ( (int)GetGreRegKey(
              &ghkeyGreInitialize,
              0xC0000000,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize") < 0
    || (unsigned int)bFntCacheDisabled() )
  {
LABEL_43:
    v2 = qword_1C033ABE8;
    goto LABEL_19;
  }
  qword_1C033ABE8 = (__int64)PALLOCMEM2(0x80uLL, 1128682580LL, 1);
  v2 = qword_1C033ABE8;
  if ( !qword_1C033ABE8 )
    goto LABEL_19;
  if ( G_fServiceSession )
  {
    v21 = bSetFntCacheReg(0LL, 1LL, v1, qword_1C033ABE8);
    v2 = qword_1C033ABE8;
    if ( !v21 )
      goto LABEL_19;
  }
  *(_QWORD *)v2 = 0LL;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 20) = 0;
  RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
  vGetLastBootTimeStatus();
  vGetFontDriverLWT(&v26, &v25);
  FontReg = QueryFontReg(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Fonts");
  v4 = v32;
  if ( FontReg )
  {
    v4 = v32 + 40;
    QueryFontReg(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Type 1 Installer\\Type 1 Fonts");
    v0 = v33;
  }
  if ( (unsigned int)bServicingStackModifiedFonts()
    || !bMapFileRetainHandle(v5, (struct _FILEVIEW *)(qword_1C033ABE8 + 48), 0, v6) )
  {
    v2 = qword_1C033ABE8;
  }
  else
  {
    v2 = qword_1C033ABE8;
    *(_QWORD *)qword_1C033ABE8 = *(_QWORD *)(qword_1C033ABE8 + 56);
  }
  v7 = *(_DWORD **)v2;
  if ( !*(_QWORD *)v2 )
  {
    if ( !G_fServiceSession )
      goto LABEL_19;
    inited = bInitCacheTable(v4, v0, v28, v27, v26, v25, AnsiCodePage);
    v24 = dword_1C033ABE0;
    if ( inited )
      v24 = 2;
    dword_1C033ABE0 = v24;
    goto LABEL_43;
  }
  v8 = v28;
  v9 = v27;
  v10 = v26;
  v11 = v25;
  if ( *v7 )
  {
    v12 = *(_DWORD *)(v2 + 72);
    if ( v12 == v7[6] )
    {
      v13 = *(_DWORD **)v2;
      if ( *v13 == (unsigned int)ComputeFileviewCheckSum(v7 + 1, (unsigned int)(v12 - 4)) && *((_QWORD *)v13 + 6) == v11 )
      {
        v2 = qword_1C033ABE8;
        if ( v13[3] == AnsiCodePage )
        {
          v16 = *(unsigned int *)(qword_1C033ABE8 + 12);
          if ( (v16 & 1) == 0
            && (!G_fServiceSession
             || (v16 & 2) == 0
             && *((_QWORD *)v13 + 5) == v10
             && v8 == *((_QWORD *)v13 + 7)
             && v9 == *((_QWORD *)v13 + 8)) )
          {
            dword_1C033ABE0 = 1;
            CurrentServiceSessionId = RtlGetCurrentServiceSessionId(v16, v14, v15, qword_1C033ABE8);
            v2 = qword_1C033ABE8;
            if ( CurrentServiceSessionId && v8 == *(_QWORD *)(*(_QWORD *)qword_1C033ABE8 + 56LL) )
              dword_1C033ABE0 |= 4u;
            goto LABEL_19;
          }
        }
      }
      else
      {
        v2 = qword_1C033ABE8;
      }
    }
  }
  if ( G_fServiceSession )
  {
    v22 = bInitCacheTable(v4, v33, v8, v9, v10, v11, AnsiCodePage);
    v2 = qword_1C033ABE8;
    if ( v22 )
      dword_1C033ABE0 = 2;
  }
LABEL_19:
  v18 = dword_1C033ABE0;
  if ( (dword_1C033ABE0 & 3) != 0 )
  {
    v19 = *(_DWORD **)v2;
    v20 = *(_QWORD *)v2 + ((80LL * *(unsigned int *)(*(_QWORD *)v2 + 16LL) + 327) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(v2 + 24) = v20;
    *(_QWORD *)(v2 + 32) = v20 + (unsigned int)v19[9];
    *(_QWORD *)(v2 + 40) = v20 + (unsigned int)v19[8] + (unsigned int)v19[7];
    *(_DWORD *)(v2 + 8) = v19[5];
    if ( (v18 & 1) != 0 )
      bSetFntCacheReg(0LL, 0LL, v19, v2);
    else
      *(_DWORD *)(v2 + 16) = 0;
  }
  else
  {
    vCleanUpFntCacheInternal();
  }
  SEMOBJ::vUnlock((SEMOBJ *)v29);
}
