/*
 * XREFs of RtlpHpHeapAllocate @ 0x180007E6C
 * Callers:
 *     RtlpHpHeapCreate @ 0x18000821C (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpMetadataCommit @ 0x1800059A8 (RtlpHpMetadataCommit.c)
 *     RtlpHpMetadataAlloc @ 0x18000798C (RtlpHpMetadataAlloc.c)
 *     RtlpHpMetadataHeapCtxGet @ 0x180008110 (RtlpHpMetadataHeapCtxGet.c)
 *     RtlpHpFreeVA @ 0x180020824 (RtlpHpFreeVA.c)
 *     RtlpHpAllocVA @ 0x180022BAC (RtlpHpAllocVA.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     RtlpLogHeapCommit @ 0x180109E08 (RtlpLogHeapCommit.c)
 */

volatile signed __int64 *__fastcall RtlpHpHeapAllocate(__int64 a1, unsigned int a2, __int128 *a3)
{
  __int16 v4; // r15
  __int128 v5; // xmm0
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int64 v10; // rcx
  int v11; // r10d
  unsigned __int64 v12; // r11
  ULONG v13; // ebx
  __int64 v14; // rcx
  volatile signed __int64 *v15; // rbx
  ULONG_PTR v16; // rcx
  __int64 v18; // rax
  __int128 v19; // [rsp+40h] [rbp-29h] BYREF
  __int128 v20; // [rsp+50h] [rbp-19h] BYREF
  __int128 v21; // [rsp+60h] [rbp-9h] BYREF
  __int64 v22[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v23[2]; // [rsp+80h] [rbp+17h] BYREF
  __int128 v24; // [rsp+90h] [rbp+27h]
  PVOID BaseAddress; // [rsp+E0h] [rbp+77h] BYREF
  ULONG_PTR RegionSize; // [rsp+E8h] [rbp+7Fh] BYREF

  BaseAddress = 0LL;
  v4 = 1;
  v5 = *a3;
  v6 = 64LL;
  v7 = (unsigned __int64)(((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) << 6;
  v20 = *a3;
  if ( a2 <= 0x40 )
    v6 = a2;
  v19 = v5;
  v8 = v7 + 9 * (v6 + 15) - (((_BYTE)v6 - 1) & 7);
  v9 = v8
     + (unsigned int)v6 * (v7 + 64)
     - (((_BYTE)v8 - 1) & 0x3F)
     + ((unsigned __int64)(((unsigned int)RtlpHpLfhPerfFlags >> 10) & 1) << 6);
  RegionSize = 129 * v9 + 10175 - ((129 * (_WORD)v9 + 10174) & 0xFFF) + 4095;
  v10 = *(_QWORD *)RtlpHpMetadataHeapCtxGet(&v20);
  if ( !v10
    || (RtlpHpAppCompatFlags & 8) != 0
    || (v11 & 0x40000000) != 0
    || BYTE2(v19)
    || v12 >= *(unsigned int *)(v10 + 464) )
  {
    *(_OWORD *)v22 = v5;
    v13 = (v11 & 0x40000000) != 0 ? 64 : 4;
    if ( (int)RtlpHpAllocVA(&BaseAddress, v13, (__int64)v22) >= 0 )
    {
      *(_OWORD *)v23 = *a3;
      if ( (int)RtlpHpAllocVA(&BaseAddress, v13, (__int64)v23) >= 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v14 = (__int64)NtCurrentPeb()->SharedData + 550;
        else
          v14 = 2147353472LL;
        if ( *(_BYTE *)v14 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapCommit(BaseAddress, BaseAddress, 4096LL, 11LL);
        v15 = (volatile signed __int64 *)BaseAddress;
        v4 = 0;
        BaseAddress = 0LL;
        goto LABEL_10;
      }
    }
    v15 = 0LL;
  }
  else
  {
    v19 = v5;
    v18 = RtlpHpMetadataAlloc(v12, 0x1000uLL, 1, &v19);
    v15 = (volatile signed __int64 *)v18;
    if ( v18 )
    {
      v21 = *a3;
      RtlpHpMetadataCommit(v18, v18 + 4096, RegionSize - 4096, &v21);
LABEL_10:
      memset((void *)v15, 0, 0x800uLL);
      *((_QWORD *)v15 + 29) = v15 + 256;
      *((_QWORD *)v15 + 30) = v15 + 512;
      v16 = RegionSize;
      *((_WORD *)v15 + 15) &= ~1u;
      *((_WORD *)v15 + 15) |= v4;
      *((_QWORD *)v15 + 31) = (char *)v15 + v16;
      _InterlockedExchangeAdd64(v15 + 16, RegionSize >> 12);
      _InterlockedExchangeAdd64(v15 + 17, 1uLL);
    }
  }
  if ( BaseAddress )
  {
    v24 = *a3;
    RtlpHpFreeVA(&BaseAddress, &RegionSize);
  }
  return v15;
}
