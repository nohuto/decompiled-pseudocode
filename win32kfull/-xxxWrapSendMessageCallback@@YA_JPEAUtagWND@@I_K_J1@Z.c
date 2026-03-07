__int64 __fastcall xxxWrapSendMessageCallback(
        struct tagTHREADINFO **a1,
        unsigned int a2,
        unsigned __int64 a3,
        void *a4,
        ULONG64 a5)
{
  _BYTE *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v15[2]; // [rsp+58h] [rbp-50h]
  __int128 v16; // [rsp+68h] [rbp-40h] BYREF
  __int64 v17; // [rsp+78h] [rbp-30h]

  v16 = 0LL;
  v17 = 0LL;
  if ( (a2 & 0xFFFE0000) != 0 )
  {
    UserSetLastError(87);
    return 0LL;
  }
  else
  {
    if ( (a5 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)a5;
    if ( a5 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[15] = v9[15];
    *(_OWORD *)v15 = *(_OWORD *)a5;
    if ( a1 != (struct tagTHREADINFO **)-1LL )
      ThreadLockAlways(a1, &v16);
    v12 = (int)xxxSendMessageCallback(
                 a1,
                 a2,
                 a3,
                 a4,
                 (void (__fastcall *)(struct tagTHREADINFO **, _QWORD, __int64, __int64))v15[0],
                 v15[1],
                 1,
                 0,
                 1);
    if ( a1 != (struct tagTHREADINFO **)-1LL )
      ThreadUnlock1(v11, v10, v13);
    return v12;
  }
}
