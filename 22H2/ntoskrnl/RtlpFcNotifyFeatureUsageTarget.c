/*
 * XREFs of RtlpFcNotifyFeatureUsageTarget @ 0x1409C876C
 * Callers:
 *     RtlpFcSendFeatureUsageNotifications @ 0x1409C88CC (RtlpFcSendFeatureUsageNotifications.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x14041D460 (ZwQueryWnfStateData.c)
 *     ZwUpdateWnfStateData @ 0x14041E260 (ZwUpdateWnfStateData.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpFcNotifyFeatureUsageTarget(__int64 a1, _DWORD *a2)
{
  _DWORD *Pool2; // rdi
  int WnfStateData; // ebx
  unsigned int i; // ecx
  _DWORD v7[2]; // [rsp+48h] [rbp-18h] BYREF

  v7[0] = *a2;
  v7[1] = a2[1];
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 4096LL, 1852793670LL);
  if ( Pool2 )
  {
    do
    {
      WnfStateData = ZwQueryWnfStateData((__int64)v7, 0LL);
      if ( WnfStateData >= 0 )
      {
        for ( i = 0; i < 0x200; ++i )
        {
          if ( Pool2[2 * i] == *(_DWORD *)a1 && LOWORD(Pool2[2 * i + 1]) == *(_WORD *)(a1 + 4) )
            break;
        }
        WnfStateData = ZwUpdateWnfStateData((__int64)v7, (__int64)Pool2);
      }
    }
    while ( WnfStateData == -1073741823 );
    ExFreePoolWithTag(Pool2, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)WnfStateData;
}
