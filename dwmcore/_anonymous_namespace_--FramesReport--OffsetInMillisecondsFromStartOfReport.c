/*
 * XREFs of _anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport @ 0x1800375FC
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180035F64 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     ?FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z @ 0x18004F8FC (-FrameRenderingStarted@CTelemetryFrames@@SAX_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall anonymous_namespace_::FramesReport::OffsetInMillisecondsFromStartOfReport(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 == *(_QWORD *)(a1 + 24) )
    v3 = 0LL;
  else
    v3 = *(_QWORD *)(v2 + 464);
  return 1000 * (unsigned int)((unsigned __int64)(a2 - v3) / g_qpcFrequency.QuadPart)
       + (unsigned int)(1000 * ((unsigned __int64)(a2 - v3) % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart);
}
