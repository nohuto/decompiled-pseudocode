__int64 __fastcall NtUserfnINCNTOUTSTRING(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int16 *a4,
        __int64 a5,
        char a6,
        int a7)
{
  unsigned __int16 *v11; // rax
  signed int v12; // edx
  __int64 result; // rax
  __int128 v14; // [rsp+48h] [rbp-20h] BYREF

  v14 = 0LL;
  PtiCurrentShared(a1);
  DWORD1(v14) = a7 << 31;
  v11 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v11 = (unsigned __int16 *)MmUserProbeAddress;
  v12 = *v11 | DWORD1(v14) & 0x80000000;
  DWORD1(v14) = v12;
  if ( !a7 )
  {
    v12 = (2 * v12) | v12 & 0x80000000;
    DWORD1(v14) = v12;
  }
  if ( (v12 & 0x7FFFFFFFu) < 2 )
    return 0LL;
  LODWORD(v14) = 0;
  *((_QWORD *)&v14 + 1) = a4;
  ProbeForWrite(a4, v12 & 0x7FFFFFFFLL, (v12 >> 31) + 2);
  result = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64))&WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
            + ((a6 + 6) & 0x1F)))(
             a1,
             a2,
             a3,
             &v14,
             a5);
  if ( !result )
  {
    if ( a7 )
      *(_BYTE *)a4 = 0;
    else
      *a4 = 0;
  }
  return result;
}
