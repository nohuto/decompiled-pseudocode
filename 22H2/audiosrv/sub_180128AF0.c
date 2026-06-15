/*
 * XREFs of sub_180128AF0 @ 0x180128AF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180127FF8 @ 0x180127FF8 (sub_180127FF8.c)
 */

__int64 __fastcall sub_180128AF0(__int64 a1, _QWORD *a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r14
  unsigned int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int v13; // [rsp+40h] [rbp+8h] BYREF

  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  v7 = -2004287225;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  if ( v3 )
    LeaveCriticalSection(v3);
  v8 = *a2 - 0x477BB423BAB5F473LL;
  if ( *a2 == 0x477BB423BAB5F473LL )
    v8 = a2[1] - 0x5341A032A3B5F585LL;
  if ( v8 )
  {
    v9 = *a2 - 0x406E5363E08DEEF9LL;
    if ( *a2 == 0x406E5363E08DEEF9LL )
      v9 = a2[1] + 0x1F44B81DF1F72361LL;
    if ( v9 )
    {
      v11 = *a2 - 0x4A2E48D5BBC9C907LL;
      if ( *a2 == 0x4A2E48D5BBC9C907LL )
        v11 = a2[1] + 0x4EE083290F083860LL;
      if ( !v11 )
      {
        v7 = -2147024809;
        if ( a3 )
        {
          if ( *(_WORD *)a3 == 72 )
          {
            v13 = 0;
            return (unsigned int)sub_180127FF8(a1, *(_QWORD **)(a3 + 8), 0LL, (__int64)&v13);
          }
        }
      }
    }
    else if ( !a3 )
    {
      v10 = *(_QWORD *)(a1 + 108) - 0x4831B846B53D940CLL;
      if ( *(_QWORD *)(a1 + 108) == 0x4831B846B53D940CLL )
        v10 = *(_QWORD *)(a1 + 116) + 0x5FDA4846FD2E8961LL;
      if ( !v10 )
        return 0;
    }
  }
  else
  {
    return a3 != 0 ? 0x88890107 : 0;
  }
  return v7;
}
