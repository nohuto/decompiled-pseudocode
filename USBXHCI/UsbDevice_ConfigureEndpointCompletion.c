__int64 __fastcall UsbDevice_ConfigureEndpointCompletion(__int64 a1, int a2)
{
  __int64 v2; // rbx
  int v3; // edx
  int v4; // r9d
  int v5; // edx
  __int64 v6; // rdx
  __int64 (__fastcall *v7)(__int64, __int64); // rax
  __int64 v8; // rcx
  char v10; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = *(unsigned __int8 *)(v2 + 135);
      v4 = 76;
LABEL_10:
      v10 = v3;
      LOBYTE(v3) = 4;
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
        v3,
        12,
        v4,
        (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
        v10,
        *(_QWORD *)v2);
      goto LABEL_11;
    }
    goto LABEL_11;
  }
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = *(unsigned __int8 *)(a1 + 61);
      v4 = 78;
      goto LABEL_10;
    }
LABEL_11:
    v6 = 3221225473LL;
    goto LABEL_12;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = *(unsigned __int8 *)(a1 + 61);
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(*(_QWORD *)(v2 + 8) + 72LL),
      v5,
      12,
      77,
      (__int64)&WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids,
      *(_BYTE *)(a1 + 61),
      *(_QWORD *)v2);
  }
  v6 = 0LL;
LABEL_12:
  v7 = *(__int64 (__fastcall **)(__int64, __int64))(v2 + 552);
  v8 = *(_QWORD *)(v2 + 560);
  *(_QWORD *)(v2 + 552) = 0LL;
  *(_QWORD *)(v2 + 560) = 0LL;
  return v7(v8, v6);
}
