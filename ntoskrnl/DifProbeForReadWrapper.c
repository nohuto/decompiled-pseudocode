/*
 * XREFs of DifProbeForReadWrapper @ 0x1405E7F60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 *     ExRaiseDatatypeMisalignment @ 0x1409FDD10 (ExRaiseDatatypeMisalignment.c)
 */

unsigned __int64 __fastcall DifProbeForReadWrapper(unsigned __int64 a1, __int64 a2, int a3)
{
  unsigned __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rdi
  _QWORD *i; // rbx
  _QWORD **v13; // rdi
  _QWORD *j; // rbx
  __int128 v15; // [rsp+20h] [rbp-20h] BYREF
  __int128 v16; // [rsp+30h] [rbp-10h]
  unsigned __int64 retaddr; // [rsp+58h] [rbp+18h]

  v15 = 0LL;
  v16 = 0LL;
  result = (unsigned __int64)DifGetAPIThunkContextById(394);
  v11 = result;
  if ( !result )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0
    || (v8 = HIDWORD(VfRuleClasses), (VfRuleClasses & 0x800000000LL) == 0) )
  {
    result = *(unsigned int *)(result + 12);
    if ( (result & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    result = *(unsigned int *)(result + 12);
    if ( (result & 0x18) != 0 )
    {
      result = retaddr;
LABEL_9:
      *(_QWORD *)&v15 = result;
      goto LABEL_10;
    }
    if ( (result & 4) != 0 )
    {
LABEL_8:
      result = DifGetReturnAddressForWrappers(v8, v7, v9, v10);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v15 = 0LL;
LABEL_10:
  *((_QWORD *)&v16 + 1) = a1;
  *(_QWORD *)&v16 = a2;
  DWORD2(v15) = a3;
  for ( i = *(_QWORD **)(v11 + 32); i != (_QWORD *)(v11 + 32); i = (_QWORD *)*i )
  {
    result = (unsigned __int64)(i - 2);
    if ( i != (_QWORD *)16 )
      result = (*(__int64 (__fastcall **)(__int128 *))(result + 8))(&v15);
  }
LABEL_17:
  if ( a2 )
  {
    if ( ((a3 - 1) & (unsigned int)a1) != 0 )
      ExRaiseDatatypeMisalignment();
    result = a1 + a2;
    if ( a1 + a2 > 0x7FFFFFFF0000LL || result < a1 )
    {
      result = 0LL;
      MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  if ( v11 )
  {
    v13 = (_QWORD **)(v11 + 48);
    for ( j = *v13; j != v13; j = (_QWORD *)*j )
    {
      result = (unsigned __int64)(j - 2);
      if ( j != (_QWORD *)16 )
        result = (*(__int64 (__fastcall **)(__int128 *))(result + 8))(&v15);
    }
  }
  return result;
}
