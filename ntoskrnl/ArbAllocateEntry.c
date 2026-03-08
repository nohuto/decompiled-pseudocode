/*
 * XREFs of ArbAllocateEntry @ 0x14083D690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbAllocateEntry(__int64 a1, unsigned __int64 a2)
{
  char v2; // r14
  unsigned __int64 v5; // rbx
  char v6; // di
  unsigned __int64 v7; // r15
  __int64 result; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // edi
  unsigned __int64 v15; // rbx
  __int64 v16; // rax
  __int16 v17; // ax
  unsigned __int64 v18; // rcx

  v2 = 0;
  v5 = a2;
  v6 = 0;
  v7 = MEMORY[0xFFFFF78000000008] + 10000000LL;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v5 < a2 || !*(_QWORD *)(v5 + 32) )
      {
        v9 = (_QWORD *)(a2 + 32);
        v10 = *(_QWORD *)(a2 + 32);
        if ( v10 )
        {
          v11 = (__int64 *)(a2 + 32);
          do
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a1 + 128))(
              *(_QWORD *)(v11[1] + 40),
              *(v11 - 4),
              *(_QWORD *)(v10 + 72));
            v12 = v11[1];
            v13 = *v11;
            v11 += 10;
            *(_QWORD *)(v13 + 80) = *(_QWORD *)(v12 + 40);
            v10 = *v11;
          }
          while ( *v11 );
        }
        v14 = 0;
        goto LABEL_15;
      }
      result = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(a1 + 224))(a1, v5);
      if ( (int)result < 0 )
        return result;
      if ( !v2 )
        break;
      v16 = *(_QWORD *)(v5 + 40);
      v2 = 0;
      *(_QWORD *)(v5 + 120) = 0LL;
      if ( !*(_QWORD *)(v16 + 16) )
        goto LABEL_25;
      (*(void (__fastcall **)(__int64, unsigned __int64))(a1 + 264))(a1, v5);
      v17 = *(_WORD *)(v5 + 64);
      if ( (v17 & 0x40) != 0 )
      {
        *(_WORD *)(v5 + 64) = v17 & 0xFFBF;
        goto LABEL_25;
      }
      v18 = *(_QWORD *)v5 - 1LL;
      if ( v18 > *(_QWORD *)v5 || v18 < **(_QWORD **)(v5 + 40) || MEMORY[0xFFFFF78000000008] > v7 )
        break;
      *(_QWORD *)(v5 + 24) = v18;
LABEL_7:
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(a1 + 248))(a1, v5) )
        break;
      if ( *(_QWORD *)(*(_QWORD *)(v5 + 40) + 16LL) )
        (*(void (__fastcall **)(__int64, unsigned __int64))(a1 + 256))(a1, v5);
      else
        *(_DWORD *)(*(_QWORD *)(v5 + 32) + 88LL) = 2;
      v5 += 80LL;
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64))(a1 + 240))(a1, v5) )
      goto LABEL_7;
LABEL_25:
    if ( (*(_BYTE *)(v5 + 64) & 0x20) != 0 )
      v6 = 1;
    if ( v5 == a2 )
      break;
    v2 = 1;
    v5 -= 80LL;
  }
  v9 = (_QWORD *)(a2 + 32);
  v14 = v6 != 0 ? -1073739512 : -1073741823;
LABEL_15:
  if ( *v9 )
  {
    v15 = a2 + 64;
    do
    {
      if ( (*(_BYTE *)v15 & 0x10) != 0 )
      {
        ExFreePoolWithTag(*(PVOID *)(v15 + 8), 0);
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_WORD *)v15 &= ~0x10u;
      }
      v15 += 80LL;
    }
    while ( *(_QWORD *)(v15 - 32) );
  }
  return v14;
}
