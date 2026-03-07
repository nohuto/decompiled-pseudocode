__int64 __fastcall NtUserfnINOUTLPUAHMEASUREMENUITEM(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        char a6)
{
  __int64 v10; // rcx
  _BYTE *v11; // rdx
  __int64 result; // rax
  __int128 v13; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v14; // [rsp+60h] [rbp-98h]
  __int128 v15; // [rsp+70h] [rbp-88h]
  __int128 v16; // [rsp+80h] [rbp-78h]
  __int128 v17; // [rsp+90h] [rbp-68h]
  __int128 v18; // [rsp+A0h] [rbp-58h]
  __int128 v19; // [rsp+B0h] [rbp-48h]

  memset_0(&v13, 0, 0x70uLL);
  PtiCurrentShared(v10);
  v11 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v11 = (_BYTE *)MmUserProbeAddress;
  *v11 = *v11;
  v11[111] = v11[111];
  v13 = *a4;
  v14 = a4[1];
  v15 = a4[2];
  v16 = a4[3];
  v17 = a4[4];
  v18 = a4[5];
  v19 = a4[6];
  result = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             &v13,
             a5);
  *a4 = v13;
  a4[1] = v14;
  a4[2] = v15;
  a4[3] = v16;
  a4[4] = v17;
  a4[5] = v18;
  a4[6] = v19;
  return result;
}
