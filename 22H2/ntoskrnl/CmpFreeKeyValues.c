/*
 * XREFs of CmpFreeKeyValues @ 0x1408790F0
 * Callers:
 *     CmDeleteLayeredKey @ 0x1404ECFB8 (CmDeleteLayeredKey.c)
 *     CmpSyncKeyValues @ 0x140879E7C (CmpSyncKeyValues.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x140656BC4 (HvFreeCell.c)
 *     CmpFreeValue @ 0x1406E4228 (CmpFreeValue.c)
 *     CmpMarkKeyValuesDirty @ 0x1408792F0 (CmpMarkKeyValuesDirty.c)
 */

char __fastcall CmpFreeKeyValues(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  unsigned int v6; // esi
  int v8; // [rsp+58h] [rbp+20h] BYREF
  int v9; // [rsp+5Ch] [rbp+24h]

  v8 = -1;
  v9 = 0;
  if ( (unsigned __int8)CmpMarkKeyValuesDirty(BugCheckParameter2) )
  {
    if ( (*(_BYTE *)(a3 + 2) & 2) != 0 )
      return 1;
    if ( !*(_DWORD *)(a3 + 36) )
    {
LABEL_9:
      *(_DWORD *)(a3 + 40) = -1;
      *(_DWORD *)(a3 + 36) = 0;
      if ( *(_WORD *)(a3 + 74) )
      {
        HvFreeCell(BugCheckParameter2, *(unsigned int *)(a3 + 48));
        *(_DWORD *)(a3 + 48) = -1;
        *(_WORD *)(a3 + 74) = 0;
      }
      return 1;
    }
    v5 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(
           BugCheckParameter2,
           *(unsigned int *)(a3 + 40),
           &v8);
    if ( v5 )
    {
      v6 = 0;
      if ( *(_DWORD *)(a3 + 36) )
      {
        while ( CmpFreeValue(BugCheckParameter2, *(unsigned int *)(v5 + 4LL * v6)) )
        {
          if ( ++v6 >= *(_DWORD *)(a3 + 36) )
            goto LABEL_8;
        }
        (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v8);
        return 0;
      }
LABEL_8:
      (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v8);
      HvFreeCell(BugCheckParameter2, *(unsigned int *)(a3 + 40));
      goto LABEL_9;
    }
  }
  return 0;
}
