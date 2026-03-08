/*
 * XREFs of PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14083A4C8
 * Callers:
 *     PiDqActionDataCreate @ 0x140746614 (PiDqActionDataCreate.c)
 * Callees:
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     PiDqPnPGetObjectProperty @ 0x1406CD8A8 (PiDqPnPGetObjectProperty.c)
 *     PiDqOpenObjectRegKey @ 0x140747218 (PiDqOpenObjectRegKey.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x14083A6B4 (PiDqPnPGetObjectPropertyLocales.c)
 *     PiDqGrowPropertyArray @ 0x14083AE68 (PiDqGrowPropertyArray.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x14083AEDC (PiDqPnPGetObjectPropertyKeys.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDqActionDataGetAllPropertiesInAllLanguages(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        _DWORD *a6,
        unsigned int *a7)
{
  int v7; // r13d
  int v8; // esi
  int v9; // r12d
  char *v10; // r14
  PVOID v11; // rdi
  int v12; // ebx
  int v13; // r9d
  unsigned int *v14; // r15
  _DWORD *v15; // rsi
  const wchar_t *pszSrc; // r12
  __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v20; // rdx
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  int v26; // [rsp+50h] [rbp-20h]
  HANDLE Handle; // [rsp+58h] [rbp-18h] BYREF
  PVOID P; // [rsp+60h] [rbp-10h] BYREF
  int v29[2]; // [rsp+68h] [rbp-8h] BYREF
  unsigned int v31; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+58h]

  v32 = a4;
  v7 = 0;
  Handle = 0LL;
  v8 = a4;
  *(_QWORD *)v29 = 0LL;
  P = 0LL;
  v9 = 0;
  if ( a2 != 1 )
    v9 = a3;
  v31 = 0;
  v26 = v9;
  v10 = 0LL;
  v11 = 0LL;
  v12 = PiDqOpenObjectRegKey(a2, a4, a3, 1, 0, a1, &Handle);
  if ( v12 >= 0 )
  {
    v12 = PiDqPnPGetObjectPropertyKeys(v8, v9, (_DWORD)Handle, v13, (__int64)v29, (__int64)&v31);
    if ( v12 >= 0 && v31 )
    {
      v14 = a7;
      v15 = a6;
      v10 = *(char **)v29;
      while ( 1 )
      {
        *(_QWORD *)v29 = &v10[20 * v7];
        v12 = PiDqPnPGetObjectPropertyLocales(v32, v9, (_DWORD)Handle, (int)v10 + 20 * v7, (__int64)&P);
        if ( v12 < 0
          || !*v14 && (v20 = (unsigned int)*v15, v21 = a5, *v14 = v31, v12 = PiDqGrowPropertyArray(v21, v20), v12 < 0) )
        {
          v11 = P;
          goto LABEL_13;
        }
        v11 = P;
        pszSrc = (const wchar_t *)P;
        if ( *(_WORD *)P )
          break;
LABEL_10:
        ExFreePoolWithTag(v11, 0x58706E50u);
        v17 = (unsigned int)*v15;
        v18 = *v14;
        v11 = 0LL;
        P = 0LL;
        if ( (_DWORD)v17 != v18 || (v25 = a5, *v14 = 2 * v18, v12 = PiDqGrowPropertyArray(v25, v17), v12 >= 0) )
        {
          v9 = v26;
          v12 = PiDqPnPGetObjectProperty(
                  v32,
                  v26,
                  (__int64)Handle,
                  *(__int64 *)v29,
                  a2,
                  0LL,
                  (PVOID *)(*a5 + 48LL * (unsigned int)*v15));
          if ( v12 >= 0 )
          {
            ++*v15;
            if ( ++v7 < v31 )
              continue;
          }
        }
        goto LABEL_13;
      }
      while ( 1 )
      {
        v22 = (unsigned int)*v15;
        if ( (_DWORD)v22 == *v14 )
        {
          v23 = a5;
          *v14 *= 2;
          v12 = PiDqGrowPropertyArray(v23, v22);
          if ( v12 < 0 )
            break;
        }
        v12 = PiDqPnPGetObjectProperty(
                v32,
                v26,
                (__int64)Handle,
                *(__int64 *)v29,
                a2,
                pszSrc,
                (PVOID *)(*a5 + 48LL * (unsigned int)*v15));
        if ( v12 < 0 )
          break;
        ++*v15;
        v24 = -1LL;
        do
          ++v24;
        while ( pszSrc[v24] );
        pszSrc += v24 + 1;
        if ( !*pszSrc )
          goto LABEL_10;
      }
    }
    else
    {
      v10 = *(char **)v29;
    }
  }
LABEL_13:
  if ( Handle )
    ZwClose(Handle);
  if ( v10 )
    ExFreePoolWithTag(v10, 0x58706E50u);
  if ( v11 )
    ExFreePoolWithTag(v11, 0x58706E50u);
  return (unsigned int)v12;
}
