__int64 __fastcall HMObjectFromHandle(unsigned __int16 a1)
{
  return *((_QWORD *)gpKernelHandleTable + 3 * a1);
}
