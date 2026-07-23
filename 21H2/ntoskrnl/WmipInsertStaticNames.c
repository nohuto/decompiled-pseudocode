/*
 * XREFs of WmipInsertStaticNames @ 0x14062DC80
 * Callers:
 *     WmipQueryAllData @ 0x14062DEE4 (WmipQueryAllData.c)
 *     WmipIncludeStaticNames @ 0x14093293C (WmipIncludeStaticNames.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140252F68 (RtlStringCbCopyW.c)
 *     WmipAlign @ 0x140252FF0 (WmipAlign.c)
 *     RtlStringCbCatW @ 0x1402531A8 (RtlStringCbCatW.c)
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     WmipStaticInstanceNameSize @ 0x14062DE5C (WmipStaticInstanceNameSize.c)
 */

char __fastcall WmipInsertStaticNames(int *a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 v7; // r12
  __int64 v8; // rbx
  unsigned int v9; // r14d
  _DWORD *v10; // r15
  int v11; // eax
  wchar_t *v12; // rdi
  __int64 v13; // r13
  unsigned int i; // r13d
  unsigned int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // r12
  const wchar_t *v18; // r8
  __int64 v19; // rax
  unsigned int v20; // ebx
  unsigned int v21; // r14d
  wchar_t *v22; // rdi
  unsigned int v24; // [rsp+20h] [rbp-58h] BYREF
  wchar_t pszDest[8]; // [rsp+28h] [rbp-50h] BYREF

  v3 = *(_DWORD *)(a3 + 16);
  if ( (v3 & 3) != 0 )
  {
    v7 = *(unsigned int *)(a3 + 72);
    v24 = *a1;
    LOBYTE(v3) = WmipAlign(4, (int *)&v24);
    if ( (_BYTE)v3 )
    {
      v8 = v24;
      v3 = WmipStaticInstanceNameSize(a3);
      v9 = v3;
      if ( v3 <= ~(_DWORD)v8 )
      {
        v3 += v8;
        v24 = v3;
        if ( v3 > a2 )
        {
          *a1 = 56;
          a1[11] = 32;
          a1[12] = v3;
        }
        else
        {
          a1[14] = v8;
          v10 = (int *)((char *)a1 + v8);
          v11 = *(_DWORD *)(a3 + 16);
          v12 = (wchar_t *)((char *)&a1[v7] + v8);
          v13 = (unsigned int)v7;
          if ( (v11 & 1) != 0 )
          {
            if ( (v11 & 0x20000) != 0 )
              a1[11] |= 0x10000u;
            for ( i = 0; i < (unsigned int)v7; v12 += ((unsigned __int64)(unsigned int)(2 * v16 + 2) >> 1) + 1 )
            {
              v15 = v9 - 2;
              *v10++ = (_DWORD)v12 - (_DWORD)a1;
              RtlStringCbCopyW(v12 + 1, v15, (NTSTRSAFE_PCWSTR)(*(_QWORD *)(a3 + 88) + 4LL));
              RtlStringCbPrintfW(pszDest, 0xEuLL, L"%d", i + **(_DWORD **)(a3 + 88));
              RtlStringCbCatW(v12 + 1, v15, pszDest);
              v16 = -1LL;
              do
                ++v16;
              while ( v12[v16 + 1] );
              ++i;
              *v12 = 2 * v16 + 2;
              v9 = v15 - (2 * v16 + 2);
            }
          }
          else if ( (v11 & 2) != 0 && (_DWORD)v7 )
          {
            v17 = 0LL;
            do
            {
              *v10++ = (_DWORD)v12 - (_DWORD)a1;
              v18 = *(const wchar_t **)(v17 + *(_QWORD *)(a3 + 88));
              v19 = -1LL;
              do
                ++v19;
              while ( v18[v19] );
              v20 = 2 * v19 + 2;
              v21 = v9 - 2;
              *v12 = 2 * v19 + 2;
              v22 = v12 + 1;
              RtlStringCbCopyW(v22, v21, v18);
              v9 = v21 - v20;
              v17 += 8LL;
              v12 = &v22[(unsigned __int64)v20 >> 1];
              --v13;
            }
            while ( v13 );
          }
          LOBYTE(v3) = v24;
          *a1 = v24;
        }
      }
    }
  }
  return v3;
}
