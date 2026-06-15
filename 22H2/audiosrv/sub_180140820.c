/*
 * XREFs of sub_180140820 @ 0x180140820
 * Callers:
 *     <none>
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18013EC44 @ 0x18013EC44 (sub_18013EC44.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180140820(__int64 a1, _QWORD *a2, int a3)
{
  int v6; // ecx
  _QWORD *v7; // rax
  _QWORD *v8; // rbx
  int v9; // eax
  int v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h]

  v12 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD *, int *))(*(_QWORD *)a1 + 96LL))(a1, a2, &v11);
  if ( v6 >= 0 )
  {
    if ( v11 )
    {
      v7 = sub_180055F40(0x438uLL);
      v8 = v7;
      if ( v7 )
      {
        *v7 = off_18014B3E0;
        v7[1] = *a2;
        *((_DWORD *)v7 + 4) = 1;
        *((_DWORD *)v7 + 5) = a3;
        *((_DWORD *)v7 + 268) = 1;
        memset(v7 + 3, 0, 0x418uLL);
        *v8 = off_1801563F0;
      }
      else
      {
        v8 = 0LL;
      }
      if ( v8 )
      {
        v9 = sub_18013EC44(a1, (__int64)v8);
        v6 = 0;
        if ( v9 < 0 )
          return (unsigned int)v9;
      }
      else
      {
        return (unsigned int)-2147024882;
      }
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  return (unsigned int)v6;
}
