__int64 __fastcall NtUserfnINPGESTURENOTIFYSTRUCT(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        int a6)
{
  __int64 v10; // rbx
  int v11; // ecx
  __int64 v12; // rax
  __int64 v14; // [rsp+48h] [rbp-30h]
  __int128 v15; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16; // [rsp+60h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  PtiCurrentShared((__int64)a1);
  if ( a2 == 284 && a6 != 670 )
  {
    v10 = 0LL;
LABEL_4:
    v11 = 5;
    goto LABEL_5;
  }
  if ( a4 + 24 < a4 || a4 + 24 > MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  v14 = *(_QWORD *)(a4 + 16);
  v15 = *(_OWORD *)a4;
  v16 = v14;
  v10 = 0LL;
  if ( (_DWORD)v15 != 24 || !HIDWORD(v14) )
  {
    v11 = 87;
    goto LABEL_5;
  }
  if ( a2 == 284 )
  {
    v12 = 0LL;
    if ( a1 )
      v12 = *a1;
    if ( *((_QWORD *)&v15 + 1) != v12 )
      goto LABEL_4;
  }
  if ( !DWORD1(v15) )
    return (*((__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + (((_BYTE)a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             &v15,
             a5);
  v11 = 1004;
LABEL_5:
  UserSetLastError(v11);
  return v10;
}
