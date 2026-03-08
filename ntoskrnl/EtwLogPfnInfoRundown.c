/*
 * XREFs of EtwLogPfnInfoRundown @ 0x1409EB914
 * Callers:
 *     EtwpEnumerateWorkingSet @ 0x1409EBD00 (EtwpEnumerateWorkingSet.c)
 *     MmLogSystemShareablePfnInfo @ 0x140A3D248 (MmLogSystemShareablePfnInfo.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1403149F0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall EtwLogPfnInfoRundown(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4)
{
  __int64 v6; // rax
  __int64 *v7; // rbx
  unsigned __int64 v8; // rdi
  _QWORD *v9; // rsi
  __int64 result; // rax
  __int64 v11; // rax
  __int64 *v12; // [rsp+30h] [rbp-68h] BYREF
  int v13; // [rsp+38h] [rbp-60h]
  int v14; // [rsp+3Ch] [rbp-5Ch]
  _QWORD *v15; // [rsp+40h] [rbp-58h]
  int i; // [rsp+48h] [rbp-50h]
  int v17; // [rsp+4Ch] [rbp-4Ch]
  _QWORD *v18; // [rsp+50h] [rbp-48h]
  int v19; // [rsp+58h] [rbp-40h]
  int v20; // [rsp+5Ch] [rbp-3Ch]

  if ( a1 )
    v6 = *(unsigned int *)(a1 + 1088);
  else
    v6 = 0xFFFFFFFFLL;
  *a4 = v6;
  v7 = a4 + 1;
  v8 = a4[1];
  v9 = a4 + 2;
  v14 = 0;
  result = 8LL;
  v17 = 0;
  v12 = a4;
  v13 = 8;
  v15 = a4 + 1;
  for ( i = 8; v8; v8 -= *v7 )
  {
    v11 = v8;
    v18 = v9;
    if ( v8 > 0x7FC )
      v11 = 2044LL;
    v20 = 0;
    *v7 = v11;
    v19 = 32 * v11;
    EtwpLogKernelEvent((__int64)&v12, a2, a3, 3u, 0x284u, 0x401802u);
    result = 32 * *v7;
    v9 = (_QWORD *)((char *)v9 + result);
  }
  return result;
}
