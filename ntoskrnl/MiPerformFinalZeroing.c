/*
 * XREFs of MiPerformFinalZeroing @ 0x14064B6C0
 * Callers:
 *     MiGetPageChain @ 0x14026E0E0 (MiGetPageChain.c)
 * Callees:
 *     MiChangePageAttributeBatch @ 0x140211998 (MiChangePageAttributeBatch.c)
 *     MiSetPfnTbFlushStamp @ 0x14028A3A0 (MiSetPfnTbFlushStamp.c)
 *     MiZeroPhysicalPage @ 0x1402CE78C (MiZeroPhysicalPage.c)
 */

void __fastcall MiPerformFinalZeroing(ULONG_PTR *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v5; // rdi
  ULONG_PTR *v7; // rsi
  ULONG_PTR *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rcx
  ULONG_PTR v12; // rbx
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = 0LL;
  v5 = a2;
  v7 = a1;
  if ( a2 )
  {
    v8 = a1;
    v9 = a2;
    do
    {
      v10 = 48 * *v8++ - 0x220000000000LL;
      *(_QWORD *)(v10 + 16) = v3;
      v3 = v10;
      --v9;
    }
    while ( v9 );
  }
  MiChangePageAttributeBatch(v3, a3, ZeroPte);
  if ( a2 )
  {
    do
    {
      v12 = *v7;
      MiZeroPhysicalPage(v11, *v7, 0LL, a3);
      _InterlockedOr(v13, 0);
      MiSetPfnTbFlushStamp(48 * v12 - 0x220000000000LL, KiTbFlushTimeStamp, 0);
      ++v7;
      --v5;
    }
    while ( v5 );
  }
}
