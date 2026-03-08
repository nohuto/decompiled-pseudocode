/*
 * XREFs of XilEndpoint_SendRequestToAllocateSecureStreamContextArray @ 0x1C0039250
 * Callers:
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C0038BDC (XilEndpoint_AllocateStreamContextArray.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00084D8 (WPP_RECORDER_SF_dd.c)
 *     __security_check_cookie @ 0x1C001E820 (__security_check_cookie.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C0052470 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilEndpoint_SendRequestToAllocateSecureStreamContextArray(
        _QWORD *a1,
        unsigned int a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  int v11; // r9d
  int v12; // edx
  char v14; // [rsp+28h] [rbp-41h]
  int v15; // [rsp+30h] [rbp-39h]
  __int128 v16; // [rsp+40h] [rbp-29h] BYREF
  __int64 v17; // [rsp+50h] [rbp-19h]
  __int128 v18; // [rsp+58h] [rbp-11h] BYREF
  __int64 v19; // [rsp+68h] [rbp-1h]
  __int64 v20; // [rsp+70h] [rbp+7h]
  __int128 v21; // [rsp+78h] [rbp+Fh]
  __int64 v22; // [rsp+88h] [rbp+1Fh]

  LODWORD(v17) = 0;
  v4 = a1[4];
  v16 = 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)v4 + 112LL);
  v21 = 0LL;
  v22 = a2;
  v19 = 0LL;
  v20 = 0LL;
  *((_QWORD *)&v21 + 1) = *a1;
  v18 = 0LL;
  LODWORD(v21) = 35;
  v9 = SecureChannel_SendRequestSynchronously(v8, &v18, 56LL, &v16, 24);
  if ( v9 >= 0 )
  {
    v9 = v16;
    if ( (int)v16 >= 0 )
    {
      v9 = 0;
      *a3 = *((_QWORD *)&v16 + 1);
      *a4 = v17;
      return (unsigned int)v9;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = a1[4];
      v11 = 13;
      v12 = *(unsigned __int8 *)(*(_QWORD *)(v10 + 16) + 135LL);
      v15 = *(_DWORD *)(v10 + 144);
      v14 = *(_BYTE *)(*(_QWORD *)(v10 + 16) + 135LL);
      goto LABEL_4;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = a1[4];
    v11 = 12;
    v12 = *(_DWORD *)(v10 + 144);
    LOBYTE(v15) = v12;
    v14 = *(_BYTE *)(*(_QWORD *)(v10 + 16) + 135LL);
LABEL_4:
    LOBYTE(v12) = 2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v10 + 80),
      v12,
      13,
      v11,
      (__int64)&WPP_21ddac9bc1473b1039e66530083bb77c_Traceguids,
      v14,
      v15);
  }
  return (unsigned int)v9;
}
