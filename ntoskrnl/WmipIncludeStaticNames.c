/*
 * XREFs of WmipIncludeStaticNames @ 0x1409DDB94
 * Callers:
 *     WmipProcessEvent @ 0x1408686A8 (WmipProcessEvent.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402046C0 (KeReleaseMutex.c)
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     WmipAlign @ 0x1402092D8 (WmipAlign.c)
 *     RtlStringCbCatW @ 0x1402092FC (RtlStringCbCatW.c)
 *     RtlStringCbCopyW @ 0x140244EC0 (RtlStringCbCopyW.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     WmipFindGEByGuid @ 0x14069BDF4 (WmipFindGEByGuid.c)
 *     WmipReferenceEntry @ 0x14069C27C (WmipReferenceEntry.c)
 *     WmipUnreferenceEntry @ 0x14069C9D0 (WmipUnreferenceEntry.c)
 *     WmipInsertStaticNames @ 0x14069E478 (WmipInsertStaticNames.c)
 *     WmipStaticInstanceNameSize @ 0x14069E658 (WmipStaticInstanceNameSize.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

int *__fastcall WmipIncludeStaticNames(int *Src, unsigned int a2)
{
  int *v3; // rbx
  __int64 v4; // rbp
  volatile signed __int64 *GEByGuid; // rdi
  unsigned int v6; // esi
  ULONG_PTR i; // rcx
  int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // eax
  unsigned int v11; // edi
  int *Pool2; // rax
  int *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r15
  const wchar_t *v16; // r15
  __int64 v17; // rdi
  __int64 v18; // rax
  unsigned int v19; // r14d
  __int64 v20; // rax
  __int64 v21; // r13
  int *v22; // rax
  _WORD *v23; // rbx
  int v24; // eax
  unsigned int v25; // r14d
  unsigned int v26; // eax
  unsigned int v28; // [rsp+30h] [rbp-58h] BYREF
  int v29; // [rsp+34h] [rbp-54h]
  wchar_t pszDest[8]; // [rsp+38h] [rbp-50h] BYREF

  v3 = Src;
  v4 = 0LL;
  if ( (Src[11] & 7) != 0 )
  {
    GEByGuid = WmipFindGEByGuid((_QWORD *)Src + 3, 0);
    if ( GEByGuid )
    {
      v6 = v3[1];
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      for ( i = *((_QWORD *)GEByGuid + 7); (volatile signed __int64 *)i != GEByGuid + 7; i = *(_QWORD *)i )
      {
        if ( *(_DWORD *)(i + 80) == v6 )
        {
          v4 = i;
          WmipReferenceEntry(i);
          break;
        }
      }
      KeReleaseMutex(&WmipSMMutex, 0);
      WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, GEByGuid);
      if ( v4 )
      {
        v8 = *(_DWORD *)(v4 + 16);
        if ( (v8 & 3) != 0 )
        {
          v9 = *(_DWORD *)(v4 + 72);
          if ( (v3[11] & 1) != 0 )
          {
            v28 = a2;
            if ( WmipAlign(4, (int *)&v28) )
            {
              v10 = WmipStaticInstanceNameSize(v4);
              if ( v10 <= -1 - v28 )
              {
                v11 = v10 + v28;
                Pool2 = (int *)ExAllocatePool2(256LL, v10 + v28, 1885957463LL);
                v13 = Pool2;
                if ( Pool2 )
                {
                  memmove(Pool2, v3, (unsigned int)*v3);
                  WmipInsertStaticNames(v13, v11, v4);
LABEL_34:
                  v3 = v13;
LABEL_42:
                  WmipUnreferenceEntry((__int64)&WmipISChunkInfo, (volatile signed __int64 *)v4);
                  return v3;
                }
              }
            }
          }
          else
          {
            v14 = (unsigned int)v3[13];
            v29 = v14;
            if ( (unsigned int)v14 < v9 )
            {
              v15 = *(_QWORD *)(v4 + 88);
              if ( (v8 & 2) != 0 )
              {
                v16 = *(const wchar_t **)(v15 + 8 * v14);
                v17 = -1LL;
                v18 = -1LL;
                do
                  ++v18;
                while ( v16[v18] );
                v19 = 2 * v18 + 4;
              }
              else
              {
                v16 = (const wchar_t *)(v15 + 4);
                v17 = -1LL;
                v20 = -1LL;
                do
                  ++v20;
                while ( v16[v20] );
                v19 = 2 * v20 + 16;
              }
              v28 = a2;
              if ( WmipAlign(2, (int *)&v28) )
              {
                v21 = v28;
                if ( v19 <= ~v28 )
                {
                  v22 = (int *)ExAllocatePool2(256LL, v19 + v28, 1885957463LL);
                  v13 = v22;
                  if ( v22 )
                  {
                    memmove(v22, v3, (unsigned int)*v3);
                    v13[12] = v21;
                    *v13 = v19 + v21;
                    v23 = (_WORD *)((char *)v13 + v21);
                    v24 = *(_DWORD *)(v4 + 16);
                    v25 = v19 - 2;
                    if ( (v24 & 2) != 0 )
                    {
                      *v23 = v25;
                      RtlStringCbCopyW(v23 + 1, v25, v16);
                    }
                    else
                    {
                      if ( (v24 & 0x20000) != 0 )
                        v13[11] |= 0x10000u;
                      RtlStringCbPrintfW(pszDest, 0xEuLL, L"%d", (unsigned int)(**(_DWORD **)(v4 + 88) + v29));
                      RtlStringCbCopyW(v23 + 1, v25, v16);
                      RtlStringCbCatW(v23 + 1, v25, pszDest);
                      do
                        ++v17;
                      while ( v23[v17 + 1] );
                      *v23 = 2 * (v17 + 1);
                    }
                    goto LABEL_34;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v26 = v3[11];
  if ( (v26 & 1) != 0 && a2 >= 0x3C )
  {
    v3[14] = 0;
  }
  else if ( (v26 & 6) != 0 && a2 >= 0x34 )
  {
    v3[12] = 0;
  }
  if ( v4 )
    goto LABEL_42;
  return v3;
}
