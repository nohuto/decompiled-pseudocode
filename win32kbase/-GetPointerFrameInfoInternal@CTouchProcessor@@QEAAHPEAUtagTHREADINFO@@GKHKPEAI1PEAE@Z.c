__int64 __fastcall CTouchProcessor::GetPointerFrameInfoInternal(
        CTouchProcessor *this,
        struct tagTHREADINFO *a2,
        unsigned __int16 a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        unsigned int *a7,
        unsigned int *a8,
        unsigned __int8 *a9)
{
  __int64 ThreadPointerData; // rdx
  int v12; // ecx
  unsigned int v14[6]; // [rsp+40h] [rbp-18h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF

  v14[0] = 0;
  v15 = 0;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData(
                        this,
                        (struct tagTHREADINFO *)((char *)a2 + 1128),
                        a3,
                        v14,
                        &v15,
                        0LL);
  if ( !ThreadPointerData )
    goto LABEL_9;
  if ( v15 )
  {
    if ( a4 != 1 && a4 != v14[0] )
    {
      v12 = 1629;
      goto LABEL_10;
    }
    if ( (unsigned int)CTouchProcessor::GetPointerFrameDataWithHistory(
                         (struct _KTHREAD **)this,
                         ThreadPointerData,
                         a4,
                         a5,
                         a6,
                         a7,
                         a8,
                         a9) )
      return 1LL;
LABEL_9:
    v12 = 87;
    goto LABEL_10;
  }
  v12 = 5;
LABEL_10:
  UserSetLastError(v12);
  return 0LL;
}
