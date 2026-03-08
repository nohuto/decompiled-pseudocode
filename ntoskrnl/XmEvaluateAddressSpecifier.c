/*
 * XREFs of XmEvaluateAddressSpecifier @ 0x1403B3F0C
 * Callers:
 *     XmGroup2ByByte @ 0x140394790 (XmGroup2ByByte.c)
 *     XmGroup2ByCL @ 0x140394FE0 (XmGroup2ByCL.c)
 *     XmGroup2By1 @ 0x140395740 (XmGroup2By1.c)
 *     XmMoveXxGeneral @ 0x140397C40 (XmMoveXxGeneral.c)
 *     XmGroup45General @ 0x140398BB0 (XmGroup45General.c)
 *     XmMoveSegment @ 0x1403A5480 (XmMoveSegment.c)
 *     XmGroup3General @ 0x1403B3660 (XmGroup3General.c)
 *     XmGroup1General @ 0x1403B3DB0 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x1403B3E30 (XmGroup1Immediate.c)
 *     XmMoveGeneral @ 0x1403B3EA0 (XmMoveGeneral.c)
 *     XmBitScanGeneral @ 0x140530740 (XmBitScanGeneral.c)
 *     XmEffectiveOffset @ 0x1405307D0 (XmEffectiveOffset.c)
 *     XmGeneralBitOffset @ 0x140530850 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x140530900 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x140530980 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x1405309E0 (XmGroup8BitOffset.c)
 *     XmImulImmediate @ 0x140530B30 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x140530BB0 (XmLoadSegment.c)
 *     XmMoveImmediate @ 0x140530C80 (XmMoveImmediate.c)
 *     XmPopGeneral @ 0x140530CD0 (XmPopGeneral.c)
 *     XmSetccByte @ 0x140530D60 (XmSetccByte.c)
 *     XmShiftDouble @ 0x140530DA0 (XmShiftDouble.c)
 * Callees:
 *     XmGetLongImmediate @ 0x140395F88 (XmGetLongImmediate.c)
 *     XmGetCodeByte @ 0x1403B40F4 (XmGetCodeByte.c)
 *     XmGetRegisterAddress @ 0x1403B4124 (XmGetRegisterAddress.c)
 *     XmGetWordImmediate @ 0x1403B4350 (XmGetWordImmediate.c)
 *     x86BiosTranslateAddress @ 0x1403B9030 (x86BiosTranslateAddress.c)
 *     longjmp @ 0x1403D2360 (longjmp.c)
 *     XmEvaluateIndexSpecifier @ 0x1405324A8 (XmEvaluateIndexSpecifier.c)
 */

__int64 __fastcall XmEvaluateAddressSpecifier(__int64 a1, int *a2)
{
  unsigned int v3; // esi
  unsigned __int8 CodeByte; // al
  unsigned int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // edx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  __int64 result; // rax
  unsigned int v14; // edx
  unsigned int v15; // edx
  unsigned int v16; // edx
  unsigned int v17; // edx
  __int64 v18; // r8
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // edx
  unsigned __int16 v25; // cx
  unsigned int v26; // edx
  unsigned int v27; // edx
  unsigned __int16 WordImmediate; // ax
  unsigned int v29; // edx
  __int16 v30; // cx
  unsigned __int16 v31; // cx
  unsigned int v32; // edx
  unsigned int v33; // edx
  unsigned int v34; // edx
  unsigned int v35; // edx
  unsigned int v36; // edx
  unsigned int v37; // edx
  unsigned int v38; // eax
  int v39; // esi
  unsigned int v40; // edx
  unsigned int v41; // edx
  unsigned int v42; // edx
  unsigned int v43; // edx
  unsigned int v44; // edx
  unsigned int v45; // edx
  int LongImmediate; // esi
  int v47; // esi
  int v48; // esi
  int v49; // esi
  int v50; // esi
  int v51; // esi
  unsigned int v52; // edx
  unsigned int v53; // edx
  unsigned int v54; // edx
  unsigned int v55; // edx
  unsigned int v56; // edx
  unsigned int v57; // edx
  __int16 v58; // cx
  char v59; // al
  __int16 v60; // cx
  char v61; // al
  __int16 v62; // cx
  __int16 v63; // ax
  unsigned int v64; // edx
  unsigned int v65; // edx
  unsigned int v66; // edx
  unsigned int v67; // edx
  unsigned int v68; // edx
  unsigned int v69; // edx
  __int16 v70; // ax

  v3 = 0;
  CodeByte = XmGetCodeByte(a1);
  *(_BYTE *)(a1 + 142) = 0;
  v6 = CodeByte >> 6;
  *a2 = (CodeByte >> 3) & 7;
  v7 = CodeByte & 7 | (8 * v6);
  if ( *(_BYTE *)(a1 + 137) )
  {
    if ( v7 > 0x10 )
    {
      if ( v7 > 0x18 )
        goto LABEL_4;
      if ( v7 == 24 )
      {
LABEL_12:
        *(_BYTE *)(a1 + 142) = 1;
        return XmGetRegisterAddress(a1, CodeByte & 7);
      }
      v52 = v7 - 17;
      if ( v52 )
      {
        v53 = v52 - 1;
        if ( v53 )
        {
          v54 = v53 - 1;
          if ( v54 )
          {
            v55 = v54 - 1;
            if ( !v55 )
              goto LABEL_60;
            v56 = v55 - 1;
            if ( v56 )
            {
              v57 = v56 - 1;
              if ( v57 )
              {
                if ( v57 != 1 )
                  goto LABEL_22;
                LongImmediate = XmGetLongImmediate(a1);
LABEL_77:
                v3 = *(_DWORD *)(a1 + 52) + LongImmediate;
                goto LABEL_22;
              }
              v47 = XmGetLongImmediate(a1);
LABEL_80:
              v3 = *(_DWORD *)(a1 + 48) + v47;
              goto LABEL_22;
            }
            v48 = XmGetLongImmediate(a1);
LABEL_83:
            v3 = *(_DWORD *)(a1 + 44) + v48;
            goto LABEL_42;
          }
          v49 = XmGetLongImmediate(a1);
LABEL_86:
          v3 = *(_DWORD *)(a1 + 36) + v49;
          goto LABEL_22;
        }
        v50 = XmGetLongImmediate(a1);
LABEL_89:
        v3 = *(_DWORD *)(a1 + 32) + v50;
        goto LABEL_22;
      }
      v51 = XmGetLongImmediate(a1);
    }
    else
    {
      if ( v7 == 16 )
      {
        v39 = XmGetLongImmediate(a1);
        goto LABEL_68;
      }
      if ( v7 <= 8 )
      {
        if ( v7 != 8 )
        {
          if ( !v7 )
          {
            v3 = *(_DWORD *)(a1 + 24);
            goto LABEL_22;
          }
          v32 = v7 - 1;
          if ( !v32 )
          {
            v3 = *(_DWORD *)(a1 + 28);
            goto LABEL_22;
          }
          v33 = v32 - 1;
          if ( !v33 )
          {
            v3 = *(_DWORD *)(a1 + 32);
            goto LABEL_22;
          }
          v34 = v33 - 1;
          if ( !v34 )
          {
            v3 = *(_DWORD *)(a1 + 36);
            goto LABEL_22;
          }
          v35 = v34 - 1;
          if ( v35 )
          {
            v36 = v35 - 1;
            if ( v36 )
            {
              v37 = v36 - 1;
              if ( v37 )
              {
                if ( v37 == 1 )
                  v3 = *(_DWORD *)(a1 + 52);
              }
              else
              {
                v3 = *(_DWORD *)(a1 + 48);
              }
              goto LABEL_22;
            }
            v38 = XmGetLongImmediate(a1);
            goto LABEL_61;
          }
LABEL_60:
          v38 = XmEvaluateIndexSpecifier(a1, v6);
LABEL_61:
          v3 = v38;
          goto LABEL_22;
        }
        v39 = (char)XmGetCodeByte(a1);
LABEL_68:
        v3 = *(_DWORD *)(a1 + 24) + v39;
        goto LABEL_22;
      }
      v40 = v7 - 9;
      if ( v40 )
      {
        v41 = v40 - 1;
        if ( v41 )
        {
          v42 = v41 - 1;
          if ( v42 )
          {
            v43 = v42 - 1;
            if ( !v43 )
              goto LABEL_60;
            v44 = v43 - 1;
            if ( v44 )
            {
              v45 = v44 - 1;
              if ( v45 )
              {
                if ( v45 != 1 )
                  goto LABEL_22;
                LongImmediate = (char)XmGetCodeByte(a1);
                goto LABEL_77;
              }
              v47 = (char)XmGetCodeByte(a1);
              goto LABEL_80;
            }
            v48 = (char)XmGetCodeByte(a1);
            goto LABEL_83;
          }
          v49 = (char)XmGetCodeByte(a1);
          goto LABEL_86;
        }
        v50 = (char)XmGetCodeByte(a1);
        goto LABEL_89;
      }
      v51 = (char)XmGetCodeByte(a1);
    }
    v3 = *(_DWORD *)(a1 + 28) + v51;
    goto LABEL_22;
  }
  if ( v7 <= 0x10 )
  {
    if ( v7 == 16 )
    {
      v63 = *(_WORD *)(a1 + 48) + XmGetWordImmediate(a1);
      goto LABEL_134;
    }
    if ( v7 > 8 )
    {
      v20 = v7 - 9;
      if ( v20 )
      {
        v21 = v20 - 1;
        if ( v21 )
        {
          v22 = v21 - 1;
          if ( v22 )
          {
            v23 = v22 - 1;
            if ( v23 )
            {
              v24 = v23 - 1;
              if ( v24 )
              {
                v29 = v24 - 1;
                if ( !v29 )
                {
                  v30 = (char)XmGetCodeByte(a1);
LABEL_40:
                  v31 = *(_WORD *)(a1 + 44) + v30;
LABEL_41:
                  v3 = v31;
                  goto LABEL_42;
                }
                if ( v29 != 1 )
                  goto LABEL_22;
                v58 = (char)XmGetCodeByte(a1);
                goto LABEL_109;
              }
              v25 = *(_WORD *)(a1 + 52) + (char)XmGetCodeByte(a1);
            }
            else
            {
              v25 = *(_WORD *)(a1 + 48) + (char)XmGetCodeByte(a1);
            }
LABEL_37:
            v3 = v25;
            goto LABEL_22;
          }
          v61 = XmGetCodeByte(a1);
          v62 = *(_WORD *)(a1 + 52);
        }
        else
        {
          v61 = XmGetCodeByte(a1);
          v62 = *(_WORD *)(a1 + 48);
        }
        v31 = v61 + *(_WORD *)(a1 + 44) + v62;
        goto LABEL_41;
      }
      v59 = XmGetCodeByte(a1);
      v60 = *(_WORD *)(a1 + 52);
    }
    else
    {
      if ( v7 != 8 )
      {
        if ( v7 )
        {
          v14 = v7 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                v17 = v16 - 1;
                if ( !v17 )
                {
                  v3 = *(unsigned __int16 *)(a1 + 48);
                  goto LABEL_22;
                }
                v26 = v17 - 1;
                if ( !v26 )
                {
                  v3 = *(unsigned __int16 *)(a1 + 52);
                  goto LABEL_22;
                }
                v27 = v26 - 1;
                if ( v27 )
                {
                  if ( v27 == 1 )
                    v3 = *(unsigned __int16 *)(a1 + 36);
                  goto LABEL_22;
                }
                WordImmediate = XmGetWordImmediate(a1);
                goto LABEL_35;
              }
              v30 = *(_WORD *)(a1 + 52);
            }
            else
            {
              v30 = *(_WORD *)(a1 + 48);
            }
            goto LABEL_40;
          }
          v58 = *(_WORD *)(a1 + 52);
        }
        else
        {
          v58 = *(_WORD *)(a1 + 48);
        }
LABEL_109:
        v25 = *(_WORD *)(a1 + 36) + v58;
        goto LABEL_37;
      }
      v59 = XmGetCodeByte(a1);
      v60 = *(_WORD *)(a1 + 48);
    }
    v25 = v59 + *(_WORD *)(a1 + 36) + v60;
    goto LABEL_37;
  }
  if ( v7 <= 0x18 )
  {
    if ( v7 == 24 )
      goto LABEL_12;
    v64 = v7 - 17;
    if ( v64 )
    {
      v65 = v64 - 1;
      if ( v65 )
      {
        v66 = v65 - 1;
        if ( v66 )
        {
          v67 = v66 - 1;
          if ( v67 )
          {
            v68 = v67 - 1;
            if ( v68 )
            {
              v69 = v68 - 1;
              if ( v69 )
              {
                if ( v69 != 1 )
                  goto LABEL_22;
                v63 = XmGetWordImmediate(a1);
                goto LABEL_134;
              }
              v70 = XmGetWordImmediate(a1);
              goto LABEL_132;
            }
            WordImmediate = *(_WORD *)(a1 + 52) + XmGetWordImmediate(a1);
          }
          else
          {
            WordImmediate = *(_WORD *)(a1 + 48) + XmGetWordImmediate(a1);
          }
LABEL_35:
          v3 = WordImmediate;
          goto LABEL_22;
        }
        v70 = *(_WORD *)(a1 + 52) + XmGetWordImmediate(a1);
      }
      else
      {
        v70 = *(_WORD *)(a1 + 48) + XmGetWordImmediate(a1);
      }
LABEL_132:
      v3 = (unsigned __int16)(*(_WORD *)(a1 + 44) + v70);
LABEL_42:
      if ( !*(_BYTE *)(a1 + 140) )
        *(_DWORD *)(a1 + 116) = 2;
      goto LABEL_22;
    }
    v63 = *(_WORD *)(a1 + 52) + XmGetWordImmediate(a1);
LABEL_134:
    WordImmediate = *(_WORD *)(a1 + 36) + v63;
    goto LABEL_35;
  }
LABEL_4:
  v8 = v7 - 25;
  if ( !v8 )
    goto LABEL_12;
  v9 = v8 - 1;
  if ( !v9 )
    goto LABEL_12;
  v10 = v9 - 1;
  if ( !v10 )
    goto LABEL_12;
  v11 = v10 - 1;
  if ( !v11 )
    goto LABEL_12;
  v12 = v11 - 1;
  if ( !v12 || v12 - 1 < 2 )
    goto LABEL_12;
LABEL_22:
  if ( *(_BYTE *)(a1 + 143) )
  {
    result = (unsigned __int16)v3;
    if ( *(_DWORD *)(a1 + 120) != 1 )
      result = v3;
    *(_DWORD *)(a1 + 128) = result;
  }
  else
  {
    v18 = *(unsigned int *)(a1 + 116);
    v19 = *(unsigned __int16 *)(a1 + 2 * v18 + 68);
    if ( v3 > v19 || v3 + *(_DWORD *)(a1 + 120) > v19 )
      longjmp((_JBTYPE *)(a1 + 160), 14);
    *(_DWORD *)(a1 + 128) = v3;
    return x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 2 * v18 + 56), (unsigned __int16)v3);
  }
  return result;
}
