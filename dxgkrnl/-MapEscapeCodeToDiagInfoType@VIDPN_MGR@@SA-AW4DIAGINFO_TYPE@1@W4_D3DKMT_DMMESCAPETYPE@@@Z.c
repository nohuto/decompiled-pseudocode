/*
 * XREFs of ?MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA?AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z @ 0x1C03AA9FC
 * Callers:
 *     ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C03A82C8 (-DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDPN_MGR::MapEscapeCodeToDiagInfoType(int a1)
{
  __int64 result; // rax

  result = 8LL;
  if ( a1 <= 8 )
  {
    switch ( a1 )
    {
      case 8:
        return result;
      case 1:
        return 1LL;
      case 2:
        return 2LL;
      case 3:
        return 3LL;
      case 4:
        return 4LL;
      case 5:
        return 5LL;
      case 6:
        return 6LL;
      case 7:
        return 7LL;
    }
    goto LABEL_23;
  }
  result = 9LL;
  switch ( a1 )
  {
    case 9:
      return result;
    case 10:
      return 10LL;
    case 11:
      return 11LL;
    case 12:
      return 12LL;
    case 13:
      return 13LL;
  }
  if ( a1 != 14 )
  {
LABEL_23:
    WdLogSingleEntry1(2LL, a1);
    return 0LL;
  }
  return 14LL;
}
