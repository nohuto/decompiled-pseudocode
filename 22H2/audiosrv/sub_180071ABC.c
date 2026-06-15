/*
 * XREFs of sub_180071ABC @ 0x180071ABC
 * Callers:
 *     sub_1800F746C @ 0x1800F746C (sub_1800F746C.c)
 * Callees:
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_180071BBC @ 0x180071BBC (sub_180071BBC.c)
 *     sub_180071C40 @ 0x180071C40 (sub_180071C40.c)
 *     sub_180071F6C @ 0x180071F6C (sub_180071F6C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180071ABC(__int64 *a1, _QWORD *a2, _QWORD *a3, _BYTE *a4, char *a5, _DWORD *a6)
{
  LPVOID v10; // rax
  int v11; // edi
  __int64 v12; // rbx
  int v13; // r9d
  LPVOID v15; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = sub_18006A18C(0x28uLL);
  v15 = v10;
  if ( v10 )
  {
    v12 = sub_180071BBC(v10);
    v15 = 0LL;
    LOBYTE(v13) = *a4;
    v11 = sub_180071F6C(v12, *a2, *a3, v13, *a5, *a6);
    if ( v11 >= 0 )
    {
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
      *a1 = v12;
      v11 = 0;
    }
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  else
  {
    v11 = -2147024882;
  }
  sub_180071C40(&v15);
  return (unsigned int)v11;
}
