/*
 * XREFs of SepRemoveDisabledGroupsAndPrivileges @ 0x1405DA360
 * Callers:
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 * Callees:
 *     SepTokenPrivilegeCount @ 0x140202A20 (SepTokenPrivilegeCount.c)
 *     SepSidInSidAndAttributes @ 0x1405DA558 (SepSidInSidAndAttributes.c)
 *     RtlIsElevatedRid @ 0x1406ED2B0 (RtlIsElevatedRid.c)
 */

char __fastcall SepRemoveDisabledGroupsAndPrivileges(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // esi
  char v7; // r12
  char v8; // r14
  unsigned int v9; // edi
  __int64 v13; // r9
  char v14; // cl
  __int64 v15; // rsi
  int v16; // r11d
  __int64 v18; // rbp
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v23; // r8
  int v24; // r10d
  unsigned int v25; // [rsp+70h] [rbp+18h]

  v25 = a3;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( *(_DWORD *)(a1 + 124) )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(a1 + 152);
      v14 = 0;
      v15 = 16LL * v9;
      if ( (*(_DWORD *)(v15 + v13 + 8) & 0x30) == 0 )
        v14 = SepSidInSidAndAttributes(a4, (unsigned int)a3, a3, *(_QWORD *)(v15 + v13));
      if ( v14 )
        goto LABEL_14;
      if ( (a2 & 4) != 0 && RtlIsElevatedRid((PSID_AND_ATTRIBUTES)(v15 + *(_QWORD *)(a1 + 152))) )
        break;
LABEL_6:
      a3 = v25;
      if ( ++v9 >= *(_DWORD *)(a1 + 124) )
      {
        v6 = 0;
        goto LABEL_8;
      }
    }
    v7 = 1;
LABEL_14:
    v18 = 2LL * v9;
    v8 = 1;
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v18 + 8) &= 0xFFFFFFF0;
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + 8 * v18 + 8) |= 0x10u;
    *(_DWORD *)(a1 + 200) |= 0x800u;
    if ( v9 == *(_DWORD *)(a1 + 144) )
      *(_DWORD *)(a1 + 144) = 0;
    goto LABEL_6;
  }
LABEL_8:
  v16 = *(_DWORD *)(a1 + 200) & 0x800;
  if ( !v16 )
    v6 = SepTokenPrivilegeCount(a1);
  if ( (a2 & 1) != 0 )
  {
    v8 = 1;
    *(_QWORD *)(a1 + 72) &= 0x800000uLL;
    *(_QWORD *)(a1 + 80) &= 0x800000uLL;
    *(_QWORD *)(a1 + 64) &= 0x800000uLL;
  }
  else
  {
    if ( (a2 & 4) != 0 )
    {
      v8 = 1;
      v19 = 0x602880000LL;
      if ( !v7 )
        v19 = 0xFFFFFFEEDFE9F97BuLL;
      v20 = v19 & *(_QWORD *)(a1 + 72);
      v21 = v19 & *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 80) &= v19;
      *(_QWORD *)(a1 + 64) = v21;
      *(_QWORD *)(a1 + 72) = v20;
    }
    if ( a5 )
    {
      v23 = a5;
      do
      {
        if ( (unsigned int)(*a6 - 2) <= 0x22 )
        {
          *(_QWORD *)(a1 + 72) &= ~(1LL << *a6);
          *(_QWORD *)(a1 + 64) &= ~(1LL << *a6);
        }
        a6 += 3;
        --v23;
      }
      while ( v23 );
    }
  }
  if ( !v16 && (unsigned int)SepTokenPrivilegeCount(a1) < v6 )
    *(_DWORD *)(a1 + 200) = v24 | 0x800;
  return v8;
}
