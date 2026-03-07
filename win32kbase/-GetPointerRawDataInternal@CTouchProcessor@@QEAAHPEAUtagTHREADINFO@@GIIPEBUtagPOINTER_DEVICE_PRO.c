__int64 __fastcall CTouchProcessor::GetPointerRawDataInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        const struct tagPOINTER_DEVICE_PROPERTY *a6,
        unsigned int a7,
        int *a8)
{
  unsigned int v8; // ebx
  unsigned __int64 ThreadPointerData; // rax

  v8 = 0;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        this,
                        (struct tagTHREADINFO *)((char *)a2 + 1128),
                        a3,
                        0LL,
                        0LL,
                        0LL);
  if ( ThreadPointerData )
  {
    LOBYTE(v8) = CTouchProcessor::GetPointerRawDataWithHistory(this, ThreadPointerData, a4, a5, a6, a7, a8) != 0;
    return v8;
  }
  else
  {
    UserSetLastError(87);
    return 0LL;
  }
}
