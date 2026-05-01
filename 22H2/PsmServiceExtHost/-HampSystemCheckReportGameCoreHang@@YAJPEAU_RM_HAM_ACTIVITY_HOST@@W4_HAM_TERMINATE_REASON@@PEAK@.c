/*
 * XREFs of ?HampSystemCheckReportGameCoreHang@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_REASON@@PEAK@Z @ 0x180077DD4
 * Callers:
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007DD7C (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     IsGetPackageTypeForPsmKeyPresent @ 0x1800457D0 (IsGetPackageTypeForPsmKeyPresent.c)
 */

__int64 __fastcall HampSystemCheckReportGameCoreHang(__int64 a1, int a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  int v8; // [rsp+48h] [rbp+20h] BYREF

  if ( !IsGetPackageTypeForPsmKeyPresent() )
    goto LABEL_2;
  result = GetPackageTypeForPsmKey(a1 + 24, &v8);
  if ( (int)result < 0 )
    return result;
  if ( v8 != 1 )
  {
LABEL_2:
    *a3 = 0;
    return 0LL;
  }
  switch ( a2 )
  {
    case 3328:
      v7 = 1LL;
      break;
    case 3584:
      v7 = 0LL;
      break;
    case 5120:
      v7 = 2LL;
      break;
    default:
      return 3221225714LL;
  }
  result = CollectErrorReportForGameCorePsmKey(a1 + 24, v7);
  if ( (int)result >= 0 )
  {
    *a3 = 1;
    return 0LL;
  }
  return result;
}
