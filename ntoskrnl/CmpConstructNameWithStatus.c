/*
 * XREFs of CmpConstructNameWithStatus @ 0x1407AF2E0
 * Callers:
 *     CmQueryLayeredKey @ 0x1402F262C (CmQueryLayeredKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1406B845C (CmpSetSecurityDescriptorInfo.c)
 *     CmpTraceSecurityChanging @ 0x1406B8AF8 (CmpTraceSecurityChanging.c)
 *     CmpConstructName @ 0x1406BD1BC (CmpConstructName.c)
 *     CmLoadAppKey @ 0x1406BDA5C (CmLoadAppKey.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpLinkHiveToMaster @ 0x140731250 (CmpLinkHiveToMaster.c)
 *     CmAddLogForAction @ 0x14073485C (CmAddLogForAction.c)
 *     CmpConstructAndCacheName @ 0x1407929C4 (CmpConstructAndCacheName.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1407AAEC0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmQueryKey @ 0x1407AE5C0 (CmQueryKey.c)
 *     CmpDoWritethroughReparse @ 0x1407B6860 (CmpDoWritethroughReparse.c)
 *     CmpEtwDumpKcb @ 0x1408A6EE6 (CmpEtwDumpKcb.c)
 *     CmpLoadHiveVolatile @ 0x140A096F0 (CmpLoadHiveVolatile.c)
 *     CmEtwRunDown @ 0x140A0F788 (CmEtwRunDown.c)
 *     CmpTraceHiveSaveStart @ 0x140A101D4 (CmpTraceHiveSaveStart.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140A13C04 (CmpIsHiveAlreadyLoaded.c)
 *     CmpDumpKeyBodyList @ 0x140A143F8 (CmpDumpKeyBodyList.c)
 *     CmRealKCBToVirtualPath @ 0x140A15968 (CmRealKCBToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x140A15B68 (CmVirtualKCBToRealPath.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140A18D84 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140243890 (CmSiFreeMemory.c)
 *     CmpSetKcbAtLayerHeight @ 0x140785EE8 (CmpSetKcbAtLayerHeight.c)
 *     CmpStartKcbStack @ 0x1407AF450 (CmpStartKcbStack.c)
 *     CmpConstructNameFromKeyNodes @ 0x1407B0C90 (CmpConstructNameFromKeyNodes.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140A142C8 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpAcquireShutdownRundown @ 0x140AF23A0 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140AF23F0 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall CmpConstructNameWithStatus(__int64 a1, _QWORD *a2, __int64 a3)
{
  char v5; // bp
  __int64 v6; // rdx
  __int64 v7; // rcx
  int started; // ebx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 i; // r10
  __int64 v12; // r10
  struct _PRIVILEGE_SET *v13; // rdi
  unsigned __int16 j; // cx
  PPRIVILEGE_SET v15; // rax
  __int128 v17; // [rsp+20h] [rbp-38h] BYREF
  PPRIVILEGE_SET Privileges[2]; // [rsp+30h] [rbp-28h]
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = 0LL;
  v17 = 0LL;
  WORD1(v17) = -1;
  *(_OWORD *)Privileges = 0LL;
  v5 = CmpAcquireShutdownRundown(a1, a2, a3);
  started = CmpStartKcbStack(&v17, *(unsigned __int16 *)(a1 + 66));
  if ( started < 0 )
  {
    v13 = Privileges[1];
  }
  else
  {
    v10 = *(__int16 *)(a1 + 66);
    WORD1(v17) = v10;
    if ( (_WORD)v10 )
    {
      for ( i = *(_QWORD *)(a1 + 192); i; LOWORD(v10) = v10 - 1 )
      {
        CmpSetKcbAtLayerHeight((__int64)&v17, v10, *(_QWORD *)(i + 16));
        i = *(_QWORD *)(v12 + 24);
      }
    }
    else
    {
      Privileges[v10 - 1] = (PPRIVILEGE_SET)a1;
    }
    v13 = Privileges[1];
    if ( v5 )
    {
      if ( (*(_DWORD *)(a1 + 8) & 0x20000) == 0 )
      {
        for ( j = WORD1(v17); (j & 0x8000u) == 0; --j )
        {
          v15 = j < 2u ? Privileges[j - 1] : (PPRIVILEGE_SET)*((_QWORD *)Privileges[1] + j - 2);
          if ( HIWORD(v15[3].Control) && BYTE1(v15[3].Control) == 1 )
            break;
          if ( v15[2].PrivilegeCount != -1 )
          {
            if ( *(_DWORD *)(a1 + 40) == -1 && (*(_DWORD *)(a1 + 184) & 0x40000) != 0 )
              break;
            started = CmpConstructNameFromKeyNodes(&v17, &v19);
            if ( started >= 0 )
              goto LABEL_17;
            goto LABEL_23;
          }
        }
      }
    }
    started = CmpConstructNameFromKcbNameBlocks(a1, &v19);
    if ( started >= 0 )
    {
LABEL_17:
      started = 0;
      *a2 = v19;
    }
  }
LABEL_23:
  if ( v13 )
    CmSiFreeMemory(v13);
  if ( v5 )
    CmpReleaseShutdownRundown(v7, v6, v9);
  return (unsigned int)started;
}
