/*
 * XREFs of CreateTouchInputBuffer @ 0x1C01B368C
 * Callers:
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01B1194 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 * Callees:
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

__int64 __fastcall CreateTouchInputBuffer(__int64 a1, ULONG a2, __int64 a3, int a4, ULONG a5)
{
  USHORT v5; // di
  __int64 v6; // rax
  __int64 v7; // r13
  int v9; // r12d
  void *Report; // rsi
  ULONG ReportLength; // r14d
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r15
  unsigned int v13; // edx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  __int128 *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int16 v25; // r13
  int v26; // r12d
  char v27; // r12
  ULONG v28; // eax
  USHORT v30; // [rsp+48h] [rbp-A1h]
  USHORT UsageList[2]; // [rsp+4Ch] [rbp-9Dh] BYREF
  ULONG UsageLength; // [rsp+50h] [rbp-99h] BYREF
  ULONG v33; // [rsp+54h] [rbp-95h] BYREF
  ULONG v34; // [rsp+58h] [rbp-91h] BYREF
  unsigned int v35; // [rsp+5Ch] [rbp-8Dh]
  __int128 UsageValue; // [rsp+68h] [rbp-81h]
  __int128 v37; // [rsp+78h] [rbp-71h]
  __int128 v38; // [rsp+88h] [rbp-61h]
  __int128 v39; // [rsp+98h] [rbp-51h]
  __int128 v40; // [rsp+A8h] [rbp-41h]
  __int128 v41; // [rsp+B8h] [rbp-31h]
  __int128 v42; // [rsp+C8h] [rbp-21h]
  __int128 v43; // [rsp+D8h] [rbp-11h]
  __int128 v44; // [rsp+E8h] [rbp-1h]
  USHORT v45; // [rsp+148h] [rbp+5Fh] BYREF
  ULONG v46; // [rsp+150h] [rbp+67h]
  __int64 v47; // [rsp+158h] [rbp+6Fh]
  int v48; // [rsp+160h] [rbp+77h]

  v48 = a4;
  v47 = a3;
  v46 = a2;
  *(_DWORD *)UsageList = 3276866;
  v45 = 207;
  v5 = 1;
  v6 = *(_QWORD *)(a1 + 456);
  v7 = a3;
  UsageLength = 2;
  v33 = 1;
  v34 = 1;
  v9 = a4;
  Report = *(void **)(v6 + 24);
  ReportLength = *(unsigned __int16 *)(v6 + 44);
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(v6 + 16);
  memset_0(Report, 0, *(unsigned __int16 *)(v6 + 44));
  v13 = a2 - 1;
  v14 = 0;
  v35 = v13;
  do
  {
    v30 = v5;
    v15 = v9 + (unsigned int)(unsigned __int16)(v5 - 1);
    if ( (unsigned int)v15 > v13 )
      break;
    v16 = (__int128 *)(v7 + 144 * v15);
    v17 = v16[1];
    UsageValue = *v16;
    v18 = v16[2];
    v37 = v17;
    v19 = v16[3];
    v38 = v18;
    v20 = v16[4];
    v39 = v19;
    v21 = v16[5];
    v40 = v20;
    v22 = v16[6];
    v41 = v21;
    v23 = v16[7];
    v42 = v22;
    v24 = v16[8];
    v43 = v23;
    v44 = v24;
    if ( HidP_SetUsageValue(HidP_Input, 0xDu, v5, 0x51u, DWORD1(UsageValue), PreparsedData, (PCHAR)Report, ReportLength) < 0 )
      return 0LL;
    if ( HidP_SetUsageValue(HidP_Input, 1u, v5, 0x30u, v38, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
      return 0LL;
    if ( HidP_SetUsageValue(HidP_Input, 1u, v5, 0x31u, DWORD1(v38), PreparsedData, (PCHAR)Report, ReportLength) < 0 )
      return 0LL;
    v25 = WORD6(UsageValue);
    v26 = BYTE12(UsageValue) & 4;
    if ( (BYTE12(UsageValue) & 4) != 0
      && HidP_SetUsages(HidP_Input, 0xDu, v5, UsageList, &UsageLength, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
    {
      return 0LL;
    }
    if ( (v25 & 2) != 0
      && !v26
      && HidP_SetUsages(HidP_Input, 0xDu, v5, &UsageList[1], &v33, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
    {
      return 0LL;
    }
    if ( v25 < 0 && HidP_SetUsages(HidP_Input, 0xFF00u, v5, &v45, &v34, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
      return 0LL;
    v27 = BYTE4(v42);
    if ( (BYTE4(v42) & 4) != 0
      && HidP_SetUsageValue(HidP_Input, 0xDu, v5, 0x30u, HIDWORD(v44), PreparsedData, (PCHAR)Report, ReportLength) < 0 )
    {
      return 0LL;
    }
    if ( (v27 & 2) != 0
      && HidP_SetUsageValue(HidP_Input, 0xDu, v5, 0x3Fu, DWORD2(v44), PreparsedData, (PCHAR)Report, ReportLength) < 0
      || (v27 & 1) != 0
      && (HidP_SetUsageValue(
            HidP_Input,
            0xDu,
            v5,
            0x48u,
            abs32(v43 - DWORD2(v42)),
            PreparsedData,
            (PCHAR)Report,
            ReportLength) < 0
       || HidP_SetUsageValue(
            HidP_Input,
            0xDu,
            v5,
            0x49u,
            abs32(DWORD1(v43) - HIDWORD(v42)),
            PreparsedData,
            (PCHAR)Report,
            ReportLength) < 0) )
    {
      return 0LL;
    }
    v9 = v48;
    ++v5;
    v13 = v35;
    v7 = v47;
  }
  while ( v30 < 4u );
  v28 = 0;
  if ( !v9 )
    v28 = v46;
  if ( HidP_SetUsageValue(HidP_Input, 0xDu, 0, 0x54u, v28, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
    return 0LL;
  if ( !a5 )
    return 1LL;
  LOBYTE(v14) = HidP_SetUsageValue(HidP_Input, 0xDu, 0, 0x56u, a5, PreparsedData, (PCHAR)Report, ReportLength) >= 0;
  return v14;
}
