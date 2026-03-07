void __fastcall MiEliminateZeroPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v6; // eax
  unsigned __int64 v7; // rsi
  __int64 v8; // r14
  _QWORD *v9; // r8
  _QWORD *v10; // rdx
  __int64 PdeAddress; // rbx
  _DWORD v12[48]; // [rsp+50h] [rbp-E8h] BYREF

  memset(v12, 0, 0xB8uLL);
  v6 = MiTbFlushType(a1);
  MiInitializeTbFlushList((__int64)v12, v6, 20);
  LOBYTE(v12[1]) |= 4u;
  v7 = a3 >> 12;
  v8 = 0LL;
  while ( v7 )
  {
    v9 = (_QWORD *)a2;
    v10 = (_QWORD *)(a2 + 4088);
    do
    {
      if ( *v9 | *v10 )
        break;
      ++v9;
      --v10;
    }
    while ( v9 <= v10 );
    if ( v9 > v10 )
    {
      PdeAddress = MiGetPdeAddress(a2);
      if ( v8 != PdeAddress )
      {
        if ( v12[3] )
          MiConvertAndFlushWsleVas(a1, (__int64)v12);
        v8 = PdeAddress;
      }
      MiInsertTbFlushEntry((__int64)v12, a2, 1LL, 0);
      if ( v12[3] == v12[2] )
        MiConvertAndFlushWsleVas(a1, (__int64)v12);
    }
    a2 += 4096LL;
    --v7;
  }
  if ( v12[3] )
    MiConvertAndFlushWsleVas(a1, (__int64)v12);
}
