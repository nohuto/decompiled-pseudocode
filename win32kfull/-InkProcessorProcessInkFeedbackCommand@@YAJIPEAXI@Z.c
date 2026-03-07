__int64 __fastcall InkProcessorProcessInkFeedbackCommand(unsigned int a1, void *a2, unsigned int a3)
{
  unsigned int v6; // ebx
  int InkProcessor; // eax
  struct InkProcessor *v9; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v10; // [rsp+38h] [rbp-38h] BYREF
  struct InkProcessor **v11; // [rsp+58h] [rbp-18h]
  int v12; // [rsp+60h] [rbp-10h]
  int v13; // [rsp+64h] [rbp-Ch]

  if ( a1 < 5 )
  {
    v9 = 0LL;
    InkProcessor = GetInkProcessor(&v9);
    v6 = InkProcessor;
    if ( InkProcessor >= 0 )
    {
      InkProcessor = InkProcessor::ProcessInkFeedbackCommand(v9, a1, a2, a3);
      v6 = InkProcessor;
      if ( InkProcessor >= 0 || (unsigned int)dword_1C03570E0 <= 2 )
        return v6;
    }
    else if ( (unsigned int)dword_1C03570E0 <= 2 )
    {
      return v6;
    }
    LODWORD(v9) = InkProcessor;
    goto LABEL_10;
  }
  v6 = -1073741811;
  if ( (unsigned int)dword_1C03570E0 > 2 )
  {
    LODWORD(v9) = -1073741811;
LABEL_10:
    v13 = 0;
    v11 = &v9;
    v12 = 4;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_1C03570E0, (unsigned __int8 *)dword_1C031DA06, 0LL, 0LL, 3u, &v10);
  }
  return v6;
}
