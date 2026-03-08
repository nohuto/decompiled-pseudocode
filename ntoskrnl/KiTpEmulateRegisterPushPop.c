/*
 * XREFs of KiTpEmulateRegisterPushPop @ 0x140AF126C
 * Callers:
 *     KiTpEmulateInstruction @ 0x140AF0944 (KiTpEmulateInstruction.c)
 * Callees:
 *     KiTpAccessMemory @ 0x140AF0008 (KiTpAccessMemory.c)
 *     KiTpGetRegisterAddressByIndex @ 0x140AF13F8 (KiTpGetRegisterAddressByIndex.c)
 */

__int64 __fastcall KiTpEmulateRegisterPushPop(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  _BYTE *RegisterAddressByIndex; // rdx
  __int64 v7; // r10
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rdi
  int v11; // esi
  volatile void *v12; // r8

  if ( a2 )
  {
    RegisterAddressByIndex = (_BYTE *)KiTpGetRegisterAddressByIndex(a1, a2, a3 & 7, *(_BYTE *)(a1 + 25) & 1, 1);
    v8 = *(_BYTE *)(v7 + 1) >> 3;
    v9 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 152LL);
    v10 = v9 - v8;
    v11 = a3 & 8;
    v12 = (volatile void *)(v9 - v8);
    if ( v11 )
      v12 = *(volatile void **)(*(_QWORD *)(a2 + 8) + 152LL);
    result = KiTpAccessMemory(
               a2,
               RegisterAddressByIndex,
               v12,
               *(_BYTE *)(a2 + 16),
               0,
               *(_BYTE *)(v7 + 1) >> 3,
               v11 == 0);
    if ( (int)result >= 0 )
    {
      if ( v11 )
        v10 = v9 + v8;
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 152LL) = v10;
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 1) != 16 )
      *(_BYTE *)(a1 + 1) = 64;
    return 0LL;
  }
  return result;
}
