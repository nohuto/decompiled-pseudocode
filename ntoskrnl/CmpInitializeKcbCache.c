/*
 * XREFs of CmpInitializeKcbCache @ 0x14073163C
 * Callers:
 *     CmpLinkHiveToMaster @ 0x140731250 (CmpLinkHiveToMaster.c)
 *     CmInitSystem1 @ 0x140B51500 (CmInitSystem1.c)
 * Callees:
 *     CmpDeleteKcbCache @ 0x14074C7C4 (CmpDeleteKcbCache.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpInitializeKcbCache(__int64 a1, unsigned int a2)
{
  int v4; // ebx
  __int64 Pool2; // r14
  __int64 v6; // rbp
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rcx

  v4 = -1073741670;
  Pool2 = 0LL;
  if ( ((a2 - 1) & a2) != 0 )
    return 3221225485LL;
  v6 = 0LL;
  if ( a2 > 0xAAAAAAA )
  {
    v4 = -1073741811;
  }
  else
  {
    Pool2 = ExAllocatePool2(256LL, 24 * a2, 1631800643LL);
    if ( Pool2 )
    {
      v6 = ExAllocatePool2(256LL, 768LL, 1631800643LL);
      if ( v6 )
      {
        if ( a2 )
        {
          v7 = (_QWORD *)Pool2;
          v8 = a2;
          do
          {
            *v7 = 0LL;
            v7 += 3;
            --v8;
          }
          while ( v8 );
        }
        v9 = (_QWORD *)v6;
        v10 = 32LL;
        do
        {
          *v9 = 0LL;
          v9 += 3;
          --v10;
        }
        while ( v10 );
        v4 = 0;
      }
    }
  }
  *(_QWORD *)(a1 + 1648) = Pool2;
  *(_DWORD *)(a1 + 1656) = a2;
  *(_QWORD *)(a1 + 1664) = v6;
  *(_DWORD *)(a1 + 1672) = 32;
  if ( v4 < 0 )
    CmpDeleteKcbCache(a1);
  return (unsigned int)v4;
}
