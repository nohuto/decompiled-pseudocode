__int64 __fastcall XDCOBJ::bAddColorTransform(XDCOBJ *this, void *a2)
{
  __int64 result; // rax

  result = Win32AllocPoolZInit(16LL, 1650745671LL);
  if ( result )
  {
    *(_QWORD *)result = a2;
    *(_QWORD *)(result + 8) = *(_QWORD *)(*(_QWORD *)this + 2080LL);
    *(_QWORD *)(*(_QWORD *)this + 2080LL) = result;
    return 1LL;
  }
  return result;
}
