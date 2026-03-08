/*
 * XREFs of WmipDereferenceEvent @ 0x1409DD790
 * Callers:
 *     WmipProcessEvent @ 0x1408686A8 (WmipProcessEvent.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     WmipAlign @ 0x1402092D8 (WmipAlign.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     WmipReferenceEntry @ 0x14069C27C (WmipReferenceEntry.c)
 *     WmipUnreferenceEntry @ 0x14069C9D0 (WmipUnreferenceEntry.c)
 *     WmipSendWmiIrp @ 0x14069CD88 (WmipSendWmiIrp.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char *__fastcall WmipDereferenceEvent(__int64 a1)
{
  int v1; // ebp
  char *v2; // rdi
  unsigned int v4; // r12d
  ULONG_PTR i; // rbx
  bool v6; // zf
  int v7; // r13d
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  unsigned int v10; // ecx
  unsigned int v11; // r15d
  unsigned int v12; // eax
  char *Pool2; // rax
  __int64 v14; // rcx
  char *v15; // rcx
  int v16; // ecx
  int v18; // [rsp+30h] [rbp-68h]
  __int128 v19[6]; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v20; // [rsp+A0h] [rbp+8h] BYREF
  size_t Size; // [rsp+A8h] [rbp+10h]
  int v22; // [rsp+B0h] [rbp+18h]
  int v23; // [rsp+B8h] [rbp+20h]

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 0LL;
  v4 = 0;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  for ( i = *(_QWORD *)WmipDSHeadPtr; ; i = *(_QWORD *)i )
  {
    if ( i == WmipDSHeadPtr )
    {
      i = 0LL;
      goto LABEL_6;
    }
    if ( *(_DWORD *)(i + 56) == v1 )
      break;
  }
  WmipReferenceEntry(i);
LABEL_6:
  KeReleaseMutex(&WmipSMMutex, 0);
  if ( i )
  {
    v6 = (*(_DWORD *)(a1 + 44) & 0x80) == 0;
    v7 = *(_DWORD *)(a1 + 44) & 0x80;
    v20 = 64;
    v23 = v7;
    if ( v6 )
    {
      v8 = *(unsigned __int16 *)(a1 + 68) + 2;
      if ( !WmipAlign(2, (int *)&v20) || (v9 = v20, v8 > ~v20) )
      {
LABEL_28:
        WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)i);
        return v2;
      }
      v20 += v8;
    }
    else
    {
      v8 = 0;
      v9 = 0;
    }
    if ( WmipAlign(8, (int *)&v20) )
    {
      v10 = *(_DWORD *)(a1 + 64);
      if ( v10 <= ~v20 )
      {
        v22 = 0;
        v11 = v20 + v10;
        v12 = v20 + v10;
        LODWORD(Size) = v20 + v10;
        while ( 1 )
        {
          Pool2 = (char *)ExAllocatePool2(64LL, v12, 1885957463LL);
          v2 = Pool2;
          if ( !Pool2 )
            break;
          memset(Pool2, 0, (unsigned int)Size);
          *(_DWORD *)v2 = v11;
          v14 = *(unsigned int *)(a1 + 4);
          *((_DWORD *)v2 + 1) = v14;
          *(_OWORD *)(v2 + 24) = *(_OWORD *)(a1 + 48);
          *((_DWORD *)v2 + 2) = *(_DWORD *)(a1 + 8);
          v6 = v23 == 0;
          *((_DWORD *)v2 + 11) = v7 | 2;
          *((_DWORD *)v2 + 14) = v20;
          if ( v6 )
          {
            v8 -= 2;
            *((_DWORD *)v2 + 12) = v9;
            v15 = &v2[v9];
            *(_WORD *)v15 = v8;
            memmove(v15 + 2, (const void *)(a1 + 70), v8);
          }
          else
          {
            *((_DWORD *)v2 + 13) = *(_DWORD *)(a1 + 68);
          }
          LOBYTE(v14) = 1;
          v18 = WmipSendWmiIrp(v14, *(unsigned int *)(i + 56), (__int64)(v2 + 24), v11, (__int64)v2, v19);
          if ( v18 >= 0 )
          {
            v16 = *((_DWORD *)v2 + 11);
            if ( (v16 & 0x20) == 0 )
            {
              *((_DWORD *)v2 + 11) = v16 | *(_DWORD *)(a1 + 44) & 0xFF000008 | 8;
              goto LABEL_28;
            }
            v4 = *((_DWORD *)v2 + 12);
          }
          LODWORD(Size) = v4;
          ExFreePoolWithTag(v2, 0);
          v2 = 0LL;
          if ( v18 < 0 )
            goto LABEL_28;
          if ( v4 <= v11 )
            goto LABEL_28;
          v11 = v4;
          v12 = v4;
          if ( (unsigned int)++v22 >= 2 )
            goto LABEL_28;
          v7 = v23;
        }
      }
    }
    goto LABEL_28;
  }
  return v2;
}
