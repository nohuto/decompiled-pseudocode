/*
 * XREFs of sub_18010B9A0 @ 0x18010B9A0
 * Callers:
 *     sub_180105AEC @ 0x180105AEC (sub_180105AEC.c)
 *     sub_180105D90 @ 0x180105D90 (sub_180105D90.c)
 *     sub_1801060DC @ 0x1801060DC (sub_1801060DC.c)
 *     sub_180106720 @ 0x180106720 (sub_180106720.c)
 *     sub_180108504 @ 0x180108504 (sub_180108504.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18010A408 @ 0x18010A408 (sub_18010A408.c)
 *     sub_18010B080 @ 0x18010B080 (sub_18010B080.c)
 */

char __fastcall sub_18010B9A0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v6; // edx
  char result; // al
  __int64 v8; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4 = a1[1];
  if ( v4 )
  {
    v6 = *((_DWORD *)a1 + 21) + *((_DWORD *)a1 + 20);
    if ( v6 )
    {
      sub_18010A408(v4, v6, a3, a4);
      v4 = a1[1];
      a1[10] = 0LL;
      *((_DWORD *)a1 + 19) = 0;
    }
    result = sub_18010B080(
               (int)retaddr,
               43,
               (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\EndpointResourcePool.h",
               *(_DWORD *)(v4 + 12) == 0,
               (__int64)"Detaching from CEndpointResourcePool when nothing attached");
    --*(_DWORD *)(v4 + 12);
    a1[1] = 0LL;
  }
  v8 = *a1;
  *a1 = 0LL;
  if ( v8 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  a1[5] = 0LL;
  a1[6] = 0LL;
  a1[7] = 0LL;
  a1[8] = 0LL;
  *((_DWORD *)a1 + 18) = 0;
  *((_DWORD *)a1 + 21) = 0;
  *((_BYTE *)a1 + 88) = 0;
  *((_OWORD *)a1 + 1) = xmmword_18015B730;
  return result;
}
