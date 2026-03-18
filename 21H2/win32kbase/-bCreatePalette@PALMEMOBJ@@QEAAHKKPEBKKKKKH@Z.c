/*
 * XREFs of ?bCreatePalette@PALMEMOBJ@@QEAAHKKPEBKKKKKH@Z @ 0x1C0088400
 * Callers:
 *     EngCreatePalette @ 0x1C0088260 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C016F7F8 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     GreCreatePalette @ 0x1C0175750 (GreCreatePalette.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C0179378 (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C02E572C (bInitPALOBJ.c)
 * Callees:
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z @ 0x1C0028D70 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@_N1E@Z.c)
 *     ??1HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0028F60 (--1HmgInsertObjectHelper@@QEAA@XZ.c)
 *     PALLOCMEM @ 0x1C0086980 (PALLOCMEM.c)
 *     ?ParseBits@@YAXKPEAK00K@Z @ 0x1C00871A0 (-ParseBits@@YAXKPEAK00K@Z.c)
 *     ?vComputeCallTables@XEPALOBJ@@QEAAXXZ @ 0x1C0091350 (-vComputeCallTables@XEPALOBJ@@QEAAXXZ.c)
 *     ??$AllocateIsolatedType@V?$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1C0094594 (--$AllocateIsolatedType@V-$CLookAsideTypeIsolation@$0JAAA@$0JA@@NSInstrumentation@@@@YAPEAXXZ.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C0168DA4 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 *     ?FreePaletteMemory@XEPALOBJ@@QEAAXXZ @ 0x1C016B444 (-FreePaletteMemory@XEPALOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall PALMEMOBJ::bCreatePalette(
        PALMEMOBJ *this,
        int a2,
        unsigned int a3,
        const unsigned int *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        int a9)
{
  unsigned int v9; // r15d
  unsigned int v12; // r12d
  unsigned int v13; // esi
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // r14d
  int v17; // r14d
  int v18; // r14d
  _DWORD *v19; // r9
  const unsigned int *v20; // rdx
  unsigned int i; // ecx
  int v22; // eax
  int v23; // esi
  _QWORD v25[2]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v26[80]; // [rsp+48h] [rbp-50h] BYREF

  v9 = a3;
  v12 = 4;
  if ( a2 == 1 )
  {
    v12 = 4 * a3 + 4;
    v13 = a8 & 0x3102F00;
    if ( !a3 )
      return 0LL;
    goto LABEL_16;
  }
  if ( a2 == 2 )
  {
    v13 = a8 & 0x3100300;
    v9 = 0;
    if ( !a5 || !a7 || !a6 )
      return 0LL;
    goto LABEL_14;
  }
  if ( a2 != 4 && a2 != 8 && a2 != 16 )
    return 0LL;
  v13 = a8 & 0x3100100 | 0x200;
  v9 = 0;
  if ( a2 != 16 )
  {
    if ( a2 == 4 )
    {
      a5 = 255;
      a7 = 16711680;
    }
    else
    {
      a5 = 16711680;
      a7 = 255;
    }
    a6 = 65280;
LABEL_14:
    v12 = 52;
  }
LABEL_16:
  v14 = AllocateIsolatedType<NSInstrumentation::CLookAsideTypeIsolation<36864,144>>();
  v25[0] = v14;
  *(_QWORD *)this = v14;
  if ( v14 )
  {
    v15 = PALLOCMEM(v12, 1819304263);
    *(_QWORD *)(v14 + 128) = v15;
    if ( !v15 )
    {
LABEL_46:
      XEPALOBJ::FreePaletteMemory(this);
      return 0LL;
    }
    *(_DWORD *)(v14 + 24) = v13 | a2;
    *(_DWORD *)(v14 + 28) = v9;
    *(_DWORD *)(v14 + 32) = _InterlockedIncrement((volatile signed __int32 *)&ulXlatePalUnique);
    *(_QWORD *)(v14 + 40) = 0LL;
    *(_QWORD *)(v14 + 48) = 0LL;
    *(_DWORD *)(v14 + 60) = 0;
    *(_DWORD *)(v14 + 56) = 0;
    *(_QWORD *)(v14 + 72) = 0LL;
    *(_QWORD *)(v14 + 80) = 0LL;
    *(_QWORD *)(v14 + 88) = 0LL;
    *(_DWORD *)(v14 + 36) = 0;
    *(_QWORD *)(v14 + 104) = 0LL;
    *(_QWORD *)(v14 + 120) = v14;
    *(_QWORD *)(v14 + 112) = *(_QWORD *)(v14 + 128);
    v16 = a2 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( !v17 || (v18 = v17 - 2) == 0 || v18 == 4 )
      {
        **(_DWORD **)(*(_QWORD *)this + 112LL) = a5;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 4LL) = a6;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 8LL) = a7;
        if ( a5 == 255 && a6 == 65280 && a7 == 16711680 )
        {
          *(_DWORD *)(v14 + 24) |= 4u;
        }
        else if ( a5 == 63488 && a6 == 2016 && a7 == 31 )
        {
          *(_DWORD *)(v14 + 24) |= 0x400000u;
        }
        else if ( a5 == 31744 && a6 == 992 && a7 == 31 )
        {
          *(_DWORD *)(v14 + 24) |= 0x200000u;
        }
        ParseBits(
          a5,
          (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 24LL),
          (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 12LL),
          (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 36LL),
          0);
        ParseBits(
          a6,
          (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 28LL),
          (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 16LL),
          (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 40LL),
          8u);
        ParseBits(
          a7,
          (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 32LL),
          (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 20LL),
          (unsigned int *)(*(_QWORD *)(*(_QWORD *)this + 112LL) + 44LL),
          0x10u);
      }
    }
    else
    {
      v19 = *(_DWORD **)(*(_QWORD *)this + 112LL);
      v20 = a4;
      if ( a4 )
      {
        for ( i = 0; i < v9; ++i )
        {
          v22 = *v20++;
          *v19++ = v22;
          v25[1] = v19;
        }
        v23 = a9;
        goto LABEL_43;
      }
      if ( v9 )
        memset(*(void **)(*(_QWORD *)this + 112LL), 0, 4LL * v9);
    }
    v23 = a9;
LABEL_43:
    v25[0] = v14;
    XEPALOBJ::vComputeCallTables((XEPALOBJ *)v25);
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v26);
    if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v26, (struct OBJECT *)v14, 1u, v23 != 0, 8u) )
    {
      HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v26);
      return 1LL;
    }
    HmgInsertObjectHelper::~HmgInsertObjectHelper((HmgInsertObjectHelper *)v26);
    goto LABEL_46;
  }
  return 0LL;
}
