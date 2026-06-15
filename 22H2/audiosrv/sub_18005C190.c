/*
 * XREFs of sub_18005C190 @ 0x18005C190
 * Callers:
 *     sub_180074EC0 @ 0x180074EC0 (sub_180074EC0.c)
 * Callees:
 *     sub_180027D40 @ 0x180027D40 (sub_180027D40.c)
 *     sub_18005C250 @ 0x18005C250 (sub_18005C250.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18005C190(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  int v9; // ebx
  _DWORD *v11; // rcx
  _QWORD *v12; // r8
  __int64 v13; // r10
  _QWORD *v14; // r8
  __int64 v15; // r10

  *a3 = 0LL;
  if ( (unsigned int)sub_18005C250(a2, &stru_18015B900, a3, a1) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( (unsigned int)sub_18005C250(v3, &unk_18015BC98, v4, v5) )
  {
    *v7 = v8;
LABEL_4:
    v9 = 0;
LABEL_5:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    return (unsigned int)v9;
  }
  if ( sub_180027D40(v6, dword_180172918) )
  {
    *v12 = v13;
    goto LABEL_4;
  }
  if ( sub_180027D40(v11, dword_18015B8E0) )
  {
    *v14 = v15;
    v9 = 0;
  }
  else
  {
    v9 = -2147467262;
    v8 = 0LL;
  }
  if ( v9 >= 0 )
    goto LABEL_5;
  return (unsigned int)v9;
}
