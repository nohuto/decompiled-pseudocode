/*
 * XREFs of sub_18010F4A0 @ 0x18010F4A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180066980 @ 0x180066980 (sub_180066980.c)
 *     sub_18010F5C8 @ 0x18010F5C8 (sub_18010F5C8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18010F4A0(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  sub_180066980((__int64)&lpCriticalSection, (struct _RTL_CRITICAL_SECTION *)(a1 + 72));
  if ( a2 )
  {
    if ( (unsigned int)sub_18010F5C8(a1 - 8) )
    {
      switch ( *(_DWORD *)(a1 + 68) )
      {
        case 2:
          *a2 = 7;
          break;
        case 4:
          *a2 = 0;
          break;
        case 5:
          *a2 = 5;
          break;
        case 6:
          *a2 = 1;
          break;
        default:
          v4 = -2147024809;
          break;
      }
    }
    else
    {
      v4 = -2147418113;
      sub_18004BD84(
        (int)retaddr,
        606,
        (int)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\engine\\phonecallaudio.cpp",
        -2147418113);
    }
  }
  else
  {
    v4 = -2147467261;
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
  return v4;
}
