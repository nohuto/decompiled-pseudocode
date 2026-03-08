/*
 * XREFs of WmipSendEnableDisableRequest @ 0x1407870B0
 * Callers:
 *     WmipDoDisableRequest @ 0x140786F08 (WmipDoDisableRequest.c)
 *     WmipSendEnableRequest @ 0x140786FAC (WmipSendEnableRequest.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     WmipReferenceEntry @ 0x14069C27C (WmipReferenceEntry.c)
 *     WmipUnreferenceEntry @ 0x14069C9D0 (WmipUnreferenceEntry.c)
 *     WmipSendWmiIrp @ 0x14069CD88 (WmipSendWmiIrp.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipSendEnableDisableRequest(char a1, __int64 a2, char a3)
{
  int v6; // eax
  bool v7; // r13
  __int64 v8; // rax
  __int64 v9; // rbp
  int v10; // esi
  volatile signed __int64 **Pool2; // rdi
  __int64 *i; // rbx
  int v13; // edx
  ULONG_PTR v14; // rcx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rcx
  __int128 v19; // xmm0
  volatile signed __int64 **v20; // rsi
  volatile signed __int64 *v21; // rbx
  __int128 v24; // [rsp+38h] [rbp-290h] BYREF
  LARGE_INTEGER v25[2]; // [rsp+48h] [rbp-280h] BYREF
  _OWORD v26[2]; // [rsp+58h] [rbp-270h] BYREF
  _BYTE P[512]; // [rsp+80h] [rbp-248h] BYREF

  memset(P, 0, sizeof(P));
  v6 = *(_DWORD *)(a2 + 16);
  *(_OWORD *)&v25[0].LowPart = 0LL;
  memset(v26, 0, sizeof(v26));
  if ( (v6 & 1) != 0 )
    return 0LL;
  v7 = ((a1 - 4) & 0xFD) == 0;
  v8 = *(unsigned int *)(a2 + 36);
  v9 = 0LL;
  v10 = a3 != 0 ? 0x2000 : 0x4000;
  if ( (unsigned int)v8 > 0x40 )
  {
    Pool2 = (volatile signed __int64 **)ExAllocatePool2(256LL, 8 * v8, 1885957463LL);
    if ( !Pool2 )
      return 3221225626LL;
  }
  else
  {
    Pool2 = (volatile signed __int64 **)P;
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
          Pool2[v9] = (volatile signed __int64 *)v14;
          WmipReferenceEntry(v14);
          v9 = (unsigned int)(v9 + 1);
        }
        v16 = *((_DWORD *)i + 4);
        if ( v7 )
          v17 = v16 | v10;
        else
          v17 = v16 & ~v10;
        *((_DWORD *)i + 4) = v17;
        continue;
      }
    }
  }
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( (_DWORD)v9 )
  {
    v19 = *(_OWORD *)(a2 + 72);
    v25[0].LowPart = 48;
    v20 = Pool2;
    *(_OWORD *)((char *)v26 + 8) = v19;
    do
    {
      v21 = *v20;
      LOBYTE(v18) = a1;
      WmipSendWmiIrp(v18, *((unsigned int *)*v20 + 14), (__int64)v26 + 8, 48, (__int64)v25, &v24);
      WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, v21);
      ++v20;
      --v9;
    }
    while ( v9 );
  }
  if ( Pool2 != (volatile signed __int64 **)P )
    ExFreePoolWithTag(Pool2, 0);
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  return 0LL;
}
