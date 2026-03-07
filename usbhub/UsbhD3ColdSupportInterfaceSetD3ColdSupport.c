unsigned int __fastcall UsbhD3ColdSupportInterfaceSetD3ColdSupport(__int64 a1, char a2)
{
  void (__fastcall *v2)(_QWORD); // rax
  unsigned int result; // eax
  unsigned int v6; // ecx

  v2 = *(void (__fastcall **)(_QWORD))(a1 + 3008);
  if ( v2 )
    v2(*(_QWORD *)(a1 + 2984));
  result = *(_DWORD *)(a1 + 1420) & 0xFFBFFFFF;
  v6 = *(_DWORD *)(a1 + 1420) | 0x400000;
  if ( !a2 )
    v6 = *(_DWORD *)(a1 + 1420) & 0xFFBFFFFF;
  *(_DWORD *)(a1 + 1420) = v6;
  return result;
}
