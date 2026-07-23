/*
 * XREFs of PspApplyMitigationOptions @ 0x1406AFCFC
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PspSetRedirectionTrustPolicy @ 0x1405CF6A4 (PspSetRedirectionTrustPolicy.c)
 *     ExEnableHandleExceptions @ 0x140618C5C (ExEnableHandleExceptions.c)
 *     PspDecodeMitigationExecuteOptions @ 0x14061CE18 (PspDecodeMitigationExecuteOptions.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x14061EFA8 (PspSetNoChildProcessRestrictedPolicy.c)
 *     ObReferenceProcessHandleTable @ 0x1406E4F14 (ObReferenceProcessHandleTable.c)
 *     KeSetCheckStackExtentsProcess @ 0x1408BAEDC (KeSetCheckStackExtentsProcess.c)
 */

void __fastcall PspApplyMitigationOptions(__int64 a1, __int64 a2, __m128i *a3, __int128 *a4, int a5)
{
  __int64 v5; // rax
  unsigned __int64 v7; // xmm3_8
  unsigned __int64 v9; // xmm1_8
  __m128i v11; // xmm2
  __int128 v12; // xmm0
  bool v13; // zf
  __int64 v14; // rax
  unsigned int v15; // r10d
  unsigned int v16; // r11d
  unsigned __int64 v17; // rax
  unsigned __int8 v18; // cl
  int v19; // eax
  __int64 v20; // rax
  char v21; // si
  int v22; // edx
  int v23; // eax
  unsigned __int64 v24; // rax
  char v25; // bl
  unsigned __int64 v26; // xmm1_8
  __m128i v27; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v28; // [rsp+30h] [rbp-50h]
  __m128i v29; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v30; // [rsp+50h] [rbp-30h]
  __int128 v31; // [rsp+58h] [rbp-28h]
  unsigned __int64 v32; // [rsp+68h] [rbp-18h]

  v5 = *(_QWORD *)(a1 + 1408);
  v7 = a3[1].m128i_u64[0];
  v9 = *((_QWORD *)a4 + 2);
  v30 = v7;
  v32 = v9;
  v11 = *a3;
  v12 = *a4;
  v29 = *a3;
  v31 = v12;
  if ( v5 && *(_WORD *)(v5 + 8) == 332 )
  {
    v27 = v11;
    v28 = v7;
    *(_BYTE *)(a1 + 643) = PspDecodeMitigationExecuteOptions(&v27);
  }
  if ( (((unsigned __int64)v29.m128i_i64[0] >> 8) & 3) != 1 )
  {
    if ( (((unsigned __int64)v29.m128i_i64[0] >> 8) & 3) != 3 )
      goto LABEL_8;
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 8u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x10u);
LABEL_8:
  if ( (v29.m128i_i8[2] & 3) != 0 )
    v13 = (v29.m128i_i8[2] & 3) == 2;
  else
    v13 = (a5 & 1) == 0;
  if ( v13 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x40u);
  if ( (*(_DWORD *)(a1 + 2512) & 0x40) == 0 )
  {
    if ( (((unsigned __int64)v29.m128i_i64[0] >> 20) & 3) != 0 )
    {
      if ( (((unsigned __int64)v29.m128i_i64[0] >> 20) & 3) != 1 )
        goto LABEL_19;
    }
    else if ( (a5 & 2) == 0 )
    {
      goto LABEL_19;
    }
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x20u);
  }
LABEL_19:
  if ( !a2 )
    goto LABEL_28;
  if ( (((unsigned __int64)v29.m128i_i64[0] >> 24) & 3) == 0 )
  {
    if ( (a5 & 4) == 0 )
      goto LABEL_26;
LABEL_24:
    v14 = ObReferenceProcessHandleTable(a1);
    if ( v14 )
    {
      ExEnableHandleExceptions(v14, 1);
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)(a1 + 1112));
    }
    goto LABEL_26;
  }
  if ( (((unsigned __int64)v29.m128i_i64[0] >> 24) & 3) == 1 )
    goto LABEL_24;
LABEL_26:
  if ( (*(_DWORD *)(a2 + 2512) & 0x1000) != 0 )
    v29.m128i_i64[0] = v29.m128i_i64[0] & 0xFFFFFFFFCFFFFFFFuLL | 0x10000000;
LABEL_28:
  if ( (((unsigned __int64)v29.m128i_i64[0] >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x3000u);
  if ( (*(_DWORD *)(a1 + 2512) & 0x1000) == 0 && (((unsigned __int64)v31 >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x2000u);
  if ( a2 && (*(_DWORD *)(a2 + 2608) & 2) != 0 )
    v30 = v30 & 0xFFFFFFFFFCFFFFFFuLL | 0x1000000;
  if ( ((v30 >> 24) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2608), 6u);
  if ( (*(_DWORD *)(a1 + 2608) & 2) == 0 && ((v32 >> 24) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2608), 4u);
  if ( (((unsigned __int64)v29.m128i_i64[0] >> 36) & 3) != 1 )
  {
    if ( (((unsigned __int64)v29.m128i_i64[0] >> 36) & 3) != 3 )
      goto LABEL_45;
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x200u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x900u);
LABEL_45:
  v15 = 1024;
  v29.m128i_i64[1] = _mm_srli_si128(_mm_loadu_si128(&v29), 8).m128i_u64[0];
  if ( (v29.m128i_i8[15] & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x400u);
  v16 = 2048;
  if ( (*(_DWORD *)(a1 + 2512) & 0x100) != 0 )
  {
    v29.m128i_i64[1] = v29.m128i_i64[1] & 0xFFFFFFFFFCCCFFFFuLL | 0x2220000;
    *((_QWORD *)&v31 + 1) = *((_QWORD *)&v31 + 1) & 0xFFFFFFFFFCCCFFFFuLL | 0x2220000;
  }
  else if ( (((unsigned __int64)v31 >> 36) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x800u);
  }
  if ( (v29.m128i_i8[4] & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x80u);
  if ( (((unsigned __int64)v29.m128i_i64[0] >> 40) & 3) != 0 )
  {
    if ( (((unsigned __int64)v29.m128i_i64[0] >> 40) & 3) != 1 )
    {
      if ( (((unsigned __int64)v29.m128i_i64[0] >> 40) & 3) == 3 )
      {
        if ( PspDisableControlFlowGuardExportSuppression )
        {
          v29.m128i_i64[0] = v29.m128i_i64[0] & 0xFFFFFCFFFFFFFFFFuLL | 0x10000000000LL;
        }
        else
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 2u);
          v29.m128i_i64[0] |= 0x30000000000uLL;
        }
        _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 1u);
        if ( (a5 & 0x10) == 0 )
          KeSetCheckStackExtentsProcess(a1, 1LL);
      }
      goto LABEL_67;
    }
  }
  else
  {
    if ( (a5 & 8) == 0 )
      goto LABEL_67;
    v17 = v29.m128i_i64[0] & 0xFFFFFCFFFFFFFFFFuLL | 0x10000000000LL;
    v29.m128i_i64[0] = v17;
    if ( (a5 & 0x20) != 0 && !PspDisableControlFlowGuardExportSuppression )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 2u);
      v29.m128i_i64[0] = v17 | 0x30000000000LL;
    }
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 1u);
  if ( (a5 & 0x10) == 0 )
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 632), 5u);
LABEL_67:
  if ( (((unsigned __int64)v29.m128i_i64[1] >> 8) & 3) == 1 && (*(_DWORD *)(a1 + 2512) & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 4u);
  if ( (((unsigned __int64)v29.m128i_i64[0] >> 44) & 3) == 1 )
  {
    if ( *(_BYTE *)(a1 + 2168) < 8u )
      *(_BYTE *)(a1 + 2168) = 8;
    if ( *(_BYTE *)(a1 + 2169) < 8u )
      *(_BYTE *)(a1 + 2169) = 8;
  }
  else
  {
    if ( (((unsigned __int64)v29.m128i_i64[0] >> 44) & 3) != 3 )
      goto LABEL_81;
    if ( *(_BYTE *)(a1 + 2168) < 6u )
      *(_BYTE *)(a1 + 2168) = 6;
    if ( *(_BYTE *)(a1 + 2169) < 6u )
      *(_BYTE *)(a1 + 2169) = 6;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x800000u);
LABEL_81:
  if ( (*(_DWORD *)(a1 + 2512) & 0x800000) == 0 )
  {
    if ( (((unsigned __int64)v31 >> 44) & 3) == 1 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x1000000u);
    }
    else if ( (((unsigned __int64)v31 >> 44) & 3) == 3 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x2000000u);
    }
  }
  v18 = v29.m128i_i8[0];
  if ( (((unsigned __int8)v29.m128i_i8[0] >> 4) & 3) == 0 && (*(_DWORD *)(a1 + 2512) & 1) != 0 )
  {
    v29.m128i_i64[0] = v29.m128i_i64[0] & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    v18 = v29.m128i_i8[0];
  }
  if ( ((v18 >> 4) & 3) != 1 && (((unsigned __int64)v31 >> 4) & 3) == 1 )
    v29.m128i_i64[0] |= 0x30uLL;
  if ( (a5 & 0x30000) == 0x10000 )
  {
    v29.m128i_i64[0] = v29.m128i_i64[0] & 0xFFFCFFFFFFFFFFFFuLL | 0x1000000000000LL;
  }
  else if ( (a5 & 0x30000) == 0x30000 && (v29.m128i_i8[6] & 3) != 1 )
  {
    v29.m128i_i64[0] |= 0x3000000000000uLL;
  }
  if ( (HIWORD(v29.m128i_i64[0]) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x10000u);
  }
  else if ( (HIWORD(v29.m128i_i64[0]) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x20000u);
  }
  if ( (*(_DWORD *)(a1 + 2512) & 0x30000) == 0 && (WORD3(v31) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x20000u);
  if ( a2 && (*(_DWORD *)(a2 + 2512) & 0x80000) != 0 )
    v29.m128i_i64[0] = v29.m128i_i64[0] & 0xFFCFFFFFFFFFFFFFuLL | 0x10000000000000LL;
  if ( (((unsigned __int64)v29.m128i_i64[0] >> 52) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x80000u);
  if ( (*(_DWORD *)(a1 + 2512) & 0x80000) == 0 && (((unsigned __int64)v31 >> 52) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x100000u);
  if ( a2 && (*(_DWORD *)(a2 + 2512) & 0x200000) != 0 )
    v29.m128i_i64[0] = v29.m128i_i64[0] & 0xFCFFFFFFFFFFFFFFuLL | 0x100000000000000LL;
  if ( (v29.m128i_i8[7] & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x200000u);
  if ( (*(_DWORD *)(a1 + 2512) & 0x200000) == 0 && (BYTE7(v31) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x400000u);
  if ( a2 && (*(_DWORD *)(a2 + 2512) & 0x40000) != 0 )
    v29.m128i_i64[0] = v29.m128i_i64[0] & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
  if ( (((unsigned __int64)v29.m128i_i64[0] >> 60) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x40000u);
  if ( a2 )
  {
    v19 = *(_DWORD *)(a2 + 2512);
    if ( (v19 & 0x4000000) != 0 )
    {
      v29.m128i_i64[1] = v29.m128i_i64[1] & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    }
    else if ( (v19 & 0x8000000) != 0 )
    {
      v29.m128i_i64[1] |= 0x30uLL;
    }
  }
  if ( (((unsigned __int64)v29.m128i_i64[1] >> 4) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0xC000000u);
  }
  else if ( (((unsigned __int64)v29.m128i_i64[1] >> 4) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x8000000u);
  }
  if ( (*(_DWORD *)(a1 + 2512) & 0xC000000) == 0 && ((*((_QWORD *)&v31 + 1) >> 4) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x8000000u);
  if ( (((unsigned __int64)v29.m128i_i64[1] >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 1u);
  if ( (*(_DWORD *)(a1 + 2516) & 1) == 0 && ((*((_QWORD *)&v31 + 1) >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 2u);
  if ( (v29.m128i_i8[12] & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 4u);
  if ( (HIWORD(v29.m128i_i64[1]) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x40000000u);
  if ( (((unsigned __int64)v29.m128i_i64[1] >> 52) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x2000u);
  if ( (*(_DWORD *)(a1 + 2516) & 4) == 0 && (BYTE12(v31) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 8u);
  if ( (((unsigned __int64)v29.m128i_i64[1] >> 40) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), v15);
  if ( (v15 & *(_DWORD *)(a1 + 2516)) == 0 && ((*((_QWORD *)&v31 + 1) >> 40) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), v16);
  if ( (((unsigned __int64)v29.m128i_i64[1] >> 16) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x10u);
  if ( (*(_DWORD *)(a1 + 2516) & 0x10) == 0 && ((*((_QWORD *)&v31 + 1) >> 16) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x20u);
  v20 = *(_QWORD *)(a1 + 1408);
  if ( v20 && *(_WORD *)(v20 + 8) == 332 )
  {
    if ( (((unsigned __int64)v29.m128i_i64[1] >> 20) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x40u);
    if ( (*(_DWORD *)(a1 + 2516) & 0x40) == 0 && ((*((_QWORD *)&v31 + 1) >> 20) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x80u);
    if ( (((unsigned __int64)v29.m128i_i64[1] >> 24) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x100u);
    if ( (*(_DWORD *)(a1 + 2516) & 0x100) == 0 && ((*((_QWORD *)&v31 + 1) >> 24) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x200u);
  }
  v21 = (unsigned __int64)v29.m128i_i64[1] >> 36;
  if ( (v21 & 3) == 1 )
  {
    v22 = 1;
    goto LABEL_177;
  }
  if ( (((unsigned __int64)v29.m128i_i64[1] >> 36) & 3) == 3 )
  {
    v22 = 2;
LABEL_177:
    PspSetNoChildProcessRestrictedPolicy((struct _KPROCESS *)a1, v22);
  }
  if ( (v21 & 3) != 1 && ((*((_QWORD *)&v31 + 1) >> 36) & 3) == 1 )
    PspSetNoChildProcessRestrictedPolicy((struct _KPROCESS *)a1, 3);
  if ( a2 )
  {
    v23 = *(_DWORD *)(a2 + 2512);
    if ( (v23 & 0x10000000) != 0 && (v23 & 0x20000000) == 0 )
      v29.m128i_i64[1] = v29.m128i_i64[1] & 0xFFFFCFFFFFFFFFFFuLL | 0x100000000000LL;
  }
  if ( (((unsigned __int64)v29.m128i_i64[1] >> 44) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x10000000u);
  }
  else if ( (((unsigned __int64)v29.m128i_i64[1] >> 44) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x30000000u);
  }
  switch ( ((unsigned __int64)v29.m128i_i64[1] >> 60) & 3 )
  {
    case 0uLL:
      if ( (a5 & 0x40000) == 0 || (a5 & 0x800000) != 0 || (a5 & 0x1000000) != 0 )
        break;
      if ( (a5 & 0x100000) != 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x100000u);
      v29.m128i_i64[1] = v29.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
LABEL_199:
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x4000u);
      break;
    case 1uLL:
      goto LABEL_199;
    case 3uLL:
      v29.m128i_i64[1] = v29.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x4000u);
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x100000u);
      break;
  }
  if ( ((*((_QWORD *)&v31 + 1) >> 60) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x8000u);
  if ( (*(_DWORD *)(a1 + 2516) & 0x4000) == 0 )
  {
    v24 = v30 & 0xFFFFFFFFFFFFFFFCuLL | 2;
    goto LABEL_210;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x20000u);
  if ( (v30 & 3) != 0 )
  {
    if ( (v30 & 3) == 3 )
      goto LABEL_208;
  }
  else if ( (a5 & 0x200000) != 0 )
  {
LABEL_208:
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x80000000);
  }
  v24 = v30 & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_210:
  v30 = v24;
  if ( (v32 & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x40000u);
  if ( ((v30 >> 4) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x200000u);
  }
  else if ( ((v30 >> 4) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x200000u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x400000u);
  }
  if ( ((v32 >> 4) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x800000u);
  if ( ((v30 >> 16) & 3) == 0 )
  {
    if ( (a5 & 0x400000) != 0 )
      goto LABEL_223;
    goto LABEL_222;
  }
  if ( ((v30 >> 16) & 3) == 1 )
LABEL_222:
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x40000000u);
LABEL_223:
  v25 = v30 >> 20;
  if ( (v25 & 3) == 1 )
    PspSetRedirectionTrustPolicy((struct _KPROCESS *)a1, 1);
  if ( (v25 & 3) != 1 && ((v32 >> 20) & 3) == 1 )
    PspSetRedirectionTrustPolicy((struct _KPROCESS *)a1, 2);
  v26 = v30;
  *a3 = v29;
  a3[1].m128i_i64[0] = v26;
}
