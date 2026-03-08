/*
 * XREFs of KiOp_Mov @ 0x1402EE9B0
 * Callers:
 *     <none>
 * Callees:
 *     KiOpPciConfigSpaceAccessCommon @ 0x14057D12C (KiOpPciConfigSpaceAccessCommon.c)
 */

__int64 __fastcall KiOp_Mov(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  int v4; // [rsp+30h] [rbp+10h] BYREF

  if ( *(_BYTE *)(a1 + 81) || (*(_DWORD *)(a1 + 60) & 0x2000000) == 0 )
    return 3221225659LL;
  switch ( *(unsigned __int8 *)(a1 + 56) )
  {
    case 0x88u:
      LOBYTE(v4) = 0;
      v2 = 1LL;
      v3 = a1;
      LOBYTE(a1) = 1;
      return KiOpPciConfigSpaceAccessCommon(a1, v3, v2, &v4);
    case 0x89u:
      if ( (*(_DWORD *)(a1 + 48) & 0x40) != 0 )
      {
        LOWORD(v4) = 0;
        v2 = 2LL;
      }
      else
      {
        if ( (*(_BYTE *)(a1 + 64) & 8) != 0 )
          return 3221225659LL;
        v4 = 0;
        v2 = 4LL;
      }
      v3 = a1;
      LOBYTE(a1) = 1;
      return KiOpPciConfigSpaceAccessCommon(a1, v3, v2, &v4);
    case 0x8Au:
      LOBYTE(v4) = 0;
      v2 = 1LL;
      goto LABEL_13;
  }
  if ( *(unsigned __int8 *)(a1 + 56) != 139 )
    return 3221225659LL;
  if ( (*(_DWORD *)(a1 + 48) & 0x40) == 0 )
  {
    if ( (*(_BYTE *)(a1 + 64) & 8) == 0 )
    {
      v4 = 0;
      v2 = 4LL;
      goto LABEL_13;
    }
    return 3221225659LL;
  }
  LOWORD(v4) = 0;
  v2 = 2LL;
LABEL_13:
  v3 = a1;
  a1 = 0LL;
  return KiOpPciConfigSpaceAccessCommon(a1, v3, v2, &v4);
}
