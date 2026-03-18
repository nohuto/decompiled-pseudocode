/*
 * XREFs of ?FindNodeQueuedMessage@CTouchProcessor@@AEAAPEAUtagQMSG@@PEBUCPointerInfoNode@@HPEAPEAUtagQ@@@Z @ 0x1C01C5834
 * Callers:
 *     ?CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z @ 0x1C01C0DD4 (-CoalesceQFrames@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEAUCPointerQFrame@@PEAU2@@Z.c)
 * Callees:
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00341E0 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C01CE868 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetEditionFindNodeQueuedMessage @ 0x1C0207708 (ApiSetEditionFindNodeQueuedMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct tagQMSG *__fastcall CTouchProcessor::FindNodeQueuedMessage(
        struct _KTHREAD **this,
        const struct CPointerInfoNode *a2,
        __int64 a3,
        struct tagQ **a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  struct tagQMSG *result; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  _OWORD v18[7]; // [rsp+20h] [rbp-78h] BYREF

  if ( this[5] != KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
  if ( !(unsigned int)CPointerInfoNode::IsValid(a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  result = (struct tagQMSG *)CInputDest::GetQueue((__int64)a2 + 352, 2, v8);
  if ( result )
  {
    v11 = *((_QWORD *)a2 + 2);
    v12 = *((_OWORD *)a2 + 23);
    v18[0] = *((_OWORD *)a2 + 22);
    v13 = *((_OWORD *)a2 + 24);
    v18[1] = v12;
    v14 = *((_OWORD *)a2 + 25);
    v18[2] = v13;
    v15 = *((_OWORD *)a2 + 26);
    v18[3] = v14;
    v16 = *((_OWORD *)a2 + 27);
    v18[4] = v15;
    v17 = *((_OWORD *)a2 + 28);
    v18[5] = v16;
    v18[6] = v17;
    return (struct tagQMSG *)((__int64 (__fastcall *)(_OWORD *, __int64, __int64, struct tagQ **))ApiSetEditionFindNodeQueuedMessage)(
                               v18,
                               v11,
                               v10,
                               a4);
  }
  return result;
}
