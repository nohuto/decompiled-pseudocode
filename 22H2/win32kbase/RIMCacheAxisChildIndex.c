/*
 * XREFs of RIMCacheAxisChildIndex @ 0x1C015BCAC
 * Callers:
 *     RIMRetrieveLinkCollection @ 0x1C015F860 (RIMRetrieveLinkCollection.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C00298B0 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 *     memset @ 0x1C00CF8C0 (memset.c)
 *     rimHidP_GetSpecificValueCaps @ 0x1C0163548 (rimHidP_GetSpecificValueCaps.c)
 */

__int64 __fastcall RIMCacheAxisChildIndex(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  int v6; // r12d
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v10; // r15
  unsigned int v11; // edi
  _WORD *v12; // rax
  _WORD *v13; // r8
  __int64 v14; // rdx
  unsigned __int16 v15; // r13
  __int64 v16; // r15
  unsigned __int16 v17; // bx
  __int64 v18; // r15
  __int64 v19; // r13
  __int16 v20; // cx
  __int16 v21; // cx
  _WORD v23[2]; // [rsp+40h] [rbp-D8h] BYREF
  __int16 v24; // [rsp+44h] [rbp-D4h]
  __int16 v25; // [rsp+46h] [rbp-D2h]
  int v26; // [rsp+48h] [rbp-D0h]
  __int64 v27; // [rsp+50h] [rbp-C8h]
  __int64 v28; // [rsp+58h] [rbp-C0h]
  __int64 v29; // [rsp+60h] [rbp-B8h]
  __int64 v30; // [rsp+68h] [rbp-B0h]
  _WORD *v31; // [rsp+70h] [rbp-A8h]
  _WORD v32[40]; // [rsp+80h] [rbp-98h] BYREF

  v28 = a2;
  v27 = a1;
  v6 = a4;
  v26 = a4;
  memset(v32, 0, 0x48uLL);
  v7 = *(_QWORD *)(a1 + 712);
  v23[0] = 1;
  v8 = *(unsigned __int16 *)(v7 + 4);
  v9 = *(_QWORD *)(v7 + 16);
  v10 = *(unsigned __int16 *)(v9 + 24 * v8 + 4);
  v11 = 0;
  *(_WORD *)(v7 + 8) = 0;
  v12 = Win32AllocPoolZInit(8LL * a3, 2003006290LL);
  v31 = v12;
  v13 = v12;
  if ( v12 )
  {
    v14 = 3 * v10;
    *(_QWORD *)(v7 + 24) = v12;
    v15 = 0;
    v24 = 0;
    v30 = 3 * v10;
    if ( *(_WORD *)(v9 + 24 * v10 + 6) )
    {
      do
      {
        if ( !(_WORD)v8 )
          break;
        v16 = 3LL * (unsigned __int16)v8;
        v29 = v16;
        if ( *(_WORD *)(v9 + 24LL * (unsigned __int16)v8 + 6) )
        {
          if ( v26 )
          {
            v17 = *(_WORD *)(v9 + 24LL * (unsigned __int16)v8 + 10);
            if ( v17 )
            {
              v18 = v27;
              v19 = v28;
              do
              {
                v23[0] = 1;
                if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 1, v17, 48, (__int64)v32, (__int64)v23, v19) == 1114112 )
                {
                  v25 = v32[10];
                  v23[0] = 1;
                  if ( (unsigned int)rimHidP_GetSpecificValueCaps(0, 1, v17, 49, (__int64)v32, (__int64)v23, v19) == 1114112 )
                  {
                    v20 = v32[10];
                    if ( (_WORD)v8 == *(_WORD *)(v7 + 4) )
                    {
                      *(_WORD *)(v7 + 8) = v17;
                      v11 = 1;
                    }
                    *(_WORD *)(*(_QWORD *)(v7 + 24) + 8LL * (unsigned __int16)v8 + 2) = v17;
                    if ( v20 == v25 && v25 == 2 )
                      *(_DWORD *)(v18 + 312) |= 0x200u;
                  }
                }
                v17 = *(_WORD *)(v9 + 24LL * v17 + 8);
              }
              while ( v17 );
              v16 = v29;
              v15 = v24;
              v14 = v30;
              v13 = v31;
            }
          }
        }
        v21 = v8;
        v8 = *(unsigned __int16 *)(v9 + 8 * v16 + 8);
        if ( (_WORD)v8 )
          v13[4 * v8 + 2] = v21;
        else
          *(_WORD *)(v7 + 6) = v21;
        v24 = ++v15;
      }
      while ( v15 < *(_WORD *)(v9 + 8 * v14 + 6) );
      v6 = v26;
    }
    if ( !v6 )
      return 1;
  }
  return v11;
}
