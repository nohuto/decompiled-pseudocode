/*
 * XREFs of HvHiveStartFileBacked @ 0x14072F1D4
 * Callers:
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 * Callees:
 *     SetFailureLocation @ 0x140243E5C (SetFailureLocation.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HvpFillFileName @ 0x14072F4B8 (HvpFillFileName.c)
 *     HvLoadHive @ 0x14072F5C0 (HvLoadHive.c)
 *     CmpTraceHiveMountStop @ 0x140731120 (CmpTraceHiveMountStop.c)
 *     CmpTraceHiveMountStart @ 0x14073117C (CmpTraceHiveMountStart.c)
 *     HvMarkBaseBlockDirty @ 0x140871E3C (HvMarkBaseBlockDirty.c)
 *     HvpHeaderCheckSum @ 0x140AF2414 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvHiveStartFileBacked(
        ULONG_PTR a1,
        char a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        int a9,
        _OWORD *a10,
        _OWORD *a11,
        _BYTE *a12,
        _DWORD *a13,
        __int64 a14)
{
  __int64 v16; // rdx
  unsigned int v17; // ebp
  int v18; // eax
  __int64 v19; // rbx
  __int64 Hive; // rbx
  char *v22; // rax
  char *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // eax
  int v27; // ebp
  int v28; // eax

  if ( *(_DWORD *)a1 != -1092567328 || (a3 & 0xFD617CEC) != 0 || a4 > 2 || (v16 = a6, a6 - 1 > 7) )
    __fastfail(5u);
  v17 = a3 & 0xFFFDFFFF;
  if ( !a2 )
    v17 = a3;
  *(_DWORD *)(a1 + 160) = v17;
  if ( a5 )
  {
    *(_QWORD *)(a1 + 24) = *a5;
    *(_QWORD *)(a1 + 32) = a5[1];
    *(_QWORD *)(a1 + 40) = a5[3];
    *(_QWORD *)(a1 + 48) = a5[4];
  }
  if ( a4 )
  {
    v18 = 4;
    if ( a4 == 1 )
      v18 = 1;
    *(_DWORD *)(a1 + 168) = v18;
  }
  else
  {
    *(_DWORD *)(a1 + 168) = 0;
  }
  *(_DWORD *)(a1 + 132) = 4096;
  *(_QWORD *)(a1 + 8) = HvpGetCellPaged;
  *(_DWORD *)(a1 + 136) = a6;
  *(_QWORD *)(a1 + 16) = HvpReleaseCellPaged;
  *(_DWORD *)(a1 + 216) = 2;
  v19 = MEMORY[0xFFFFF78000000014];
  if ( a2 )
  {
    LOBYTE(v16) = 1;
    v22 = (char *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 24))(
                    *(unsigned int *)(a1 + 132),
                    v16,
                    825314627LL);
    v23 = v22;
    if ( !v22 )
    {
      LODWORD(Hive) = -1073741670;
      SetFailureLocation(a14, 0, 24, -1073741670, 16);
      return (unsigned int)Hive;
    }
    memset(v22, 0, *(unsigned int *)(a1 + 132));
    *((_DWORD *)v23 + 7) = 0;
    *((_DWORD *)v23 + 9) = -1;
    *((_DWORD *)v23 + 10) = 0;
    *(_DWORD *)v23 = 1718052210;
    *((_DWORD *)v23 + 1) = 1;
    *((_DWORD *)v23 + 2) = 1;
    *((_DWORD *)v23 + 8) = 1;
    *((_DWORD *)v23 + 11) = 1;
    HvpFillFileName(v23, a8);
    *((_DWORD *)v23 + 36) = 0;
    v26 = *((_DWORD *)v23 + 36);
    v27 = v17 & 0x80000;
    if ( v27 )
      v26 = 2;
    *((_DWORD *)v23 + 36) = v26;
    *((_DWORD *)v23 + 5) = 1;
    v28 = v27 != 0 ? 6 : 3;
    *((_DWORD *)v23 + 6) = v28;
    *(_DWORD *)(a1 + 220) = v28;
    *((_DWORD *)v23 + 41) = 1836346738;
    *(_QWORD *)(v23 + 12) = v19;
    if ( a10 )
    {
      *((_OWORD *)v23 + 7) = *a10;
      *((_OWORD *)v23 + 8) = *a10;
    }
    if ( a11 )
      *(_OWORD *)(v23 + 148) = *a11;
    *((_DWORD *)v23 + 127) = HvpHeaderCheckSum(v23, v24, v25);
    *(_QWORD *)(a1 + 64) = v23;
    *(_DWORD *)(a1 + 184) = 1;
    *(_DWORD *)(a1 + 172) = 1;
    *(_DWORD *)(a1 + 176) = 1;
    *(_BYTE *)(a1 + 194) = 1;
    if ( a13 )
      *a13 = 825314627;
  }
  else
  {
    CmpTraceHiveMountStart();
    Hive = (unsigned int)HvLoadHive(a1);
    CmpTraceHiveMountStop(Hive);
    if ( (int)Hive < 0 )
    {
      SetFailureLocation(a14, 0, 24, Hive, 64);
      return (unsigned int)Hive;
    }
    if ( (_DWORD)Hive == 1073741833 && a12 )
      *a12 = 1;
    if ( a13 )
      *a13 = 825445699;
    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) & 1) != 0 )
    {
      HvMarkBaseBlockDirty(a1);
      if ( a12 )
        *a12 = 1;
      *(_DWORD *)(*(_QWORD *)(a1 + 64) + 144LL) &= ~1u;
    }
    HvpFillFileName(*(_QWORD *)(a1 + 64), a8);
  }
  LODWORD(Hive) = 0;
  return (unsigned int)Hive;
}
