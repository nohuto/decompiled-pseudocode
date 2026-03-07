void __fastcall CBaseInput::OnInputSuppressedValueChanged(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 i; // rdi
  int v11; // r8d
  __int64 v12; // rax
  int v13; // ecx
  int v14; // [rsp+38h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+48h] [rbp-9h] BYREF
  _DWORD *v16; // [rsp+68h] [rbp+17h]
  int v17; // [rsp+70h] [rbp+1Fh]
  int v18; // [rsp+74h] [rbp+23h]
  __int64 v19; // [rsp+78h] [rbp+27h]
  _DWORD v20[2]; // [rsp+80h] [rbp+2Fh] BYREF
  int *v21; // [rsp+88h] [rbp+37h]
  int v22; // [rsp+90h] [rbp+3Fh]
  int v23; // [rsp+94h] [rbp+43h]

  v4 = a1;
  v5 = SGDGetUserSessionState(a1, a2, a3, a4);
  RIMLockExclusive(v5 + 3232);
  for ( i = *(_QWORD *)(SGDGetUserSessionState(v7, v6, v8, v9) + 3248); i; i = *(_QWORD *)(i + 56) )
  {
    if ( v4 )
    {
      *(_DWORD *)(i + 2304) = 0;
    }
    else if ( *(_DWORD *)(i + 2304)
           && (unsigned int)dword_1C02C93D8 > 5
           && tlgKeywordOn((__int64)&dword_1C02C93D8, 0x400000000000LL) )
    {
      v23 = 0;
      v18 = 0;
      v21 = &v14;
      v14 = v11;
      v16 = v20;
      v22 = 4;
      v17 = 2;
      v12 = *(_QWORD *)(i + 216);
      v13 = *(unsigned __int16 *)(i + 208);
      v20[1] = 0;
      v19 = v12;
      v20[0] = v13;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_1C02C93D8,
        (unsigned __int8 *)dword_1C029B7FA,
        0LL,
        0LL,
        5u,
        &v15);
    }
  }
  *(_QWORD *)(v5 + 3240) = 0LL;
  ExReleasePushLockExclusiveEx(v5 + 3232, 0LL);
  KeLeaveCriticalRegion();
}
