/*
 * XREFs of SmProcessSystemStoreTrimRequest @ 0x14092A428
 * Callers:
 *     SmSetStoreInformation @ 0x14061D784 (SmSetStoreInformation.c)
 * Callees:
 *     SmKmStoreRefFromStoreIndex @ 0x14028A928 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x14059A2F0 (-SmTrimWsStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@_K@Z.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BFB0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessSystemStoreTrimRequest(unsigned __int64 a1, int a2, char a3)
{
  __int64 v5; // rcx
  _DWORD **v6; // rax
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h]

  if ( a2 != 16 )
    return 3221225990LL;
  if ( a3 )
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v5 = a1;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 15) = *(_BYTE *)(v5 + 15);
  }
  v8 = *(_OWORD *)a1;
  if ( (unsigned __int8)*(_OWORD *)a1 != 1 )
    return 3221225561LL;
  if ( (v8 & 0xFFFFFF00) != 0 || !*((_QWORD *)&v8 + 1) )
    return 3221225485LL;
  if ( dword_140D241B0 == -1 )
    return 3221226021LL;
  v6 = (_DWORD **)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, dword_140D241B0 & 0x3FF);
  return SMKM_STORE_MGR<SM_TRAITS>::SmTrimWsStore(v7, *v6, *((__int64 *)&v8 + 1));
}
