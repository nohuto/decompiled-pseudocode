/*
 * XREFs of sub_1800B7428 @ 0x1800B7428
 * Callers:
 *     sub_1800B7410 @ 0x1800B7410 (sub_1800B7410.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B8CF0 @ 0x1800B8CF0 (sub_1800B8CF0.c)
 */

__int64 __fastcall sub_1800B7428(__int64 a1, __int64 a2, HSTRING a3, _QWORD *a4)
{
  PCWSTR StringRawBuffer; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int16 *v11; // rcx
  int v12; // r8d
  int v13; // edx
  unsigned int v14; // ebx
  __int64 v15; // r9
  BOOL hasEmbedNull; // [rsp+30h] [rbp-68h] BYREF
  int v18; // [rsp+34h] [rbp-64h] BYREF
  _OWORD v19[2]; // [rsp+38h] [rbp-60h] BYREF
  int v20; // [rsp+58h] [rbp-40h]
  __int16 v21; // [rsp+5Ch] [rbp-3Ch]

  *a4 = 0LL;
  if ( WindowsIsStringEmpty(a3) || WindowsStringHasEmbeddedNull(a3, &hasEmbedNull) < 0 || hasEmbedNull )
  {
    v20 = 6553673;
    v14 = -2147024809;
    v21 = 0;
    v19[0] = xmmword_18016D3C8;
    v19[1] = xmmword_18016D3D8;
    RoOriginateErrorW(2147942487LL, 18LL, v19);
    return v14;
  }
  StringRawBuffer = WindowsGetStringRawBuffer(a3, 0LL);
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1) + 8;
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  if ( v8 >= v9 )
  {
LABEL_11:
    v14 = -2147221231;
    RoOriginateError(2147746065LL, a3);
    return v14;
  }
  while ( 1 )
  {
    if ( *(_QWORD *)v8 )
    {
      v10 = (*(__int64 (**)(void))(*(_QWORD *)v8 + 8LL))() - (_QWORD)StringRawBuffer;
      v11 = (unsigned __int16 *)StringRawBuffer;
      do
      {
        v12 = *(unsigned __int16 *)((char *)v11 + v10);
        v13 = *v11 - v12;
        if ( v13 )
          break;
        ++v11;
      }
      while ( v12 );
      if ( !v13 )
        break;
    }
    v8 += 8LL;
    if ( v8 >= v9 )
      goto LABEL_11;
  }
  v15 = *(_QWORD *)v8;
  v18 = 2;
  return sub_1800B8CF0(a1, (unsigned int)&v18, v12, v15, (__int64)a4);
}
