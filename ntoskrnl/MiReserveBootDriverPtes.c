/*
 * XREFs of MiReserveBootDriverPtes @ 0x140B5EC04
 * Callers:
 *     MiInitializeDriverPtes @ 0x140B5E7C8 (MiInitializeDriverPtes.c)
 * Callees:
 *     MiAllocatePool @ 0x140289CF0 (MiAllocatePool.c)
 *     RtlSetBits @ 0x14028BC50 (RtlSetBits.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReserveBootDriverPtes(unsigned __int64 a1, int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  const void **v5; // rbx
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // r14
  __int64 v8; // r9
  unsigned __int64 v9; // r8
  __int64 result; // rax
  unsigned int v11; // r12d
  RTL_BITMAP *v12; // rsi
  unsigned int *v13; // rax

  v3 = ((dword_140C694FC & 0xFFF) != 0) + a2 + ((unsigned int)dword_140C694FC >> 12);
  v4 = (__int64)(a1 << 25) >> 16;
  if ( v4 != PsHalImageBase && v4 != PsNtosImageBase )
    v3 = (unsigned int)(dword_140C654C4 + v3);
  v5 = (const void **)qword_140C655C0;
  v6 = a1 + 8 * v3;
  v7 = a1 & 0xFFFFFFFFFFFFF000uLL;
  if ( qword_140C655C0 )
  {
    v8 = *((_QWORD *)qword_140C655C0 + 1);
    v9 = v8 + 8LL * *((unsigned int *)qword_140C655C0 + 4);
    if ( v6 <= v9 )
    {
      RtlSetBits((PRTL_BITMAP)qword_140C655C0 + 1, (__int64)(a1 - v8) >> 3, v3);
      return 1LL;
    }
    if ( a1 >= v9 )
      v5 = 0LL;
    else
      v7 = *((_QWORD *)qword_140C655C0 + 1);
  }
  v11 = (__int64)(((v6 + 4088) & 0xFFFFFFFFFFFFF000uLL) - v7) >> 3;
  result = (__int64)MiAllocatePool(64, ((unsigned __int64)v11 >> 3) + 40, 0x70446D4Du);
  v12 = (RTL_BITMAP *)result;
  if ( result )
  {
    *(_DWORD *)(result + 16) = v11;
    v13 = (unsigned int *)(result + 40);
    v12[1].Buffer = v13;
    if ( v5 )
    {
      memmove(v13, v5[3], (unsigned __int64)*((unsigned int *)v5 + 4) >> 3);
      qword_140C655C0 = (PVOID)*v5;
      ExFreePoolWithTag(v5, 0);
    }
    RtlSetBits(v12 + 1, (__int64)(a1 - v7) >> 3, v3);
    v12[2].SizeOfBitMap = 0;
    *(&v12[2].SizeOfBitMap + 1) = 1;
    v12->Buffer = (unsigned int *)v7;
    *(_QWORD *)&v12->SizeOfBitMap = qword_140C655C0;
    qword_140C655C0 = v12;
    return 1LL;
  }
  return result;
}
