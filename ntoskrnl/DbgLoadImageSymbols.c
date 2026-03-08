/*
 * XREFs of DbgLoadImageSymbols @ 0x14036C6D0
 * Callers:
 *     DbgLoadImageSymbolsUnicode @ 0x14036C5E8 (DbgLoadImageSymbolsUnicode.c)
 *     KdInitSystem @ 0x140AAE040 (KdInitSystem.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14035E820 (RtlImageNtHeader.c)
 *     DebugService2 @ 0x140420430 (DebugService2.c)
 */

__int64 __fastcall DbgLoadImageSymbols(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+34h] [rbp-14h]

  v6[0] = a2;
  v6[1] = a3;
  v4 = RtlImageNtHeader(a2);
  if ( v4 )
  {
    v7 = *(_DWORD *)(v4 + 88);
    v8 = *(_DWORD *)(v4 + 80);
  }
  else
  {
    v8 = 0;
    v7 = 0;
  }
  return DebugService2(a1, v6, 3LL);
}
