/*
 * XREFs of HalpTscReportSyncStatus @ 0x14085DD54
 * Callers:
 *     HalpTimerInitSystem @ 0x1403776D0 (HalpTimerInitSystem.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     HalpQueryMaximumRegisteredProcessorCount @ 0x140372460 (HalpQueryMaximumRegisteredProcessorCount.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void HalpTscReportSyncStatus()
{
  unsigned int MaximumRegisteredProcessorCount; // eax
  unsigned int v1; // r9d
  unsigned int *v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // eax
  int v5; // r9d
  char v6; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+34h] [rbp-15h] BYREF
  ULONG_PTR v8; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-9h] BYREF
  char *v10; // [rsp+60h] [rbp+17h]
  int v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+6Ch] [rbp+23h]
  ULONG_PTR *v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+78h] [rbp+2Fh]
  int v15; // [rsp+7Ch] [rbp+33h]
  int *v16; // [rsp+80h] [rbp+37h]
  int v17; // [rsp+88h] [rbp+3Fh]
  int v18; // [rsp+8Ch] [rbp+43h]

  if ( HalpTscWaves )
  {
    MaximumRegisteredProcessorCount = HalpQueryMaximumRegisteredProcessorCount();
    v1 = 0;
    if ( MaximumRegisteredProcessorCount )
    {
      v2 = (unsigned int *)HalpTscWaves;
      v3 = MaximumRegisteredProcessorCount;
      do
      {
        v4 = *v2++;
        if ( v4 <= v1 )
          v4 = v1;
        v1 = v4;
        --v3;
      }
      while ( v3 );
    }
    if ( (unsigned int)dword_140C04B50 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_140C04B50, 0x400000000000LL) )
      {
        v12 = 0;
        v15 = 0;
        v18 = 0;
        v6 = HalpTscAdjustAvailable;
        v10 = &v6;
        v8 = HalpTscMaximumComputedSpread;
        v13 = &v8;
        v16 = &v7;
        v7 = v5;
        v11 = 1;
        v14 = 8;
        v17 = 4;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C04B50,
          (unsigned __int8 *)byte_1400290EB,
          0LL,
          0LL,
          5u,
          &v9);
      }
    }
  }
}
