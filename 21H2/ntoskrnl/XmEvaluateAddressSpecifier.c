/*
 * XREFs of XmEvaluateAddressSpecifier @ 0x140397164
 * Callers:
 *     XmGroup3General @ 0x140396820 (XmGroup3General.c)
 *     XmMoveGeneral @ 0x140396A30 (XmMoveGeneral.c)
 *     XmGroup1General @ 0x140396F90 (XmGroup1General.c)
 *     XmGroup1Immediate @ 0x140397080 (XmGroup1Immediate.c)
 *     XmGroup2By1 @ 0x1403C13D0 (XmGroup2By1.c)
 *     XmGroup2ByByte @ 0x1403C15F0 (XmGroup2ByByte.c)
 *     XmMoveXxGeneral @ 0x1403C3AF0 (XmMoveXxGeneral.c)
 *     XmGroup2ByCL @ 0x1403C3C70 (XmGroup2ByCL.c)
 *     XmGroup45General @ 0x1403C3CD0 (XmGroup45General.c)
 *     XmMoveSegment @ 0x1403C9B90 (XmMoveSegment.c)
 *     XmBitScanGeneral @ 0x1404E5480 (XmBitScanGeneral.c)
 *     XmEffectiveOffset @ 0x1404E5510 (XmEffectiveOffset.c)
 *     XmGeneralBitOffset @ 0x1404E55D0 (XmGeneralBitOffset.c)
 *     XmGeneralRegister @ 0x1404E5670 (XmGeneralRegister.c)
 *     XmGroup7General @ 0x1404E56F0 (XmGroup7General.c)
 *     XmGroup8BitOffset @ 0x1404E5750 (XmGroup8BitOffset.c)
 *     XmImulImmediate @ 0x1404E58A0 (XmImulImmediate.c)
 *     XmLoadSegment @ 0x1404E5920 (XmLoadSegment.c)
 *     XmMoveImmediate @ 0x1404E59F0 (XmMoveImmediate.c)
 *     XmPopGeneral @ 0x1404E5A40 (XmPopGeneral.c)
 *     XmSetccByte @ 0x1404E5B10 (XmSetccByte.c)
 *     XmShiftDouble @ 0x1404E5B50 (XmShiftDouble.c)
 * Callees:
 *     XmGetCodeByte @ 0x1403974B8 (XmGetCodeByte.c)
 *     XmGetRegisterAddress @ 0x1403974E8 (XmGetRegisterAddress.c)
 *     XmGetWordImmediate @ 0x140397590 (XmGetWordImmediate.c)
 *     x86BiosTranslateAddress @ 0x140397CA0 (x86BiosTranslateAddress.c)
 *     XmGetLongImmediate @ 0x1403C5304 (XmGetLongImmediate.c)
 *     longjmp @ 0x1403D07E0 (longjmp.c)
 *     XmEvaluateIndexSpecifier @ 0x1404E72B8 (XmEvaluateIndexSpecifier.c)
 */

__int64 __fastcall XmEvaluateAddressSpecifier(__int64 a1, int *a2)
{
  unsigned int v3; // esi
  unsigned __int8 v5; // al
  unsigned int v6; // ecx
  bool v7; // cc
  __int64 result; // rax
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  __int64 v13; // r8
  unsigned int v14; // edx
  __int16 CodeByte; // cx
  __int16 v16; // ax
  unsigned __int16 WordImmediate; // ax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned __int16 v20; // ax
  unsigned int v21; // ecx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int LongImmediate; // eax
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  int v32; // esi
  int v33; // esi
  int v34; // esi
  int v35; // esi
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  int v41; // esi
  int v42; // esi
  int v43; // esi
  __int16 v44; // cx
  unsigned __int16 v45; // cx
  __int16 v46; // ax
  __int16 v47; // cx
  unsigned __int16 v48; // cx
  __int16 v49; // ax
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  char v53; // al
  __int16 v54; // cx
  char v55; // al
  __int16 v56; // cx
  unsigned int v57; // ecx
  unsigned int v58; // ecx

  v3 = 0;
  v5 = ((__int64 (*)(void))XmGetCodeByte)();
  *(_BYTE *)(a1 + 142) = 0;
  v6 = v5 & 7 | (8 * (v5 >> 6));
  *a2 = (v5 >> 3) & 7;
  if ( !*(_BYTE *)(a1 + 137) )
  {
    if ( v6 <= 0xC )
    {
      if ( v6 == 12 )
      {
        CodeByte = (char)XmGetCodeByte(a1);
        v16 = *(_WORD *)(a1 + 48);
LABEL_24:
        WordImmediate = CodeByte + v16;
        goto LABEL_25;
      }
      if ( v6 == 6 )
      {
        WordImmediate = XmGetWordImmediate(a1);
        goto LABEL_25;
      }
      if ( v6 > 6 )
      {
        v21 = v6 - 7;
        if ( !v21 )
        {
          v3 = *(unsigned __int16 *)(a1 + 36);
          goto LABEL_19;
        }
        v50 = v21 - 1;
        if ( v50 )
        {
          v51 = v50 - 1;
          if ( v51 )
          {
            v52 = v51 - 1;
            if ( v52 )
            {
              if ( v52 != 1 )
                goto LABEL_19;
              v53 = XmGetCodeByte(a1);
              v54 = *(_WORD *)(a1 + 52);
            }
            else
            {
              v53 = XmGetCodeByte(a1);
              v54 = *(_WORD *)(a1 + 48);
            }
            v45 = v53 + *(_WORD *)(a1 + 44) + v54;
            goto LABEL_103;
          }
          v55 = XmGetCodeByte(a1);
          v56 = *(_WORD *)(a1 + 52);
        }
        else
        {
          v55 = XmGetCodeByte(a1);
          v56 = *(_WORD *)(a1 + 48);
        }
        v48 = v55 + *(_WORD *)(a1 + 36) + v56;
      }
      else
      {
        if ( v6 )
        {
          v9 = v6 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( v11 )
              {
                v12 = v11 - 1;
                if ( v12 )
                {
                  if ( v12 == 1 )
                    v3 = *(unsigned __int16 *)(a1 + 52);
                }
                else
                {
                  v3 = *(unsigned __int16 *)(a1 + 48);
                }
                goto LABEL_19;
              }
              v44 = *(_WORD *)(a1 + 52);
            }
            else
            {
              v44 = *(_WORD *)(a1 + 48);
            }
            v45 = *(_WORD *)(a1 + 44) + v44;
            goto LABEL_103;
          }
          v47 = *(_WORD *)(a1 + 52);
        }
        else
        {
          v47 = *(_WORD *)(a1 + 48);
        }
        v48 = *(_WORD *)(a1 + 36) + v47;
      }
    }
    else
    {
      if ( v6 > 0x13 )
      {
        if ( v6 == 20 )
        {
          WordImmediate = *(_WORD *)(a1 + 48) + XmGetWordImmediate(a1);
          goto LABEL_25;
        }
        if ( v6 == 21 )
        {
          WordImmediate = *(_WORD *)(a1 + 52) + XmGetWordImmediate(a1);
          goto LABEL_25;
        }
        if ( v6 != 22 )
        {
          v7 = v6 <= 0x17;
          if ( v6 != 23 )
            goto LABEL_8;
          WordImmediate = *(_WORD *)(a1 + 36) + XmGetWordImmediate(a1);
LABEL_25:
          v3 = WordImmediate;
          goto LABEL_19;
        }
        v20 = *(_WORD *)(a1 + 44) + XmGetWordImmediate(a1);
        goto LABEL_32;
      }
      if ( v6 == 19 )
      {
        v46 = *(_WORD *)(a1 + 52) + XmGetWordImmediate(a1);
LABEL_102:
        v45 = v46 + *(_WORD *)(a1 + 44);
LABEL_103:
        v3 = v45;
LABEL_33:
        if ( !*(_BYTE *)(a1 + 140) )
          *(_DWORD *)(a1 + 116) = 2;
        goto LABEL_19;
      }
      v18 = v6 - 13;
      if ( !v18 )
      {
        CodeByte = (char)XmGetCodeByte(a1);
        v16 = *(_WORD *)(a1 + 52);
        goto LABEL_24;
      }
      v19 = v18 - 1;
      if ( !v19 )
      {
        v20 = (char)XmGetCodeByte(a1) + *(_WORD *)(a1 + 44);
LABEL_32:
        v3 = v20;
        goto LABEL_33;
      }
      v22 = v19 - 1;
      if ( !v22 )
      {
        CodeByte = (char)XmGetCodeByte(a1);
        v16 = *(_WORD *)(a1 + 36);
        goto LABEL_24;
      }
      v57 = v22 - 1;
      if ( v57 )
      {
        v58 = v57 - 1;
        if ( v58 )
        {
          if ( v58 != 1 )
            goto LABEL_19;
          v46 = *(_WORD *)(a1 + 48) + XmGetWordImmediate(a1);
          goto LABEL_102;
        }
        v49 = *(_WORD *)(a1 + 52) + XmGetWordImmediate(a1);
      }
      else
      {
        v49 = *(_WORD *)(a1 + 48) + XmGetWordImmediate(a1);
      }
      v48 = v49 + *(_WORD *)(a1 + 36);
    }
    v3 = v48;
    goto LABEL_19;
  }
  if ( v6 <= 0xC )
  {
    if ( v6 == 12 )
      goto LABEL_97;
    if ( v6 <= 6 )
    {
      if ( v6 == 6 )
      {
        v3 = *(_DWORD *)(a1 + 48);
        goto LABEL_19;
      }
      if ( !v6 )
      {
        v3 = *(_DWORD *)(a1 + 24);
        goto LABEL_19;
      }
      v23 = v6 - 1;
      if ( !v23 )
      {
        v3 = *(_DWORD *)(a1 + 28);
        goto LABEL_19;
      }
      v24 = v23 - 1;
      if ( !v24 )
      {
        v3 = *(_DWORD *)(a1 + 32);
        goto LABEL_19;
      }
      v25 = v24 - 1;
      if ( !v25 )
      {
        v3 = *(_DWORD *)(a1 + 36);
        goto LABEL_19;
      }
      v26 = v25 - 1;
      if ( v26 )
      {
        if ( v26 != 1 )
          goto LABEL_19;
        LongImmediate = XmGetLongImmediate(a1);
        goto LABEL_98;
      }
LABEL_97:
      LongImmediate = XmEvaluateIndexSpecifier(a1);
LABEL_98:
      v3 = LongImmediate;
      goto LABEL_19;
    }
    v28 = v6 - 7;
    if ( !v28 )
    {
      v3 = *(_DWORD *)(a1 + 52);
      goto LABEL_19;
    }
    v29 = v28 - 1;
    if ( v29 )
    {
      v30 = v29 - 1;
      if ( v30 )
      {
        v31 = v30 - 1;
        if ( v31 )
        {
          if ( v31 != 1 )
            goto LABEL_19;
          v32 = (char)XmGetCodeByte(a1);
          goto LABEL_64;
        }
        v33 = (char)XmGetCodeByte(a1);
LABEL_66:
        v3 = *(_DWORD *)(a1 + 32) + v33;
        goto LABEL_19;
      }
      v34 = (char)XmGetCodeByte(a1);
      goto LABEL_69;
    }
    v35 = (char)XmGetCodeByte(a1);
    goto LABEL_72;
  }
  if ( v6 <= 0x13 )
  {
    if ( v6 == 19 )
    {
      v32 = XmGetLongImmediate(a1);
LABEL_64:
      v3 = *(_DWORD *)(a1 + 36) + v32;
      goto LABEL_19;
    }
    v36 = v6 - 13;
    if ( v36 )
    {
      v37 = v36 - 1;
      if ( v37 )
      {
        v38 = v37 - 1;
        if ( v38 )
        {
          v39 = v38 - 1;
          if ( v39 )
          {
            v40 = v39 - 1;
            if ( v40 )
            {
              if ( v40 != 1 )
                goto LABEL_19;
              v33 = XmGetLongImmediate(a1);
              goto LABEL_66;
            }
            v34 = XmGetLongImmediate(a1);
LABEL_69:
            v3 = *(_DWORD *)(a1 + 28) + v34;
            goto LABEL_19;
          }
          v35 = XmGetLongImmediate(a1);
LABEL_72:
          v3 = *(_DWORD *)(a1 + 24) + v35;
          goto LABEL_19;
        }
        v41 = (char)XmGetCodeByte(a1);
LABEL_85:
        v3 = *(_DWORD *)(a1 + 52) + v41;
        goto LABEL_19;
      }
      v42 = (char)XmGetCodeByte(a1);
LABEL_88:
      v3 = *(_DWORD *)(a1 + 48) + v42;
      goto LABEL_19;
    }
    v43 = (char)XmGetCodeByte(a1);
LABEL_91:
    v3 = *(_DWORD *)(a1 + 44) + v43;
    goto LABEL_33;
  }
  switch ( v6 )
  {
    case 0x14u:
      goto LABEL_97;
    case 0x15u:
      v43 = XmGetLongImmediate(a1);
      goto LABEL_91;
    case 0x16u:
      v42 = XmGetLongImmediate(a1);
      goto LABEL_88;
  }
  v7 = v6 <= 0x17;
  if ( v6 == 23 )
  {
    v41 = XmGetLongImmediate(a1);
    goto LABEL_85;
  }
LABEL_8:
  if ( !v7 )
  {
    *(_BYTE *)(a1 + 142) = 1;
    return XmGetRegisterAddress(a1, v5 & 7);
  }
LABEL_19:
  if ( *(_BYTE *)(a1 + 143) )
  {
    result = (unsigned __int16)v3;
    if ( *(_DWORD *)(a1 + 120) != 1 )
      result = v3;
    *(_DWORD *)(a1 + 128) = result;
  }
  else
  {
    v13 = *(unsigned int *)(a1 + 116);
    v14 = *(unsigned __int16 *)(a1 + 2 * v13 + 68);
    if ( v3 > v14 || v3 + *(_DWORD *)(a1 + 120) > v14 )
      longjmp((_JBTYPE *)(a1 + 160), 14);
    *(_DWORD *)(a1 + 128) = v3;
    return x86BiosTranslateAddress(*(unsigned __int16 *)(a1 + 2 * v13 + 56), (unsigned __int16)v3);
  }
  return result;
}
