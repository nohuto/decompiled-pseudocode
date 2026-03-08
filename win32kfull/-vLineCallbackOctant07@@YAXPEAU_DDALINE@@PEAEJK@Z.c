/*
 * XREFs of ?vLineCallbackOctant07@@YAXPEAU_DDALINE@@PEAEJK@Z @ 0x1C02FEF30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vLineCallbackOctant07(struct _DDALINE *a1, unsigned __int8 *a2, int a3, unsigned int a4)
{
  int v5; // edi
  int v7; // r12d
  int v8; // r14d
  int v9; // ebp
  unsigned __int8 *v10; // rbx
  __int64 v11; // r15
  void (__fastcall *v12)(_QWORD, _QWORD, _QWORD); // rax
  void (__fastcall *v13)(_QWORD, _QWORD, _QWORD); // [rsp+50h] [rbp+8h]

  v5 = *((_DWORD *)a1 + 6);
  v7 = *((_DWORD *)a1 + 4);
  v8 = *((_DWORD *)a1 + 5);
  v9 = *((_DWORD *)a1 + 3);
  v10 = &a2[4 * *((int *)a1 + 1)];
  v11 = a3;
  v12 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD))**((_QWORD **)a1 + 4);
  v13 = v12;
  while ( 1 )
  {
    v12(*((_QWORD *)a1 + 4), a4, v10);
    if ( !--v9 )
      break;
    v12 = v13;
    v10 += 4;
    v5 += v8;
    if ( v5 >= 0 )
    {
      v5 -= v7;
      v10 += v11;
    }
  }
}
