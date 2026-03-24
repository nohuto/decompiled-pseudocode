/*
 * XREFs of ??0DCMEMOBJ@@QEAA@PEAUHDEV__@@KHH@Z @ 0x1C00C7F84
 * Callers:
 *     GreCreateDisplayDC @ 0x1C003B650 (GreCreateDisplayDC.c)
 * Callees:
 *     HmgAlloc @ 0x1C0001410 (HmgAlloc.c)
 *     HmgModifyHandleType @ 0x1C0016060 (HmgModifyHandleType.c)
 *     INC_SHARE_REF_CNT @ 0x1C002CE70 (INC_SHARE_REF_CNT.c)
 *     W32GetThreadWin32Thread @ 0x1C002E580 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0082964 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C020012C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

DCMEMOBJ *__fastcall DCMEMOBJ::DCMEMOBJ(DCMEMOBJ *this, HDEV a2, unsigned int a3, int a4)
{
  struct HOBJ__ *v8; // rax
  struct HOBJ__ *v9; // rdi
  struct _W32THREAD *ThreadWin32Thread; // rax
  __int64 v11; // rdx
  _OWORD *v12; // rax
  PVOID *p_DeviceObject; // rcx
  __int64 v14; // r9
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  HPALETTE *v17; // rcx
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  __int64 v20; // rax
  _QWORD *v21; // rax

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 4) = 0;
  if ( a3 <= 2 )
  {
    v8 = HmgAlloc(0x868uLL, 1u, 0x11u);
    *(_QWORD *)this = v8;
    v9 = v8;
    if ( v8 )
    {
      if ( *((_WORD *)v8 + 6) != 1 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
      ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
      *(_QWORD *)(*(_QWORD *)this + 2136LL) = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
      *(_DWORD *)(*(_QWORD *)this + 2144LL) = 0xFFFF;
      if ( a4 )
        HmgModifyHandleType(*(_QWORD *)v9 | 0x210000LL);
      v11 = 3LL;
      v12 = (_OWORD *)((char *)v9 + 544);
      p_DeviceObject = &WPP_MAIN_CB.Queue.Wcb.DeviceObject;
      v14 = 3LL;
      do
      {
        *v12 = *(_OWORD *)p_DeviceObject;
        v12[1] = *((_OWORD *)p_DeviceObject + 1);
        v12[2] = *((_OWORD *)p_DeviceObject + 2);
        v12[3] = *((_OWORD *)p_DeviceObject + 3);
        v12[4] = *((_OWORD *)p_DeviceObject + 4);
        v12[5] = *((_OWORD *)p_DeviceObject + 5);
        v12[6] = *((_OWORD *)p_DeviceObject + 6);
        v12 += 8;
        v15 = *((_OWORD *)p_DeviceObject + 7);
        p_DeviceObject += 16;
        *(v12 - 1) = v15;
        --v14;
      }
      while ( v14 );
      *v12 = *(_OWORD *)p_DeviceObject;
      v12[1] = *((_OWORD *)p_DeviceObject + 1);
      v16 = *((_OWORD *)p_DeviceObject + 2);
      *((_QWORD *)v9 + 122) = (char *)v9 + 544;
      v17 = &dclevelDefault;
      v12[2] = v16;
      v18 = (_OWORD *)((char *)v9 + 80);
      do
      {
        *v18 = *(_OWORD *)v17;
        v18[1] = *((_OWORD *)v17 + 1);
        v18[2] = *((_OWORD *)v17 + 2);
        v18[3] = *((_OWORD *)v17 + 3);
        v18[4] = *((_OWORD *)v17 + 4);
        v18[5] = *((_OWORD *)v17 + 5);
        v18[6] = *((_OWORD *)v17 + 6);
        v18 += 8;
        v19 = *((_OWORD *)v17 + 7);
        v17 += 16;
        *(v18 - 1) = v19;
        --v11;
      }
      while ( v11 );
      *v18 = *(_OWORD *)v17;
      v18[1] = *((_OWORD *)v17 + 1);
      v18[2] = *((_OWORD *)v17 + 2);
      v18[3] = *((_OWORD *)v17 + 3);
      v18[4] = *((_OWORD *)v17 + 4);
      INC_SHARE_REF_CNT(*(unsigned int **)(*(_QWORD *)this + 136LL));
      INC_SHARE_REF_CNT(*(unsigned int **)(*(_QWORD *)this + 144LL));
      INC_SHARE_REF_CNT(*(unsigned int **)(*(_QWORD *)this + 96LL));
      *((_DWORD *)v9 + 8) = a3;
      *(_QWORD *)((char *)v9 + 36) = 0LL;
      *((_DWORD *)v9 + 11) = 0;
      *((_QWORD *)v9 + 150) = 0LL;
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 976LL) + 152LL) = 1179679;
      v20 = *(_QWORD *)this + 176LL;
      *((_QWORD *)v9 + 221) = 0LL;
      *((_QWORD *)v9 + 158) = v20;
      *((_QWORD *)v9 + 175) = v20;
      *((_QWORD *)v9 + 192) = v20;
      *((_QWORD *)v9 + 209) = v20;
      *((_QWORD *)v9 + 219) = 0LL;
      *((_DWORD *)v9 + 440) = 0;
      *(_DWORD *)(*(_QWORD *)this + 2100LL) = -1;
      *(_WORD *)(*(_QWORD *)this + 2096LL) = -1;
      v21 = *(_QWORD **)this;
      v21[139] = &CPushLock::`vftable';
      v21[140] = 0LL;
      v21[141] = 0LL;
      *((_QWORD *)v9 + 143) = 0LL;
      *((_QWORD *)v9 + 260) = 0LL;
      *((_QWORD *)v9 + 261) = 0LL;
      *((_QWORD *)v9 + 6) = a2;
    }
  }
  return this;
}
