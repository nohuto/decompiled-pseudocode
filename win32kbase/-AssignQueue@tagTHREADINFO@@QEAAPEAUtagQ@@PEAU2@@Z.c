/*
 * XREFs of ?AssignQueue@tagTHREADINFO@@QEAAPEAUtagQ@@PEAU2@@Z @ 0x1C0078970
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0076490 (xxxCreateThreadInfo.c)
 * Callees:
 *     ?AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z @ 0x1C00C474C (-AssignQueueWorker@tagTHREADINFO@@AEAAPEAUtagQ@@PEAU2@PEQ2@PEAU1@PEQ1@PEAU1@PEQ1@PEAU2@@Z.c)
 *     Feature_BackportGetActiveWindowInUserMode__private_IsEnabledDeviceUsage @ 0x1C00DC8A4 (Feature_BackportGetActiveWindowInUserMode__private_IsEnabledDeviceUsage.c)
 */

struct tagQ *__fastcall tagTHREADINFO::AssignQueue(tagTHREADINFO *this, struct tagQ *a2)
{
  __int64 v4; // rsi
  int IsEnabledDeviceUsage; // eax
  __int64 v6; // r8
  __int64 *v7; // rcx
  __int64 v8; // rcx
  __int64 *v9; // rax

  v4 = tagTHREADINFO::AssignQueueWorker(this, (ULONG_PTR)a2, 432);
  IsEnabledDeviceUsage = Feature_BackportGetActiveWindowInUserMode__private_IsEnabledDeviceUsage();
  v6 = 0LL;
  if ( IsEnabledDeviceUsage )
  {
    v7 = (__int64 *)*((_QWORD *)a2 + 15);
    if ( v7 )
      v8 = *v7;
    else
      v8 = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 56) + 32LL) = v8;
    v9 = (__int64 *)*((_QWORD *)a2 + 16);
    if ( v9 )
      v6 = *v9;
    *(_QWORD *)(*((_QWORD *)this + 56) + 40LL) = v6;
  }
  return (struct tagQ *)v4;
}
