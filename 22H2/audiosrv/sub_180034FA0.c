/*
 * XREFs of sub_180034FA0 @ 0x180034FA0
 * Callers:
 *     sub_180074E00 @ 0x180074E00 (sub_180074E00.c)
 *     sub_180074E10 @ 0x180074E10 (sub_180074E10.c)
 *     sub_180074E20 @ 0x180074E20 (sub_180074E20.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18012242C @ 0x18012242C (sub_18012242C.c)
 */

__int64 __fastcall sub_180034FA0(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v3; // ebx
  void (*v4)(void); // rax

  v3 = 0;
  *(_QWORD *)a3 = 0LL;
  if ( *a2 || a2[1] || a2[2] != 192 || a2[3] != 1174405120 )
  {
    if ( *a2 == 1611209239 && a2[1] == 1326080648 && a2[2] == -1904522842 && a2[3] == -288216944 )
    {
      *(_QWORD *)a3 = a1;
    }
    else
    {
      v3 = sub_18012242C(a1 + 8);
      if ( v3 < 0 )
        return (unsigned int)v3;
    }
    v4 = *(void (**)(void))(**(_QWORD **)a3 + 8LL);
  }
  else
  {
    *(_QWORD *)a3 = a1;
    v4 = *(void (**)(void))(*(_QWORD *)a1 + 8LL);
  }
  v4();
  return (unsigned int)v3;
}
