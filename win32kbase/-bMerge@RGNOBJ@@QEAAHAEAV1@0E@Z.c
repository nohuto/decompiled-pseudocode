/*
 * XREFs of ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0042EB0
 * Callers:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0044F90 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0184084 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C018BD80 (EngUpdateDeviceSurface.c)
 * Callees:
 *     RGNCOREOBJ::bMerge__lambda_37edbae25e797877af1c91b6e50f63b9___ @ 0x1C0042F40 (RGNCOREOBJ--bMerge__lambda_37edbae25e797877af1c91b6e50f63b9___.c)
 */

__int64 __fastcall RGNOBJ::bMerge(RGNOBJ *this, struct RGNOBJ *a2, struct RGNOBJ *a3, int a4)
{
  __int64 v4; // rax
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+60h] [rbp+18h] BYREF

  v4 = *(_QWORD *)this;
  v6[1] = this;
  v7 = (v4 + 24) & -(__int64)(v4 != 0);
  v9 = (*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL);
  v8 = (*(_QWORD *)a3 + 24LL) & -(__int64)(*(_QWORD *)a3 != 0LL);
  v6[0] = &v7;
  return (unsigned __int8)RGNCOREOBJ::bMerge__lambda_37edbae25e797877af1c91b6e50f63b9___(
                            (unsigned int)&v7,
                            (unsigned int)&v9,
                            (unsigned int)&v8,
                            a4,
                            (__int64)v6);
}
