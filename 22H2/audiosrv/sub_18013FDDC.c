/*
 * XREFs of sub_18013FDDC @ 0x18013FDDC
 * Callers:
 *     sub_18013F570 @ 0x18013F570 (sub_18013F570.c)
 *     sub_18013F7B0 @ 0x18013F7B0 (sub_18013F7B0.c)
 *     sub_18013FAA0 @ 0x18013FAA0 (sub_18013FAA0.c)
 * Callees:
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     sub_18013EB68 @ 0x18013EB68 (sub_18013EB68.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18013FDDC(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdx
  unsigned int v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 48));
  v4 = *(_QWORD *)(a1 + 96);
  if ( v4 )
  {
    while ( 1 )
    {
      v5 = *(_DWORD **)(v4 + 16);
      if ( v5[268] == a2[268] && v5[3] == a2[3] )
        break;
      v4 = *(_QWORD *)(v4 + 8);
      if ( !v4 )
        goto LABEL_5;
    }
    sub_18013EB68(a2, v5);
    v6 = 1;
  }
  else
  {
LABEL_5:
    v6 = 0;
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return v6;
}
