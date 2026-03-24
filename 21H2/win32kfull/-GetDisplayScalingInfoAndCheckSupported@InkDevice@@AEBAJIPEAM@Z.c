/*
 * XREFs of ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1C0255278
 * Callers:
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C0254E50 (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C008C3F8 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D21E4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0243814 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall InkDevice::GetDisplayScalingInfoAndCheckSupported(InkDevice *this, unsigned int a2, float *a3)
{
  int PointerInfoByPointerId; // eax
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  _DWORD *v9; // rcx
  int v10; // edx
  int v11; // eax
  unsigned int v13[2]; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+38h] [rbp-38h] BYREF
  unsigned int *v15; // [rsp+58h] [rbp-18h]
  int v16; // [rsp+60h] [rbp-10h]
  int v17; // [rsp+64h] [rbp-Ch]

  *(_QWORD *)v13 = 0LL;
  *a3 = 1.0;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId((Pointer *)a2, v13, (const struct tagPOINTER_INFO **)a3);
  v6 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId >= 0 )
  {
    v7 = HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v13 + 16LL), 19);
    if ( !v7 )
    {
      v6 = -1073741823;
      if ( (unsigned int)dword_1C032B288 <= 2 )
        return v6;
      v13[0] = -1073741823;
      goto LABEL_4;
    }
    v8 = *(_QWORD *)(v7 + 480);
    v9 = *(_DWORD **)(v8 + 16);
    if ( v9[501] != 1 )
    {
      PointerInfoByPointerId = -1073741637;
      v6 = -1073741637;
      if ( (unsigned int)dword_1C032B288 <= 2 )
        return v6;
      goto LABEL_3;
    }
    if ( ((*(_DWORD *)(v8 + 224) - 1) & 0xFFFFFFFD) != 0 )
    {
      v10 = v9[506];
      v11 = v9[505];
    }
    else
    {
      v10 = v9[505];
      v11 = v9[506];
    }
    if ( *((_DWORD *)this + 31) != v10 )
    {
      PointerInfoByPointerId = -1073741637;
      v6 = -1073741637;
      if ( (unsigned int)dword_1C032B288 <= 2 )
        return v6;
      goto LABEL_3;
    }
    if ( *((_DWORD *)this + 32) == v11 )
    {
      *a3 = (float)(v9[511] - v9[509]) / (float)v10;
      return v6;
    }
    PointerInfoByPointerId = -1073741637;
    v6 = -1073741637;
    if ( (unsigned int)dword_1C032B288 > 2 )
    {
LABEL_3:
      v13[0] = PointerInfoByPointerId;
LABEL_4:
      v17 = 0;
      v15 = v13;
      v16 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C032B288,
        (unsigned __int8 *)dword_1C02F2FAC,
        0LL,
        0LL,
        3u,
        &v14);
    }
  }
  else if ( (unsigned int)dword_1C032B288 > 2 )
  {
    goto LABEL_3;
  }
  return v6;
}
