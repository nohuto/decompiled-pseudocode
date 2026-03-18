/*
 * XREFs of _SetTargetingWindowValue @ 0x1C010CE3C
 * Callers:
 *     NtUserRegisterTouchHitTestingWindow @ 0x1C010CDC0 (NtUserRegisterTouchHitTestingWindow.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0069510 (InternalRemoveProp.c)
 *     InternalSetProp @ 0x1C0083110 (InternalSetProp.c)
 */

__int64 __fastcall SetTargetingWindowValue(__int64 a1, int a2)
{
  __int64 v3; // rbx
  __int64 v5; // rdx

  v3 = a2;
  if ( gSqmIsOptedIn )
  {
    switch ( a2 )
    {
      case 0:
        WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 8295LL, 1LL);
        goto LABEL_11;
      case 1:
        v5 = 8635LL;
        break;
      case 2:
        v5 = 8636LL;
        break;
      default:
        goto LABEL_2;
    }
    WinSqmIncrementDWORD(&SqmGlobalSessionGuid, v5, 1LL);
    return InternalSetProp(a1, (unsigned __int16)gatomPtrTargetFlags, v3, 5u);
  }
LABEL_2:
  if ( a2 )
    return InternalSetProp(a1, (unsigned __int16)gatomPtrTargetFlags, v3, 5u);
LABEL_11:
  InternalRemoveProp(a1, (unsigned __int16)gatomPtrTargetFlags, 1u);
  return 1LL;
}
