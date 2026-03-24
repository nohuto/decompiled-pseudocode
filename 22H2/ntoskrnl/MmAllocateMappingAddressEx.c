/*
 * XREFs of MmAllocateMappingAddressEx @ 0x140691450
 * Callers:
 *     MmAllocateMappingAddress @ 0x140691430 (MmAllocateMappingAddress.c)
 *     PnprInitializeMappingReserve @ 0x1408ADBA4 (PnprInitializeMappingReserve.c)
 *     EtwpSavePersistedLogger @ 0x140948CDC (EtwpSavePersistedLogger.c)
 * Callees:
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     MiAllocatePool @ 0x14025A5D0 (MiAllocatePool.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiInsertMappingNode @ 0x14031BB08 (MiInsertMappingNode.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     MiInsertPteTracker @ 0x14055ED20 (MiInsertPteTracker.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmAllocateMappingAddressEx(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // r15
  unsigned __int64 v5; // rdi
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  ULONG_PTR v8; // rax
  _QWORD *v9; // r14
  unsigned int v10; // r12d
  __int64 v11; // rbp
  unsigned __int64 v12; // rbx
  int v13; // r13d
  __int64 v14; // r8
  bool v16; // zf
  _QWORD *Pool; // [rsp+30h] [rbp-88h]
  _QWORD v18[5]; // [rsp+38h] [rbp-80h] BYREF
  int v19; // [rsp+60h] [rbp-58h]
  int v20; // [rsp+64h] [rbp-54h]
  __int64 v21; // [rsp+68h] [rbp-50h]
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
  v8 = MiReservePtes((__int64)&qword_140C4EF40, v5, v6, v7);
  v9 = (_QWORD *)v8;
  if ( !v8 )
  {
    ExFreePoolWithTag(Pool, 0);
    return 0LL;
  }
  v10 = 0;
  Pool[4] = v5;
  v11 = (__int64)(v8 << 25) >> 16;
  Pool[3] = v11;
  *((_DWORD *)Pool + 10) = v3;
  *((_DWORD *)Pool + 11) = a3;
  do
  {
    v12 = ZeroPte;
    v13 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)v9) )
      goto LABEL_9;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_9;
      v16 = (ZeroPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_9;
      v16 = (ZeroPte & 1) == 0;
    }
    if ( !v16 )
      v12 = ZeroPte | 0x8000000000000000uLL;
LABEL_9:
    *v9 = v12;
    if ( v13 )
      MiWritePteShadow((__int64)v9, v12, v14);
    ++v10;
    ++v9;
  }
  while ( v10 < v5 );
  if ( (dword_140CFB17C & 1) != 0 )
  {
    v18[0] = 0LL;
    v18[1] = 0LL;
    v19 = 0;
    v20 = 0;
    v21 = 0LL;
    v18[3] = v11;
    v18[4] = v3;
    v18[2] = v5 << 12;
    MiInsertPteTracker((__int64)v18, 2, 0, 1);
  }
  MiInsertMappingNode(Pool);
  return v11;
}
