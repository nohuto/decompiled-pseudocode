/*
 * XREFs of DpiSystemDisplayWrite @ 0x1C005E2B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiSystemDisplayWrite(__int64 a1, int *a2, char a3)
{
  int v5; // r9d
  int v6; // r11d
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  __int64 v9; // r8
  unsigned int v10; // edx
  unsigned int v11; // ecx

  if ( byte_1C013B810 )
    return 0LL;
  if ( a3 )
    return 3221225659LL;
  if ( a1 )
  {
    if ( a2 )
    {
      v5 = *(_DWORD *)(a1 + 8);
      if ( v5 == 5 || v5 == 1 && qword_1C013B820 == *(_QWORD *)(qword_1C013B748 + 64) )
      {
        v6 = *a2;
        if ( *a2 < (unsigned int)dword_1C013B830 )
        {
          v7 = a2[1];
          if ( v7 < dword_1C013B834 )
          {
            v8 = *(_DWORD *)(a1 + 4);
            v9 = (unsigned int)(dword_1C013B830 - v6);
            if ( v8 <= (unsigned int)v9 )
              v9 = v8;
            v10 = dword_1C013B834 - v7;
            if ( *(_DWORD *)a1 <= dword_1C013B834 - v7 )
              v10 = *(_DWORD *)a1;
            if ( v5 == 1 )
              v11 = (v8 + 1) >> 1;
            else
              v11 = 4 * v8;
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD, unsigned int, int, unsigned int))(qword_1C013B818 + 752))(
              *(_QWORD *)(qword_1C013B820 + 48),
              *(_QWORD *)(a1 + 16),
              v9,
              v10,
              v11,
              v6,
              v7);
            return 0LL;
          }
        }
      }
    }
  }
  return 3221225485LL;
}
