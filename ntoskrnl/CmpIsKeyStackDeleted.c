/*
 * XREFs of CmpIsKeyStackDeleted @ 0x1406B5978
 * Callers:
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     CmpEnlistKeyBody @ 0x14076EBCC (CmpEnlistKeyBody.c)
 *     CmpIsKeyDeleted @ 0x14077B358 (CmpIsKeyDeleted.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmpGetSymbolicLinkTarget @ 0x1407B0EF0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoWritethroughReparse @ 0x1407B6860 (CmpDoWritethroughReparse.c)
 *     CmpCreateKeyBody @ 0x1407BA4F0 (CmpCreateKeyBody.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpPromoteKey @ 0x140A238FC (CmpPromoteKey.c)
 * Callees:
 *     CmEqualTrans @ 0x1406B6428 (CmEqualTrans.c)
 *     CmpGetKcbAtLayerHeight @ 0x1407AF600 (CmpGetKcbAtLayerHeight.c)
 *     CmListGetNextElement @ 0x140AF2008 (CmListGetNextElement.c)
 */

bool __fastcall CmpIsKeyStackDeleted(__int64 a1)
{
  __int16 v1; // dx
  __int64 v2; // r8
  __int64 KcbAtLayerHeight; // rax
  __int16 v4; // dx
  __int64 v5; // r9
  __int64 v7; // r10
  __int64 v8; // r8
  int v9; // ecx
  __int64 NextElement; // rax
  __int64 v11; // r9
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_WORD *)(a1 + 2);
  v2 = a1;
  v12 = 0LL;
  if ( v1 >= 0 )
  {
    do
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v2);
      if ( *(_WORD *)(KcbAtLayerHeight + 66) )
      {
        if ( *(_BYTE *)(KcbAtLayerHeight + 65) == 1 )
          break;
      }
      if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
      {
        if ( v5 )
        {
          v7 = *(_QWORD *)(v2 + 8);
          v8 = 32LL;
          while ( 1 )
          {
            NextElement = CmListGetNextElement(v7 + 208, &v12, v8);
            if ( !NextElement )
              break;
            v9 = *(_DWORD *)(NextElement + 68);
            if ( v9 == 2 || v9 == 11 )
              return (unsigned __int8)CmEqualTrans(*(_QWORD *)(NextElement + 56), v11) != 0;
          }
        }
        return 0;
      }
    }
    while ( (__int16)(v4 - 1) >= 0 );
  }
  return 1;
}
