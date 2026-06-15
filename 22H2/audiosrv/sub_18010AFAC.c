/*
 * XREFs of sub_18010AFAC @ 0x18010AFAC
 * Callers:
 *     sub_180107084 @ 0x180107084 (sub_180107084.c)
 *     sub_180109280 @ 0x180109280 (sub_180109280.c)
 * Callees:
 *     sub_18010A130 @ 0x18010A130 (sub_18010A130.c)
 *     sub_18010A408 @ 0x18010A408 (sub_18010A408.c)
 *     sub_18010AA2C @ 0x18010AA2C (sub_18010AA2C.c)
 */

int __fastcall sub_18010AFAC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int result; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // edx
  __int64 v10; // [rsp+60h] [rbp-20h] BYREF
  __int64 v11; // [rsp+68h] [rbp-18h] BYREF
  const CHAR *v12; // [rsp+70h] [rbp-10h] BYREF
  int v13; // [rsp+A0h] [rbp+20h] BYREF
  unsigned int v14; // [rsp+A8h] [rbp+28h] BYREF
  int v15; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v16; // [rsp+B8h] [rbp+38h] BYREF

  result = sub_18010A130("Sarm::CStreamResource::CompleteRevocation", 129, a3, a4);
  v9 = *(_DWORD *)(a1 + 84);
  if ( v9 )
  {
    if ( (unsigned int)CallbackContext > 4 )
    {
      v16 = *(_QWORD *)(a1 + 8);
      v13 = *(_DWORD *)(a1 + 52);
      v10 = a1 + 16;
      v11 = *(_QWORD *)(a1 + 40);
      v14 = v9;
      v15 = 141;
      v12 = "Sarm::CStreamResource::CompleteRevocation";
      sub_18010AA2C(
        v6,
        byte_180169674,
        v7,
        v8,
        &v12,
        (__int64)&v15,
        (__int64)&v11,
        &v10,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v16);
      v9 = *(_DWORD *)(a1 + 84);
    }
    result = sub_18010A408(*(_QWORD *)(a1 + 8), v9, v7, v8);
    *(_DWORD *)(a1 + 84) = 0;
  }
  return result;
}
