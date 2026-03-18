/*
 * XREFs of ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1C02437C0
 * Callers:
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C0243390 (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C0040C00 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     HMValidateHandleNoSecure @ 0x1C00F212C (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0227D10 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall InkDevice::GetDisplayScalingInfoAndCheckSupported(
        InkDevice *this,
        unsigned int a2,
        float *a3,
        __int64 a4)
{
  int PointerInfoByPointerId; // eax
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  _DWORD *v10; // rcx
  int v11; // edx
  int v12; // eax
  unsigned int v14[2]; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+38h] [rbp-38h] BYREF
  unsigned int *v16; // [rsp+58h] [rbp-18h]
  int v17; // [rsp+60h] [rbp-10h]
  int v18; // [rsp+64h] [rbp-Ch]

  *(_QWORD *)v14 = 0LL;
  *a3 = 1.0;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId(
                             (Pointer *)a2,
                             (const struct tagPOINTER_INFO **)v14,
                             (const struct tagPOINTER_INFO **)a3,
                             a4);
  v7 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId >= 0 )
  {
    v8 = HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v14 + 16LL), 19);
    if ( !v8 )
    {
      v7 = -1073741823;
      if ( (unsigned int)dword_1C03540E0 <= 2 )
        return v7;
      v14[0] = -1073741823;
      goto LABEL_4;
    }
    v9 = *(_QWORD *)(v8 + 472);
    v10 = *(_DWORD **)(v9 + 16);
    if ( v10[499] != 1 )
    {
      PointerInfoByPointerId = -1073741637;
      v7 = -1073741637;
      if ( (unsigned int)dword_1C03540E0 <= 2 )
        return v7;
      goto LABEL_3;
    }
    if ( ((*(_DWORD *)(v9 + 224) - 1) & 0xFFFFFFFD) != 0 )
    {
      v11 = v10[504];
      v12 = v10[503];
    }
    else
    {
      v11 = v10[503];
      v12 = v10[504];
    }
    if ( *((_DWORD *)this + 31) != v11 )
    {
      PointerInfoByPointerId = -1073741637;
      v7 = -1073741637;
      if ( (unsigned int)dword_1C03540E0 <= 2 )
        return v7;
      goto LABEL_3;
    }
    if ( *((_DWORD *)this + 32) == v12 )
    {
      *a3 = (float)(v10[509] - v10[507]) / (float)v11;
      return v7;
    }
    PointerInfoByPointerId = -1073741637;
    v7 = -1073741637;
    if ( (unsigned int)dword_1C03540E0 > 2 )
    {
LABEL_3:
      v14[0] = PointerInfoByPointerId;
LABEL_4:
      v18 = 0;
      v16 = v14;
      v17 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C03540E0,
        (unsigned __int8 *)dword_1C031C186,
        0LL,
        0LL,
        3u,
        &v15);
    }
  }
  else if ( (unsigned int)dword_1C03540E0 > 2 )
  {
    goto LABEL_3;
  }
  return v7;
}
