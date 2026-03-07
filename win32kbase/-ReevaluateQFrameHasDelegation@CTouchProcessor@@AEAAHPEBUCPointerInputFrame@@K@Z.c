__int64 __fastcall CTouchProcessor::ReevaluateQFrameHasDelegation(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3)
{
  unsigned int v4; // ebx
  _DWORD *v6; // rdi
  unsigned int v7; // r15d
  unsigned int i; // esi
  CPointerInfoNode *v9; // rcx
  __int64 result; // rax

  v4 = 0;
  v6 = (_DWORD *)(*((_QWORD *)a2 + 31) + 160LL * a3);
  if ( *v6 != a3 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 15301);
  v7 = *((_DWORD *)a2 + 12);
  for ( i = 0; i < v7; ++i )
  {
    v9 = (CPointerInfoNode *)(*((_QWORD *)a2 + 30) + 480LL * i);
    if ( *((_DWORD *)v9 + 2) == a3 && (unsigned int)CPointerInfoNode::IsAnyMessageDelegated(v9) )
    {
      v4 = 1;
      break;
    }
  }
  result = v4;
  v6[35] = (8 * v4) | v6[35] & 0xFFFFFFF7;
  return result;
}
