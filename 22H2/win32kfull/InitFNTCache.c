/*
 * XREFs of InitFNTCache @ 0x1C00880A0
 * Callers:
 *     <none>
 * Callees:
 *     QueryFontReg @ 0x1C00883C0 (QueryFontReg.c)
 *     ?GetGreRegKey@@YAJPEAPEAXKPEBG@Z @ 0x1C0088490 (-GetGreRegKey@@YAJPEAPEAXKPEBG@Z.c)
 *     bSetFntCacheReg @ 0x1C0088514 (bSetFntCacheReg.c)
 *     bServicingStackModifiedFonts @ 0x1C0088694 (bServicingStackModifiedFonts.c)
 *     ComputeFileviewCheckSum @ 0x1C0088700 (ComputeFileviewCheckSum.c)
 *     bFntCacheDisabled @ 0x1C008877C (bFntCacheDisabled.c)
 *     vGetLastBootTimeStatus @ 0x1C00888FC (vGetLastBootTimeStatus.c)
 *     ?bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z @ 0x1C008895C (-bMapFileRetainHandle@@YAHPEBGPEAU_FILEVIEW@@HPEAH@Z.c)
 *     vGetFontDriverLWT @ 0x1C0088C1C (vGetFontDriverLWT.c)
 *     ?vCleanUpFntCacheInternal@@YAXXZ @ 0x1C0089E94 (-vCleanUpFntCacheInternal@@YAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     bInitCacheTable @ 0x1C028A078 (bInitCacheTable.c)
 */

void __fastcall InitFNTCache(Gre::Base *a1)
{
  int v1; // edi
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r15
  __int64 v5; // rax
  int FontReg; // eax
  int v7; // r12d
  const unsigned __int16 *v8; // rcx
  int *v9; // r9
  __int64 *v10; // rax
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r14
  int v16; // edx
  USHORT v17; // cx
  int v18; // edx
  struct Gre::Base::SESSION_GLOBALS *v19; // rax
  int inited; // eax
  struct Gre::Base::SESSION_GLOBALS *v21; // [rsp+40h] [rbp-38h]
  __int64 v22; // [rsp+48h] [rbp-30h] BYREF
  __int64 v23; // [rsp+50h] [rbp-28h] BYREF
  __int64 v24; // [rsp+58h] [rbp-20h]
  __int64 v25; // [rsp+60h] [rbp-18h]
  __int64 v26; // [rsp+68h] [rbp-10h] BYREF
  USHORT AnsiCodePage; // [rsp+C0h] [rbp+48h] BYREF
  USHORT OemCodePage; // [rsp+C8h] [rbp+50h] BYREF
  __int64 *v29; // [rsp+D0h] [rbp+58h]
  int v30; // [rsp+D8h] [rbp+60h]

  v25 = 0LL;
  v1 = 0;
  v24 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  LODWORD(v29) = 0;
  v30 = 0;
  AnsiCodePage = 0;
  OemCodePage = 0;
  v2 = Gre::Base::Globals(a1);
  v21 = v2;
  v26 = *((_QWORD *)v2 + 8);
  GreAcquireSemaphore(v26);
  v4 = *(_QWORD *)(SGDGetSessionState(v3) + 32);
  *(_DWORD *)(v4 + 19384) = 0;
  if ( (int)GetGreRegKey(
              (PHANDLE)(v4 + 19408),
              0xC0000000,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize") < 0 )
    goto LABEL_19;
  if ( (unsigned int)bFntCacheDisabled() )
    goto LABEL_19;
  v5 = Win32AllocPoolZInit(128LL, 1128682580LL);
  *(_QWORD *)(v4 + 19392) = v5;
  if ( !v5 || *((_DWORD *)v2 + 752) && !(unsigned int)bSetFntCacheReg(0LL, 1LL) )
    goto LABEL_19;
  **(_QWORD **)(v4 + 19392) = 0LL;
  *(_DWORD *)(*(_QWORD *)(v4 + 19392) + 8LL) = 0;
  *(_DWORD *)(*(_QWORD *)(v4 + 19392) + 20LL) = 0;
  RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
  vGetLastBootTimeStatus();
  vGetFontDriverLWT(&v23, &v22);
  FontReg = QueryFontReg(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Fonts");
  v7 = (int)v29;
  if ( FontReg )
  {
    v7 = (_DWORD)v29 + 40;
    QueryFontReg(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Type 1 Installer\\Type 1 Fonts");
    v1 = v30;
  }
  if ( !(unsigned int)bServicingStackModifiedFonts()
    && bMapFileRetainHandle(v8, (struct _FILEVIEW *)(*(_QWORD *)(v4 + 19392) + 48LL), 0, v9) )
  {
    **(_QWORD **)(v4 + 19392) = *(_QWORD *)(*(_QWORD *)(v4 + 19392) + 56LL);
  }
  v10 = *(__int64 **)(v4 + 19392);
  v29 = v10;
  v11 = *v10;
  if ( !*v10 )
  {
    if ( !*((_DWORD *)v2 + 752) )
      goto LABEL_19;
    inited = bInitCacheTable(v7, v1, v25, v24, v23, v22, AnsiCodePage);
LABEL_36:
    if ( inited )
      *(_DWORD *)(v4 + 19384) = 2;
    goto LABEL_19;
  }
  v12 = v25;
  v13 = v24;
  v14 = v23;
  v15 = v22;
  if ( !*(_DWORD *)v11
    || (v16 = *((_DWORD *)v10 + 18), v16 != *(_DWORD *)(v11 + 24))
    || *(_DWORD *)v11 != (unsigned int)ComputeFileviewCheckSum(v11 + 4, (unsigned int)(v16 - 4))
    || *(_QWORD *)(v11 + 48) != v15 )
  {
    v17 = AnsiCodePage;
    goto LABEL_33;
  }
  v17 = AnsiCodePage;
  if ( *(_DWORD *)(v11 + 12) != AnsiCodePage )
  {
LABEL_33:
    v19 = v21;
LABEL_34:
    if ( !*((_DWORD *)v19 + 752) )
      goto LABEL_19;
    inited = bInitCacheTable(v7, v30, v12, v13, v14, v15, v17);
    goto LABEL_36;
  }
  v18 = *((_DWORD *)v29 + 3);
  v19 = v21;
  if ( (v18 & 1) != 0
    || *((_DWORD *)v21 + 752)
    && ((v18 & 2) != 0 || *(_QWORD *)(v11 + 40) != v14 || v12 != *(_QWORD *)(v11 + 56) || v13 != *(_QWORD *)(v11 + 64)) )
  {
    goto LABEL_34;
  }
  *(_DWORD *)(v4 + 19384) = 1;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() && v12 == *(_QWORD *)(**(_QWORD **)(v4 + 19392) + 56LL) )
    *(_DWORD *)(v4 + 19384) |= 4u;
LABEL_19:
  if ( (*(_DWORD *)(v4 + 19384) & 3) != 0 )
  {
    *(_QWORD *)(*(_QWORD *)(v4 + 19392) + 24LL) = **(_QWORD **)(v4 + 19392)
                                                + ((80LL * *(unsigned int *)(**(_QWORD **)(v4 + 19392) + 16LL) + 327) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(*(_QWORD *)(v4 + 19392) + 32LL) = *(_QWORD *)(*(_QWORD *)(v4 + 19392) + 24LL)
                                                + *(unsigned int *)(**(_QWORD **)(v4 + 19392) + 36LL);
    *(_QWORD *)(*(_QWORD *)(v4 + 19392) + 40LL) = *(_QWORD *)(*(_QWORD *)(v4 + 19392) + 24LL)
                                                + *(unsigned int *)(**(_QWORD **)(v4 + 19392) + 28LL)
                                                + (unsigned __int64)*(unsigned int *)(**(_QWORD **)(v4 + 19392) + 32LL);
    *(_DWORD *)(*(_QWORD *)(v4 + 19392) + 8LL) = *(_DWORD *)(**(_QWORD **)(v4 + 19392) + 20LL);
    if ( (*(_DWORD *)(v4 + 19384) & 1) != 0 )
      bSetFntCacheReg(0LL, 0LL);
    else
      *(_DWORD *)(*(_QWORD *)(v4 + 19392) + 16LL) = 0;
  }
  else
  {
    vCleanUpFntCacheInternal();
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v26);
}
