__int64 __fastcall NtUserfnINOUTSTYLECHANGE(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, __int64 a5, char a6)
{
  _BYTE *v10; // r8
  __int64 result; // rax
  __int64 v12; // [rsp+30h] [rbp-28h] BYREF

  v12 = 0LL;
  PtiCurrentShared(a1);
  v10 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v10 = (_BYTE *)MmUserProbeAddress;
  *v10 = *v10;
  v10[7] = v10[7];
  v12 = *a4;
  result = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             &v12,
             a5);
  *a4 = v12;
  return result;
}
