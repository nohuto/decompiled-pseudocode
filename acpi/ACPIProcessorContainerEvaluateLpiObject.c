/*
 * XREFs of ACPIProcessorContainerEvaluateLpiObject @ 0x1C003A614
 * Callers:
 *     ACPIProcessorContainerEvaluateLpiObjects @ 0x1C003A6D0 (ACPIProcessorContainerEvaluateLpiObjects.c)
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0047B9C (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIProcessorContainerEvaluateLpiObject(__int64 a1, int *a2)
{
  int v2; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 Pool2; // rax
  _WORD *v7; // rdi

  v2 = *a2;
  *(_DWORD *)(a1 + 240) = *a2;
  v4 = *(_QWORD *)(a1 + 760);
  *a2 = v2 + 1;
  v5 = AMLIGetNamedChild(v4, 1229999199LL);
  if ( v5 )
  {
    Pool2 = ExAllocatePool2(64LL, 40LL, 1383097153LL);
    v7 = (_WORD *)Pool2;
    if ( Pool2 )
    {
      LODWORD(v5) = AMLIEvalNameSpaceObject(v5, Pool2, 0LL, 0LL);
      if ( (int)v5 >= 0 )
      {
        if ( v7[1] == 4 )
        {
          *(_QWORD *)(a1 + 232) = v7;
          return (unsigned int)v5;
        }
        LODWORD(v5) = -1072431095;
      }
      ExFreePoolWithTag(v7, 0x52706341u);
    }
    else
    {
      LODWORD(v5) = -1073741670;
    }
  }
  return (unsigned int)v5;
}
