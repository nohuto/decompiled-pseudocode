/*
 * XREFs of RtlAddDynamicEHContinuationTarget @ 0x14091AA48
 * Callers:
 *     PspProcessDynamicEHContinuationTargets @ 0x140907E64 (PspProcessDynamicEHContinuationTargets.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     MiHotPatchImageTreeCompare @ 0x1408CA798 (MiHotPatchImageTreeCompare.c)
 *     ExAllocatePool2 @ 0x1409B51B0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlAddDynamicEHContinuationTarget(unsigned __int64 *a1, unsigned __int64 a2)
{
  _QWORD *v2; // rbx
  bool v3; // di
  int v6; // eax
  _QWORD *v7; // rax
  _QWORD *Pool2; // rax

  v2 = (_QWORD *)*a1;
  v3 = 0;
  if ( *a1 )
  {
    while ( 1 )
    {
      v6 = MiHotPatchImageTreeCompare(a2, (__int64)v2);
      if ( v6 <= 0 )
      {
        if ( v6 >= 0 )
          return 3221225496LL;
        v7 = (_QWORD *)*v2;
        if ( !*v2 )
          break;
      }
      else
      {
        v7 = (_QWORD *)v2[1];
        if ( !v7 )
        {
          v3 = 1;
          break;
        }
      }
      v2 = v7;
    }
  }
  Pool2 = (_QWORD *)ExAllocatePool2(257LL, 32LL, 1313359172LL);
  if ( !Pool2 )
    return 3221225495LL;
  Pool2[3] = a2;
  RtlAvlInsertNodeEx(a1, (unsigned __int64)v2, v3, Pool2);
  return 0LL;
}
