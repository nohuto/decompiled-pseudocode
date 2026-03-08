/*
 * XREFs of KiPopulateNodeInformation @ 0x140B66BA0
 * Callers:
 *     KiPerformGroupConfiguration @ 0x140B66804 (KiPerformGroupConfiguration.c)
 * Callees:
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     MmGetChannelInformation @ 0x14084FA60 (MmGetChannelInformation.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

_DWORD *__fastcall KiPopulateNodeInformation(_DWORD *a1, int *a2)
{
  unsigned __int16 v2; // ax
  int *v3; // r13
  int v4; // r12d
  int v5; // esi
  unsigned __int16 v6; // bx
  _WORD *v7; // rdi
  _DWORD *v8; // r14
  unsigned __int16 v9; // r8
  unsigned __int16 v10; // bx
  unsigned __int16 v11; // di
  __int64 i; // r14
  unsigned __int16 v13; // bx
  int ChannelInformation; // eax
  unsigned int v15; // r8d
  char v16; // cl
  __int64 v17; // rax
  __int64 v18; // rdx
  char v19; // al
  PVOID v20; // rcx
  __int64 v21; // r10
  __int64 *v22; // r9
  __int64 v23; // rax
  _DWORD *result; // rax
  __int16 v25; // ax
  int v26; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+38h] [rbp-20h] BYREF
  size_t v28[3]; // [rsp+40h] [rbp-18h] BYREF
  int v31; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v32; // [rsp+B8h] [rbp+60h] BYREF

  v2 = KeNumberNodes;
  v32 = 0;
  v3 = a2;
  v26 = 0;
  v4 = 0;
  v28[0] = 0LL;
  v5 = 0;
  v31 = 0;
  LODWORD(P) = 0;
  v6 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v7 = (_WORD *)KeNodeBlock[v6];
      ((void (__fastcall *)(_QWORD, int *))KiNumaQueryNodeCapacity[0])(v6, &v31);
      v8 = v7 + 2;
      v7[4] = v31;
      v4 += v31;
      if ( KiNumaQueryProximityId )
      {
        KiNumaQueryProximityId(v6, v7 + 2, &v32);
        ((void (__fastcall *)(_QWORD, _WORD *))KiNumaQueryProximityNode)(v32, v7 + 1);
        if ( *v8 == v32 )
          ++v5;
      }
      else
      {
        v25 = *v7;
        v5 = 1;
        *v8 = 0;
        v7[1] = v25;
      }
      v2 = KeNumberNodes;
      ++v6;
    }
    while ( v6 < (unsigned __int16)KeNumberNodes );
    v3 = a2;
    LODWORD(P) = v4;
  }
  if ( v2 > 1u )
  {
    KeNodeDistance = (_UNKNOWN *)ExAllocatePool2(64LL, 4 * v2 * (unsigned int)v2, 0x2020654Bu);
    if ( !KeNodeDistance )
      KeBugCheckEx(0x32u, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  }
  v9 = KeNumberNodes;
  v10 = 0;
  if ( KeNumberNodes )
  {
    do
    {
      v11 = 0;
      for ( i = KeNodeBlock[v10]; v11 < v9; ++v11 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, int *))KiNumaQueryNodeDistance[0])(v10, v11, &v26);
        v9 = KeNumberNodes;
        *((_DWORD *)KeNodeDistance + v11 + v10 * (unsigned __int16)KeNumberNodes) = v26;
        if ( v10 != v11 && v26 != 0xFFFF )
          *(_BYTE *)(i + 10) |= 4u;
      }
      ++v10;
    }
    while ( v10 < v9 );
    v4 = (int)P;
    v3 = a2;
  }
  P = 0LL;
  v13 = 0;
  if ( v9 )
  {
    do
    {
      if ( *(_WORD *)KeNodeBlock[v13] == *(_WORD *)(KeNodeBlock[v13] + 2) )
      {
        ChannelInformation = MmGetChannelInformation(0, v13, &P, v28);
        if ( ChannelInformation < 0 )
          KeBugCheckEx(0x32u, ChannelInformation, 0LL, 0LL, 0LL);
        v15 = 0;
        v16 = 1;
        if ( v28[0] / 0x28 )
        {
          v17 = 0LL;
          while ( !*((_QWORD *)P + 5 * v17 + 1) )
          {
            v17 = ++v15;
            if ( v15 >= v28[0] / 0x28 )
              goto LABEL_21;
          }
          v16 = 0;
        }
LABEL_21:
        v18 = KeNodeBlock[v13];
        v19 = v16 | *(_BYTE *)(v18 + 10) & 0xFE;
        v20 = P;
        *(_BYTE *)(v18 + 10) = v19;
        ExFreePoolWithTag(v20, 0);
        P = 0LL;
      }
      ++v13;
    }
    while ( v13 < (unsigned __int16)KeNumberNodes );
    if ( KeNumberNodes )
    {
      v21 = (unsigned __int16)KeNumberNodes;
      v22 = KeNodeBlock;
      do
      {
        v23 = *(unsigned __int16 *)(*v22 + 2);
        if ( *(_WORD *)*v22 != (_WORD)v23 )
          *(_BYTE *)(*v22 + 10) ^= (*(_BYTE *)(*v22 + 10) ^ *(_BYTE *)(KeNodeBlock[v23] + 10)) & 1;
        ++v22;
        --v21;
      }
      while ( v21 );
      v3 = a2;
    }
  }
  result = a1;
  *v3 = v5;
  *a1 = v4;
  return result;
}
