/*
 * XREFs of WmipSendEnableDisableRequest @ 0x14077E1C0
 * Callers:
 *     WmipSendEnableRequest @ 0x14061FF94 (WmipSendEnableRequest.c)
 *     WmipDoDisableRequest @ 0x14077A9AC (WmipDoDisableRequest.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402F92F0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     WmipUnreferenceEntry @ 0x14062E428 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x1406339F4 (WmipReferenceEntry.c)
 *     WmipSendWmiIrp @ 0x1407576DC (WmipSendWmiIrp.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WmipSendEnableDisableRequest(unsigned __int8 a1, __int64 a2, char a3)
{
  int v6; // eax
  bool v7; // r8
  __int64 v8; // rax
  __int64 v9; // r15
  int v10; // esi
  volatile signed __int64 **PoolWithTag; // rdi
  __int64 *i; // rbx
  int v13; // ecx
  __int64 v14; // rdx
  int v15; // eax
  ULONG_PTR v16; // rcx
  int v17; // eax
  __int128 v18; // xmm0
  __int64 v19; // r14
  volatile signed __int64 **v20; // rsi
  volatile signed __int64 *v21; // rbx
  bool v23; // [rsp+30h] [rbp-D0h]
  __int128 v25; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING v26[3]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE P[512]; // [rsp+80h] [rbp-80h] BYREF

  memset(P, 0, sizeof(P));
  v6 = *(_DWORD *)(a2 + 16);
  memset(v26, 0, sizeof(v26));
  if ( (v6 & 1) != 0 )
    return 0LL;
  v7 = ((a1 - 4) & 0xFD) == 0;
  v8 = *(unsigned int *)(a2 + 36);
  v23 = v7;
  v9 = 0LL;
  v10 = a3 != 0 ? 0x2000 : 0x4000;
  if ( (unsigned int)v8 > 0x40 )
  {
    PoolWithTag = (volatile signed __int64 **)ExAllocatePoolWithTag(PagedPool, 8 * v8, 0x70696D57u);
    if ( !PoolWithTag )
      return 3221225626LL;
    v7 = ((a1 - 4) & 0xFD) == 0;
  }
  else
  {
    PoolWithTag = (volatile signed __int64 **)P;
  }
  for ( i = *(__int64 **)(a2 + 56); i != (__int64 *)(a2 + 56) && (unsigned int)v9 < *(_DWORD *)(a2 + 36); i = (__int64 *)*i )
  {
    v13 = *((_DWORD *)i + 4);
    if ( (v13 & 0x1000) == 0 && (a3 || (v13 & 4) != 0) )
    {
      v14 = i[8];
      if ( (*(_DWORD *)(v14 + 16) & 0x20000000) == 0 )
      {
        v15 = v13 & v10;
        if ( v7 )
        {
          if ( !v15 )
            goto LABEL_13;
        }
        else if ( v15 )
        {
LABEL_13:
          v16 = i[8];
          PoolWithTag[v9] = (volatile signed __int64 *)v14;
          WmipReferenceEntry(v16);
          v13 = *((_DWORD *)i + 4);
          v9 = (unsigned int)(v9 + 1);
          v7 = v23;
        }
        if ( v7 )
          v17 = v13 | v10;
        else
          v17 = v13 & ~v10;
        *((_DWORD *)i + 4) = v17;
        continue;
      }
    }
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( (_DWORD)v9 )
  {
    memset(&v26[0].MaximumLength + 1, 0, 20);
    v26[2].Buffer = 0LL;
    v18 = *(_OWORD *)(a2 + 72);
    v19 = (unsigned int)v9;
    v20 = PoolWithTag;
    *(_OWORD *)&v26[1].Buffer = v18;
    *(_DWORD *)&v26[0].Length = 48;
    do
    {
      v21 = *v20;
      WmipSendWmiIrp(a1, *((_DWORD *)*v20 + 14), (UNICODE_STRING *)&v26[1].Buffer, 0x30u, (__int64)v26, &v25);
      WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, v21);
      ++v20;
      --v19;
    }
    while ( v19 );
  }
  if ( PoolWithTag != (volatile signed __int64 **)P )
    ExFreePoolWithTag(PoolWithTag, 0);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  return 0LL;
}
