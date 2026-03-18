/*
 * XREFs of ?vInit@RGNMEMOBJ@@QEAAXK@Z @ 0x1C003E3F0
 * Callers:
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003CBC0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@K@Z @ 0x1C007D940 (--0RGNMEMOBJ@@QEAA@K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNMEMOBJ::vInit(RGNMEMOBJ *this, int a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax

  v2 = *(_QWORD *)this;
  v4 = *(_QWORD *)this + 48LL;
  if ( !*(_QWORD *)this )
    v4 = 24LL;
  *(_DWORD *)v4 = 16;
  v5 = v2 + 52;
  if ( !v2 )
    v5 = 28LL;
  *(_DWORD *)v5 = 1;
  v6 = v2 + 56;
  if ( !v2 )
    v6 = 32LL;
  *(_OWORD *)v6 = 0LL;
  v7 = v2 + 32;
  if ( !v2 )
    v7 = 8LL;
  v8 = *(_QWORD *)v7;
  v9 = v2 + 40;
  *(_DWORD *)v8 = 0;
  *(_DWORD *)(v8 + 4) = 0x80000000;
  *(_QWORD *)(v8 + 8) = 0x7FFFFFFFLL;
  v10 = v8 + 16;
  if ( !v2 )
    v9 = 16LL;
  *(_QWORD *)v9 = v10;
  *(_DWORD *)(*(_QWORD *)this + 24LL) = a2;
  *(_DWORD *)(*(_QWORD *)this + 76LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 72LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = 0;
  v11 = (_QWORD *)(*(_QWORD *)this + 88LL);
  v11[1] = v11;
  *v11 = v11;
}
