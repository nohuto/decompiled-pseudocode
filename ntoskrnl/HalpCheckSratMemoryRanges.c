/*
 * XREFs of HalpCheckSratMemoryRanges @ 0x140518788
 * Callers:
 *     HalpNumaAddRangeProximity @ 0x140518980 (HalpNumaAddRangeProximity.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14035F490 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

void __fastcall HalpCheckSratMemoryRanges(unsigned __int64 a1)
{
  unsigned __int64 v1; // r9
  unsigned int v2; // edx
  unsigned __int64 *v3; // rax
  __int64 v4; // r9
  __int64 v5; // r10
  char *v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r11
  ULONG v10; // [rsp+20h] [rbp-49h]
  __int64 v11; // [rsp+30h] [rbp-39h] BYREF
  __int64 v12; // [rsp+38h] [rbp-31h] BYREF
  __int64 v13; // [rsp+40h] [rbp-29h] BYREF
  __int64 v14; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+50h] [rbp-19h] BYREF
  __int64 *v16; // [rsp+70h] [rbp+7h]
  int v17; // [rsp+78h] [rbp+Fh]
  int v18; // [rsp+7Ch] [rbp+13h]
  __int64 *v19; // [rsp+80h] [rbp+17h]
  int v20; // [rsp+88h] [rbp+1Fh]
  int v21; // [rsp+8Ch] [rbp+23h]
  __int64 *v22; // [rsp+90h] [rbp+27h]
  int v23; // [rsp+98h] [rbp+2Fh]
  int v24; // [rsp+9Ch] [rbp+33h]
  __int64 *v25; // [rsp+A0h] [rbp+37h]
  int v26; // [rsp+A8h] [rbp+3Fh]
  int v27; // [rsp+ACh] [rbp+43h]

  v1 = 0LL;
  v2 = 0;
  if ( (_DWORD)HalpNumaSratMemoryRangeCount )
  {
    v3 = (unsigned __int64 *)((char *)HalpNumaSratMemoryRanges + 16);
    while ( a1 <= v1 || a1 >= *(v3 - 1) )
    {
      v1 = *v3;
      ++v2;
      v3 += 3;
      if ( v2 >= (unsigned int)HalpNumaSratMemoryRangeCount )
      {
        if ( (_DWORD)HalpNumaSratMemoryRangeCount
          && a1 > v1
          && (unsigned int)dword_140C04B50 > 5
          && tlgKeywordOn((__int64)&dword_140C04B50, 0x400000000000LL) )
        {
          v13 = v5;
          v16 = &v13;
          v19 = &v12;
          v17 = 8;
          v20 = 8;
          v6 = byte_1400291E0;
          v23 = 8;
          v10 = 5;
          v12 = v4;
          v11 = 0x1000000LL;
          v22 = &v11;
LABEL_11:
          v18 = 0;
          v21 = 0;
          v24 = 0;
          tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C04B50, (unsigned __int8 *)v6, 0LL, 0LL, v10, &v15);
          return;
        }
        return;
      }
    }
    if ( (unsigned int)dword_140C04B50 > 5 && tlgKeywordOn((__int64)&dword_140C04B50, 0x400000000000LL) )
    {
      v27 = 0;
      v16 = &v14;
      v19 = &v11;
      v17 = 8;
      v20 = 8;
      v6 = &byte_14002923F;
      v23 = 8;
      v26 = 8;
      v22 = &v12;
      v10 = 6;
      v14 = v7;
      v11 = v8;
      v12 = v9;
      v13 = 0x1000000LL;
      v25 = &v13;
      goto LABEL_11;
    }
  }
}
