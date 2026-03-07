__int64 __fastcall UsbhD3ColdSupportInterfaceGetIdleWakeInfo(__int64 a1, int a2, int *a3)
{
  __int64 (__fastcall *v3)(_QWORD); // rax
  int v4; // ebx
  __int64 result; // rax

  v3 = *(__int64 (__fastcall **)(_QWORD))(a1 + 3016);
  v4 = 0;
  if ( !v3 || (result = v3(*(_QWORD *)(a1 + 2984)), (int)result < 0) )
  {
    if ( *(_DWORD *)(a1 + 1192) >= a2 && (*(_DWORD *)(a1 + 1420) & 0x104) != 0 )
      v4 = 3;
    *a3 = v4;
    return 0LL;
  }
  return result;
}
