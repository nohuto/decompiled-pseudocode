/*
 * XREFs of XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x1C003946C
 * Callers:
 *     XilEndpoint_FetchStreamContextArray @ 0x1C00390E8 (XilEndpoint_FetchStreamContextArray.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     memmove @ 0x1C0020400 (memmove.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0030BE4 (WPP_RECORDER_SF_ddL.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0052470 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilEndpoint_SendRequestToGetSecureStreamContextArray(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *a5)
{
  __int64 v5; // rdi
  size_t v7; // r14
  unsigned int v9; // ebx
  int *Pool2; // rsi
  int v11; // edx
  int v12; // ebx
  int v13; // edx
  int v14; // r9d
  char v16; // [rsp+28h] [rbp-58h]
  int v17; // [rsp+30h] [rbp-50h]
  __int64 v18; // [rsp+40h] [rbp-40h]
  _BYTE v19[44]; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+74h] [rbp-Ch]

  v5 = *(_QWORD *)(a1 + 32);
  v20 = 0;
  memset(&v19[4], 0, 40);
  v7 = 16LL * a4;
  v18 = *(_QWORD *)(*(_QWORD *)v5 + 112LL);
  if ( v7 > 0xFFFFFFFF || (v9 = v7 + 4, (int)v7 + 4 < (unsigned int)v7) )
    v9 = 0;
  Pool2 = (int *)ExAllocatePool2(64LL, v9, 1229146200LL);
  if ( Pool2 )
  {
    memset(v19, 0, 24);
    *(_QWORD *)&v19[32] = 36LL;
    *(_QWORD *)&v19[24] = a2;
    *(_DWORD *)&v19[40] = 0;
    v20 = a4;
    v12 = SecureChannel_SendRequestSynchronously(v18, v19, 48LL, Pool2, v9);
    if ( v12 >= 0 )
    {
      v12 = *Pool2;
      if ( *Pool2 >= 0 )
      {
        memmove(a5, Pool2 + 1, v7);
        v12 = 0;
        goto LABEL_16;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 23;
        v17 = *(_DWORD *)(v5 + 144);
        v16 = *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL);
        goto LABEL_11;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = 22;
      v13 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
      v17 = *(_DWORD *)(v5 + 144);
      v16 = *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL);
LABEL_11:
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_dd(
        *(_QWORD *)(v5 + 80),
        v13,
        13,
        v14,
        (__int64)&WPP_21ddac9bc1473b1039e66530083bb77c_Traceguids,
        v16,
        v17);
    }
LABEL_16:
    ExFreePoolWithTag(Pool2, 0x49434858u);
    return (unsigned int)v12;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_ddL(
      *(_QWORD *)(v5 + 80),
      v11,
      13,
      21,
      (__int64)&WPP_21ddac9bc1473b1039e66530083bb77c_Traceguids,
      *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL),
      *(_DWORD *)(v5 + 144),
      v9);
  }
  return (unsigned int)-1073741670;
}
