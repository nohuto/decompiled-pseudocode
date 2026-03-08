/*
 * XREFs of ?CleanUpDelayZonePalmRejectionOnThreadExit@CTouchProcessor@@SAXQEAUtagTHREADINFO@@@Z @ 0x1C0096A2C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0072BF4 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0096A80 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C0216A90 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 */

void __fastcall CTouchProcessor::CleanUpDelayZonePalmRejectionOnThreadExit(struct tagTHREADINFO *const a1)
{
  struct DelayZonePalmRejection *Instance; // rax
  DelayZonePalmRejection *v3; // rsi
  struct CPalmRejectZoneInfo *v4; // rdi
  struct CPalmRejectZoneInfo *v5; // rbx
  __int64 v6; // rcx
  struct CPalmRejectZoneInfo *v7; // rdx
  struct CPalmRejectZoneInfo *v8; // [rsp+38h] [rbp+10h] BYREF

  Instance = DelayZonePalmRejection::GetInstance();
  v3 = Instance;
  if ( Instance )
  {
    v4 = (struct DelayZonePalmRejection *)((char *)Instance + 72);
    v5 = (struct CPalmRejectZoneInfo *)*((_QWORD *)Instance + 9);
    while ( v5 != v4 )
    {
      v6 = *(_QWORD *)a1;
      v7 = v5;
      v8 = v5;
      v5 = *(struct CPalmRejectZoneInfo **)v5;
      if ( *((_QWORD *)v7 + 2) == v6 )
        DelayZonePalmRejection::RemoveDelayZoneFromListInternal(v3, &v8);
    }
  }
}
