/*
 * XREFs of KiTpEmulateMovzx @ 0x140AF115C
 * Callers:
 *     KiTpEmulateInstruction @ 0x140AF0944 (KiTpEmulateInstruction.c)
 * Callees:
 *     KiTpAccessMemory @ 0x140AF0008 (KiTpAccessMemory.c)
 *     KiTpDecodeModRm @ 0x140AF01F4 (KiTpDecodeModRm.c)
 *     KiTpDecodeModRmOperand @ 0x140AF02E0 (KiTpDecodeModRmOperand.c)
 *     KiTpGetRegisterAddressByIndex @ 0x140AF13F8 (KiTpGetRegisterAddressByIndex.c)
 */

__int64 __fastcall KiTpEmulateMovzx(_BYTE *a1, __int64 a2, unsigned __int8 a3, int *a4)
{
  __int64 result; // rax
  int v8; // r9d
  _WORD *RegisterAddressByIndex; // r9
  char v10; // al
  char v11; // [rsp+40h] [rbp-20h] BYREF
  char v12[7]; // [rsp+41h] [rbp-1Fh] BYREF
  __int64 v13; // [rsp+48h] [rbp-18h] BYREF
  volatile void *v14; // [rsp+50h] [rbp-10h] BYREF

  v14 = 0LL;
  v12[0] = 0;
  v11 = 0;
  result = KiTpDecodeModRm((__int64)a1, a2, a4);
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      KiTpDecodeModRmOperand((__int64)a1, a2, (__int64 *)&v14, v12, &v11);
      v13 = 0LL;
      result = KiTpAccessMemory(a2, &v13, v14, v12[0], v11, a3 >> 3, 0);
      if ( (int)result < 0 )
        return result;
      LOBYTE(v8) = (a1[25] & 4) != 0;
      RegisterAddressByIndex = (_WORD *)KiTpGetRegisterAddressByIndex(
                                          (_DWORD)a1,
                                          a2,
                                          ((unsigned __int8)a1[26] >> 3) & 7,
                                          v8,
                                          0);
      v10 = a1[2];
      if ( v10 == 16 )
      {
        *RegisterAddressByIndex = v13;
      }
      else if ( v10 == 32 )
      {
        *(_QWORD *)RegisterAddressByIndex = (unsigned int)v13;
      }
      else
      {
        *(_QWORD *)RegisterAddressByIndex = v13;
      }
    }
    else
    {
      a1[2] = a1[1];
      a1[1] = a3;
    }
    return 0LL;
  }
  return result;
}
