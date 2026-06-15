/*
 * XREFs of sub_1800B6D00 @ 0x1800B6D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800B6358 @ 0x1800B6358 (sub_1800B6358.c)
 */

__int64 *__fastcall sub_1800B6D00(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 *result; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rcx
  int v10; // [rsp+50h] [rbp-20h] BYREF
  int v11; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v12; // [rsp+58h] [rbp-18h] BYREF
  __int64 v13; // [rsp+60h] [rbp-10h] BYREF
  void *v14; // [rsp+68h] [rbp-8h] BYREF
  int v15; // [rsp+98h] [rbp+28h] BYREF

  v4 = a3;
  result = sub_180008448(a1, sub_1800B6240);
  v9 = (_DWORD *)result[1];
  if ( *v9 > 4u )
  {
    v15 = *(_DWORD *)(a1 + 88);
    v10 = *(_DWORD *)(a1 + 84);
    v11 = *(_DWORD *)(a1 + 80);
    v14 = *(void **)(a1 + 72);
    v12 = a2;
    v13 = v4;
    return (__int64 *)sub_1800B6358(
                        (__int64)v9,
                        byte_180165C89,
                        v7,
                        v8,
                        &v14,
                        (__int64)&v11,
                        (__int64)&v10,
                        (__int64)&v15,
                        (__int64)&v13,
                        (__int64)&v12);
  }
  return result;
}
