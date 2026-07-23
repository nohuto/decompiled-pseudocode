/*
 * XREFs of SmEtwEnableCallback @ 0x1407BD340
 * Callers:
 *     <none>
 * Callees:
 *     SmKmStoreReferenceEx @ 0x14028A8EC (SmKmStoreReferenceEx.c)
 *     SmEtwEnabled @ 0x14028C158 (SmEtwEnabled.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14059F994 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmKmEtwLogStoreRundown @ 0x1407BD398 (SmKmEtwLogStoreRundown.c)
 */

void __fastcall SmEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  __int64 v4; // r8
  unsigned int i; // ebx
  unsigned __int64 v6; // rax

  if ( ControlCode <= 1 && (dword_140D244FC = MatchAnyKeyword | 0x40, ControlCode == 1) || ControlCode == 2 )
  {
    SmKmEtwLogStoreRundown(&qword_140D244F0, &SmGlobals, Level);
    if ( SmEtwEnabled(3) )
    {
      for ( i = 0; i < 0x400; ++i )
      {
        v6 = SmKmStoreReferenceEx((__int64)&SmGlobals, i, v4);
        if ( v6 )
          SMKM_STORE_MGR<SM_TRAITS>::SmStoreContentsRundown((__int64)&SmGlobals, v6);
      }
    }
  }
}
