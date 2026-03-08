/*
 * XREFs of ?vLineCallbackOctant25@@YAXPEAU_DDALINE@@PEAEJK@Z @ 0x1C02FF070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vLineCallbackOctant25(struct _DDALINE *a1, unsigned __int8 *a2, int a3, unsigned int a4)
{
  int v5; // esi
  int v7; // r13d
  int v8; // ebp
  __int64 v9; // r12
  unsigned __int8 *v10; // rdi
  void (__fastcall *v11)(_QWORD, _QWORD, unsigned __int8 *); // r15
  unsigned __int8 *v12; // rcx
  int v13; // eax
  int v14; // [rsp+50h] [rbp+8h]

  v5 = *((_DWORD *)a1 + 6);
  v7 = *((_DWORD *)a1 + 4);
  v8 = *((_DWORD *)a1 + 3);
  v14 = *((_DWORD *)a1 + 5);
  v9 = a3;
  v10 = &a2[4 * *((int *)a1 + 1)];
  v11 = (void (__fastcall *)(_QWORD, _QWORD, unsigned __int8 *))**((_QWORD **)a1 + 4);
  while ( 1 )
  {
    v11(*((_QWORD *)a1 + 4), a4, v10);
    if ( !--v8 )
      break;
    v12 = &v10[v9];
    v13 = v5 + v14;
    v10 = &v10[v9 - 4];
    v5 = v5 + v14 - v7;
    if ( v13 < 0 )
    {
      v5 = v13;
      v10 = v12;
    }
  }
}
