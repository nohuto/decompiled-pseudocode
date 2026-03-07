void __fastcall PostRawMouseInputToBackgroundListener(
        struct tagPROCESS_HID_TABLE *a1,
        __int64 a2,
        const struct tagRAWMOUSE *a3,
        __int64 a4,
        unsigned int a5)
{
  struct tagWND *v5; // rdi
  __int64 HidData; // rax
  char *v8; // rbx

  v5 = (struct tagWND *)*((_QWORD *)a1 + 8);
  HidData = AllocateHidData(a2, 0, 24LL, 1LL, (__int64)v5);
  v8 = (char *)HidData;
  if ( HidData )
  {
    *(_OWORD *)(HidData + 56) = *(_OWORD *)a3;
    *(_QWORD *)(HidData + 72) = *((_QWORD *)a3 + 2);
    InputTraceLogging::Mouse::DeliverRawInput();
    if ( !(unsigned int)PostInputMessage(
                          *(struct tagQ **)(*((_QWORD *)v5 + 2) + 432LL),
                          v5,
                          0xFFu,
                          1uLL,
                          *(_QWORD *)v8,
                          a5,
                          0LL,
                          *((unsigned int *)a3 + 5),
                          0,
                          0LL,
                          0LL,
                          0LL,
                          0,
                          0,
                          0LL) )
      FreeHidData(v8);
  }
}
