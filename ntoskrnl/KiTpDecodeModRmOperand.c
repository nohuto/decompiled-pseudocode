/*
 * XREFs of KiTpDecodeModRmOperand @ 0x140AF02E0
 * Callers:
 *     KiTpEmulateGroup0Instruction @ 0x140AF043C (KiTpEmulateGroup0Instruction.c)
 *     KiTpEmulateGroup11Instruction @ 0x140AF0694 (KiTpEmulateGroup11Instruction.c)
 *     KiTpEmulateGroup1Instruction @ 0x140AF0754 (KiTpEmulateGroup1Instruction.c)
 *     KiTpEmulateInstruction @ 0x140AF0944 (KiTpEmulateInstruction.c)
 *     KiTpEmulateMovzx @ 0x140AF115C (KiTpEmulateMovzx.c)
 * Callees:
 *     KiTpGetRegisterAddressByIndex @ 0x140AF13F8 (KiTpGetRegisterAddressByIndex.c)
 */

__int64 __fastcall KiTpDecodeModRmOperand(__int64 a1, __int64 a2, __int64 *a3, _BYTE *a4, _BYTE *a5)
{
  __int64 v5; // rbx
  __int64 v6; // r10
  unsigned __int8 v7; // cl
  _BYTE *v8; // rsi
  int v10; // edi
  __int64 RegisterAddressByIndex; // r11
  unsigned __int64 v12; // rsi
  __int64 result; // rax

  v5 = 0LL;
  v6 = a1;
  v7 = *(_BYTE *)(a1 + 26);
  v8 = a4;
  *a4 = *(_BYTE *)(a2 + 16);
  v10 = a2;
  *a5 = 0;
  RegisterAddressByIndex = 0LL;
  if ( (v7 & 0xC0) == 0xC0 )
  {
    LOBYTE(a4) = *(_BYTE *)(v6 + 25) & 1;
    RegisterAddressByIndex = KiTpGetRegisterAddressByIndex(v6, a2, v7 & 7, (_DWORD)a4, 1);
    *v8 = 0;
    *a5 = 1;
  }
  else if ( (v7 & 7) == 4 )
  {
    v12 = *(unsigned __int8 *)(v6 + 27);
    if ( (*(_BYTE *)(v6 + 27) & 7) != 5 || v7 >= 0x40u )
    {
      LOBYTE(a4) = *(_BYTE *)(v6 + 25) & 1;
      RegisterAddressByIndex = *(_QWORD *)KiTpGetRegisterAddressByIndex(v6, a2, v12 & 7, (_DWORD)a4, 0);
    }
    if ( (v12 & 0x38) != 0x20 || (*(_BYTE *)(v6 + 25) & 2) != 0 )
    {
      LOBYTE(a4) = (*(_BYTE *)(v6 + 25) & 2) != 0;
      v5 = *(_QWORD *)KiTpGetRegisterAddressByIndex(v6, v10, ((unsigned int)v12 >> 3) & 7, (_DWORD)a4, 0) << (v12 >> 6);
    }
  }
  else if ( v7 >= 0x40u || (v7 & 7) != 5 || (*(_BYTE *)(v6 + 25) & 1) != 0 )
  {
    LOBYTE(a4) = *(_BYTE *)(v6 + 25) & 1;
    RegisterAddressByIndex = *(_QWORD *)KiTpGetRegisterAddressByIndex(v6, a2, v7 & 7, (_DWORD)a4, 0);
  }
  else
  {
    RegisterAddressByIndex = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 248LL) + *(unsigned __int8 *)(v6 + 24);
  }
  result = RegisterAddressByIndex + v5 + *(int *)(v6 + 28);
  *a3 = result;
  return result;
}
