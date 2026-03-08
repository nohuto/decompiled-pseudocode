/*
 * XREFs of IopCheckAndUpdateStopOnSymlinkEcp @ 0x140944934
 * Callers:
 *     IopParseDevice @ 0x1407B6A30 (IopParseDevice.c)
 * Callees:
 *     FsRtlFindExtraCreateParameter @ 0x1406B1D70 (FsRtlFindExtraCreateParameter.c)
 */

char __fastcall IopCheckAndUpdateStopOnSymlinkEcp(struct _ECP_LIST *a1, int a2, __int64 a3)
{
  int v5; // ecx
  _DWORD *v6; // rcx
  _DWORD *v8; // [rsp+20h] [rbp-18h] BYREF
  ULONG v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  v9 = 0;
  if ( FsRtlFindExtraCreateParameter(a1, &ECP_TYPE_IO_STOP_ON_SYMLINK_FILTER_GUID, (PVOID *)&v8, &v9) < 0 )
    return 1;
  if ( v9 < 8 )
    return a2 == -1610612724;
  if ( (unsigned int)(a2 + 1610612733) <= 0x16 )
  {
    v5 = 4194817;
    if ( _bittest(&v5, a2 + 1610612733) )
    {
      v6 = v8;
      ++*v8;
      v6[1] = *(unsigned __int16 *)(a3 + 6);
    }
  }
  return v9 > 8 || a2 == -1610612724;
}
