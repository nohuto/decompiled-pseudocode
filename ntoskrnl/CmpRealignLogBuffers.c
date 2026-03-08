/*
 * XREFs of CmpRealignLogBuffers @ 0x140A1BEB8
 * Callers:
 *     CmpRmReDoPhase @ 0x140A1C1E0 (CmpRmReDoPhase.c)
 * Callees:
 *     <none>
 */

void __fastcall CmpRealignLogBuffers(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rax

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 > 6 )
  {
    v8 = v2 - 7;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( !v10 )
        {
          v12 = *(unsigned __int16 *)(a1 + 32);
          *(_WORD *)(a1 + 34) = v12;
          *(_QWORD *)(a1 + 56) = a1 + 64 + v12;
          *(_WORD *)(a1 + 50) = *(_WORD *)(a1 + 48);
          *(_QWORD *)(a1 + 40) = a1 + 64;
          return;
        }
        if ( v10 != 1 )
          return;
      }
      v11 = *(unsigned __int16 *)(a1 + 32);
      v7 = a1 + 64;
      *(_WORD *)(a1 + 34) = v11;
      *(_QWORD *)(a1 + 56) = a1 + 64 + v11;
LABEL_15:
      *(_QWORD *)(a1 + 40) = v7;
      return;
    }
LABEL_17:
    *(_QWORD *)(a1 + 40) = a1 + 56;
    *(_WORD *)(a1 + 34) = *(_WORD *)(a1 + 32);
    return;
  }
  if ( v2 == 6 )
    goto LABEL_17;
  if ( v2 == 1 || v2 == 2 )
  {
    v6 = *(unsigned __int16 *)(a1 + 32);
    v7 = a1 + 64;
    *(_WORD *)(a1 + 34) = v6;
    *(_QWORD *)(a1 + 56) = a1 + 64 + v6;
    *(_DWORD *)(a1 + 52) = *(_DWORD *)(a1 + 4) - v6 - 64;
    goto LABEL_15;
  }
  if ( v2 == 3 || v2 - 4 <= 1 )
  {
    v3 = *(unsigned __int16 *)(a1 + 32);
    *(_QWORD *)(a1 + 40) = a1 + 80;
    v4 = v3 + a1 + 80;
    *(_WORD *)(a1 + 34) = v3;
    v5 = *(unsigned __int16 *)(a1 + 48);
    *(_WORD *)(a1 + 50) = v5;
    *(_QWORD *)(a1 + 56) = v4;
    if ( v2 != 5 )
      *(_QWORD *)(a1 + 72) = v4 + v5;
  }
}
