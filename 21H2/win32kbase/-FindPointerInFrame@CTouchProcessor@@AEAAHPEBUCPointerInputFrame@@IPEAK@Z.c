/*
 * XREFs of ?FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z @ 0x1C018E7D0
 * Callers:
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C01938DC (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C0188920 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 */

__int64 __fastcall CTouchProcessor::FindPointerInFrame(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        int a3,
        unsigned int *a4)
{
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // ebx
  _DWORD *v10; // rax
  bool v11; // zf
  unsigned int v12; // edx
  _DWORD *v13; // rax

  if ( !CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 13457);
  v7 = *((_DWORD *)a2 + 12);
  v8 = v7;
  v9 = *a4;
  if ( *a4 >= v7 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 13458);
    v7 = *((_DWORD *)a2 + 12);
    v8 = v7;
    v9 = *a4;
  }
  if ( v9 < v8 )
  {
    v10 = (_DWORD *)(*((_QWORD *)a2 + 17) + 480LL * v9 + 172);
    do
    {
      if ( *v10 == a3 )
        break;
      ++v9;
      v10 += 120;
    }
    while ( v9 < v8 );
  }
  v11 = v9 == v7;
  if ( v9 > v7 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 13478);
    v11 = v9 == *((_DWORD *)a2 + 12);
  }
  if ( v11 )
  {
    v12 = *a4;
    v9 = 0;
    if ( !*a4 )
      goto LABEL_17;
    v13 = (_DWORD *)(*((_QWORD *)a2 + 17) + 172LL);
    do
    {
      if ( *v13 == a3 )
        break;
      ++v9;
      v13 += 120;
    }
    while ( v9 < v12 );
    if ( v9 >= v12 )
LABEL_17:
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 13498);
  }
  if ( v9 >= *((_DWORD *)a2 + 12) || *(unsigned __int16 *)(480LL * v9 + *((_QWORD *)a2 + 17) + 172) != a3 )
    return 0LL;
  *a4 = v9;
  return 1LL;
}
