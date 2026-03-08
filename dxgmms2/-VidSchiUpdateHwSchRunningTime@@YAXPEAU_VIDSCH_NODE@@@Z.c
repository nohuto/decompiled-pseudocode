/*
 * XREFs of ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C001D8B2
 * Callers:
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C001DBB6 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x1C0045F04 (VidSchiProcessSuspendContextCompletedDpc.c)
 * Callees:
 *     ?DxgkrnlContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C001C620 (-DxgkrnlContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C001C7BC (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiConvertGpuTimeStampToSchedulerUnits@@YA_KPEAU_VIDSCH_NODE@@_K_J@Z @ 0x1C001CBA6 (-VidSchiConvertGpuTimeStampToSchedulerUnits@@YA_KPEAU_VIDSCH_NODE@@_K_J@Z.c)
 *     ?KmdContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C0040E0C (-KmdContextHandleCompareFunction@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

void __fastcall VidSchiUpdateHwSchRunningTime(struct _VIDSCH_NODE *a1)
{
  unsigned int v2; // r13d
  unsigned int v3; // eax
  unsigned int v4; // r15d
  struct _RTL_BALANCED_NODE *v5; // rsi
  struct _RTL_BALANCED_NODE *v6; // rbp
  __int64 v7; // r14
  struct _RTL_BALANCED_NODE *v8; // r12
  struct _RTL_BALANCED_NODE *v9; // rsi
  int v10; // eax
  struct _RTL_BALANCED_NODE *v11; // rsi
  int v12; // eax
  int v13; // esi
  __int64 v14; // r14
  unsigned __int64 v15; // r12
  unsigned __int64 v16; // rax
  ULONG_PTR ParentValue; // rcx
  unsigned __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // rax
  _QWORD **v21; // rcx
  __int64 v22; // [rsp+60h] [rbp+8h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp+10h] BYREF
  struct _RTL_BALANCED_NODE *v24; // [rsp+70h] [rbp+18h]

  if ( (*((_DWORD *)a1 + 3) & 2) != 0 )
  {
    if ( *((_QWORD *)a1 + 1396) )
    {
      VidSchiCalibrateHwClock(a1);
      if ( *((_QWORD *)a1 + 1402) )
      {
        v2 = *((_DWORD *)a1 + 2794);
        HIDWORD(v22) = HIDWORD(**((_QWORD **)a1 + 1398));
        LODWORD(v22) = (unsigned int)**((_QWORD **)a1 + 1398) % v2;
        if ( *((_QWORD *)a1 + 1400) != v22 )
        {
          v3 = *((_DWORD *)a1 + 2801);
          if ( v3 <= HIDWORD(v22) )
          {
            v4 = *((_DWORD *)a1 + 2800);
            if ( v3 != HIDWORD(v22) )
            {
              if ( v3 + 1 != HIDWORD(v22) )
                v4 = (v4 + (v2 >> 1)) % v2;
              goto LABEL_11;
            }
            if ( v4 <= (unsigned int)**((_QWORD **)a1 + 1398) % v2 )
            {
LABEL_11:
              v24 = 0LL;
              v5 = 0LL;
              PerformanceFrequency.QuadPart = 0LL;
              v6 = 0LL;
              KeQueryPerformanceCounter(&PerformanceFrequency);
              do
              {
                v7 = *((_QWORD *)a1 + 1398) + 32 * (v4 + 1LL);
                if ( !*(_DWORD *)(v7 + 8) )
                {
                  v8 = *(struct _RTL_BALANCED_NODE **)(v7 + 16);
                  if ( v8 != v5 )
                  {
                    v9 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 217);
                    while ( v9 )
                    {
                      v10 = DxgkrnlContextHandleCompareFunction(v8, v9);
                      if ( v10 >= 0 )
                      {
                        if ( v10 <= 0 )
                          break;
                        v9 = v9->Children[1];
                      }
                      else
                      {
                        v9 = v9->Children[0];
                      }
                    }
                    if ( v9 )
                    {
                      v6 = v9 - 4;
LABEL_30:
                      v24 = v8;
LABEL_32:
                      v13 = *(_DWORD *)(v7 + 24);
                      v14 = *(_QWORD *)v7;
                      if ( LODWORD(v6[6].Children[0]) == 1 && v13 != 1 )
                      {
                        v15 = VidSchiConvertGpuTimeStampToSchedulerUnits(
                                a1,
                                (__int64)v6[6].Children[1],
                                PerformanceFrequency.QuadPart);
                        v16 = VidSchiConvertGpuTimeStampToSchedulerUnits(a1, v14, PerformanceFrequency.QuadPart);
                        if ( v16 > v15 )
                        {
                          ParentValue = v6->ParentValue;
                          v18 = v16 - v15;
                          v19 = *(unsigned __int16 *)(ParentValue + 4);
                          v20 = *(_QWORD *)(*(_QWORD *)(v6->Children[1][1].ParentValue + 32)
                                          + 8LL * *(unsigned int *)(*(_QWORD *)(ParentValue + 24) + 4LL));
                          if ( v20 )
                          {
                            v21 = *(_QWORD ***)(v20 + 8);
                            if ( (unsigned int)v19 < *(_DWORD *)(v20 + 80) )
                              v21 += v19;
                            if ( *v21 )
                              **v21 += v18;
                          }
                          v6[14].Children[1] = (struct _RTL_BALANCED_NODE *)((char *)v6[14].Children[1] + v18);
                        }
                      }
                      LODWORD(v6[6].Children[0]) = v13;
                      v6[6].Children[1] = (struct _RTL_BALANCED_NODE *)v14;
                    }
                    else
                    {
                      v11 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 218);
                      while ( v11 )
                      {
                        v12 = KmdContextHandleCompareFunction(v8, v11);
                        if ( v12 >= 0 )
                        {
                          if ( v12 <= 0 )
                            break;
                          v11 = v11->Children[1];
                        }
                        else
                        {
                          v11 = v11->Children[0];
                        }
                      }
                      if ( v11 )
                      {
                        v6 = v11 - 5;
                        goto LABEL_30;
                      }
                    }
                    v5 = v24;
                    goto LABEL_43;
                  }
                  if ( v6 )
                    goto LABEL_32;
                }
LABEL_43:
                v4 = (v4 + 1) % v2;
              }
              while ( v4 != (_DWORD)v22 );
            }
          }
          *((_QWORD *)a1 + 1400) = v22;
        }
      }
    }
  }
}
