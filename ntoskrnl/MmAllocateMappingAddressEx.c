/*
 * XREFs of MmAllocateMappingAddressEx @ 0x140869D20
 * Callers:
 *     MmAllocateMappingAddress @ 0x140869D00 (MmAllocateMappingAddress.c)
 *     PnprInitializeMappingReserve @ 0x140963304 (PnprInitializeMappingReserve.c)
 *     EtwpSavePersistedLogger @ 0x1409EAC60 (EtwpSavePersistedLogger.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     MiInsertMappingNode @ 0x1403BC7E4 (MiInsertMappingNode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     MiInsertPteTracker @ 0x14065EDA4 (MiInsertPteTracker.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmAllocateMappingAddressEx(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r15
  unsigned __int64 v5; // rdi
  ULONG_PTR v6; // rax
  _QWORD *v7; // r14
  unsigned int v8; // r12d
  __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  int v11; // r13d
  __int64 v12; // r8
  bool v14; // zf
  PVOID Pool; // [rsp+30h] [rbp-88h]
  _QWORD v16[5]; // [rsp+38h] [rbp-80h] BYREF
  int v17; // [rsp+60h] [rbp-58h]
  int v18; // [rsp+64h] [rbp-54h]
  __int64 v19; // [rsp+68h] [rbp-50h]
  ULONG_PTR BugCheckParameter4; // [rsp+B8h] [rbp+0h]

  v3 = a2;
  if ( (a3 & 0xFFFFFFFE) != 0 )
    return 0LL;
  v5 = (unsigned __int64)(a1 + 4095) >> 12;
  if ( !v5 )
    KeBugCheckEx(0xDAu, 0x100uLL, 0LL, a2, BugCheckParameter4);
  if ( !a2 )
    return 0LL;
  if ( v5 >= 0x100000000LL )
    return 0LL;
  Pool = MiAllocatePool(64, 0x30uLL, 0x6D72694Du);
  if ( !Pool )
    return 0LL;
  v6 = MiReservePtes((__int64)&qword_140C695C0, v5);
  v7 = (_QWORD *)v6;
  if ( !v6 )
  {
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  v8 = 0;
  *((_QWORD *)Pool + 4) = v5;
  v9 = (__int64)(v6 << 25) >> 16;
  *((_QWORD *)Pool + 3) = v9;
  *((_DWORD *)Pool + 10) = v3;
  *((_DWORD *)Pool + 11) = a3;
  do
  {
    v10 = ZeroPte;
    v11 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)v7) )
      goto LABEL_9;
    if ( MiPteHasShadow() )
    {
      v11 = 1;
      if ( HIBYTE(word_140C6697C) )
        goto LABEL_9;
      v14 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v14 = (ZeroPte & 1) == 0;
    }
    if ( !v14 )
      v10 = ZeroPte | 0x8000000000000000uLL;
LABEL_9:
    *v7 = v10;
    if ( v11 )
      MiWritePteShadow((__int64)v7, v10, v12);
    ++v8;
    ++v7;
  }
  while ( v8 < v5 );
  if ( (dword_140D1D1CC & 1) != 0 )
  {
    v16[0] = 0LL;
    v16[1] = 0LL;
    v17 = 0;
    v18 = 0;
    v19 = 0LL;
    v16[3] = v9;
    v16[4] = v3;
    v16[2] = v5 << 12;
    MiInsertPteTracker((__int64)v16, 2, 0, 1);
  }
  MiInsertMappingNode((unsigned __int64)Pool);
  return v9;
}
