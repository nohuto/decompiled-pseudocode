/*
 * XREFs of KiFinalizeGroupAssignment @ 0x1403A4FD0
 * Callers:
 *     KiPerformGroupConfiguration @ 0x140B66804 (KiPerformGroupConfiguration.c)
 * Callees:
 *     <none>
 */

__int64 KiFinalizeGroupAssignment()
{
  __int64 result; // rax
  unsigned __int16 v1; // r10
  __int64 *v2; // rbx
  __int16 v3; // r11
  __int64 v4; // rdi
  __int16 v5; // r8
  __int64 v6; // r9
  _BYTE *v7; // rcx
  unsigned __int8 v8; // al
  char v9; // cl
  __int64 v10; // r9
  _BYTE *v11; // rdx
  _UNKNOWN *retaddr; // [rsp+8h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v1 = 0;
  if ( KeNumberNodes )
  {
    v2 = KeNodeBlock;
    do
    {
      v3 = 0;
      v4 = *v2;
      v5 = 0;
      if ( KiSubNodeCount )
      {
        v6 = (unsigned __int16)KiSubNodeCount;
        v7 = (_BYTE *)(KiSubNodeConfigBlock + 5);
        do
        {
          if ( *(_WORD *)(v7 - 3) == v1 )
          {
            ++v3;
            if ( (*v7 & 1) != 0 )
              ++v5;
          }
          v7 += 24;
          --v6;
        }
        while ( v6 );
      }
      v8 = *(_BYTE *)(v4 + 10);
      v9 = v8 | 2;
      result = v8 & 0xFD;
      if ( v3 != v5 )
        v9 = result;
      ++v1;
      ++v2;
      *(_BYTE *)(v4 + 10) = v9;
    }
    while ( v1 < (unsigned __int16)KeNumberNodes );
  }
  if ( KiSubNodeCount )
  {
    v10 = (unsigned __int16)KiSubNodeCount;
    v11 = (_BYTE *)(KiSubNodeConfigBlock + 5);
    do
    {
      if ( (*v11 & 1) != 0 )
      {
        result = KeNodeBlock[*(unsigned __int16 *)(v11 - 3)];
        if ( (*(_BYTE *)(result + 10) & 2) == 0 )
          *v11 &= ~1u;
      }
      v11 += 24;
      --v10;
    }
    while ( v10 );
  }
  return result;
}
