__int64 __fastcall NVMeGetCommandEffectsLog(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  void **v4; // rbx
  void *v5; // rcx
  unsigned int v6; // r8d
  __int64 v7; // [rsp+60h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 1040);
  v7 = 0LL;
  if ( !*(_BYTE *)(a1 + 20) )
  {
    result = *(_QWORD *)(a1 + 1840);
    if ( (*(_BYTE *)(result + 261) & 2) != 0 )
    {
      v4 = (void **)(a1 + 3992);
      v5 = *(void **)(a1 + 3992);
      if ( v5 )
      {
        result = *(_QWORD *)(a1 + 4216);
        v7 = result;
        if ( !result )
          return result;
      }
      else
      {
        result = NVMeAllocateDmaBuffer(a1, 0x1000u);
        v5 = *v4;
        if ( !*v4 )
          return result;
        *(_QWORD *)(a1 + 4216) = 0LL;
      }
      memset(v5, 0, 0x1000uLL);
      LocalCommandReuse(a1, a1 + 944);
      *(_BYTE *)(v1 + 4253) |= 3u;
      LOBYTE(v6) = 5;
      *(_WORD *)(v1 + 4244) = 0;
      BuildGetLogPageCommand(a1, v1, v6, 0x1000u, v7, -1, 0LL, 0);
      *(_BYTE *)(v1 + 4253) |= 4u;
      *(_QWORD *)(v1 + 4200) = *v4;
      *(_QWORD *)(v1 + 4208) = v7;
      *(_DWORD *)(v1 + 4240) = 4096;
      ProcessCommand(a1, a1 + 952);
      return WaitForCommandCompleteWithCustomTimeout(a1);
    }
  }
  return result;
}
