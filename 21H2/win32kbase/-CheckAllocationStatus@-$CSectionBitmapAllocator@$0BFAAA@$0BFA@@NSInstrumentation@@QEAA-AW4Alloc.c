/*
 * XREFs of ?CheckAllocationStatus@?$CSectionBitmapAllocator@$0BFAAA@$0BFA@@NSInstrumentation@@QEAA?AW4AllocationStatus@2@PEBX@Z @ 0x1C0080FD0
 * Callers:
 *     ?Free@?$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1C0113654 (-Free@-$CTypeIsolation@$0BFAAA@$0BFA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NSInstrumentation::CSectionBitmapAllocator<86016,336>::CheckAllocationStatus(
        _QWORD *a1,
        unsigned __int64 a2)
{
  __int64 v2; // r11
  int v3; // r8d
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // r9

  v2 = a1[2];
  v3 = a2;
  v5 = v2 ^ a1[1];
  if ( !a2 || a2 < v5 || a2 >= v5 + 86016 )
    return 0LL;
  v6 = a2 & 0xFFF;
  v7 = ((a2 & 0xFFF) * (unsigned __int128)0x8618618618618619uLL) >> 64;
  v8 = (v7 + (((unsigned __int64)(unsigned int)v6 - v7) >> 1)) >> 8;
  if ( v6 == 336 * v8 )
    return 2
         - (unsigned int)(RtlTestBit(
                            (PRTL_BITMAP)(v2 ^ a1[3]),
                            v8 + 12 * ((v3 - ((unsigned int)v2 ^ *((_DWORD *)a1 + 2))) >> 12)) != 0);
  else
    return 3LL;
}
