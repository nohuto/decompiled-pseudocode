__int64 __fastcall EtwTraceTouchPadTypeDiscovered(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &TouchPadTypeDiscovered, a3, (unsigned int)a1);
  return result;
}
