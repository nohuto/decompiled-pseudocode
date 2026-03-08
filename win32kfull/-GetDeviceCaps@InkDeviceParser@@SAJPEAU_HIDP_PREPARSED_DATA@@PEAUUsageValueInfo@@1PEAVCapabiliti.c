/*
 * XREFs of ?GetDeviceCaps@InkDeviceParser@@SAJPEAU_HIDP_PREPARSED_DATA@@PEAUUsageValueInfo@@1PEAVCapabilities@InkDevice@@@Z @ 0x1C02416E8
 * Callers:
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0246650 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C00F8FF0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 */

__int64 __fastcall InkDeviceParser::GetDeviceCaps(
        PHIDP_PREPARSED_DATA PreparsedData,
        struct UsageValueInfo *a2,
        struct UsageValueInfo *a3,
        struct InkDevice::Capabilities *a4)
{
  unsigned int v4; // r12d
  _BYTE *v5; // rsi
  struct UsageValueInfo *v10; // rbx
  USAGE v11; // r9
  USAGE v12; // dx
  NTSTATUS SpecificValueCaps; // ecx
  unsigned int v14; // ebx
  _BYTE *v15; // rsi
  struct UsageValueInfo *v16; // rbx
  char v17; // al
  unsigned int v18; // r14d
  USAGE v19; // r9
  USAGE v20; // dx
  USHORT ValueCapsLength[4]; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+48h] [rbp-21h] BYREF
  USHORT *v24; // [rsp+68h] [rbp-1h]
  __int64 v25; // [rsp+70h] [rbp+7h]

  v4 = 0;
  v5 = &unk_1C032324C;
  v10 = a2;
  do
  {
    v11 = *((_WORD *)v5 - 1);
    v12 = *((_WORD *)v5 - 2);
    ValueCapsLength[0] = 1;
    SpecificValueCaps = HidP_GetSpecificValueCaps(
                          HidP_Feature,
                          v12,
                          0,
                          v11,
                          (PHIDP_VALUE_CAPS)((char *)a2 + 76 * v4 + 4),
                          ValueCapsLength,
                          PreparsedData);
    if ( SpecificValueCaps < 0 )
    {
      *(_BYTE *)v10 = 0;
      if ( *v5 )
        break;
      SpecificValueCaps = 0;
    }
    else
    {
      *(_BYTE *)v10 = 1;
      if ( *((_BYTE *)v10 + 6) != *((_BYTE *)a2 + 6) )
      {
        if ( *v5 )
        {
          SpecificValueCaps = -1073741762;
          v14 = -1073741762;
          goto LABEL_10;
        }
        *(_BYTE *)v10 = 0;
      }
    }
    ++v4;
    v10 = (struct UsageValueInfo *)((char *)v10 + 76);
    v5 += 6;
  }
  while ( v4 < 7 );
  v14 = SpecificValueCaps;
  if ( SpecificValueCaps >= 0 )
  {
    v15 = &unk_1C0323240;
    *(_BYTE *)a4 = *((_BYTE *)a2 + 6);
    v16 = a3;
    *((_BYTE *)a4 + 2) = *((_BYTE *)a2 + 380);
    v17 = *((_BYTE *)a2 + 456);
    v18 = 0;
    *((_BYTE *)a4 + 1) = v17;
    do
    {
      v19 = *((_WORD *)v15 - 1);
      v20 = *((_WORD *)v15 - 2);
      ValueCapsLength[0] = 1;
      SpecificValueCaps = HidP_GetSpecificValueCaps(
                            HidP_Output,
                            v20,
                            0,
                            v19,
                            (PHIDP_VALUE_CAPS)((char *)a3 + 76 * v18 + 4),
                            ValueCapsLength,
                            PreparsedData);
      if ( SpecificValueCaps < 0 )
      {
        *(_BYTE *)v16 = 0;
        if ( *v15 )
          break;
        SpecificValueCaps = 0;
      }
      else
      {
        *(_BYTE *)v16 = 1;
        if ( *((_BYTE *)v16 + 6) != *((_BYTE *)a3 + 6) )
        {
          if ( *v15 )
          {
            SpecificValueCaps = -1073741762;
            v14 = -1073741762;
LABEL_22:
            if ( (unsigned int)dword_1C03570E0 <= 2 )
              return v14;
            goto LABEL_11;
          }
          *(_BYTE *)v16 = 0;
        }
      }
      ++v18;
      v16 = (struct UsageValueInfo *)((char *)v16 + 76);
      v15 += 6;
    }
    while ( !v18 );
    v14 = SpecificValueCaps;
    if ( SpecificValueCaps < 0 )
      goto LABEL_22;
    if ( *((_WORD *)a3 + 11) == 8 )
    {
      *((_BYTE *)a4 + 4) = *((_BYTE *)a3 + 6);
      *((_DWORD *)a4 + 2) = *((unsigned __int16 *)a3 + 12);
      return v14;
    }
    SpecificValueCaps = -1073741762;
    v14 = -1073741762;
    if ( (unsigned int)dword_1C03570E0 <= 2 )
      return v14;
    goto LABEL_11;
  }
LABEL_10:
  if ( (unsigned int)dword_1C03570E0 <= 2 )
    return v14;
LABEL_11:
  v25 = 4LL;
  v24 = ValueCapsLength;
  *(_DWORD *)ValueCapsLength = SpecificValueCaps;
  tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C03570E0, (unsigned __int8 *)dword_1C031DA06, 0LL, 0LL, 3u, &v23);
  return v14;
}
