__int64 __fastcall CTouchProcessor::GetPointerFrameData(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        int a4,
        unsigned int a5,
        unsigned int *a6,
        struct tagPOINTER_INFO *a7)
{
  __int64 PointerInfoSize; // r15
  unsigned int v11; // ebx
  PERESOURCE *v12; // rdx
  unsigned int v13; // r14d
  unsigned int v14; // r12d
  unsigned __int64 v15; // rdi
  unsigned int v16; // esi
  __int64 v17; // rax
  __int64 v20; // [rsp+78h] [rbp+10h]

  PointerInfoSize = (unsigned int)GetPointerInfoSize(a4);
  v11 = 1;
  v13 = 0;
  if ( !CTouchProcessor::CTouchProcessorLockShared(v12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13976);
  v14 = *((_DWORD *)a3 + 2);
  v20 = *((_QWORD *)a3 + 24);
  if ( v14 >= *((_DWORD *)a2 + 12) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13981);
  v15 = *((_QWORD *)a2 + 30);
  v16 = 0;
  while ( 1 )
  {
    v17 = *((unsigned int *)a2 + 12);
    if ( v13 >= (unsigned int)v17 )
      break;
    if ( v15 >= *((_QWORD *)a2 + 30) + 480 * v17 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 13993);
    if ( *(_QWORD *)(v15 + 192) == v20 && *(_DWORD *)(v15 + 8) == v14 )
    {
      ++v16;
      if ( a5 >= (unsigned int)PointerInfoSize )
      {
        v11 = CTouchProcessor::PointerInfoCopyOutHelper(
                this,
                (struct CPointerInfoNode *)v15,
                *((struct tagHID_POINTER_DEVICE_INFO **)a2 + 32),
                a4,
                PointerInfoSize,
                a7);
        if ( v11 )
        {
          a7 = (struct tagPOINTER_INFO *)((char *)a7 + PointerInfoSize);
          a5 -= PointerInfoSize;
        }
      }
    }
    ++v13;
    v15 += 480LL;
    if ( !v11 )
      return v11;
  }
  *a6 = v16;
  return v11;
}
