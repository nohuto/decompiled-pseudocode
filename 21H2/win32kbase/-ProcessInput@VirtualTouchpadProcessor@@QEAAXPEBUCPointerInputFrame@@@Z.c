/*
 * XREFs of ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C01F3EA8
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C01CFD24 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C01A0020 (RIMIDE_InjectGenericHidInput.c)
 *     ??_GVPTPContact@@QEAAPEAXI@Z @ 0x1C01F2D3C (--_GVPTPContact@@QEAAPEAXI@Z.c)
 *     ?FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPointerInfoNode@@PEAPEAVVPTPTouchpad@@PEAPEAVVPTPContact@@@Z @ 0x1C01F3508 (-FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPoi.c)
 *     ?IsActive@VPTPTouchpad@@QEBA_NXZ @ 0x1C01F3A84 (-IsActive@VPTPTouchpad@@QEBA_NXZ.c)
 *     ?RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z @ 0x1C01F4164 (-RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall VirtualTouchpadProcessor::ProcessInput(
        VirtualTouchpadProcessor *this,
        const struct CPointerInputFrame *a2)
{
  VPTPTouchpad *v4; // rbx
  unsigned __int16 v5; // r15
  unsigned int v6; // r14d
  struct tagHID_POINTER_DEVICE_INFO *v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rdx
  VirtualTouchpadProcessor *v10; // rcx
  __int64 v11; // r8
  struct VPTPTouchpad *v12; // rsi
  VPTPContact ***v13; // r10
  int v14; // r9d
  float v15; // xmm0_4
  int v16; // ecx
  int v17; // edx
  char v18; // r11
  int v19; // r8d
  int v20; // eax
  int v21; // r8d
  int v22; // eax
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  VPTPContact *v27; // [rsp+70h] [rbp+8h] BYREF
  VPTPTouchpad *v28; // [rsp+80h] [rbp+18h] BYREF

  if ( *(VirtualTouchpadProcessor **)this == this )
    return;
  if ( !CInputThreadBase::IsInputThread(gpInputThread) )
    return;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    return;
  do
  {
    v7 = (struct tagHID_POINTER_DEVICE_INFO *)*((_QWORD *)a2 + 32);
    v28 = 0LL;
    v8 = *((_QWORD *)a2 + 30) + 480LL * v6;
    v27 = 0LL;
    if ( !VirtualTouchpadProcessor::FindTouchpadAndContact(
            (VirtualTouchpadProcessor **)this,
            v7,
            (const struct CPointerInfoNode *)v8,
            &v28,
            &v27) )
      goto LABEL_37;
    v12 = v28;
    v13 = (VPTPContact ***)v27;
    if ( *((_QWORD *)v28 + 4) )
    {
      if ( !v4 )
      {
        v4 = v28;
LABEL_9:
        v14 = *((_DWORD *)v4 + 48);
        v15 = (float)*((int *)this + 21);
        v16 = (int)(float)(v15 * *((float *)v27 + 6));
        v17 = (int)(float)(v15 * *((float *)v27 + 5));
        if ( v17 < v14 || v17 > *((_DWORD *)v4 + 50) || v16 < *((_DWORD *)v4 + 49) || v16 > *((_DWORD *)v4 + 51) )
        {
          v19 = *((_DWORD *)v4 + 50);
          v18 = 0;
          v20 = v19;
          if ( v19 >= v17 )
            v20 = (int)(float)(v15 * *((float *)v27 + 5));
          if ( v14 <= v20 )
          {
            if ( v19 < v17 )
              v17 = *((_DWORD *)v4 + 50);
          }
          else
          {
            v17 = *((_DWORD *)v4 + 48);
          }
          v21 = *((_DWORD *)v4 + 51);
          v22 = v21;
          if ( v21 >= v16 )
            v22 = (int)(float)(v15 * *((float *)v27 + 6));
          if ( *((_DWORD *)v4 + 49) <= v22 )
          {
            if ( v21 < v16 )
              v16 = *((_DWORD *)v4 + 51);
          }
          else
          {
            v16 = *((_DWORD *)v4 + 49);
          }
        }
        else
        {
          v18 = 1;
        }
        v11 = 11LL * v5;
        *(_WORD *)((char *)this + v11 + 27) = *(_WORD *)(v8 + 160);
        *(_DWORD *)((char *)this + v11 + 29) = v17;
        v9 = 1LL;
        *(_DWORD *)((char *)this + v11 + 33) = v16;
        v10 = (VirtualTouchpadProcessor *)*(unsigned int *)(v8 + 180);
        if ( !v18 || (LOBYTE(v10) = 2, (*(_DWORD *)(v8 + 180) & 0x4000) == 0) )
          LOBYTE(v10) = 0;
        *((_BYTE *)this + v11 + 26) = (unsigned __int8)v10 | ((*(_DWORD *)(v8 + 180) & 4) != 0);
        ++v5;
        goto LABEL_30;
      }
      if ( v28 == v4 )
        goto LABEL_9;
    }
LABEL_30:
    if ( (*(_DWORD *)(v8 + 180) & 0x40000) != 0 )
    {
      if ( v13 )
        VPTPContact::`scalar deleting destructor'(v13);
      if ( !VPTPTouchpad::IsActive(v12) )
      {
        if ( v12 == v4 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
        VirtualTouchpadProcessor::RemoveTouchpad(v10, v12);
      }
    }
LABEL_37:
    ++v6;
  }
  while ( v6 < *((_DWORD *)a2 + 12) );
  if ( v5 )
  {
    if ( !v4 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    v23 = (unsigned __int64)(10000LL * *((_QWORD *)a2 + 27)) / gliQpcFreq.QuadPart;
    *(_WORD *)((char *)this + 23) = v5;
    *(_WORD *)((char *)this + 21) = v23;
    if ( (int)RIMIDE_InjectGenericHidInput(*((_QWORD *)v4 + 4), 0, (char *)this + 20, 0x3Du) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
  }
}
