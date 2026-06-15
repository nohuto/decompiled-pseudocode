/*
 * XREFs of sub_1801414A4 @ 0x1801414A4
 * Callers:
 *     sub_1801419F8 @ 0x1801419F8 (sub_1801419F8.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1801414A4(__int64 a1, __int64 *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  __int64 (__fastcall *v6)(__int64 *, __int128 *, __int64, int *, int, char *); // rax
  int v7; // eax
  __int128 v9; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]
  int v12; // [rsp+70h] [rbp+8h] BYREF
  int v13; // [rsp+74h] [rbp+Ch]
  char v14; // [rsp+78h] [rbp+10h] BYREF

  v13 = HIDWORD(a1);
  v3 = 0;
  v12 = 0;
  if ( a2 && a3 )
  {
    v5 = *a2;
    v10 = 0;
    v6 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int64, int *, int, char *))(v5 + 24);
    v11 = 1;
    v9 = xmmword_180178F08;
    v7 = v6(a2, &v9, 24LL, &v12, 4, &v14);
    if ( v7 >= 0 )
      *a3 = v12;
    else
      return (unsigned int)v7;
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
