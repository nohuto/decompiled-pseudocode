/*
 * XREFs of RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable @ 0x1409C0054
 * Callers:
 *     RtlpFcUpdateUsageTriggers @ 0x1409C05F0 (RtlpFcUpdateUsageTriggers.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 *     RtlpFcCompareUsageSubscriptionToUsageSubscription @ 0x1405B2730 (RtlpFcCompareUsageSubscriptionToUsageSubscription.c)
 */

NTSTATUS __fastcall RtlpFcCalculateRequiredSizeForNewUsageSubscriptionTable(
        _DWORD *a1,
        int *a2,
        unsigned __int64 a3,
        ULONGLONG *a4)
{
  ULONGLONG v5; // r10
  unsigned __int64 v6; // r11
  __int64 v8; // rdi
  ULONGLONG v9; // rbp
  int *v10; // rsi
  __int64 v11; // rdx
  int v12; // eax
  ULONGLONG v13; // r9
  int v14; // ecx
  ULONGLONG v15; // rax
  int v16; // ecx
  unsigned __int64 v17; // r8
  int *v18; // rdx
  bool v19; // zf
  ULONGLONG v20; // rcx
  NTSTATUS result; // eax
  __int64 v22; // rdx
  unsigned __int64 v23; // rax

  v5 = 0LL;
  v6 = 0LL;
  if ( a1 )
  {
    v5 = (unsigned int)*a1;
    v8 = (__int64)(a1 + 1);
    v9 = v5;
    if ( *a1 )
    {
      v10 = a2;
      v11 = (__int64)(a2 + 1);
      do
      {
        if ( v6 >= a3 )
          goto LABEL_20;
        v12 = RtlpFcCompareUsageSubscriptionToUsageSubscription(v8, v11);
        if ( v12 )
        {
          if ( v12 != 1 )
          {
            ++v13;
            v8 += 16LL;
            continue;
          }
          v16 = *v10;
          v15 = v5 + 1;
          v10 += 5;
          ++v6;
          v11 += 20LL;
          if ( v16 )
            v15 = v5;
        }
        else
        {
          v14 = *v10;
          v15 = v5 - 1;
          v10 += 5;
          ++v13;
          v8 += 16LL;
          ++v6;
          v11 += 20LL;
          if ( !v14 )
            v15 = v5;
        }
        v5 = v15;
      }
      while ( v13 < v9 );
    }
  }
  if ( v6 < a3 )
  {
    v17 = a3 - v6;
    v18 = &a2[5 * v6];
    do
    {
      v19 = *v18 == 0;
      v20 = v5 + 1;
      v18 += 5;
      if ( !v19 )
        v20 = v5;
      v5 = v20;
      --v17;
    }
    while ( v17 );
  }
LABEL_20:
  if ( v5 )
  {
    result = RtlULongLongMult(v5, 0x10uLL, a4);
    if ( result >= 0 )
    {
      v22 = -1LL;
      v23 = *a4 + 4;
      if ( v23 >= *a4 )
        v22 = *a4 + 4;
      result = v23 < *a4 ? 0xC0000095 : 0;
      *a4 = v22;
    }
  }
  else
  {
    *a4 = 0LL;
    return 0;
  }
  return result;
}
