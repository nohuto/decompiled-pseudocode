/*
 * XREFs of sub_180142FCC @ 0x180142FCC
 * Callers:
 *     sub_180140F80 @ 0x180140F80 (sub_180140F80.c)
 * Callees:
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180143284 @ 0x180143284 (sub_180143284.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180142FCC(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v8; // esi
  _DWORD *v9; // rbx
  _DWORD *v10; // rax
  _DWORD *v11; // rdi
  int v12; // eax

  v8 = 0;
  v9 = 0LL;
  if ( !a4 )
  {
    v8 = -2147467261;
    goto LABEL_9;
  }
  *a4 = 0LL;
  v10 = sub_180055F40(0x38uLL);
  v11 = v10;
  if ( v10 )
  {
    v10[4] = 1;
    *(_QWORD *)v10 = off_180156490;
    *((_QWORD *)v10 + 1) = off_1801564E8;
    *((_QWORD *)v10 + 3) = 0LL;
    *((_QWORD *)v10 + 4) = 0LL;
    v10[10] = 0;
    v10[11] = 0;
    v10[12] = 0;
    v10[13] = 0;
    v9 = v10;
    v12 = sub_180143284(v10, a1, a2, a3);
    if ( v12 < 0 )
    {
      v8 = v12;
      goto LABEL_9;
    }
    *a4 = v11;
  }
  else
  {
    v8 = -2147024882;
  }
  v9 = 0LL;
LABEL_9:
  if ( v9 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
  return v8;
}
