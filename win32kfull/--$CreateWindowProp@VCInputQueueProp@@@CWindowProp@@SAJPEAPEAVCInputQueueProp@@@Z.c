__int64 __fastcall CWindowProp::CreateWindowProp<CInputQueueProp>(__int64 *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = 0;
  v3 = Win32AllocPoolZInit(56LL, 1902736213LL);
  if ( v3 )
  {
    *a1 = v3;
    *(_OWORD *)v3 = 0LL;
    *(_OWORD *)(v3 + 16) = 0LL;
    *(_OWORD *)(v3 + 32) = 0LL;
    *(_QWORD *)(v3 + 48) = 0LL;
    *(_QWORD *)v3 = &CInputQueueProp::`vftable';
    *(_QWORD *)(v3 + 32) = 0LL;
    *(_DWORD *)(v3 + 52) = 0;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v2;
}
