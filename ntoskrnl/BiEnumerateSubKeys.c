/*
 * XREFs of BiEnumerateSubKeys @ 0x14082D288
 * Callers:
 *     BiOpenSystemStore @ 0x14082CC40 (BiOpenSystemStore.c)
 *     BiDeleteKey @ 0x14082CF64 (BiDeleteKey.c)
 *     BiBuildIdentifierList @ 0x14082DD44 (BiBuildIdentifierList.c)
 *     BiCleanupLoadedStores @ 0x1408311C8 (BiCleanupLoadedStores.c)
 *     BcdEnumerateObjects @ 0x140A597EC (BcdEnumerateObjects.c)
 * Callees:
 *     BiSanitizeHandle @ 0x1402FDDE8 (BiSanitizeHandle.c)
 *     BiZwEnumerateKey @ 0x1403903B8 (BiZwEnumerateKey.c)
 *     BiZwQueryKey @ 0x140390458 (BiZwQueryKey.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiEnumerateSubKeys(void *a1, _QWORD *a2, ULONG *a3)
{
  _QWORD *v3; // rax
  unsigned int v5; // esi
  ULONG v6; // r13d
  unsigned int *v7; // r15
  void *v8; // r12
  NTSTATUS v9; // ebx
  unsigned int v10; // r14d
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rsi
  unsigned int v13; // r8d
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __int64 Pool2; // rax
  char *v17; // r12
  __int64 v18; // r8
  ULONG i; // esi
  NTSTATUS v20; // eax
  char *v21; // r12
  unsigned int v23; // [rsp+34h] [rbp-B4h]
  void *v24; // [rsp+38h] [rbp-B0h]
  _QWORD *v25; // [rsp+40h] [rbp-A8h]
  ULONG v26; // [rsp+48h] [rbp-A0h] BYREF
  ULONG v27; // [rsp+4Ch] [rbp-9Ch]
  _QWORD *v28; // [rsp+50h] [rbp-98h]
  ULONG *v29; // [rsp+58h] [rbp-90h]
  _QWORD *v30; // [rsp+60h] [rbp-88h]
  ULONG *v31; // [rsp+68h] [rbp-80h]
  int v32[4]; // [rsp+70h] [rbp-78h] BYREF
  __int128 v33; // [rsp+80h] [rbp-68h]
  __int128 v34; // [rsp+90h] [rbp-58h]

  v29 = a3;
  v3 = a2;
  v28 = a2;
  v30 = a2;
  v31 = a3;
  *(_OWORD *)v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v26 = 0;
  v5 = 0;
  v23 = 0;
  v6 = -1;
  while ( 1 )
  {
    *v3 = 0LL;
    *a3 = 0;
    v7 = 0LL;
    v8 = 0LL;
    a1 = (void *)BiSanitizeHandle((__int64)a1);
    v24 = a1;
    v9 = BiZwQueryKey(a1, KeyFullInformation, v32, 0x30u, &v26);
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
    {
      v27 = DWORD1(v33);
      if ( DWORD1(v33) )
      {
        v10 = DWORD2(v33) + 2;
        if ( (unsigned int)(DWORD2(v33) + 2) < DWORD2(v33) )
        {
          v10 = -1;
          v9 = -1073741675;
        }
        else
        {
          v9 = 0;
        }
        if ( v9 >= 0 )
        {
          v11 = DWORD1(v33) * (unsigned __int64)v10;
          v10 = -1;
          if ( v11 <= 0xFFFFFFFF )
            v10 = v11;
          v9 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
        }
        v12 = 8LL * DWORD1(v33);
        if ( v9 >= 0 )
        {
          v13 = -1;
          if ( v12 <= 0xFFFFFFFF )
            v13 = 8 * DWORD1(v33);
          v9 = v12 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v12 <= 0xFFFFFFFF )
          {
            v14 = v13 + v10;
            v15 = -1;
            if ( v13 + v10 >= v13 )
              v15 = v13 + v10;
            v9 = v14 < v13 ? 0xC0000095 : 0;
            if ( v14 >= v13 )
            {
              Pool2 = ExAllocatePool2(258LL, v15, 1262764866LL);
              v8 = (void *)Pool2;
              v25 = (_QWORD *)Pool2;
              if ( Pool2 )
              {
                v17 = (char *)(v12 + Pool2);
                if ( DWORD2(v33) < 0xFFFFFFE6 )
                  v6 = DWORD2(v33) + 26;
                v9 = DWORD2(v33) >= 0xFFFFFFE6 ? 0xC0000095 : 0;
                if ( (unsigned int)(DWORD2(v33) + 26) >= 0x1A )
                {
                  v7 = (unsigned int *)ExAllocatePool2(258LL, v6, 1262764866LL);
                  if ( v7 )
                  {
                    for ( i = 0; ; ++i )
                    {
                      if ( i >= v27 )
                        goto LABEL_34;
                      v20 = BiZwEnumerateKey(v24, i, v18, v7, v6, &v26);
                      v9 = v20;
                      if ( v20 == -2147483622 )
                        break;
                      if ( v20 < 0 )
                        goto LABEL_44;
                      if ( (unsigned __int64)v7[3] + 2 > v10 )
                      {
                        v9 = -1073741789;
                        goto LABEL_44;
                      }
                      v25[i] = v17;
                      memmove(v17, v7 + 4, v7[3]);
                      v21 = &v17[v7[3]];
                      *(_WORD *)v21 = 0;
                      v17 = v21 + 2;
                      v10 += -2 - v7[3];
                    }
                    if ( i )
                    {
LABEL_34:
                      v8 = v25;
                      *v28 = v25;
                      *v29 = i;
                      v9 = 0;
                      goto LABEL_35;
                    }
                  }
                  else
                  {
                    v9 = -1073741670;
                  }
                }
LABEL_44:
                v8 = v25;
LABEL_35:
                v6 = -1;
              }
              else
              {
                v9 = -1073741670;
              }
            }
          }
        }
        a1 = v24;
        v5 = v23;
      }
      else
      {
        v9 = 0;
      }
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0x4B444342u);
    if ( v9 < 0 && v8 )
      ExFreePoolWithTag(v8, 0x4B444342u);
    if ( v9 != -1073741443 )
      break;
    __debugbreak();
    v3 = v28;
    a3 = v29;
    if ( v5 >= 5 )
      break;
    v23 = ++v5;
  }
  return (unsigned int)v9;
}
