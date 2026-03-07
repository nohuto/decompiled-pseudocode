__int64 __fastcall EtwTraceEndPointerMessageGeneration(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x80000) != 0 )
    return McTemplateK0hh_EtwWriteTransfer(a1, &EndPointerMessageGeneration, a3, (unsigned __int16)a1, a2);
  return result;
}
