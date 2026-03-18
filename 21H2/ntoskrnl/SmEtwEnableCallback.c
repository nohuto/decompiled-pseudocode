/*
 * XREFs of SmEtwEnableCallback @ 0x140847F40
 * Callers:
 *     <none>
 * Callees:
 *     SmEtwEnabled @ 0x140261818 (SmEtwEnabled.c)
 *     SmKmStoreReferenceEx @ 0x14035F5AC (SmKmStoreReferenceEx.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x1405FCF84 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmKmEtwLogStoreRundown @ 0x140847F98 (SmKmEtwLogStoreRundown.c)
 */

void __fastcall SmEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  unsigned int i; // ebx
  unsigned __int64 v5; // rax

  if ( ControlCode <= 1 && (dword_140D3253C = MatchAnyKeyword | 0x40, ControlCode == 1) || ControlCode == 2 )
  {
    SmKmEtwLogStoreRundown(&qword_140D32530, &SmGlobals, Level);
    if ( SmEtwEnabled(3) )
    {
      for ( i = 0; i < 0x400; ++i )
      {
        v5 = SmKmStoreReferenceEx((__int64)&SmGlobals, i);
        if ( v5 )
          SMKM_STORE_MGR<SM_TRAITS>::SmStoreContentsRundown((__int64)&SmGlobals, v5);
      }
    }
  }
}
