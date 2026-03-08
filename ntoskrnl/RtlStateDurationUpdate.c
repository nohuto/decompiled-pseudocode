/*
 * XREFs of RtlStateDurationUpdate @ 0x140294E3C
 * Callers:
 *     PoEnergyContextUpdateComponentPower @ 0x1406FF3F8 (PoEnergyContextUpdateComponentPower.c)
 *     PopEtEnergyContextSetState @ 0x140700F30 (PopEtEnergyContextSetState.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStateDurationUpdate(unsigned __int64 *a1, unsigned __int8 a2, unsigned int a3)
{
  unsigned __int64 v3; // rax
  int v5; // r8d
  unsigned __int64 v6; // r10
  unsigned int v7; // r9d
  int v8; // eax
  int v10; // edx
  unsigned __int64 v11; // [rsp+8h] [rbp+8h]

  v3 = *a1;
  v5 = a2;
  v6 = HIDWORD(*a1);
  v7 = 0;
  v11 = *a1;
  if ( (unsigned int)HIDWORD(*a1) >> 31 != a2 )
  {
    if ( (HIDWORD(*a1) & 0x80000000) != 0 )
    {
      v10 = -1;
      v7 = a3 - v11;
      if ( a3 - (_DWORD)v11 != -1 && ~v7 >= (v6 & 0x7FFFFFFF) )
        v10 = (v6 & 0x7FFFFFFF) + v7;
      v8 = v6 ^ (v10 ^ v6) & 0x7FFFFFFF;
    }
    else
    {
      v8 = HIDWORD(*a1);
    }
    v3 = __PAIR64__(v8 & 0x7FFFFFFF | (unsigned int)(v5 << 31), a3);
  }
  *a1 = v3;
  return v7;
}
