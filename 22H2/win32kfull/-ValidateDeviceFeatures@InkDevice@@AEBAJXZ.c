/*
 * XREFs of ?ValidateDeviceFeatures@InkDevice@@AEBAJXZ @ 0x1C0255E8C
 * Callers:
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0254E70 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D1C24 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

__int64 __fastcall InkDevice::ValidateDeviceFeatures(InkDevice *this)
{
  unsigned int v1; // ebx
  int v2; // eax
  int v4; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-38h] BYREF
  int *v6; // [rsp+58h] [rbp-18h]
  __int64 v7; // [rsp+60h] [rbp-10h]

  v1 = 0;
  if ( *((_DWORD *)this + 29) == 1 )
  {
    if ( *((_DWORD *)this + 30) == 1 )
    {
      if ( *((_DWORD *)this + 35) == 1 )
      {
        if ( *((_DWORD *)this + 28) != 72 )
        {
          v2 = -1073741762;
          v1 = -1073741762;
          if ( (unsigned int)dword_1C032A288 > 2 )
            goto LABEL_14;
        }
      }
      else
      {
        v2 = -1073741637;
        v1 = -1073741637;
        if ( (unsigned int)dword_1C032A288 > 2 )
          goto LABEL_14;
      }
    }
    else
    {
      v2 = -1073741637;
      v1 = -1073741637;
      if ( (unsigned int)dword_1C032A288 > 2 )
        goto LABEL_14;
    }
  }
  else
  {
    v2 = -1073741637;
    v1 = -1073741637;
    if ( (unsigned int)dword_1C032A288 > 2 )
    {
LABEL_14:
      v4 = v2;
      v7 = 4LL;
      v6 = &v4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C032A288,
        (unsigned __int8 *)dword_1C02F1ECC,
        0LL,
        0LL,
        3u,
        &v5);
    }
  }
  return v1;
}
