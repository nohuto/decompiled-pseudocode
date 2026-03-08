/*
 * XREFs of ?GetFreeIntermediateBuffer@ScanPipelineBuilder@@IEAA?AW4BufferLocation@@XZ @ 0x1802B99C4
 * Callers:
 *     ?AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecificData@@W4Subpipe@1@@Z @ 0x1802B9380 (-AddOp_Binary@ScanPipelineBuilder@@QEAAJP6AXPEBUPipelineParams@@PEBUScanOpParams@@@ZPEAUOpSpecif.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ScanPipelineBuilder::GetFreeIntermediateBuffer(__int64 a1)
{
  __int64 v1; // rdx
  _BYTE *v2; // rax

  v1 = 0LL;
  v2 = (_BYTE *)(a1 + 16);
  do
  {
    if ( *v2 )
      break;
    v1 = (unsigned int)(v1 + 1);
    ++v2;
  }
  while ( (unsigned int)v1 < 3 );
  *(_BYTE *)(v1 + a1 + 16) = 0;
  return (unsigned int)(v1 + 3);
}
