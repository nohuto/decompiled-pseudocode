/*
 * XREFs of sub_18013AC1C @ 0x18013AC1C
 * Callers:
 *     sub_18013A830 @ 0x18013A830 (sub_18013A830.c)
 *     sub_18013A8AC @ 0x18013A8AC (sub_18013A8AC.c)
 *     sub_18013A944 @ 0x18013A944 (sub_18013A944.c)
 *     sub_18013AF20 @ 0x18013AF20 (sub_18013AF20.c)
 *     sub_18013BD54 @ 0x18013BD54 (sub_18013BD54.c)
 *     sub_18013BE08 @ 0x18013BE08 (sub_18013BE08.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F3AD4 @ 0x1800F3AD4 (sub_1800F3AD4.c)
 */

__int64 __fastcall sub_18013AC1C(_DWORD *a1, __int64 a2, int *a3)
{
  int v7; // ebx
  int v8; // eax

  if ( *a1 )
  {
    *a3 = a1[1];
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a2 + 48LL))(a2, a3);
      if ( v7 == 1 )
      {
        v7 = -2147467259;
        sub_1800F3AD4((__int64)L"End of file reached!!");
      }
      if ( v7 < 0 )
        break;
      v8 = *a3;
      if ( *a3 != 8 && v8 != 13 )
      {
        a1[1] = v8;
        return (unsigned int)v7;
      }
    }
    return (unsigned int)v7;
  }
}
