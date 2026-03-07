void __fastcall FlushThrottledRawMouseInput(struct tagPROCESS_HID_TABLE *a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+3Ch] [rbp-1Ch]
  int v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+44h] [rbp-14h]

  if ( (*((_DWORD *)a1 + 25) & 1) != 0 && *((_DWORD *)a1 + 28) == 2 )
  {
    v4 = *((_QWORD *)a1 + 8);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 40);
      if ( *(char *)(v5 + 20) >= 0 && *(char *)(v5 + 19) >= 0 )
      {
        v6 = *((_DWORD *)a1 + 36);
        v7 = 0LL;
        v8 = 0;
        v9 = v6;
        v10 = *((_DWORD *)a1 + 37);
        v11 = *((_DWORD *)a1 + 38);
        InputTraceLogging::Mouse::FlushThrottledRawInput(a1);
        PostRawMouseInputToBackgroundListener(
          a1,
          *((void **)a1 + 17),
          (const struct tagRAWMOUSE *)&v7,
          *((_QWORD *)a1 + 20),
          a2);
        *((_DWORD *)a1 + 28) = 0;
      }
    }
  }
}
