/*
 * XREFs of ViThunkFindSharedExports @ 0x140AD8AC0
 * Callers:
 *     ViThunkFindAllSharedExports @ 0x140AD8804 (ViThunkFindAllSharedExports.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x14036B1B0 (VfIsVerifierEnabled.c)
 */

void __fastcall ViThunkFindSharedExports(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v6; // rdi
  __int64 v7; // rsi
  int v8; // ebp
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax

  if ( a1 && a2 )
  {
    v6 = (_QWORD *)(a1 + 16);
    v7 = a2;
    while ( 1 )
    {
      v8 = *((_DWORD *)v6 - 2);
      if ( v8 == -1 )
        goto LABEL_15;
      v9 = *v6;
      if ( !*v6 )
        goto LABEL_15;
      if ( (VfRuleClasses & 0x800000000LL) == 0
        || (unsigned int)VfIsVerifierEnabled() && (VfRuleClasses & 0xFF217644) != 0 )
      {
        goto LABEL_12;
      }
      v10 = *(_DWORD *)(v9 + 32);
      if ( (v10 & 1) != 0 )
        break;
LABEL_15:
      v6 += 3;
      if ( !--v7 )
        return;
    }
    if ( (v10 & 4) != 0 )
LABEL_12:
      v11 = *(_QWORD *)(v9 + 8);
    else
      v11 = **(_QWORD **)(v9 + 40);
    if ( v11 )
    {
      v12 = (unsigned int)*a4;
      v13 = 3 * v12;
      *(_DWORD *)(a3 + 8 * v13) = v8;
      *(_QWORD *)(a3 + 8 * v13 + 8) = v11;
      *a4 = v12 + 1;
    }
    goto LABEL_15;
  }
}
