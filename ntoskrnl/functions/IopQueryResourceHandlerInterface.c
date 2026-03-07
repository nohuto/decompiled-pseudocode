__int64 __fastcall IopQueryResourceHandlerInterface(int a1, __int64 a2, unsigned __int8 a3, unsigned __int16 **a4)
{
  __int64 v4; // rax
  __int64 v6; // r12
  int v9; // ecx
  GUID v10; // xmm0
  unsigned __int16 v11; // bx
  unsigned __int16 *Pool2; // rax
  unsigned __int16 *v13; // rsi
  int v14; // ebx
  int v16; // ecx
  int v17; // edi
  _QWORD v18[9]; // [rsp+30h] [rbp-39h] BYREF
  GUID v19; // [rsp+78h] [rbp+Fh] BYREF

  v4 = *(_QWORD *)(a2 + 312);
  v6 = a3;
  v19 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)(v4 + 40) + 432LL) == *(_QWORD *)(a2 + 8) || (*(_DWORD *)(a2 + 48) & 0x1000) == 0 )
    return 3221225659LL;
  v9 = a1 - 1;
  if ( v9 )
  {
    v16 = v9 - 1;
    if ( v16 )
    {
      if ( v16 != 1 )
        return 3221225485LL;
      v10 = GUID_LEGACY_DEVICE_DETECTION_STANDARD;
      v11 = 40;
    }
    else
    {
      v10 = GUID_ARBITER_INTERFACE_STANDARD;
      v11 = 48;
    }
  }
  else
  {
    v10 = GUID_TRANSLATOR_INTERFACE_STANDARD;
    v11 = 52;
  }
  v19 = v10;
  Pool2 = (unsigned __int16 *)ExAllocatePool2(256LL, v11, 538996816LL);
  v13 = Pool2;
  if ( Pool2 )
  {
    *Pool2 = v11;
    memset(v18, 0, sizeof(v18));
    LOWORD(v18[0]) = 2075;
    v18[1] = &v19;
    LOWORD(v18[2]) = v11;
    v13[1] = 0;
    WORD1(v18[2]) = 0;
    v18[3] = v13;
    v18[4] = v6;
    v14 = IopSynchronousCall((_QWORD *)a2, (__int64)v18, -1073741637, 0LL, 0LL);
    if ( v14 < 0 )
    {
LABEL_7:
      ExFreePoolWithTag(v13, 0);
      return (unsigned int)v14;
    }
    v17 = a1 - 1;
    if ( v17 )
    {
      if ( (unsigned int)(v17 - 1) > 1 )
      {
        v14 = -1073741811;
        goto LABEL_7;
      }
      if ( !*((_QWORD *)v13 + 4) )
      {
        v14 = -1073741823;
        goto LABEL_7;
      }
    }
    else if ( !*((_QWORD *)v13 + 4) || !*((_QWORD *)v13 + 5) )
    {
      v14 = -1073741823;
      goto LABEL_7;
    }
    *a4 = v13;
    return (unsigned int)v14;
  }
  return 3221225626LL;
}
