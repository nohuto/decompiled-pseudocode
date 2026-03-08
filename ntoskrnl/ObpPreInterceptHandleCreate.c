/*
 * XREFs of ObpPreInterceptHandleCreate @ 0x14075F948
 * Callers:
 *     ObpCreateHandle @ 0x1407C0130 (ObpCreateHandle.c)
 * Callees:
 *     ObpCallPreOperationCallbacks @ 0x1406DBEC0 (ObpCallPreOperationCallbacks.c)
 */

__int64 __fastcall ObpPreInterceptHandleCreate(__int64 a1, char a2, int *a3, _QWORD *a4)
{
  int v7; // r8d
  __int64 v8; // rcx
  int v9; // esi
  int v10; // esi
  __int64 result; // rax
  _DWORD v12[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13; // [rsp+28h] [rbp-38h]
  _DWORD v14[2]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v15; // [rsp+40h] [rbp-20h]
  __int64 v16; // [rsp+48h] [rbp-18h]
  __int64 v17; // [rsp+50h] [rbp-10h]
  _DWORD *v18; // [rsp+58h] [rbp-8h]

  v7 = *a3;
  v8 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8)];
  v9 = *(_DWORD *)(v8 + 96);
  v17 = 0LL;
  v10 = v7 & v9;
  v18 = v12;
  v12[1] = v7;
  v12[0] = v7;
  v14[0] = 1;
  v14[1] = a2 & 1;
  v15 = a1;
  v13 = 0LL;
  v16 = v8;
  result = ObpCallPreOperationCallbacks(v8, (__int64)v14, a4);
  if ( (int)result >= 0 && !a2 )
    *a3 &= v10 | v12[0];
  return result;
}
