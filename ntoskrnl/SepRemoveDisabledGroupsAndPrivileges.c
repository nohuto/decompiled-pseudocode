/*
 * XREFs of SepRemoveDisabledGroupsAndPrivileges @ 0x14074380C
 * Callers:
 *     SepFilterToken @ 0x14073FED0 (SepFilterToken.c)
 * Callees:
 *     SepTokenPrivilegeCount @ 0x140247150 (SepTokenPrivilegeCount.c)
 *     SepSidInSidAndAttributes @ 0x1407439F8 (SepSidInSidAndAttributes.c)
 *     RtlIsElevatedRid @ 0x140743CF0 (RtlIsElevatedRid.c)
 */

char __fastcall SepRemoveDisabledGroupsAndPrivileges(
        __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // r13d
  char v7; // r15
  char v8; // r14
  unsigned int v9; // ebp
  __int64 v13; // rdi
  char v14; // al
  int v15; // r11d
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  int v20; // r10d
  __int64 v22; // r8
  unsigned int v23; // [rsp+70h] [rbp+18h]

  v23 = a3;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( *(_DWORD *)(a1 + 124) )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(a1 + 152);
      if ( (*(_DWORD *)(v13 + 16LL * v9 + 8) & 0x30) == 0 )
      {
        v14 = SepSidInSidAndAttributes(a4, (unsigned int)a3, a3, *(_QWORD *)(v13 + 16LL * v9));
        v13 = *(_QWORD *)(a1 + 152);
        if ( v14 )
          goto LABEL_19;
      }
      if ( (a2 & 4) != 0 && (unsigned __int8)RtlIsElevatedRid(v13 + 16LL * v9) )
        break;
LABEL_6:
      a3 = v23;
      if ( ++v9 >= *(_DWORD *)(a1 + 124) )
      {
        v6 = 0;
        goto LABEL_8;
      }
    }
    v7 = 1;
LABEL_19:
    *(_DWORD *)(v13 + 16LL * v9 + 8) &= 0xFFFFFFF0;
    v8 = 1;
    *(_DWORD *)(*(_QWORD *)(a1 + 152) + 16LL * v9 + 8) |= 0x10u;
    *(_DWORD *)(a1 + 200) |= 0x800u;
    if ( v9 == *(_DWORD *)(a1 + 144) )
      *(_DWORD *)(a1 + 144) = 0;
    goto LABEL_6;
  }
LABEL_8:
  v15 = *(_DWORD *)(a1 + 200) & 0x800;
  if ( !v15 )
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
      v16 = 0x602880000LL;
      if ( !v7 )
        v16 = 0xFFFFFFEEDFE9F97BuLL;
      v17 = v16 & *(_QWORD *)(a1 + 72);
      v18 = v16 & *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 80) &= v16;
      *(_QWORD *)(a1 + 64) = v18;
      *(_QWORD *)(a1 + 72) = v17;
    }
    if ( a5 )
    {
      v22 = a5;
      do
      {
        if ( (unsigned int)(*a6 - 2) <= 0x22 )
        {
          *(_QWORD *)(a1 + 72) &= ~(1LL << *a6);
          *(_QWORD *)(a1 + 64) &= ~(1LL << *a6);
        }
        a6 += 3;
        --v22;
      }
      while ( v22 );
    }
  }
  if ( !v15 && (unsigned int)SepTokenPrivilegeCount(a1) < v6 )
    *(_DWORD *)(a1 + 200) = v20 | 0x800;
  return v8;
}
