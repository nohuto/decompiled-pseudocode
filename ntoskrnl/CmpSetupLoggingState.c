/*
 * XREFs of CmpSetupLoggingState @ 0x140818BD0
 * Callers:
 *     CmpInitializeSystemHive @ 0x140B528D4 (CmpInitializeSystemHive.c)
 *     CmpInitializePreloadedHive @ 0x140B52F50 (CmpInitializePreloadedHive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpSetupLoggingState(__int64 a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v3; // eax
  int v4; // eax

  if ( (*a2 & 1) != 0 )
  {
    *(_BYTE *)(a1 + 194) = 0;
    v3 = *a2;
    if ( (*a2 & 2) != 0 )
    {
      v4 = *a2 & 0x38;
      *(_DWORD *)(a1 + 168) = 5 - (v4 != 32);
      *(_BYTE *)(a1 + 192) = v4 == 32;
      *(_BYTE *)(a1 + 193) = v4 != 32;
      *(_DWORD *)(a1 + 184) = a2[3];
      *(_DWORD *)(a1 + 172) = a2[2];
      *(_QWORD *)(a1 + 176) = a2[3];
    }
    else
    {
      *(_WORD *)(a1 + 192) = 257;
      *(_DWORD *)(a1 + 168) = (v3 >> 3) & 7;
      *(_DWORD *)(a1 + 184) = a2[3];
      *(_DWORD *)(a1 + 172) = a2[2];
      *(_DWORD *)(a1 + 176) = a2[3];
      *(_DWORD *)(a1 + 180) = a2[4];
    }
  }
  result = *a2;
  if ( (result & 0x40) != 0 )
    *(_DWORD *)(a1 + 4112) |= 0x8000u;
  return result;
}
