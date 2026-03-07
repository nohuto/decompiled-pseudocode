__int64 __fastcall CTouchProcessor::GetPointerInfoHistoryInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned __int8 *a7)
{
  __int64 ThreadPointerData; // rax
  int v10; // ecx
  unsigned int v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = 0;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        this,
                        (struct tagTHREADINFO *)((char *)a2 + 1128),
                        a3,
                        &v12,
                        0LL,
                        0LL);
  if ( !ThreadPointerData )
  {
LABEL_7:
    v10 = 87;
    goto LABEL_8;
  }
  if ( a4 == 1 || a4 == v12 )
  {
    if ( (unsigned int)CTouchProcessor::GetPointerDataWithHistory(
                         (struct _KTHREAD **)this,
                         ThreadPointerData,
                         a4,
                         a5,
                         a6,
                         (struct tagPOINTER_INFO *)a7) )
      return 1LL;
    goto LABEL_7;
  }
  v10 = 1629;
LABEL_8:
  UserSetLastError(v10);
  return 0LL;
}
