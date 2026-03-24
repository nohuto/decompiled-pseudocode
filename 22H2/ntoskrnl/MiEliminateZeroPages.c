/*
 * XREFs of MiEliminateZeroPages @ 0x1406BF340
 * Callers:
 *     MiCopyToCfgBitMap @ 0x140636FA0 (MiCopyToCfgBitMap.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x140637780 (MiUpdateCfgSystemWideBitmapWorker.c)
 * Callees:
 *     MiGetPteAddress @ 0x140298780 (MiGetPteAddress.c)
 *     MiInsertTbFlushEntry @ 0x1402B6400 (MiInsertTbFlushEntry.c)
 *     MiTbFlushType @ 0x1402B7898 (MiTbFlushType.c)
 *     MiGetPdeAddress @ 0x140336F4C (MiGetPdeAddress.c)
 *     MiInitializeTbFlushList @ 0x140336F6C (MiInitializeTbFlushList.c)
 *     MiConvertAndFlushWsleVas @ 0x140339AFC (MiConvertAndFlushWsleVas.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memset @ 0x140413800 (memset.c)
 */

void __fastcall MiEliminateZeroPages(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v6; // eax
  _QWORD *v7; // r8
  _DWORD *v8; // r9
  __int64 PteAddress; // r14
  unsigned __int64 v10; // rdi
  __int64 v11; // r15
  _QWORD *v12; // rdx
  __int64 PdeAddress; // rbx
  __int64 v14; // r8
  _DWORD *v15; // r9
  _DWORD v16[48]; // [rsp+60h] [rbp-F8h] BYREF

  memset(v16, 0, 0xB8uLL);
  v6 = MiTbFlushType(a1);
  MiInitializeTbFlushList((__int64)v16, v6, 20);
  LOBYTE(v16[1]) |= 4u;
  PteAddress = MiGetPteAddress(a2);
  v10 = a3 >> 12;
  v11 = 0LL;
  while ( v10 )
  {
    v7 = (_QWORD *)a2;
    v12 = (_QWORD *)(a2 + 4088);
    do
    {
      if ( *v7 | *v12 )
        break;
      ++v7;
      --v12;
    }
    while ( v7 <= v12 );
    if ( v7 > v12 )
    {
      PdeAddress = MiGetPdeAddress(a2);
      if ( v11 != PdeAddress )
      {
        if ( v16[3] )
          MiConvertAndFlushWsleVas(a1, (__int64)v16, v14, v15);
        v11 = PdeAddress;
      }
      MiInsertTbFlushEntry((__int64)v16, a2, 1LL, 0);
      if ( v16[3] == v16[2] )
        MiConvertAndFlushWsleVas(a1, (__int64)v16, (__int64)v7, v8);
    }
    PteAddress += 8LL;
    a2 += 4096LL;
    --v10;
  }
  if ( v16[3] )
    MiConvertAndFlushWsleVas(a1, (__int64)v16, (__int64)v7, v8);
}
