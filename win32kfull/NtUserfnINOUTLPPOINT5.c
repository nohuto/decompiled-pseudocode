__int64 __fastcall NtUserfnINOUTLPPOINT5(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  _BYTE *v10; // rdx
  __int64 result; // rax
  __int128 v12; // [rsp+48h] [rbp-60h] BYREF
  __int128 v13; // [rsp+58h] [rbp-50h]
  __int64 v14; // [rsp+68h] [rbp-40h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  PtiCurrentShared(a1);
  v10 = (_BYTE *)a4;
  if ( a4 >= MmUserProbeAddress )
    v10 = (_BYTE *)MmUserProbeAddress;
  *v10 = *v10;
  v10[39] = v10[39];
  v12 = *(_OWORD *)a4;
  v13 = *(_OWORD *)(a4 + 16);
  v14 = *(_QWORD *)(a4 + 32);
  result = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             &v12,
             a5);
  *(_OWORD *)a4 = v12;
  *(_OWORD *)(a4 + 16) = v13;
  *(_QWORD *)(a4 + 32) = v14;
  return result;
}
