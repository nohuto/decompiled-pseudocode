/*
 * XREFs of CreateTouchInputBuffer @ 0x1C01D8EA8
 * Callers:
 *     ?xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z @ 0x1C01D6BB0 (-xxxSendToTouchStack@@YAXPEAUDEVICEINFO@@IPEAUtagPOINTER_TOUCH_INFO@@K@Z.c)
 * Callees:
 *     memset @ 0x1C0160540 (memset.c)
 */

_BOOL8 __fastcall CreateTouchInputBuffer(__int64 a1, ULONG a2, __int64 a3, int a4, ULONG a5)
{
  __int64 v5; // rax
  __int64 v6; // r15
  void *Report; // rdi
  ULONG ReportLength; // esi
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r14
  unsigned int v12; // edx
  USHORT v13; // bx
  __int64 v14; // rcx
  __int128 *v15; // rax
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int16 v24; // r12
  int v25; // r15d
  char v26; // r15
  ULONG v27; // eax
  USHORT v29; // [rsp+48h] [rbp-91h]
  USHORT UsageList[2]; // [rsp+4Ch] [rbp-8Dh] BYREF
  ULONG UsageLength; // [rsp+50h] [rbp-89h] BYREF
  ULONG v32; // [rsp+54h] [rbp-85h] BYREF
  ULONG v33; // [rsp+58h] [rbp-81h] BYREF
  unsigned int v34; // [rsp+5Ch] [rbp-7Dh]
  __int128 UsageValue; // [rsp+68h] [rbp-71h]
  __int128 v36; // [rsp+78h] [rbp-61h]
  __int128 v37; // [rsp+88h] [rbp-51h]
  __int128 v38; // [rsp+98h] [rbp-41h]
  __int128 v39; // [rsp+A8h] [rbp-31h]
  __int128 v40; // [rsp+B8h] [rbp-21h]
  __int128 v41; // [rsp+C8h] [rbp-11h]
  __int128 v42; // [rsp+D8h] [rbp-1h]
  __int128 v43; // [rsp+E8h] [rbp+Fh]
  USHORT v44; // [rsp+138h] [rbp+5Fh] BYREF
  ULONG v45; // [rsp+140h] [rbp+67h]
  __int64 v46; // [rsp+148h] [rbp+6Fh]

  v46 = a3;
  v45 = a2;
  *(_DWORD *)UsageList = 3276866;
  v44 = 207;
  v5 = *(_QWORD *)(a1 + 456);
  v6 = a3;
  UsageLength = 2;
  v32 = 1;
  v33 = 1;
  Report = *(void **)(v5 + 24);
  ReportLength = *(unsigned __int16 *)(v5 + 44);
  PreparsedData = *(struct _HIDP_PREPARSED_DATA **)(v5 + 16);
  memset(Report, 0, *(unsigned __int16 *)(v5 + 44));
  v12 = a2 - 1;
  v13 = 1;
  v34 = v12;
  do
  {
    v29 = v13;
    v14 = a4 + (unsigned int)(unsigned __int16)(v13 - 1);
    if ( (unsigned int)v14 > v12 )
      break;
    v15 = (__int128 *)(v6 + 144 * v14);
    v16 = v15[1];
    UsageValue = *v15;
    v17 = v15[2];
    v36 = v16;
    v18 = v15[3];
    v37 = v17;
    v19 = v15[4];
    v38 = v18;
    v20 = v15[5];
    v39 = v19;
    v21 = v15[6];
    v40 = v20;
    v22 = v15[7];
    v41 = v21;
    v23 = v15[8];
    v42 = v22;
    v43 = v23;
    if ( HidP_SetUsageValue(
           HidP_Input,
           0xDu,
           v13,
           0x51u,
           DWORD1(UsageValue),
           PreparsedData,
           (PCHAR)Report,
           ReportLength) < 0 )
      return 0LL;
    if ( HidP_SetUsageValue(HidP_Input, 1u, v13, 0x30u, v37, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
      return 0LL;
    if ( HidP_SetUsageValue(HidP_Input, 1u, v13, 0x31u, DWORD1(v37), PreparsedData, (PCHAR)Report, ReportLength) < 0 )
      return 0LL;
    v24 = WORD6(UsageValue);
    v25 = BYTE12(UsageValue) & 4;
    if ( (BYTE12(UsageValue) & 4) != 0
      && HidP_SetUsages(HidP_Input, 0xDu, v13, UsageList, &UsageLength, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
    {
      return 0LL;
    }
    if ( (v24 & 2) != 0
      && !v25
      && HidP_SetUsages(HidP_Input, 0xDu, v13, &UsageList[1], &v32, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
    {
      return 0LL;
    }
    if ( v24 < 0 && HidP_SetUsages(HidP_Input, 0xFF00u, v13, &v44, &v33, PreparsedData, (PCHAR)Report, ReportLength) < 0 )
      return 0LL;
    v26 = BYTE4(v41);
    if ( (BYTE4(v41) & 4) != 0
      && HidP_SetUsageValue(HidP_Input, 0xDu, v13, 0x30u, HIDWORD(v43), PreparsedData, (PCHAR)Report, ReportLength) < 0 )
    {
      return 0LL;
    }
    if ( (v26 & 2) != 0
      && HidP_SetUsageValue(HidP_Input, 0xDu, v13, 0x3Fu, DWORD2(v43), PreparsedData, (PCHAR)Report, ReportLength) < 0
      || (v26 & 1) != 0
      && (HidP_SetUsageValue(
            HidP_Input,
            0xDu,
            v13,
            0x48u,
            abs32(v42 - DWORD2(v41)),
            PreparsedData,
            (PCHAR)Report,
            ReportLength) < 0
       || HidP_SetUsageValue(
            HidP_Input,
            0xDu,
            v13,
            0x49u,
            abs32(DWORD1(v42) - HIDWORD(v41)),
            PreparsedData,
            (PCHAR)Report,
            ReportLength) < 0) )
    {
      return 0LL;
    }
    v12 = v34;
    ++v13;
    v6 = v46;
  }
  while ( v29 < 4u );
  v27 = 0;
  if ( !a4 )
    v27 = v45;
  return HidP_SetUsageValue(HidP_Input, 0xDu, 0, 0x54u, v27, PreparsedData, (PCHAR)Report, ReportLength) >= 0
      && (!a5 || HidP_SetUsageValue(HidP_Input, 0xDu, 0, 0x56u, a5, PreparsedData, (PCHAR)Report, ReportLength) >= 0);
}
