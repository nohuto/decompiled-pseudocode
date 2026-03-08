/*
 * XREFs of PpmEventTraceHeteroSets @ 0x140826F54
 * Callers:
 *     PopInitializeHeteroProcessors @ 0x140826970 (PopInitializeHeteroProcessors.c)
 *     PpmEventTraceControlCallback @ 0x140860AA0 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1402338C0 (EtwWrite.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x1402AB030 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     KeIsMultiCoreClassesEnabled @ 0x14038E410 (KeIsMultiCoreClassesEnabled.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x14038E430 (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     KeGetHeteroPolicies @ 0x14038E448 (KeGetHeteroPolicies.c)
 *     KeGetHeteroSetByPolicy @ 0x14038E4F8 (KeGetHeteroSetByPolicy.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeGetHeteroSetByQoS @ 0x140569FF8 (KeGetHeteroSetByQoS.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PpmEventTraceHeteroSets(__int64 a1)
{
  const EVENT_DESCRIPTOR *v1; // rdx
  unsigned int v2; // r13d
  char *v3; // r14
  const EVENT_DESCRIPTOR *v4; // rax
  char *v5; // rsi
  char *v6; // rdi
  char *v7; // r12
  int v8; // ebx
  unsigned int v9; // r15d
  __int64 v10; // rcx
  PVOID v11; // r15
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rcx
  BOOL IsMultiCoreClassesEnabled; // eax
  __int64 v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  char *v19; // rbx
  const EVENT_DESCRIPTOR *v20; // r13
  int v21; // eax
  __int64 v22; // r15
  __int64 v23; // rcx
  unsigned int v24; // [rsp+38h] [rbp-D0h] BYREF
  int v25; // [rsp+3Ch] [rbp-CCh] BYREF
  int v26; // [rsp+40h] [rbp-C8h] BYREF
  int v27; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v28; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Pool2; // [rsp+58h] [rbp-B0h]
  unsigned int v31; // [rsp+60h] [rbp-A8h]
  int v32; // [rsp+64h] [rbp-A4h]
  PVOID P; // [rsp+68h] [rbp-A0h]
  PCEVENT_DESCRIPTOR EventDescriptor; // [rsp+70h] [rbp-98h]
  __int64 v35; // [rsp+78h] [rbp-90h]
  __int128 v36; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+98h] [rbp-70h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-60h]
  __int64 v39; // [rsp+B0h] [rbp-58h]
  unsigned int *v40; // [rsp+B8h] [rbp-50h]
  __int64 v41; // [rsp+C0h] [rbp-48h]
  int *v42; // [rsp+C8h] [rbp-40h]
  __int64 v43; // [rsp+D0h] [rbp-38h]
  int *v44; // [rsp+D8h] [rbp-30h]
  __int64 v45; // [rsp+E0h] [rbp-28h]
  int *v46; // [rsp+E8h] [rbp-20h]
  __int64 v47; // [rsp+F0h] [rbp-18h]
  char *v48; // [rsp+F8h] [rbp-10h]
  __int64 v49; // [rsp+100h] [rbp-8h]
  char *v50; // [rsp+108h] [rbp+0h]
  __int64 v51; // [rsp+110h] [rbp+8h]
  char *v52; // [rsp+118h] [rbp+10h]
  __int64 v53; // [rsp+120h] [rbp+18h]
  char *v54; // [rsp+128h] [rbp+20h]
  __int64 v55; // [rsp+130h] [rbp+28h]
  char *v56; // [rsp+138h] [rbp+30h]
  __int64 v57; // [rsp+140h] [rbp+38h]

  v1 = &PPM_ETW_MULTI_CORE_HETERO_SET_UPDATE;
  v27 = 0;
  v36 = 0LL;
  v2 = *((_DWORD *)PpmHeteroCapability + 1);
  v3 = 0LL;
  v4 = (const EVENT_DESCRIPTOR *)PPM_ETW_MULTI_CORE_HETERO_SET_RUNDOWN;
  LODWORD(v28) = 0;
  if ( !(_BYTE)a1 )
    v4 = &PPM_ETW_MULTI_CORE_HETERO_SET_UPDATE;
  v26 = 0;
  v5 = 0LL;
  EventDescriptor = v4;
  v6 = 0LL;
  v29 = 0LL;
  v7 = 0LL;
  v25 = 0;
  v24 = 0;
  v31 = v2;
  if ( PpmEtwRegistered || EtwEventEnabled(PpmEtwHandle, v4) )
  {
    v8 = v2 * (KeIsMultiCoreClassesEnabled(a1, (__int64)v1) ? 14 : 4);
    v32 = v8;
    P = (PVOID)ExAllocatePool2(256LL, 14LL, 1884115024LL);
    if ( P )
    {
      Pool2 = (PVOID)ExAllocatePool2(256LL, 14LL, 1884115024LL);
      if ( Pool2 )
      {
        v7 = (char *)ExAllocatePool2(256LL, 14LL, 1884115024LL);
        if ( v7 )
        {
          v9 = 8 * v8;
          v3 = (char *)ExAllocatePool2(256LL, (unsigned int)(8 * v8), 1884115024LL);
          if ( v3 )
          {
            v5 = (char *)ExAllocatePool2(256LL, v9, 1884115024LL);
            if ( v5 )
            {
              v6 = (char *)ExAllocatePool2(256LL, v9, 1884115024LL);
              if ( v6 )
              {
                if ( KeNumberNodes )
                {
                  v10 = 0LL;
                  v11 = Pool2;
                  do
                  {
                    KeGetHeteroPolicies(v10, (__int64)P, (__int64)v11, (__int64)v7);
                    KeInitializeSchedulerSubNodeEnumerationContext(&v36, KeNodeBlock[v12]);
                    if ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((__int64)&v36, &v29) )
                    {
                      do
                      {
                        IsMultiCoreClassesEnabled = KeIsMultiCoreClassesEnabled(v14, v13);
                        v16 = v29;
                        if ( IsMultiCoreClassesEnabled )
                          KeGetHeteroSetByQoS(v29, v2, v8, v3, v5, v6);
                        else
                          KeGetHeteroSetByPolicy(v29, v2, v8, v3, v5, v6);
                        v18 = 0LL;
                        v24 = 0;
                        if ( v2 )
                        {
                          v19 = (char *)Pool2;
                          v35 = v16 + 136;
                          do
                          {
                            v20 = EventDescriptor;
                            v21 = 0;
                            v25 = 0;
                            do
                            {
                              v26 = 0;
                              do
                              {
                                v22 = (unsigned int)(v18 + 2 * v21);
                                v27 = *((unsigned __int8 *)P + v22);
                                if ( KeIsMultiCoreClassesEnabled(v18, v17) )
                                {
                                  v23 = v26 + 2 * (v25 + 7 * v24);
                                }
                                else if ( (unsigned int)(v27 - 1) <= 3 )
                                {
                                  v23 = v27 + 4 * v24 - 1;
                                }
                                else
                                {
                                  v23 = 4 * v24 + 3;
                                }
                                *(_QWORD *)&UserData.Size = 4LL;
                                UserData.Ptr = (ULONGLONG)&v28;
                                v38 = v35;
                                v39 = 2LL;
                                v40 = &v24;
                                v42 = &v25;
                                v44 = &v26;
                                v46 = &v27;
                                v48 = &v19[v22];
                                v50 = &v7[v22];
                                v52 = &v5[8 * v23];
                                v54 = &v6[8 * v23];
                                v56 = &v3[8 * v23];
                                v41 = 4LL;
                                v43 = 1LL;
                                v45 = 1LL;
                                v47 = 1LL;
                                v49 = 1LL;
                                v51 = 1LL;
                                v53 = 8LL;
                                v55 = 8LL;
                                v57 = 8LL;
                                EtwWrite(PpmEtwHandle, v20, 0LL, 0xBu, &UserData);
                                v21 = v25;
                                v18 = (unsigned int)(v26 + 1);
                                v26 = v18;
                              }
                              while ( (int)v18 < 2 );
                              v21 = v25 + 1;
                              v18 = 0LL;
                              v25 = v21;
                            }
                            while ( v21 < 7 );
                            v2 = v31;
                            ++v24;
                          }
                          while ( v24 < v31 );
                          v8 = v32;
                        }
                      }
                      while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((__int64)&v36, &v29) );
                      v11 = Pool2;
                    }
                    v10 = (unsigned int)(v28 + 1);
                    LODWORD(v28) = v10;
                  }
                  while ( (unsigned int)v10 < (unsigned __int16)KeNumberNodes );
                }
              }
            }
          }
        }
      }
      ExFreePoolWithTag(P, 0x704D5050u);
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x704D5050u);
      if ( v7 )
        ExFreePoolWithTag(v7, 0x704D5050u);
      if ( v3 )
        ExFreePoolWithTag(v3, 0x704D5050u);
      if ( v5 )
        ExFreePoolWithTag(v5, 0x704D5050u);
      if ( v6 )
        ExFreePoolWithTag(v6, 0x704D5050u);
    }
  }
}
