/*
 * XREFs of ?PopulatePayloadV1@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_COMMAND@@PEBXIMPEAUPayloadV1@12@@Z @ 0x1C025581C
 * Callers:
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C0254C20 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D21E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?PenTypeFromInkFeedbackPenType@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_PEN_TYPE@@PEAW4PenType@12@@Z @ 0x1C02557E8 (-PenTypeFromInkFeedbackPenType@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_PEN_TYPE@@PEAW4PenType@1.c)
 */

__int64 __fastcall Protocols::SuperWetInk::PopulatePayloadV1(int a1, __int64 a2, int a3, float a4, __int64 a5)
{
  char v5; // si
  unsigned int v9; // edi
  struct _EVENT_DATA_DESCRIPTOR v10; // xmm1
  struct _EVENT_DATA_DESCRIPTOR v11; // xmm0
  struct _EVENT_DATA_DESCRIPTOR v12; // xmm1
  int v13; // r15d
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  _DWORD v18[4]; // [rsp+38h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19[5]; // [rsp+48h] [rbp-31h] BYREF

  v5 = 0;
  v9 = 0;
  memset(v19, 0, 0x48uLL);
  v10 = v19[1];
  *(struct _EVENT_DATA_DESCRIPTOR *)a5 = v19[0];
  v11 = v19[2];
  *(struct _EVENT_DATA_DESCRIPTOR *)(a5 + 16) = v10;
  v12 = v19[3];
  *(struct _EVENT_DATA_DESCRIPTOR *)(a5 + 32) = v11;
  v11.Ptr = v19[4].Ptr;
  *(struct _EVENT_DATA_DESCRIPTOR *)(a5 + 48) = v12;
  *(_QWORD *)(a5 + 64) = v11.Ptr;
  *(_BYTE *)a5 = 1;
  v13 = a1 - 1;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      if ( a3 == 4 )
      {
        *(_BYTE *)(a5 + 1) = 2;
      }
      else
      {
        v14 = -1073741811;
        v9 = -1073741811;
        if ( (unsigned int)dword_1C032B288 > 2 )
          goto LABEL_11;
      }
    }
    else
    {
      v14 = -1073741811;
      v9 = -1073741811;
      if ( (unsigned int)dword_1C032B288 > 2 )
        goto LABEL_11;
    }
    return v9;
  }
  if ( a3 == 64 )
  {
    *(_BYTE *)(a5 + 1) = 1;
    v15 = *(_DWORD *)(a2 + 4);
    v18[0] = 0;
    v14 = Protocols::SuperWetInk::PenTypeFromInkFeedbackPenType(v15, v18);
    v9 = v14;
    if ( v14 < 0 )
    {
      if ( (unsigned int)dword_1C032B288 <= 2 )
        return v9;
      goto LABEL_11;
    }
    *(_BYTE *)(a5 + 12) = v18[0];
    *(_BYTE *)(a5 + 13) = *(_BYTE *)(a2 + 8);
    *(_BYTE *)(a5 + 14) = *(_BYTE *)(a2 + 9);
    *(_BYTE *)(a5 + 15) = *(_BYTE *)(a2 + 10);
    *(_BYTE *)(a5 + 16) = *(_BYTE *)(a2 + 11);
    *(float *)(a5 + 17) = a4 * *(float *)(a2 + 12);
    v16 = *(_DWORD *)(a2 + 16);
    if ( v16 )
    {
      if ( v16 == 1 )
      {
        v9 = 0;
        v5 = 1;
        goto LABEL_20;
      }
      v9 = -1073741811;
    }
    else
    {
      v9 = 0;
    }
    if ( (v9 & 0x80000000) != 0 )
    {
      if ( (unsigned int)dword_1C032B288 <= 2 )
        return v9;
      v18[0] = v9;
      goto LABEL_12;
    }
LABEL_20:
    *(_BYTE *)(a5 + 21) = v5;
    *(_DWORD *)(a5 + 22) = *(_DWORD *)(a2 + 20);
    *(_DWORD *)(a5 + 26) = *(_DWORD *)(a2 + 24);
    *(_DWORD *)(a5 + 30) = *(_DWORD *)(a2 + 28);
    *(_DWORD *)(a5 + 34) = *(_DWORD *)(a2 + 32);
    *(_DWORD *)(a5 + 38) = *(_DWORD *)(a2 + 36);
    *(_DWORD *)(a5 + 42) = *(_DWORD *)(a2 + 40);
    *(_BYTE *)(a5 + 62) = *(_DWORD *)(a2 + 60) & 1;
    *(_BYTE *)(a5 + 63) = (*(_DWORD *)(a2 + 60) & 4u) >> 2;
    return v9;
  }
  v14 = -1073741811;
  v9 = -1073741811;
  if ( (unsigned int)dword_1C032B288 > 2 )
  {
LABEL_11:
    v18[0] = v14;
LABEL_12:
    *(_QWORD *)&v19[2].Size = 4LL;
    v19[2].Ptr = (ULONGLONG)v18;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C032B288, (unsigned __int8 *)dword_1C02F2FAC, 0LL, 0LL, 3u, v19);
  }
  return v9;
}
