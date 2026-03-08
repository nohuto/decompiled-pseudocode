/*
 * XREFs of ??0RGNCOREMEMOBJ@@QEAA@K@Z @ 0x1C00A8764
 * Callers:
 *     ?AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z @ 0x1C003E660 (-AddRect@CRegion@@UEAAJAEBUtagRECT@@@Z.c)
 *     ?InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z @ 0x1C003E878 (-InternalCombine@CRegion@@QEAAJAEBV1@W4CombineMode@1@@Z.c)
 *     RGNCOREOBJ::bMerge__lambda_4f08034d680f118a0a3da8ec85dc396d___ @ 0x1C0042368 (RGNCOREOBJ--bMerge__lambda_4f08034d680f118a0a3da8ec85dc396d___.c)
 *     ?bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z @ 0x1C019A510 (-bCopy@RGNCOREOBJ@@QEAA_NAEBV1@@Z.c)
 * Callees:
 *     ?vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ @ 0x1C001CA1C (-vDeleteRGNCOREOBJ@RGNCOREOBJ@@QEAAXXZ.c)
 */

RGNCOREMEMOBJ *__fastcall RGNCOREMEMOBJ::RGNCOREMEMOBJ(RGNCOREMEMOBJ *this, unsigned int a2)
{
  __int64 Pool2; // rbx
  _DWORD *v5; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF

  Pool2 = ExAllocatePool2(258LL, 48LL, 1852273223LL);
  if ( !Pool2 )
    goto LABEL_6;
  v5 = (_DWORD *)ExAllocatePool2(258LL, a2, 1852011335LL);
  *(_QWORD *)(Pool2 + 8) = v5;
  if ( !v5 )
  {
    v7 = Pool2;
    RGNCOREOBJ::vDeleteRGNCOREOBJ((PVOID *)&v7);
LABEL_6:
    *(_QWORD *)this = 0LL;
    return this;
  }
  *(_QWORD *)this = Pool2;
  *(_DWORD *)(Pool2 + 24) = 16;
  *(_OWORD *)(Pool2 + 32) = 0LL;
  *(_DWORD *)(Pool2 + 28) = 1;
  *v5 = 0;
  v5[3] = 0;
  v5[1] = 0x80000000;
  v5[2] = 0x7FFFFFFF;
  *(_QWORD *)(Pool2 + 16) = v5 + 4;
  **(_DWORD **)this = a2;
  return this;
}
