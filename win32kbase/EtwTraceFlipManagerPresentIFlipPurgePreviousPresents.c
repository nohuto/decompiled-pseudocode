__int64 __fastcall EtwTraceFlipManagerPresentIFlipPurgePreviousPresents(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qp_EtwWriteTransfer(a1, &FlipManagerPresentIFlipPurgePreviousPresents, a3, (unsigned int)a1, a2);
  return result;
}
