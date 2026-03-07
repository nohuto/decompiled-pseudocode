struct tagQMSG *__fastcall CTouchProcessor::FindNodeQueuedMessage(
        struct _KTHREAD **this,
        const struct CPointerInfoNode *a2,
        __int64 a3,
        struct tagQ **a4)
{
  struct tagQMSG *result; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _OWORD v15[7]; // [rsp+20h] [rbp-88h] BYREF

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15709);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a2) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15711);
  if ( *((_DWORD *)a2 + 111)
    && !gbIgnoreStressedOutStuff
    && !CInputDest::IsEqualByWindowHandle((__int64)a2 + 352, *((_QWORD *)a2 + 24), 1) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15717);
  }
  result = (struct tagQMSG *)CInputDest::GetQueue((__int64)a2 + 352, 2);
  if ( result )
  {
    v8 = *((_QWORD *)a2 + 2);
    v9 = *((_OWORD *)a2 + 23);
    v15[0] = *((_OWORD *)a2 + 22);
    v10 = *((_OWORD *)a2 + 24);
    v15[1] = v9;
    v11 = *((_OWORD *)a2 + 25);
    v15[2] = v10;
    v12 = *((_OWORD *)a2 + 26);
    v15[3] = v11;
    v13 = *((_OWORD *)a2 + 27);
    v15[4] = v12;
    v14 = *((_OWORD *)a2 + 28);
    v15[5] = v13;
    v15[6] = v14;
    return (struct tagQMSG *)((__int64 (__fastcall *)(_OWORD *, __int64, __int64, struct tagQ **))ApiSetEditionFindNodeQueuedMessage)(
                               v15,
                               v8,
                               v7,
                               a4);
  }
  return result;
}
