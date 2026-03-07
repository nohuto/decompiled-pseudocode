__int64 __fastcall MiProcessKernelCfgImage(__int64 a1, char a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v9 = 0LL;
  if ( (MiFlags & 0x40000) == 0 )
    return 0LL;
  RtlImageNtHeaderEx(1LL, *(_QWORD *)(a1 + 48), 0LL, &v9);
  if ( (*(_DWORD *)(a1 + 104) & 0x2000) == 0 )
  {
    result = MiMarkKernelImageCfgBits(a1, v9);
    if ( (int)result < 0 )
      return result;
    *(_DWORD *)(a1 + 104) |= 0x2000u;
  }
  if ( !a3 || (a2 & 8) != 0 )
    return 0LL;
  v8 = MiProcessKernelCfgAddressTakenImports(a1);
  if ( v8 < 0 )
    return (unsigned int)v8;
  return v3;
}
