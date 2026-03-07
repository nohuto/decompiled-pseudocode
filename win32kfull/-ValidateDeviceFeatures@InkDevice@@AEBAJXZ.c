__int64 __fastcall InkDevice::ValidateDeviceFeatures(InkDevice *this)
{
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-38h] BYREF
  int *v5; // [rsp+58h] [rbp-18h]
  __int64 v6; // [rsp+60h] [rbp-10h]

  v1 = 0;
  if ( *((_DWORD *)this + 29) == 1 )
  {
    if ( *((_DWORD *)this + 30) == 1 )
    {
      if ( *((_DWORD *)this + 35) == 1 )
      {
        if ( *((_DWORD *)this + 28) != 72 )
        {
          v1 = -1073741762;
          if ( (unsigned int)dword_1C03570E0 > 2 )
          {
            v3 = -1073741762;
            goto LABEL_13;
          }
        }
      }
      else
      {
        v1 = -1073741637;
        if ( (unsigned int)dword_1C03570E0 > 2 )
        {
          v3 = -1073741637;
          goto LABEL_13;
        }
      }
    }
    else
    {
      v1 = -1073741637;
      if ( (unsigned int)dword_1C03570E0 > 2 )
      {
        v3 = -1073741637;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v1 = -1073741637;
    if ( (unsigned int)dword_1C03570E0 > 2 )
    {
      v3 = -1073741637;
LABEL_13:
      v6 = 4LL;
      v5 = &v3;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C03570E0,
        (unsigned __int8 *)dword_1C031DA06,
        0LL,
        0LL,
        3u,
        &v4);
    }
  }
  return v1;
}
