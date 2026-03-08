/*
 * XREFs of ?PopulatePayloadV1@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_COMMAND@@PEBXIMPEAUPayloadV1@12@@Z @ 0x1C0246A10
 * Callers:
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C0245E40 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?PenTypeFromInkFeedbackPenType@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_PEN_TYPE@@PEAW4PenType@12@@Z @ 0x1C02469DC (-PenTypeFromInkFeedbackPenType@SuperWetInk@Protocols@@YAJW4INK_FEEDBACK_PEN_TYPE@@PEAW4PenType@1.c)
 */

__int64 __fastcall Protocols::SuperWetInk::PopulatePayloadV1(int a1, __int64 a2, int a3, float a4, __int64 a5)
{
  char v5; // r14
  unsigned int v9; // edi
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  int v13; // r15d
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  _DWORD v18[4]; // [rsp+38h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+48h] [rbp-31h] BYREF
  __int128 v20; // [rsp+58h] [rbp-21h]
  __int128 v21; // [rsp+68h] [rbp-11h]
  __int128 v22; // [rsp+78h] [rbp-1h]
  __int64 v23; // [rsp+88h] [rbp+Fh]

  v5 = 0;
  v9 = 0;
  memset_0(&v19, 0, 0x48uLL);
  v10 = v20;
  *(struct _EVENT_DATA_DESCRIPTOR *)a5 = v19;
  v11 = v21;
  *(_OWORD *)(a5 + 16) = v10;
  v12 = v22;
  *(_OWORD *)(a5 + 32) = v11;
  *(_QWORD *)&v11 = v23;
  *(_OWORD *)(a5 + 48) = v12;
  *(_QWORD *)(a5 + 64) = v11;
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
        if ( (unsigned int)dword_1C03570E0 > 2 )
          goto LABEL_11;
      }
    }
    else
    {
      v14 = -1073741811;
      v9 = -1073741811;
      if ( (unsigned int)dword_1C03570E0 > 2 )
        goto LABEL_11;
    }
  }
  else
  {
    if ( a3 == 64 )
    {
      *(_BYTE *)(a5 + 1) = 1;
      v15 = *(_DWORD *)(a2 + 4);
      v18[0] = 0;
      v14 = Protocols::SuperWetInk::PenTypeFromInkFeedbackPenType(v15, v18);
      v9 = v14;
      if ( v14 < 0 )
      {
        if ( (unsigned int)dword_1C03570E0 <= 2 )
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
        if ( v16 != 1 )
        {
          v14 = -1073741811;
          v9 = -1073741811;
          if ( (unsigned int)dword_1C03570E0 <= 2 )
            return v9;
          goto LABEL_11;
        }
        v9 = 0;
        v5 = 1;
      }
      else
      {
        v9 = 0;
      }
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
    if ( (unsigned int)dword_1C03570E0 > 2 )
    {
LABEL_11:
      v18[0] = v14;
      *((_QWORD *)&v21 + 1) = 4LL;
      *(_QWORD *)&v21 = v18;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C03570E0,
        (unsigned __int8 *)dword_1C031DA06,
        0LL,
        0LL,
        3u,
        &v19);
    }
  }
  return v9;
}
