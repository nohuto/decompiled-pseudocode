void __fastcall InitFNTCache(Gre::Base *a1)
{
  int v1; // edi
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  int FontReg; // eax
  int v9; // r12d
  int *v10; // r9
  __int64 *v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r14
  int v17; // edx
  int v18; // edx
  struct Gre::Base::SESSION_GLOBALS *v19; // rax
  __int64 *v20; // rax
  int inited; // eax
  struct Gre::Base::SESSION_GLOBALS *v22; // [rsp+40h] [rbp-38h]
  __int64 v23; // [rsp+48h] [rbp-30h] BYREF
  __int64 v24; // [rsp+50h] [rbp-28h] BYREF
  __int64 v25; // [rsp+58h] [rbp-20h]
  __int64 v26; // [rsp+60h] [rbp-18h]
  __int64 v27; // [rsp+68h] [rbp-10h] BYREF
  USHORT AnsiCodePage; // [rsp+C0h] [rbp+48h] BYREF
  USHORT OemCodePage; // [rsp+C8h] [rbp+50h] BYREF
  __int64 *v30; // [rsp+D0h] [rbp+58h]
  int v31; // [rsp+D8h] [rbp+60h]

  v26 = 0LL;
  v1 = 0;
  v25 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  LODWORD(v30) = 0;
  v31 = 0;
  AnsiCodePage = 0;
  OemCodePage = 0;
  v2 = Gre::Base::Globals(a1);
  v22 = v2;
  v27 = *((_QWORD *)v2 + 8);
  GreAcquireSemaphore(v27);
  v4 = *(_QWORD *)(SGDGetSessionState(v3) + 32);
  *(_DWORD *)(v4 + 19384) = 0;
  if ( (int)GetGreRegKey(
              (PHANDLE)(v4 + 19408),
              0xC0000000,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Gre_Initialize") < 0 )
    goto LABEL_19;
  if ( (unsigned int)bFntCacheDisabled() )
    goto LABEL_19;
  v6 = Win32AllocPoolZInit(128LL, 1128682580LL);
  *(_QWORD *)(v4 + 19392) = v6;
  if ( !v6 || *((_DWORD *)v2 + 752) && !(unsigned int)bSetFntCacheReg(0LL) )
    goto LABEL_19;
  **(_QWORD **)(v4 + 19392) = 0LL;
  *(_DWORD *)(*(_QWORD *)(v4 + 19392) + 8LL) = 0;
  *(_DWORD *)(*(_QWORD *)(v4 + 19392) + 20LL) = 0;
  RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
  vGetLastBootTimeStatus(v7);
  vGetFontDriverLWT(&v24, &v23);
  FontReg = QueryFontReg(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Fonts");
  v9 = (int)v30;
  if ( FontReg )
  {
    v9 = (_DWORD)v30 + 40;
    QueryFontReg(L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Type 1 Installer\\Type 1 Fonts");
    v1 = v31;
  }
  if ( !(unsigned int)bServicingStackModifiedFonts()
    && bMapFileRetainHandle((const unsigned __int16 *)v5, (struct _FILEVIEW *)(*(_QWORD *)(v4 + 19392) + 48LL), 0, v10) )
  {
    v5 = *(_QWORD *)(v4 + 19392);
    *(_QWORD *)v5 = *(_QWORD *)(v5 + 56);
  }
  v11 = *(__int64 **)(v4 + 19392);
  v30 = v11;
  v12 = *v11;
  if ( !*v11 )
  {
    if ( !*((_DWORD *)v2 + 752) )
      goto LABEL_19;
    inited = bInitCacheTable(v9, v1, v26, v25, v24, v23, AnsiCodePage);
LABEL_36:
    if ( inited )
      *(_DWORD *)(v4 + 19384) = 2;
    goto LABEL_19;
  }
  v13 = v26;
  v14 = v25;
  v15 = v24;
  v16 = v23;
  if ( !*(_DWORD *)v12
    || (v17 = *((_DWORD *)v11 + 18), v17 != *(_DWORD *)(v12 + 24))
    || *(_DWORD *)v12 != (unsigned int)ComputeFileviewCheckSum(v12 + 4, (unsigned int)(v17 - 4))
    || *(_QWORD *)(v12 + 48) != v16 )
  {
    v5 = AnsiCodePage;
    goto LABEL_33;
  }
  v5 = AnsiCodePage;
  if ( *(_DWORD *)(v12 + 12) != AnsiCodePage )
  {
LABEL_33:
    v19 = v22;
LABEL_34:
    if ( !*((_DWORD *)v19 + 752) )
      goto LABEL_19;
    inited = bInitCacheTable(v9, v31, v13, v14, v15, v16, (unsigned __int16)v5);
    goto LABEL_36;
  }
  v18 = *((_DWORD *)v30 + 3);
  v19 = v22;
  if ( (v18 & 1) != 0
    || *((_DWORD *)v22 + 752)
    && ((v18 & 2) != 0 || *(_QWORD *)(v12 + 40) != v15 || v13 != *(_QWORD *)(v12 + 56) || v14 != *(_QWORD *)(v12 + 64)) )
  {
    goto LABEL_34;
  }
  *(_DWORD *)(v4 + 19384) = 1;
  if ( (unsigned int)RtlGetCurrentServiceSessionId() )
  {
    v20 = *(__int64 **)(v4 + 19392);
    v5 = *v20;
    if ( v13 == *(_QWORD *)(*v20 + 56) )
      *(_DWORD *)(v4 + 19384) |= 4u;
  }
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
      bSetFntCacheReg(0LL);
    else
      *(_DWORD *)(*(_QWORD *)(v4 + 19392) + 16LL) = 0;
  }
  else
  {
    vCleanUpFntCacheInternal(v5);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v27);
}
