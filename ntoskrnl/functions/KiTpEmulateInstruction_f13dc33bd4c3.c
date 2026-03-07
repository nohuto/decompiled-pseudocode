__int64 __fastcall KiTpEmulateInstruction(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v5; // rdx
  int InstructionBytes; // ebx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r8
  int v10; // r9d
  int v11; // r9d
  _QWORD *RegisterAddressByIndex; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  int v15; // r9d
  int v16; // r9d
  __int64 v17; // rax
  int v18; // r9d
  _QWORD *v19; // rax
  char v20; // r14
  int v21; // r9d
  int v22; // r9d
  _QWORD *v23; // rax
  _DWORD *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  char v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  volatile void *v33; // [rsp+40h] [rbp-28h] BYREF
  __int64 v34; // [rsp+48h] [rbp-20h] BYREF
  __int64 v35[3]; // [rsp+50h] [rbp-18h] BYREF
  char v36; // [rsp+A0h] [rbp+38h] BYREF
  __int64 v37; // [rsp+A8h] [rbp+40h] BYREF
  __int64 v38; // [rsp+B0h] [rbp+48h] BYREF
  int v39; // [rsp+B8h] [rbp+50h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 21);
  v34 = 0LL;
  v35[0] = 0LL;
  v33 = 0LL;
  LOBYTE(v38) = 0;
  v36 = 0;
  LOBYTE(v37) = 0;
  v39 = v2;
  InstructionBytes = KiTpFetchInstructionBytes(a1, &v38, 1LL, &v39);
  if ( InstructionBytes < 0 )
    goto LABEL_105;
  if ( (v38 & 0xF0) == 0x50 )
  {
    v8 = KiTpEmulateRegisterPushPop(a1, a2, (unsigned __int8)v38);
    goto LABEL_4;
  }
  if ( (v38 & 0xF0) == 0xB0 )
  {
    v8 = KiTpEmulateMovRegImm(a1, a2, (unsigned __int8)v38, &v39);
    goto LABEL_4;
  }
  if ( (v38 & 0xC4) == 0 )
  {
    v8 = KiTpEmulateGroup0Instruction((_BYTE *)a1, a2, v38, &v39);
    goto LABEL_4;
  }
  if ( (unsigned __int8)v38 <= 0x8Du )
  {
    if ( (unsigned __int8)v38 != 141 )
    {
      if ( (unsigned __int8)v38 <= 0x85u )
      {
        if ( (unsigned __int8)v38 == 133 )
        {
LABEL_22:
          InstructionBytes = KiTpDecodeModRm(a1, a2, &v39);
          if ( InstructionBytes < 0 )
            goto LABEL_105;
          if ( a2 )
          {
            KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v33, &v36, &v37);
            LOBYTE(v10) = v36;
            InstructionBytes = KiTpReadOperandValue(a1, a2, (_DWORD)v33, v10, v37, (__int64)&v34);
            if ( InstructionBytes < 0 )
              return (unsigned int)InstructionBytes;
            LOBYTE(v11) = (*(_BYTE *)(a1 + 25) & 4) != 0;
            RegisterAddressByIndex = (_QWORD *)KiTpGetRegisterAddressByIndex(
                                                 a1,
                                                 a2,
                                                 (*(unsigned __int8 *)(a1 + 26) >> 3) & 7,
                                                 v11,
                                                 1);
            v35[0] = KiTpSignExtendOperandValue(a1, *RegisterAddressByIndex);
            v13 = v34 & v35[0];
            *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) &= 0xFFFFF7FE;
            KiTpSetFlagsZeroSignParity(v14, a2, v13);
            goto LABEL_101;
          }
          goto LABEL_24;
        }
        if ( (unsigned __int8)v38 != 15 )
        {
          switch ( (unsigned __int8)v38 )
          {
            case 0x80u:
              if ( a2 )
                goto LABEL_36;
              *(_BYTE *)(a1 + 1) = 8;
              break;
            case 0x81u:
              if ( a2 )
                goto LABEL_36;
              break;
            case 0x82u:
              if ( !a2 )
              {
                *(_BYTE *)(a1 + 1) = 8;
LABEL_29:
                LOBYTE(v7) = 8;
                LOBYTE(v5) = 8;
LABEL_35:
                KiTpSetImmediateOperandSize(a1, v5, v7);
              }
LABEL_36:
              v8 = KiTpEmulateGroup1Instruction(a1, a2, &v39);
              goto LABEL_4;
            case 0x83u:
              if ( a2 )
                goto LABEL_36;
              goto LABEL_29;
            case 0x84u:
              if ( !a2 )
                *(_BYTE *)(a1 + 1) = 8;
              goto LABEL_22;
            default:
LABEL_104:
              InstructionBytes = -1073741637;
              goto LABEL_105;
          }
          LOBYTE(v5) = 16;
          LOBYTE(v7) = 32;
          goto LABEL_35;
        }
        InstructionBytes = KiTpFetchInstructionBytes(a1, &v38, 1LL, &v39);
        if ( InstructionBytes < 0 )
          goto LABEL_105;
        v9 = (unsigned __int8)v38;
        if ( (unsigned __int8)v38 != 182 && (unsigned __int8)v38 != 183 )
          goto LABEL_104;
        LOBYTE(v9) = 8 * ((v38 & 1) + 1);
        v8 = KiTpEmulateMovzx(a1, a2, v9, &v39);
LABEL_4:
        InstructionBytes = v8;
        if ( v8 >= 0 )
        {
LABEL_100:
          if ( a2 )
            goto LABEL_101;
          goto LABEL_106;
        }
LABEL_105:
        if ( a2 )
          return (unsigned int)InstructionBytes;
LABEL_106:
        if ( InstructionBytes < 0 )
          return (unsigned int)InstructionBytes;
LABEL_107:
        *(_BYTE *)(a1 + 24) = v39;
        return (unsigned int)InstructionBytes;
      }
      if ( (unsigned __int8)v38 == 134 )
      {
        if ( !a2 )
          *(_BYTE *)(a1 + 1) = 8;
      }
      else if ( (unsigned __int8)v38 != 135 )
      {
        if ( (unsigned __int8)v38 == 136 )
        {
          if ( !a2 )
            *(_BYTE *)(a1 + 1) = 8;
        }
        else if ( (unsigned __int8)v38 != 137 )
        {
          if ( (unsigned __int8)v38 == 138 )
          {
            if ( !a2 )
              *(_BYTE *)(a1 + 1) = 8;
          }
          else if ( (unsigned __int8)v38 != 139 )
          {
            goto LABEL_104;
          }
          InstructionBytes = KiTpDecodeModRm(a1, a2, &v39);
          if ( InstructionBytes < 0 )
            goto LABEL_105;
          if ( a2 )
          {
            KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v33, &v36, &v37);
            LOBYTE(v15) = v36;
            InstructionBytes = KiTpReadOperandValue(a1, a2, (_DWORD)v33, v15, v37, (__int64)v35);
            if ( InstructionBytes < 0 )
              return (unsigned int)InstructionBytes;
            v17 = v35[0];
            goto LABEL_69;
          }
          goto LABEL_24;
        }
        InstructionBytes = KiTpDecodeModRm(a1, a2, &v39);
        if ( InstructionBytes < 0 )
          goto LABEL_105;
        if ( a2 )
        {
          KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v33, &v36, &v37);
          LOBYTE(v18) = (*(_BYTE *)(a1 + 25) & 4) != 0;
          v19 = (_QWORD *)KiTpGetRegisterAddressByIndex(a1, a2, (*(unsigned __int8 *)(a1 + 26) >> 3) & 7, v18, 1);
          v35[0] = KiTpSignExtendOperandValue(a1, *v19);
          v38 = v35[0];
          InstructionBytes = KiTpAccessMemory(a2, &v38, v33, v36, v37, *(_BYTE *)(a1 + 1) >> 3, 1);
          if ( InstructionBytes < 0 )
            return (unsigned int)InstructionBytes;
          goto LABEL_101;
        }
        goto LABEL_24;
      }
      InstructionBytes = KiTpDecodeModRm(a1, a2, &v39);
      if ( InstructionBytes < 0 )
        goto LABEL_105;
      if ( a2 )
      {
        KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v33, &v36, &v37);
        v20 = v37;
        LOBYTE(v21) = v36;
        InstructionBytes = KiTpReadOperandValue(a1, a2, (_DWORD)v33, v21, v37, (__int64)&v34);
        if ( InstructionBytes < 0 )
          return (unsigned int)InstructionBytes;
        LOBYTE(v22) = (*(_BYTE *)(a1 + 25) & 4) != 0;
        v23 = (_QWORD *)KiTpGetRegisterAddressByIndex(a1, a2, (*(unsigned __int8 *)(a1 + 26) >> 3) & 7, v22, 1);
        v35[0] = KiTpSignExtendOperandValue(a1, *v23);
        v37 = v35[0];
        InstructionBytes = KiTpAccessMemory(a2, &v37, v33, v36, v20, *(_BYTE *)(a1 + 1) >> 3, 1);
        if ( InstructionBytes < 0 )
          return (unsigned int)InstructionBytes;
        v17 = v34;
        goto LABEL_69;
      }
      goto LABEL_24;
    }
    InstructionBytes = KiTpDecodeModRm(a1, a2, &v39);
    if ( InstructionBytes < 0 )
      goto LABEL_105;
    if ( a2 )
    {
      KiTpDecodeModRmOperand(a1, a2, (__int64 *)&v33, &v36, &v37);
      if ( (_BYTE)v37 )
      {
        v24 = *(_DWORD **)a2;
        InstructionBytes = -1073741795;
        v24[6] = 0;
        *v24 = -1073741795;
        return (unsigned int)InstructionBytes;
      }
      v17 = (__int64)v33;
LABEL_69:
      LOBYTE(v16) = (*(_BYTE *)(a1 + 25) & 4) != 0;
      KiTpWriteRegisterValue(a1, a2, (*(unsigned __int8 *)(a1 + 26) >> 3) & 7, v16, v17);
LABEL_101:
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 248LL) += *(unsigned __int8 *)(a1 + 24);
      if ( (KeKernelCetWrssEnabledScenarios & 2) != 0 )
      {
        v29 = *(_QWORD *)(a2 + 8);
        if ( (*(_DWORD *)(v29 + 48) & 0x100080) == 0x100080 )
        {
          v30 = *(int *)(v29 + 1256);
          v31 = *(_QWORD *)(v29 + 248);
          *(_WORD *)(v30 + v29 + 1250) |= 1u;
          *(_QWORD *)(v30 + v29 + 1240) = v31;
        }
      }
      return (unsigned int)InstructionBytes;
    }
LABEL_24:
    InstructionBytes = 0;
    goto LABEL_107;
  }
  if ( (unsigned __int8)v38 >= 0xCCu )
    goto LABEL_104;
  if ( (unsigned __int8)v38 == 144 )
  {
    if ( (*(_BYTE *)(a1 + 25) & 1) == 0 )
      goto LABEL_100;
    goto LABEL_104;
  }
  if ( (unsigned __int8)v38 == 156 )
  {
    if ( (*(_BYTE *)(a1 + 25) & 8) != 0 )
    {
      if ( a2 )
      {
        v27 = *(_QWORD *)(a2 + 8);
        v28 = *(_BYTE *)(a2 + 16);
        v34 = *(_DWORD *)(v27 + 68) & 0xFCFFFF;
        InstructionBytes = KiTpAccessMemory(a2, &v34, (volatile void *)(*(_QWORD *)(v27 + 152) - 8LL), v28, 0, 8u, 1);
        if ( InstructionBytes < 0 )
          return (unsigned int)InstructionBytes;
        *(_QWORD *)(*(_QWORD *)(a2 + 8) + 152LL) -= 8LL;
        goto LABEL_101;
      }
      goto LABEL_24;
    }
    goto LABEL_104;
  }
  if ( (unsigned __int8)v38 == 194 )
  {
    InstructionBytes = KiTpFetchInstructionBytes(a1, a1 + 32, 2LL, &v39);
    if ( InstructionBytes < 0 )
      goto LABEL_105;
  }
  else if ( (unsigned __int8)v38 != 195 )
  {
    if ( (unsigned __int8)v38 == 198 )
    {
      if ( a2 )
      {
LABEL_87:
        v8 = KiTpEmulateGroup11Instruction(a1, a2, &v39);
        goto LABEL_4;
      }
      *(_BYTE *)(a1 + 1) = 8;
    }
    else
    {
      if ( (unsigned __int8)v38 != 199 )
        goto LABEL_104;
      if ( a2 )
        goto LABEL_87;
    }
    LOBYTE(v5) = 16;
    LOBYTE(v7) = 32;
    KiTpSetImmediateOperandSize(a1, v5, v7);
    goto LABEL_87;
  }
  if ( !a2 )
    goto LABEL_24;
  InstructionBytes = KiTpAccessMemory(
                       a2,
                       &v34,
                       *(volatile void **)(*(_QWORD *)(a2 + 8) + 152LL),
                       *(_BYTE *)(a2 + 16),
                       0,
                       8u,
                       0);
  if ( InstructionBytes >= 0 )
  {
    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 248LL) = v34;
    *(_QWORD *)(*(_QWORD *)(a2 + 8) + 152LL) += *(_QWORD *)(a1 + 32) + 8LL;
    if ( (KeKernelCetWrssEnabledScenarios & 2) != 0 )
    {
      v25 = *(_QWORD *)(a2 + 8);
      if ( (*(_DWORD *)(v25 + 48) & 0x100080) == 0x100080 )
      {
        v26 = *(int *)(v25 + 1256);
        *(_QWORD *)(v26 + v25 + 1240) = *(_QWORD *)(v25 + 248);
        *(_WORD *)(v26 + v25 + 1250) |= 3u;
      }
    }
    return 0;
  }
  return (unsigned int)InstructionBytes;
}
