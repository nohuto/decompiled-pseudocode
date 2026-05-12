/*
 * XREFs of StRtlIoStorInfoGetNvCachePriority @ 0x1C005AD68
 * Callers:
 *     TranslateScsiRequestBlockToIoInfoSrbExData @ 0x1C0042F04 (TranslateScsiRequestBlockToIoInfoSrbExData.c)
 *     StorEtwIORequestDispatch @ 0x1C004F5DC (StorEtwIORequestDispatch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StRtlIoStorInfoGetNvCachePriority(__int64 a1, _BYTE *a2)
{
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  if ( !a2 )
    return 3221225485LL;
  result = IoGetGenericIrpExtension(a1, &v4, 4LL);
  if ( (int)result >= 0 )
  {
    if ( (v4 & 0x10) != 0 )
      *a2 = v4 & 0xF;
    else
      return 3221226021LL;
  }
  return result;
}
