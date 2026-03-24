/*
 * XREFs of HalpInterruptPerformDirectedEndOfInterrupt @ 0x1404BDA78
 * Callers:
 *     HalPerformEndOfInterrupt @ 0x1402EED70 (HalPerformEndOfInterrupt.c)
 * Callees:
 *     HalpInterruptLookupController @ 0x140378770 (HalpInterruptLookupController.c)
 *     HalpInterruptFindLinesForGsiRange @ 0x140378A18 (HalpInterruptFindLinesForGsiRange.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 */

void __fastcall HalpInterruptPerformDirectedEndOfInterrupt(__int64 a1)
{
  _DWORD *v1; // rbx
  _DWORD *LinesForGsiRange; // rax
  ULONG_PTR *v3; // rax

  if ( a1 )
  {
    if ( !*(_DWORD *)(a1 + 108) )
    {
      v1 = *(_DWORD **)(a1 + 160);
      if ( v1 )
      {
        if ( !v1[2] )
        {
          LinesForGsiRange = HalpInterruptFindLinesForGsiRange(v1[16], v1[16] + 1);
          if ( LinesForGsiRange )
          {
            v3 = HalpInterruptLookupController(LinesForGsiRange[4]);
            if ( (*((_DWORD *)v3 + 55) & 0x400) != 0 )
              ((void (__fastcall *)(ULONG_PTR, _QWORD, _QWORD))v3[25])(v3[2], (unsigned int)v1[3], v1[12] & 0x3FFFFFFF);
          }
        }
      }
    }
  }
}
