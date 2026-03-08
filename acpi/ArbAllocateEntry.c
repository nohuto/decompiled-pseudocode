/*
 * XREFs of ArbAllocateEntry @ 0x1C00A0CB0
 * Callers:
 *     IrqArbAllocateEntry @ 0x1C009CDB0 (IrqArbAllocateEntry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ArbAllocateEntry(__int64 a1, unsigned __int64 a2)
{
  char v2; // r14
  unsigned __int64 v5; // rbx
  char v6; // di
  unsigned __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rax
  __int16 v10; // ax
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rbx

  v2 = 0;
  v5 = a2;
  v6 = 0;
  v7 = MEMORY[0xFFFFF78000000008] + 10000000LL;
LABEL_2:
  while ( v5 >= a2 && *(_QWORD *)(v5 + 32) )
  {
    result = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(a1 + 224))(a1, v5);
    if ( (int)result < 0 )
      return result;
    if ( !v2 )
      goto LABEL_17;
    v9 = *(_QWORD *)(v5 + 40);
    v2 = 0;
    *(_QWORD *)(v5 + 120) = 0LL;
    if ( *(_QWORD *)(v9 + 16) )
    {
      (*(void (__fastcall **)(__int64, unsigned __int64))(a1 + 264))(a1, v5);
      v10 = *(_WORD *)(v5 + 64);
      if ( (v10 & 0x40) != 0 )
      {
        *(_WORD *)(v5 + 64) = v10 & 0xFFBF;
      }
      else
      {
        v11 = *(_QWORD *)v5 - 1LL;
        if ( v11 <= *(_QWORD *)v5 && v11 >= **(_QWORD **)(v5 + 40) && MEMORY[0xFFFFF78000000008] <= v7 )
        {
          *(_QWORD *)(v5 + 24) = v11;
          goto LABEL_18;
        }
LABEL_17:
        while ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(a1 + 240))(a1, v5) )
        {
LABEL_18:
          if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(a1 + 248))(a1, v5) )
          {
            if ( *(_QWORD *)(*(_QWORD *)(v5 + 40) + 16LL) )
              (*(void (__fastcall **)(__int64, unsigned __int64))(a1 + 256))(a1, v5);
            else
              *(_DWORD *)(*(_QWORD *)(v5 + 32) + 88LL) = 2;
            v5 += 80LL;
            goto LABEL_2;
          }
        }
      }
    }
    if ( (*(_BYTE *)(v5 + 64) & 0x20) != 0 )
      v6 = 1;
    if ( v5 == a2 )
    {
      v12 = (_QWORD *)(a2 + 32);
      v13 = v6 != 0 ? -1073739512 : -1073741823;
      goto LABEL_28;
    }
    v2 = 1;
    v5 -= 80LL;
  }
  v12 = (_QWORD *)(a2 + 32);
  v14 = *(_QWORD *)(a2 + 32);
  if ( v14 )
  {
    v15 = (__int64 *)(a2 + 32);
    do
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 128))(
        *(_QWORD *)(v15[1] + 40),
        *(v15 - 4),
        *(_QWORD *)(v14 + 72));
      v16 = v15[1];
      v17 = *v15;
      v15 += 10;
      *(_QWORD *)(v17 + 80) = *(_QWORD *)(v16 + 40);
      v14 = *v15;
    }
    while ( *v15 );
  }
  v13 = 0;
LABEL_28:
  if ( *v12 )
  {
    v18 = a2 + 64;
    do
    {
      if ( (*(_BYTE *)v18 & 0x10) != 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(v18 + 8), 0);
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_WORD *)v18 &= ~0x10u;
      }
      v18 += 80LL;
    }
    while ( *(_QWORD *)(v18 - 32) );
  }
  return v13;
}
