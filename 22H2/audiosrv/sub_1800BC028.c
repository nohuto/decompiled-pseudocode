/*
 * XREFs of sub_1800BC028 @ 0x1800BC028
 * Callers:
 *     sub_1800BBB74 @ 0x1800BBB74 (sub_1800BBB74.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

char __fastcall sub_1800BC028(HANDLE HidDeviceObject, _OWORD *a2, PHIDP_PREPARSED_DATA *a3)
{
  char v6; // di
  struct _HIDP_PREPARSED_DATA *v7; // rcx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  PHIDP_PREPARSED_DATA PreparsedData; // [rsp+20h] [rbp-39h] BYREF
  _HIDD_ATTRIBUTES Attributes; // [rsp+28h] [rbp-31h] BYREF
  _HIDP_CAPS Capabilities; // [rsp+40h] [rbp-19h] BYREF

  PreparsedData = 0LL;
  v6 = 0;
  if ( HidD_GetAttributes(HidDeviceObject, &Attributes)
    && Attributes.VendorID == 1118
    && Attributes.ProductID == 1574
    && HidD_GetPreparsedData(HidDeviceObject, &PreparsedData)
    && HidP_GetCaps(PreparsedData, &Capabilities)
    && Capabilities.UsagePage == 11 )
  {
    v7 = 0LL;
    v8 = *(_OWORD *)&Capabilities.Usage;
    v6 = 1;
    v9 = *(_OWORD *)&Capabilities.Reserved[3];
    *a3 = PreparsedData;
    *a2 = v8;
    v10 = *(_OWORD *)&Capabilities.Reserved[11];
    a2[1] = v9;
    v11 = *(_OWORD *)&Capabilities.NumberInputValueCaps;
    a2[2] = v10;
    a2[3] = v11;
    PreparsedData = 0LL;
  }
  else
  {
    v7 = PreparsedData;
  }
  if ( v7 )
    HidD_FreePreparsedData(v7);
  return v6;
}
