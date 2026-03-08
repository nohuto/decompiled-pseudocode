/*
 * XREFs of MiFindEmptyAddressRangeDown @ 0x140760E10
 * Callers:
 *     MiSelectUserAddress @ 0x1407D6D30 (MiSelectUserAddress.c)
 * Callees:
 *     MiFindEmptyAddressRangeDownTree @ 0x140760F18 (MiFindEmptyAddressRangeDownTree.c)
 */

__int64 __fastcall MiFindEmptyAddressRangeDown(
        __int64 a1,
        unsigned __int64 a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rbx
  __int64 v14; // r14
  _KPROCESS *Process; // rdx
  int v16; // eax
  __int64 v17; // r8
  __int64 result; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // [rsp+78h] [rbp+10h]
  int v21; // [rsp+98h] [rbp+30h]

  if ( a6 - a5 + 1 < a2 )
    return 3221225495LL;
  v12 = a6 + 1;
  v13 = *(_QWORD *)(a1 + 56);
  v14 = a6 + 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v21 = (int)Process;
  if ( a6 + 1 > *(_QWORD *)(a1 + 48) )
    v14 = *(_QWORD *)(a1 + 48);
  v16 = *(_DWORD *)(a1 + 64);
  v17 = (unsigned __int8)v16;
  if ( !(_BYTE)v16 )
    v17 = 1LL;
  v20 = v17;
  if ( v13 < a5 )
    v13 = a5;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v13 >= a6 || a6 - v13 + 1 < a2 )
      {
        result = 3221225495LL;
      }
      else
      {
        result = MiFindEmptyAddressRangeDownTree((int)Process + 2008, a2, a3, a4, v13, v14, a8);
        if ( (int)result >= 0 )
          return result;
        v17 = v20;
      }
      if ( v14 == v12 || (a7 & 2) != 0 )
        break;
      LODWORD(Process) = v21;
      v14 = a6 + 1;
    }
    v19 = v17 << 16;
    if ( (a7 & 2) == 0 )
      v19 = 0x10000LL;
    if ( v19 < a5 )
      v19 = a5;
    if ( v19 >= v13 )
      break;
    LODWORD(Process) = v21;
    v13 = v19;
  }
  return result;
}
