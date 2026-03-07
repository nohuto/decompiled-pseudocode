_BOOL8 __fastcall PostHidNotification(
        struct tagPROCESS_HID_REQUEST *a1,
        struct DEVICEINFO *a2,
        int a3,
        unsigned __int64 a4)
{
  __int64 v4; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v10; // [rsp+80h] [rbp+27h] BYREF
  struct tagWND *v11; // [rsp+88h] [rbp+2Fh] BYREF
  struct tagQ *v12; // [rsp+90h] [rbp+37h] BYREF
  int v13; // [rsp+C0h] [rbp+67h] BYREF
  int v14; // [rsp+D0h] [rbp+77h] BYREF

  v14 = a3;
  v4 = *((_QWORD *)a1 + 4);
  if ( !v4 )
    return 1LL;
  if ( (*((_DWORD *)a1 + 5) & 4) == 0 )
    return 1LL;
  v7 = *(_QWORD *)(v4 + 40);
  v11 = (struct tagWND *)*((_QWORD *)a1 + 4);
  if ( *(char *)(v7 + 20) < 0 )
    return 1LL;
  if ( *(char *)(v7 + 19) < 0 )
    return 1LL;
  v10 = *(_QWORD *)(v4 + 16);
  v13 = 0;
  v14 = 0;
  v12 = *(struct tagQ **)(v10 + 432);
  if ( !(unsigned int)AdjustPwndPtiPqForDelegation(
                        (__int64 *)&v12,
                        (__int64 *)&v11,
                        (struct tagTHREADINFO **)&v10,
                        0xFEu,
                        0LL,
                        &v13,
                        &v14) )
    return 1LL;
  v8 = 0LL;
  if ( a2 )
    v8 = *(_QWORD *)a2;
  return (unsigned int)PostInputMessage(v12, v11, 0xFEu, a4, v8, 0, 0LL, 0LL, 0, 0LL, 0LL, 0LL, v13, v14, v10) != 0;
}
