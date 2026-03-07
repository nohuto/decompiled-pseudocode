void __fastcall vInitializeFontAssocStatus(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // r14
  struct PFE **v3; // rdi
  __int64 v4; // rcx
  bool v5; // r12
  __int64 v6; // rsi
  unsigned int v7; // r14d
  unsigned int i; // edi
  PFTOBJ *v9; // rcx
  _QWORD v10[2]; // [rsp+40h] [rbp-29h] BYREF
  __int64 v11; // [rsp+50h] [rbp-19h] BYREF
  __int64 v12; // [rsp+60h] [rbp-9h] BYREF
  __int64 v13; // [rsp+70h] [rbp+7h] BYREF
  unsigned int v14; // [rsp+80h] [rbp+17h]
  unsigned int v15; // [rsp+D0h] [rbp+67h] BYREF
  struct PFF *v16; // [rsp+D8h] [rbp+6Fh] BYREF

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 32);
  v2 = (_QWORD *)(v1 + 13968);
  *(_DWORD *)(v1 + 13976) = 4;
  *(_QWORD *)(v1 + 13968) = FontAssocCharsetRoutine;
  *(_QWORD *)(v1 + 13984) = 0LL;
  *(_QWORD *)(v1 + 13992) = 0LL;
  *(_DWORD *)(v1 + 14000) = 0;
  *(_QWORD *)(v1 + 14008) = 0LL;
  *(_DWORD *)(v1 + 14016) = 0;
  *(_QWORD *)(v1 + 14024) = 0LL;
  *(_DWORD *)(v1 + 14032) = 0;
  *(_QWORD *)(v1 + 14040) = 0LL;
  *(_DWORD *)(v1 + 18736) = 0;
  *(_WORD *)(v1 + 18748) = 0;
  if ( RtlQueryRegistryValues(
         0x80000002,
         L"FontAssoc\\Associated CharSet",
         (PRTL_QUERY_REGISTRY_TABLE)(v1 + 13968),
         0LL,
         0LL) < 0 )
    *(_DWORD *)(v1 + 18736) = 0;
  *v2 = FontAssocDefaultRoutine;
  *(_WORD *)(v1 + 19268) = 0;
  if ( RtlQueryRegistryValues(
         0x80000002,
         L"FontAssoc\\Associated DefaultFonts",
         (PRTL_QUERY_REGISTRY_TABLE)(v1 + 13968),
         0LL,
         0LL) >= 0 )
  {
    *(_DWORD *)(v1 + 19356) = 1;
    if ( *(_WORD *)(v1 + 18748) )
    {
      if ( *(_WORD *)(v1 + 19268) )
      {
        v3 = (struct PFE **)(v1 + 19336);
        v11 = *(_QWORD *)(v1 + 20272);
        v15 = 0;
        v16 = 0LL;
        v10[0] = v1 + 19336;
        v10[1] = v1 + 19268;
        if ( (unsigned int)PUBLIC_PFTOBJ::bLoadAFont(
                             (PUBLIC_PFTOBJ *)&v11,
                             (const unsigned __int16 *)(v1 + 18748),
                             &v15,
                             8u,
                             &v16,
                             (struct _EUDCLOAD *)v10,
                             1) )
        {
          v4 = *(_QWORD *)(v1 + 13272);
          *(_QWORD *)(v1 + 13888) = 0LL;
          GreAcquireSemaphore(v4);
          if ( (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)(v1 + 13880), *v3, 0) )
            goto LABEL_16;
          v5 = 0;
          v12 = *(_QWORD *)*v3;
          UmfdClientSideFileViewMapper::UmfdClientSideFileViewMapper(
            (UmfdClientSideFileViewMapper *)&v13,
            (struct PFFOBJ *)&v12);
          v6 = v13;
          v7 = v14;
          if ( v14 == *(_DWORD *)(v13 + 36) )
            v5 = (unsigned int)bComputeQuickLookup((struct _QUICKLOOKUP *)(v1 + 13880), *v3, 0) != 0;
          for ( i = 0; i < v7; EngUnmapFontFileFD(*(_QWORD *)(*(_QWORD *)(v6 + 200) + 8LL * i++)) )
          {
            if ( i >= *(_DWORD *)(v6 + 36) )
              break;
          }
          if ( v5 )
          {
LABEL_16:
            *(_DWORD *)(v1 + 19352) = 1;
            *(_DWORD *)(v1 + 13304) = 1;
          }
          EtwTraceGreLockReleaseSemaphore(L"GreFullGlobals.hsemEUDC1");
          GreReleaseSemaphoreInternal(*(_QWORD *)(v1 + 13272));
          if ( !*(_DWORD *)(v1 + 19352) )
            PFTOBJ::bUnloadEUDCFont(v9, (unsigned __int16 *)(v1 + 18748));
          v2 = (_QWORD *)(v1 + 13968);
        }
      }
    }
  }
  else
  {
    *(_DWORD *)(v1 + 19356) = 0;
  }
  *(_DWORD *)(v1 + 19364) = 0;
  *v2 = CountRegistryEntryRoutine;
  *(_QWORD *)(v1 + 13992) = v1 + 19368;
  *(_DWORD *)(v1 + 19368) = 0;
}
