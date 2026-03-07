__int64 __fastcall IopLiveDumpStartDumpDataBuffering(__int64 a1)
{
  __int64 v2; // r9
  __int64 *v3; // rdx
  int v4; // r8d
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  KdDecodeDataBlock();
  IopLiveDumpTrace();
  IopLiveDumpInitiateCorralStateChange((volatile __int32 *)(a1 + 312), 4, &v6);
  IopLiveDumpTrace();
  if ( KdpBootedNodebug )
  {
    v2 = KiWaitNever;
    v3 = (__int64 *)&KdDebuggerDataBlock;
    KdpDataBlockEncoded = 1;
    v4 = 116;
    do
    {
      *v3 = v2 ^ __ROR8__((unsigned __int64)&KdpDataBlockEncoded ^ _byteswap_uint64(KiWaitAlways ^ *v3), v2);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  result = v6;
  *(_QWORD *)(a1 + 528) = v6;
  return result;
}
