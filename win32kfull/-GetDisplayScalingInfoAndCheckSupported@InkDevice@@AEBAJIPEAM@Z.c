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
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId(
                             (Pointer *)a2,
                             (const struct tagPOINTER_INFO **)v13,
                             (const struct tagPOINTER_INFO **)a3);
  v6 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId >= 0 )
  {
    v7 = HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v13 + 16LL), 19);
    if ( !v7 )
    {
      v6 = -1073741823;
      if ( (unsigned int)dword_1C03570E0 <= 2 )
        return v6;
      v13[0] = -1073741823;
      goto LABEL_4;
    }
    v8 = *(_QWORD *)(v7 + 472);
    v9 = *(_DWORD **)(v8 + 16);
    if ( v9[499] != 1 )
    {
      PointerInfoByPointerId = -1073741637;
      v6 = -1073741637;
      if ( (unsigned int)dword_1C03570E0 <= 2 )
        return v6;
      goto LABEL_3;
    }
    if ( ((*(_DWORD *)(v8 + 224) - 1) & 0xFFFFFFFD) != 0 )
    {
      v10 = v9[504];
      v11 = v9[503];
    }
    else
    {
      v10 = v9[503];
      v11 = v9[504];
    }
    if ( *((_DWORD *)this + 31) != v10 )
    {
      PointerInfoByPointerId = -1073741637;
      v6 = -1073741637;
      if ( (unsigned int)dword_1C03570E0 <= 2 )
        return v6;
      goto LABEL_3;
    }
    if ( *((_DWORD *)this + 32) == v11 )
    {
      *a3 = (float)(v9[509] - v9[507]) / (float)v10;
      return v6;
    }
    PointerInfoByPointerId = -1073741637;
    v6 = -1073741637;
    if ( (unsigned int)dword_1C03570E0 > 2 )
    {
LABEL_3:
      v13[0] = PointerInfoByPointerId;
LABEL_4:
      v17 = 0;
      v15 = v13;
      v16 = 4;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C03570E0,
        (unsigned __int8 *)dword_1C031DA06,
        0LL,
        0LL,
        3u,
        &v14);
    }
  }
  else if ( (unsigned int)dword_1C03570E0 > 2 )
  {
    goto LABEL_3;
  }
  return v6;
}
