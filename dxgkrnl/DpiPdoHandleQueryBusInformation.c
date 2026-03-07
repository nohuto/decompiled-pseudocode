__int64 __fastcall DpiPdoHandleQueryBusInformation(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 Pool2; // rax

  v3 = 0;
  Pool2 = ExAllocatePool2(256LL, 24LL, 1953656900LL);
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = 15LL;
    *(_QWORD *)(a2 + 56) = Pool2;
    *(GUID *)Pool2 = GUID_BUS_TYPE_DISPLAY;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
