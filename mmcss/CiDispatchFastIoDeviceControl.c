/*
 * XREFs of CiDispatchFastIoDeviceControl @ 0x1C000A760
 * Callers:
 *     <none>
 * Callees:
 *     CiSchedulerTaskIndexYield @ 0x1C0002300 (CiSchedulerTaskIndexYield.c)
 *     CiSchedulerCancelTaskIndexYield @ 0x1C0002C60 (CiSchedulerCancelTaskIndexYield.c)
 *     CiSchedulerSetMultimediaMode @ 0x1C0003178 (CiSchedulerSetMultimediaMode.c)
 *     memmove @ 0x1C00034C0 (memmove.c)
 *     WPP_SF_dd @ 0x1C00048CC (WPP_SF_dd.c)
 *     CiThreadSetRelativePriority @ 0x1C000AA20 (CiThreadSetRelativePriority.c)
 *     CiCreateTaskIndexClientFromThread @ 0x1C000B8B0 (CiCreateTaskIndexClientFromThread.c)
 */

char __fastcall CiDispatchFastIoDeviceControl(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        _DWORD *Address,
        unsigned int Length,
        unsigned int a7,
        __int64 a8)
{
  size_t v8; // rsi
  ULONG v11; // ebx
  int TaskIndexClientFromThread; // edi
  __int64 v13; // r15
  __int64 v14; // r14
  unsigned __int8 PreviousMode; // al
  __int64 v16; // rcx
  _DWORD *v17; // rsi
  __int64 v18; // r8
  _QWORD v20[4]; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int8 v21; // [rsp+90h] [rbp+38h]

  v8 = a4;
  v11 = 0;
  v20[0] = 0LL;
  TaskIndexClientFromThread = -1073741811;
  KeEnterCriticalRegion();
  v13 = (a7 >> 2) & 0x7FF;
  if ( (unsigned int)v13 < 8 && (a7 & 0xFFFFE003) == 0x222003 )
  {
    v14 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)v14 == CiApiTypeTable[v13]
      && (_DWORD)v8 == CiApiBufferSizeTable[2 * v13]
      && Length == dword_1C00066F4[2 * v13] )
    {
      PreviousMode = ExGetPreviousMode();
      v16 = PreviousMode;
      v21 = PreviousMode;
      if ( PreviousMode )
      {
        if ( (_DWORD)v8 )
        {
          if ( ((unsigned __int8)a3 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&a3[v8] > MmUserProbeAddress || &a3[v8] < a3 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v20, a3, v8);
          v11 = v20[0];
        }
        v17 = Address;
        if ( Length )
          ProbeForWrite(Address, Length, 4u);
        v16 = v21;
      }
      else
      {
        if ( (_DWORD)v8 )
        {
          memmove(v20, a3, v8);
          v11 = v20[0];
          v16 = 0LL;
        }
        v17 = Address;
      }
      switch ( (int)v13 )
      {
        case 0:
          TaskIndexClientFromThread = CiThreadSetRelativePriority(v14, (unsigned __int8)v11);
          break;
        case 1:
          TaskIndexClientFromThread = 0;
          *v17 = CiSystemResponsiveness;
          break;
        case 2:
          if ( *(_QWORD *)(v14 + 80) == PsGetCurrentProcess(v16) )
            TaskIndexClientFromThread = 0;
          break;
        case 3:
          TaskIndexClientFromThread = CiCreateTaskIndexClientFromThread(v14, v17);
          break;
        case 4:
          TaskIndexClientFromThread = 0;
          *v17 = *(_DWORD *)(v14 + 144);
          break;
        case 5:
          TaskIndexClientFromThread = 0;
          CiSchedulerTaskIndexYield(v14, v11, HIDWORD(v20[0]));
          break;
        case 6:
          TaskIndexClientFromThread = 0;
          CiSchedulerCancelTaskIndexYield(v14);
          break;
        case 7:
          TaskIndexClientFromThread = CiSchedulerSetMultimediaMode(v14, v11);
          break;
        default:
          break;
      }
    }
  }
  KeLeaveCriticalRegion();
  if ( TaskIndexClientFromThread < 0
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_dd((__int64)WPP_GLOBAL_Control->AttachedDevice, 0x12u, v18, v13, TaskIndexClientFromThread);
  }
  *(_DWORD *)a8 = TaskIndexClientFromThread;
  *(_QWORD *)(a8 + 8) = 0LL;
  return 1;
}
