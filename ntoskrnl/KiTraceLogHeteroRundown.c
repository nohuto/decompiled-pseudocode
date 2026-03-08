/*
 * XREFs of KiTraceLogHeteroRundown @ 0x1403AB22C
 * Callers:
 *     KiConfigureHeteroProcessorsTarget @ 0x140569250 (KiConfigureHeteroProcessorsTarget.c)
 *     KiTraceLogControlCallback @ 0x14085BEF0 (KiTraceLogControlCallback.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeIsMultiCoreClassesEnabled @ 0x14038E410 (KeIsMultiCoreClassesEnabled.c)
 *     _tlgCreate1Sz_char @ 0x1403BE3FC (_tlgCreate1Sz_char.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KiEnumerateNextSchedulerSubNodeInSystem @ 0x14056E2D8 (KiEnumerateNextSchedulerSubNodeInSystem.c)
 */

NTSTATUS __fastcall KiTraceLogHeteroRundown(_DWORD *a1, __int64 a2)
{
  NTSTATUS result; // eax
  int v4; // ebx
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // r15
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  int v10; // edi
  __int64 v11; // r13
  __int64 v12; // r14
  int v13; // r12d
  struct _EVENT_DATA_DESCRIPTOR *v14; // rdi
  __int64 v15; // r8
  __int64 v16; // r11
  __int64 v17; // r9
  __int64 v18; // r10
  unsigned int v19; // edi
  _QWORD *v20; // r14
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // [rsp+38h] [rbp-D0h] BYREF
  char v24; // [rsp+39h] [rbp-CFh] BYREF
  int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int i; // [rsp+40h] [rbp-C8h] BYREF
  int v27; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v28; // [rsp+48h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR *v29; // [rsp+50h] [rbp-B8h] BYREF
  int v30; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v31[20]; // [rsp+5Ch] [rbp-ACh]
  __int64 v32; // [rsp+70h] [rbp-98h] BYREF
  __int64 v33; // [rsp+78h] [rbp-90h] BYREF
  __int64 v34; // [rsp+80h] [rbp-88h] BYREF
  __int64 v35; // [rsp+88h] [rbp-80h] BYREF
  __int64 v36; // [rsp+90h] [rbp-78h] BYREF
  __int64 v37; // [rsp+98h] [rbp-70h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v39[2]; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+B8h] [rbp-50h] BYREF
  const char *v41; // [rsp+C8h] [rbp-40h]
  const char *v42; // [rsp+D0h] [rbp-38h]
  int *v43; // [rsp+D8h] [rbp-30h]
  __int64 v44; // [rsp+E0h] [rbp-28h]
  const char *v45; // [rsp+E8h] [rbp-20h]
  __int64 v46; // [rsp+F0h] [rbp-18h]
  unsigned int *v47; // [rsp+F8h] [rbp-10h]
  __int64 v48; // [rsp+100h] [rbp-8h]
  int *v49; // [rsp+108h] [rbp+0h]
  __int64 v50; // [rsp+110h] [rbp+8h]
  __int64 *v51; // [rsp+118h] [rbp+10h]
  __int64 v52; // [rsp+120h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR v53[2]; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v54[16]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v55[2]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v56[2]; // [rsp+168h] [rbp+60h] BYREF
  __int64 *v57; // [rsp+178h] [rbp+70h]
  __int64 v58; // [rsp+180h] [rbp+78h]
  __int64 *v59; // [rsp+188h] [rbp+80h]
  __int64 v60; // [rsp+190h] [rbp+88h]
  char *v61; // [rsp+198h] [rbp+90h]
  __int64 v62; // [rsp+1A0h] [rbp+98h]
  __int64 *v63; // [rsp+1A8h] [rbp+A0h]
  __int64 v64; // [rsp+1B0h] [rbp+A8h]
  __int64 *v65; // [rsp+1B8h] [rbp+B0h]
  __int64 v66; // [rsp+1C0h] [rbp+B8h]
  __int64 *v67; // [rsp+1C8h] [rbp+C0h]
  __int64 v68; // [rsp+1D0h] [rbp+C8h]
  const char *v69; // [rsp+1D8h] [rbp+D0h]
  _QWORD v70[4]; // [rsp+1E0h] [rbp+D8h] BYREF

  result = KeHeteroSystem;
  v32 = 0LL;
  if ( KeHeteroSystem )
  {
    if ( *a1 > 5u )
    {
      v25 = KeHeteroSystem;
      v43 = &v25;
      LODWORD(v29) = KeHeteroSystemVirtual;
      v45 = (const char *)&v29;
      i = KeHeteroSystemQos;
      v47 = &i;
      v27 = KiEfficiencyClassSystem;
      v49 = &v27;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 4LL;
      v50 = 4LL;
      LODWORD(v28) = KeIsMultiCoreClassesEnabled((__int64)a1, a2);
      v52 = 4LL;
      v51 = &v28;
      tlgWriteTransfer_EtwWriteTransfer((__int64)a1, (unsigned __int8 *)&byte_14002D3F7, 0LL, 0LL, 7u, &v40);
    }
    *(_OWORD *)v31 = 0LL;
    v4 = 0;
    SchedulerSubNode = KeGetCurrentPrcb()->SchedulerSubNode;
    v6 = SchedulerSubNode->Affinity.Reserved[0];
    v30 = SchedulerSubNode->Affinity.Reserved[0];
    *(_QWORD *)&v31[4] = KeNodeBlock[v6];
    *(_QWORD *)&v31[12] = *(unsigned int *)(*(_QWORD *)&v31[4] + 16LL);
    while ( !(unsigned int)KiEnumerateNextSchedulerSubNodeInSystem(&v30, &v32) )
      ++v4;
    if ( v4 != 1 )
      __int2c();
    v9 = 0;
    v69 = "KHeteroCpuPolicyAll";
    v70[0] = "KHeteroCpuPolicyLarge";
    v70[1] = "KHeteroCpuPolicyLargeOrIdle";
    v70[2] = "KHeteroCpuPolicySmall";
    v70[3] = "KHeteroCpuPolicySmallOrIdle";
    v39[0] = "KHeteroShortRunning";
    v39[1] = "KHeteroLongRunning";
    v40.Ptr = (ULONGLONG)"KHeteroCpuQosHigh";
    *(_QWORD *)&v40.Size = "KHeteroCpuQosMedium";
    v41 = "KHeteroCpuQosLow";
    v42 = "KHeteroCpuQosMultimedia";
    v43 = (int *)"KHeteroCpuQosDeadline";
    v44 = (__int64)"KHeteroCpuQosEco";
    v45 = "KHeteroCpuQosUtility";
    result = KiHgsPlusConfiguration;
    for ( i = KiHgsPlusConfiguration; v9 < i; ++v9 )
    {
      if ( KeIsMultiCoreClassesEnabled(v8, v7) )
      {
        v25 = 0;
        v29 = &v40;
        v10 = 0;
        v11 = 0LL;
        do
        {
          v12 = 0LL;
          v13 = 2 * v10;
          v14 = v29;
          do
          {
            result = v9 + v13 * SchedulerSubNode->WorkloadClasses;
            if ( *a1 > 5u )
            {
              tlgCreate1Sz_char(v54, v14->Ptr);
              tlgCreate1Sz_char(v55, v39[v12]);
              tlgCreate1Sz_char(v56, v70[KiDynamicHeteroCpuPolicy[v12 + v11] - 1]);
              LODWORD(v28) = v9;
              v57 = &v28;
              v23 = *(_BYTE *)(v15 + v16 + 13758376);
              v59 = (__int64 *)&v23;
              v24 = *(_BYTE *)(v15 + v16 + 13758392);
              v61 = &v24;
              v33 = *(_QWORD *)(v18 + 8 * v17);
              v63 = &v33;
              v34 = *(_QWORD *)(v18 + 8 * v17 + 8);
              v65 = &v34;
              v35 = *(_QWORD *)(v18 + 8 * v17 + 16);
              v67 = &v35;
              v58 = 4LL;
              v60 = 1LL;
              v62 = 1LL;
              v64 = 8LL;
              v66 = 8LL;
              v68 = 8LL;
              result = tlgWriteTransfer_EtwWriteTransfer(
                         (__int64)a1,
                         (unsigned __int8 *)byte_14002D320,
                         0LL,
                         0LL,
                         0xBu,
                         v53);
            }
            ++v13;
            ++v12;
          }
          while ( v12 < 2 );
          v11 += 2LL;
          v29 = (struct _EVENT_DATA_DESCRIPTOR *)((char *)v29 + 8);
          v10 = v25 + 1;
          v25 = v10;
        }
        while ( v10 < 7 );
      }
      else
      {
        v19 = 1;
        v20 = v70;
        do
        {
          result = v9 + v19 * SchedulerSubNode->WorkloadClasses;
          if ( *a1 > 5u )
          {
            tlgCreate1Sz_char(v54, *v20);
            v27 = v9;
            v55[0] = &v27;
            v36 = *(_QWORD *)(v22 + 8 * v21);
            v56[0] = &v36;
            v37 = *(_QWORD *)(v22 + 8 * v21 + 8);
            v57 = &v37;
            v38 = *(_QWORD *)(v22 + 8 * v21 + 16);
            v55[1] = 4LL;
            v59 = &v38;
            v56[1] = 8LL;
            v58 = 8LL;
            v60 = 8LL;
            result = tlgWriteTransfer_EtwWriteTransfer(
                       (__int64)a1,
                       (unsigned __int8 *)&word_14002D48E,
                       0LL,
                       0LL,
                       7u,
                       v53);
          }
          ++v19;
          ++v20;
        }
        while ( v19 < 5 );
      }
    }
  }
  return result;
}
