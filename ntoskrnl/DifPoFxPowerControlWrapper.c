/*
 * XREFs of DifPoFxPowerControlWrapper @ 0x1405E73B0
 * Callers:
 *     <none>
 * Callees:
 *     PoFxPowerControl @ 0x1402D91A0 (PoFxPowerControl.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     DifGetAPIThunkContextById @ 0x14045DE6E (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x1405F64A4 (DifGetReturnAddressForWrappers.c)
 */

__int64 __fastcall DifPoFxPowerControlWrapper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  __int64 result; // rax
  _QWORD **v20; // rdi
  _QWORD *v21; // rbx
  _QWORD v22[10]; // [rsp+48h] [rbp-31h] BYREF
  __int64 retaddr; // [rsp+C0h] [rbp+47h]

  memset(v22, 0, 0x48uLL);
  APIThunkContextById = DifGetAPIThunkContextById(384);
  if ( !APIThunkContextById )
    goto LABEL_17;
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) == 0 )
      goto LABEL_8;
  }
  else
  {
    v16 = *((_DWORD *)APIThunkContextById + 3);
    if ( (v16 & 0x18) != 0 )
    {
      ReturnAddressForWrappers = retaddr;
LABEL_9:
      v22[0] = ReturnAddressForWrappers;
      goto LABEL_10;
    }
    if ( (v16 & 4) != 0 )
    {
LABEL_8:
      ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v12, v11, v14, v15);
      goto LABEL_9;
    }
  }
  v22[0] = 0LL;
LABEL_10:
  v22[3] = a5;
  v22[2] = a6;
  v22[1] = a7;
  v22[7] = a1;
  v22[6] = a2;
  v22[5] = a3;
  v22[4] = a4;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v22);
  }
LABEL_17:
  result = PoFxPowerControl(a1, a2, a3, a4, a5, a6, a7);
  LODWORD(v22[8]) = result;
  if ( APIThunkContextById )
  {
    v20 = (_QWORD **)(APIThunkContextById + 6);
    v21 = *v20;
    if ( *v20 != v20 )
    {
      do
      {
        if ( v21 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v21 - 1))(v22);
        v21 = (_QWORD *)*v21;
      }
      while ( v21 != v20 );
      return LODWORD(v22[8]);
    }
  }
  return result;
}
