/*
 * XREFs of sub_180065074 @ 0x180065074
 * Callers:
 *     sub_180065030 @ 0x180065030 (sub_180065030.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006A18C @ 0x18006A18C (sub_18006A18C.c)
 *     sub_180071C40 @ 0x180071C40 (sub_180071C40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 sub_180065074()
{
  __int64 v0; // rax
  __int64 v1; // rbx
  __int64 v2; // rcx
  int v3; // edi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  qword_18019EE60 = 0LL;
  v0 = sub_18006A18C(80LL, &unk_18019F848);
  v6 = v0;
  v1 = v0;
  if ( v0 )
  {
    v2 = qword_18019E418;
    *(_DWORD *)(v0 + 12) = 1;
    *(_QWORD *)v0 = &off_180149110;
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    *(_QWORD *)v1 = &off_1801490B0;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v1 + 16), 0, 0);
    *(_QWORD *)(v1 + 56) = 0LL;
    *(_QWORD *)(v1 + 64) = 0LL;
    *(_QWORD *)(v1 + 72) = 0LL;
    v3 = (**(__int64 (__fastcall ***)(__int64, _DWORD *, __int64 *))v1)(v1, dword_18015BA50, &qword_18019EE60);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    if ( v3 >= 0 )
      return 0LL;
  }
  else
  {
    sub_180071C40(&v6);
    v3 = -2147024882;
  }
  sub_18004BD84((int)retaddr, 112, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp", v3);
  return (unsigned int)v3;
}
