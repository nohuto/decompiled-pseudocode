__int64 __fastcall ProtocolCommandCompletion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  _DWORD *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  _DWORD *v11; // rdi
  __int64 v12; // r8

  result = GetSrbExtension(a2);
  v10 = result;
  if ( v8 )
  {
    if ( *(_BYTE *)(v7 + 2) == 40 )
      v11 = *(_DWORD **)(v7 + 64);
    else
      v11 = *(_DWORD **)(v7 + 24);
    v11[16] = *v8;
    result = *(unsigned int *)(a1 + 64);
    if ( (result & 8) != 0 || (v12 = *(_QWORD *)(v10 + 4216)) == 0 )
    {
      *(_DWORD *)(v10 + 4216) = 0;
    }
    else
    {
      result = StorPortExtendedFunction(1LL, a1, v12, v9);
      *(_QWORD *)(v10 + 4216) = 0LL;
    }
    if ( *(_BYTE *)(a2 + 3) == 1 )
    {
      v11[5] = 0;
      v11[4] = 1;
    }
    else
    {
      v11[4] = 2;
      result = *(unsigned __int16 *)(a3 + 14);
      v11[5] = result;
      *(_BYTE *)(a2 + 3) = 1;
      if ( v11[7] )
        result = NVMeAllocateDmaBuffer(a1, 0x40u);
    }
  }
  else
  {
    *(_BYTE *)(v7 + 3) = 4;
  }
  *(_BYTE *)(v10 + 4253) |= 8u;
  return result;
}
