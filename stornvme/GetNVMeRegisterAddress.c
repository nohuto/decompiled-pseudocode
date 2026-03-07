__int64 __fastcall GetNVMeRegisterAddress(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v5; // r11
  unsigned int v6; // r9d
  bool v7; // [rsp+28h] [rbp-10h]

  v3 = *(_DWORD *)(a2 + 52);
  result = 0LL;
  if ( v3 )
  {
    v5 = *(_QWORD *)(a2 + 56);
    v6 = 0;
    while ( *(_QWORD *)(v5 + 16LL * v6) != a3 )
    {
      if ( ++v6 >= v3 )
        return result;
    }
    v7 = *(_BYTE *)(v5 + 16LL * v6 + 12) == 0;
    return StorPortGetDeviceBase(
             a1,
             *(unsigned int *)(a2 + 8),
             *(unsigned int *)(a2 + 4),
             *(_QWORD *)(v5 + 16LL * v6),
             *(_DWORD *)(v5 + 16LL * v6 + 8),
             v7);
  }
  return result;
}
