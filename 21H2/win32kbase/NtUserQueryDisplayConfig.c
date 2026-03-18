/*
 * XREFs of NtUserQueryDisplayConfig @ 0x1C0070110
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal @ 0x1C0029AC4 (PrivateAPI--_anonymous_namespace_--EnterSharedCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     _QdcSdcTranslateStatusDefault @ 0x1C00705D8 (_QdcSdcTranslateStatusDefault.c)
 *     DrvQueryDisplayConfig @ 0x1C00706F0 (DrvQueryDisplayConfig.c)
 *     UserIsWddmConnectedSession @ 0x1C0071CE0 (UserIsWddmConnectedSession.c)
 *     DrvSampleDisplayState @ 0x1C00BE3F0 (DrvSampleDisplayState.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     memmove @ 0x1C00DE8C0 (memmove.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179D2C (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 *     ??$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C0179DD0 (--$AssociateAllocationWithBacktrace@$0A@@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEA.c)
 */

__int64 __fastcall NtUserQueryDisplayConfig(
        unsigned int a1,
        unsigned int *a2,
        volatile void *a3,
        _DWORD *a4,
        _DWORD *Address)
{
  volatile void *v5; // r14
  unsigned int v9; // edi
  _DWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcessWow64Process; // rax
  unsigned __int64 v15; // rdx
  PVOID v16; // rbx
  __int64 Pool2; // rsi
  __int64 v18; // rax
  unsigned __int64 i; // rcx
  char v20; // r14
  unsigned int v21; // eax
  unsigned int v22; // ebx
  unsigned int v24; // [rsp+20h] [rbp-188h] BYREF
  int v25; // [rsp+24h] [rbp-184h]
  _DWORD v26[2]; // [rsp+28h] [rbp-180h] BYREF
  __int64 v27; // [rsp+30h] [rbp-178h]
  int v28; // [rsp+38h] [rbp-170h] BYREF
  __int64 v29; // [rsp+50h] [rbp-158h] BYREF
  int v30; // [rsp+58h] [rbp-150h]
  __int64 v31; // [rsp+60h] [rbp-148h]
  __int128 v32; // [rsp+70h] [rbp-138h]
  __int64 v33; // [rsp+88h] [rbp-120h] BYREF
  unsigned __int64 v34; // [rsp+90h] [rbp-118h]
  unsigned __int64 v35; // [rsp+98h] [rbp-110h]
  __int128 v36; // [rsp+A0h] [rbp-108h]
  __int128 v37; // [rsp+B0h] [rbp-F8h] BYREF
  __int64 v38; // [rsp+C0h] [rbp-E8h]
  PVOID BackTrace[20]; // [rsp+E0h] [rbp-C8h] BYREF

  v5 = a4;
  v31 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  v24 = 0;
  v26[0] = -1;
  v29 = 0LL;
  v30 = 0;
  v9 = -1073741811;
  v26[1] = -1073741811;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal();
  if ( !gbVideoInitialized )
  {
    v9 = -1073741823;
    goto LABEL_49;
  }
  if ( (a1 & 0xFFFFFF88) == 0 )
  {
    v11 = a1 & 7;
    if ( (((_DWORD)v11 - 1) & 0xFFFFFFFC) == 0 && (_DWORD)v11 != 3 )
    {
      W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      v11 = MmUserProbeAddress;
      v10 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v10 = (_DWORD *)MmUserProbeAddress;
      *v10 = *v10;
      v24 = *a2;
      if ( v24 )
      {
        CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
        ProbeForWrite(a3, 216LL * v24, CurrentProcessWow64Process != 0 ? 1 : 4);
        v15 = 216LL * v24;
        v28 = 1665430357;
        v33 = 260LL;
        v16 = gpLeakTrackingAllocator;
        *(_QWORD *)&v36 = &v33;
        *((_QWORD *)&v36 + 1) = &v28;
        v32 = v36;
        v34 = v15;
        if ( (*((_DWORD *)gpLeakTrackingAllocator + 10) & 0x63447355) == 0x63447355 )
        {
          for ( i = 0LL; ; ++i )
          {
            v35 = i;
            if ( i >= *((unsigned int *)gpLeakTrackingAllocator + 11) )
              break;
            if ( *((_DWORD *)gpLeakTrackingAllocator + i) == 1665430357 )
            {
              v20 = 0;
              if ( v15 < 0x1000 || (v15 & 0xFFF) != 0 )
              {
                v20 = 1;
                v15 += 16LL;
                v34 = v15;
              }
              Pool2 = ExAllocatePool2(*(_QWORD *)v32 & 0xFFFFFFFFFFFFFFFCuLL | 1, v15);
              if ( Pool2 )
              {
                memset(BackTrace, 0, sizeof(BackTrace));
                RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
                if ( v20 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
                {
                  if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                          v16,
                                          Pool2,
                                          BackTrace) )
                  {
                    Pool2 += 16LL;
LABEL_32:
                    v27 = Pool2;
                    v5 = a4;
                    goto LABEL_10;
                  }
                }
                else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                             v16,
                                             Pool2,
                                             BackTrace) )
                {
                  goto LABEL_32;
                }
                ExFreePoolWithTag((PVOID)Pool2, 0);
              }
              Pool2 = 0LL;
              goto LABEL_32;
            }
          }
          v5 = a4;
        }
        Pool2 = ExAllocatePool2(*(_QWORD *)v32 & 0xFFFFFFFFFFFFFFFCuLL | 1, v15);
        v27 = Pool2;
LABEL_10:
        v31 = Pool2;
        if ( !Pool2 )
          ExRaiseStatus(-1073741801);
        if ( qword_1C029BD10 )
          qword_1C029BD10(Pool2, &v37, Win32FreePool);
        if ( (a1 & 4) != 0 )
        {
          ProbeForWrite(v5, 4uLL, 4u);
        }
        else if ( v5 )
        {
          v25 = -1073741811;
          goto LABEL_49;
        }
        if ( Address )
        {
          v18 = PsGetCurrentProcessWow64Process();
          ProbeForWrite(Address, 0xCuLL, v18 != 0 ? 1 : 4);
        }
        if ( (unsigned int)UserIsWddmConnectedSession(v11) )
        {
          if ( Address )
            DrvSampleDisplayState(&v29);
          v21 = DrvQueryDisplayConfig(a1, &v24, Pool2, v26);
          v9 = v21;
          v25 = v21;
          if ( v21 == -2147483643 )
          {
            v9 = -1073741789;
            v25 = -1073741789;
          }
          else if ( v21 != -1073741789 )
          {
            v9 = QdcSdcTranslateStatusDefault(v21);
            v25 = v9;
          }
          v22 = v24;
          memmove((void *)a3, (const void *)Pool2, 216LL * v24);
          *a2 = v22;
          if ( (a1 & 4) != 0 )
          {
            v11 = (__int64)a4;
            *a4 = v26[0];
          }
          if ( Address )
          {
            *(_QWORD *)Address = v29;
            Address[2] = v30;
          }
        }
        else
        {
          v9 = -1073741790;
        }
      }
      else
      {
        v25 = -1073741811;
      }
    }
  }
LABEL_49:
  if ( v31 && qword_1C029BE28 )
    qword_1C029BE28(&v37);
  UserSessionSwitchLeaveCrit(v11, (__int64)v10, v12, v13);
  return v9;
}
