/*
 * XREFs of DifPoRequestPowerIrpWrapper @ 0x1405E7DF0
 * Callers:
 *     <none>
 * Callees:
 *     PopRequestPowerIrp @ 0x1402BA570 (PopRequestPowerIrp.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

__int64 __fastcall DifPoRequestPowerIrpWrapper(__int64 a1, char a2, int a3, __int64 a4, __int64 a5, IRP *a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *APIThunkContextById; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rdi
  __int64 result; // rax
  __int64 *v19; // rbx
  __int128 v20; // [rsp+40h] [rbp-40h] BYREF
  __int128 v21; // [rsp+50h] [rbp-30h]
  __int128 v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+70h] [rbp-10h]
  __int64 retaddr; // [rsp+A8h] [rbp+28h]

  v23 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  APIThunkContextById = DifGetAPIThunkContextById(393);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v15 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v15 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      *(_QWORD *)&v20 = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v15 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v11, v10, v13, v14);
      goto LABEL_9;
    }
  }
  *(_QWORD *)&v20 = 0LL;
LABEL_10:
  *(_QWORD *)&v21 = a5;
  *((_QWORD *)&v20 + 1) = a6;
  *((_QWORD *)&v22 + 1) = a1;
  BYTE4(v22) = a2;
  LODWORD(v22) = a3;
  *((_QWORD *)&v21 + 1) = a4;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(__int128 *))*(i - 1))(&v20);
  }
LABEL_17:
  result = PopRequestPowerIrp(a1, a2, a3, a4, a5, 0, a6);
  LODWORD(v23) = result;
  if ( APIThunkContextById )
  {
    v19 = (__int64 *)APIThunkContextById[6];
    if ( v19 != APIThunkContextById + 6 )
    {
      do
      {
        if ( v19 != (__int64 *)16 )
          ((void (__fastcall *)(__int128 *))*(v19 - 1))(&v20);
        v19 = (__int64 *)*v19;
      }
      while ( v19 != APIThunkContextById + 6 );
      return (unsigned int)v23;
    }
  }
  return result;
}
