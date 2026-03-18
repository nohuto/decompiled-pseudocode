/*
 * XREFs of CcAllocateObcb @ 0x140885F50
 * Callers:
 *     CcPinRead @ 0x1406F5970 (CcPinRead.c)
 *     CcPinMappedData @ 0x1406F5F00 (CcPinMappedData.c)
 *     CcPreparePinWrite @ 0x1407654A0 (CcPreparePinWrite.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140AAFC80 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall CcAllocateObcb(_DWORD *a1, int a2, __int64 a3)
{
  SIZE_T v6; // rbx
  _WORD *result; // rax

  v6 = 8
     * ((unsigned int)(*a1
                     - *(_DWORD *)((a3 & 0xFFFFFFFFFFFFFFFEuLL) + 8)
                     - *(_DWORD *)((a3 & 0xFFFFFFFFFFFFFFFEuLL) + 4)
                     + a2
                     + 4095) >> 12)
     + 32;
  result = ExAllocatePoolWithTag((POOL_TYPE)1552, v6, 0x624F6343u);
  result[1] = v6;
  *result = 762;
  *((_DWORD *)result + 1) = a2;
  *((_QWORD *)result + 1) = *(_QWORD *)a1;
  *((_QWORD *)result + 2) = a3;
  return result;
}
