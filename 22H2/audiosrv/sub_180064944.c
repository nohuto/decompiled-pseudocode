/*
 * XREFs of sub_180064944 @ 0x180064944
 * Callers:
 *     sub_1800644EC @ 0x1800644EC (sub_1800644EC.c)
 * Callees:
 *     sub_1800649E8 @ 0x1800649E8 (sub_1800649E8.c)
 *     sub_180064D2C @ 0x180064D2C (sub_180064D2C.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180064944(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // edi

  *a1 = 0LL;
  v2 = sub_18006A18C(992LL, &unk_18019F848);
  if ( v2 )
  {
    v3 = sub_180064D2C(v2);
    v4 = sub_1800649E8(v3);
    if ( v4 >= 0 )
    {
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
      *a1 = v3;
      v4 = 0;
    }
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v4;
}
