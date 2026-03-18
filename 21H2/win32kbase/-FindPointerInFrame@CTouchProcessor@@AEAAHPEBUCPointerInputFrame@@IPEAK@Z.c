/*
 * XREFs of ?FindPointerInFrame@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@IPEAK@Z @ 0x1C01C58F8
 * Callers:
 *     ?GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z @ 0x1C01CAE88 (-GetPointerHistoryFrameData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KIIPEAE1@Z.c)
 * Callees:
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C00E7CE8 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::FindPointerInFrame(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        int a3,
        unsigned int *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // ebx
  _DWORD *v13; // rax
  bool v14; // zf
  __int64 v15; // rcx
  _DWORD *v16; // rax

  if ( !CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
  v10 = *((unsigned int *)a2 + 12);
  v11 = (unsigned int)v10;
  v12 = *a4;
  if ( *a4 >= (unsigned int)v10 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, (unsigned int)v10, v9);
    v10 = *((unsigned int *)a2 + 12);
    v11 = v10;
    v12 = *a4;
  }
  if ( v12 < (unsigned int)v11 )
  {
    v13 = (_DWORD *)(*((_QWORD *)a2 + 30) + 480LL * v12 + 172);
    do
    {
      if ( *v13 == a3 )
        break;
      ++v12;
      v13 += 120;
    }
    while ( v12 < (unsigned int)v11 );
  }
  v14 = v12 == (_DWORD)v10;
  if ( v12 > (unsigned int)v10 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v11, v9);
    v14 = v12 == *((_DWORD *)a2 + 12);
  }
  if ( v14 )
  {
    v15 = *a4;
    v12 = 0;
    if ( (_DWORD)v15 )
    {
      v16 = (_DWORD *)(*((_QWORD *)a2 + 30) + 172LL);
      while ( *v16 != a3 )
      {
        ++v12;
        v16 += 120;
        if ( v12 >= (unsigned int)v15 )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v11, v9);
    }
  }
  if ( v12 >= *((_DWORD *)a2 + 12) || *(unsigned __int16 *)(480LL * v12 + *((_QWORD *)a2 + 30) + 172) != a3 )
    return 0LL;
  *a4 = v12;
  return 1LL;
}
