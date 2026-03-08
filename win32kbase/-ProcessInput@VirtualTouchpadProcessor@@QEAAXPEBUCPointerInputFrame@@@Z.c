/*
 * XREFs of ?ProcessInput@VirtualTouchpadProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0225260
 * Callers:
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C01FD690 (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMIDE_InjectGenericHidInput @ 0x1C01C6EA0 (RIMIDE_InjectGenericHidInput.c)
 *     ??_GVPTPContact@@QEAAPEAXI@Z @ 0x1C0223E44 (--_GVPTPContact@@QEAAPEAXI@Z.c)
 *     ?FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPointerInfoNode@@PEAPEAVVPTPTouchpad@@PEAPEAVVPTPContact@@@Z @ 0x1C022463C (-FindTouchpadAndContact@VirtualTouchpadProcessor@@AEAA_NQEAUtagHID_POINTER_DEVICE_INFO@@PEBUCPoi.c)
 *     ?IsActive@VPTPTouchpad@@QEBA_NXZ @ 0x1C0224D94 (-IsActive@VPTPTouchpad@@QEBA_NXZ.c)
 *     ?RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z @ 0x1C0225574 (-RemoveTouchpad@VirtualTouchpadProcessor@@AEAAXPEAVVPTPTouchpad@@@Z.c)
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
  __int64 v10; // r8
  __int64 v11; // r9
  struct VPTPTouchpad *v12; // rsi
  VPTPContact ***v13; // r10
  float v14; // xmm0_4
  int v15; // ecx
  int v16; // edx
  char v17; // r11
  int v18; // r8d
  int v19; // eax
  int v20; // r8d
  int v21; // eax
  char v22; // cl
  VirtualTouchpadProcessor *v23; // rcx
  unsigned __int64 v24; // rax
  VPTPContact *v25; // [rsp+80h] [rbp+18h] BYREF
  VPTPTouchpad *v26; // [rsp+88h] [rbp+20h] BYREF

  if ( *(VirtualTouchpadProcessor **)this == this )
    return;
  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    return;
  v4 = 0LL;
  v5 = 0;
  v6 = 0;
  if ( !*((_DWORD *)a2 + 12) )
    return;
  do
  {
    v7 = (struct tagHID_POINTER_DEVICE_INFO *)*((_QWORD *)a2 + 32);
    v26 = 0LL;
    v8 = *((_QWORD *)a2 + 30) + 480LL * v6;
    v25 = 0LL;
    if ( !VirtualTouchpadProcessor::FindTouchpadAndContact(
            (VirtualTouchpadProcessor **)this,
            v7,
            (const struct CPointerInfoNode *)v8,
            &v26,
            &v25) )
      goto LABEL_38;
    v12 = v26;
    v13 = (VPTPContact ***)v25;
    if ( *((_QWORD *)v26 + 4) )
    {
      if ( !v4 )
      {
        v4 = v26;
LABEL_9:
        v11 = *((unsigned int *)v4 + 48);
        v14 = (float)*((int *)this + 21);
        v15 = (int)(float)(v14 * *((float *)v25 + 6));
        v16 = (int)(float)(v14 * *((float *)v25 + 5));
        if ( v16 < (int)v11 || v16 > *((_DWORD *)v4 + 50) || v15 < *((_DWORD *)v4 + 49) || v15 > *((_DWORD *)v4 + 51) )
        {
          v18 = *((_DWORD *)v4 + 50);
          v17 = 0;
          v19 = v18;
          if ( v18 >= v16 )
            v19 = (int)(float)(v14 * *((float *)v25 + 5));
          if ( (int)v11 <= v19 )
          {
            if ( v18 < v16 )
              v16 = *((_DWORD *)v4 + 50);
          }
          else
          {
            v16 = *((_DWORD *)v4 + 48);
          }
          v20 = *((_DWORD *)v4 + 51);
          v21 = v20;
          v11 = *((unsigned int *)v4 + 49);
          if ( v20 >= v15 )
            v21 = (int)(float)(v14 * *((float *)v25 + 6));
          if ( (int)v11 <= v21 )
          {
            if ( v20 < v15 )
              v15 = *((_DWORD *)v4 + 51);
          }
          else
          {
            v15 = *((_DWORD *)v4 + 49);
          }
        }
        else
        {
          v17 = 1;
        }
        v10 = 11LL * v5;
        *(_WORD *)((char *)this + v10 + 27) = *(_WORD *)(v8 + 160);
        *(_DWORD *)((char *)this + v10 + 29) = v16;
        v9 = 1LL;
        *(_DWORD *)((char *)this + v10 + 33) = v15;
        if ( v17 && (*(_DWORD *)(v8 + 180) & 0x4000) != 0 )
          v22 = 2;
        else
          v22 = 0;
        *((_BYTE *)this + v10 + 26) = v22 | ((*(_DWORD *)(v8 + 180) & 4) != 0);
        ++v5;
        goto LABEL_31;
      }
      if ( v26 == v4 )
        goto LABEL_9;
    }
LABEL_31:
    if ( (*(_DWORD *)(v8 + 180) & 0x40000) != 0 )
    {
      if ( v13 )
        VPTPContact::`scalar deleting destructor'(v13, v9, v10, v11);
      if ( !VPTPTouchpad::IsActive(v12) )
      {
        if ( v12 == v4 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 364);
        VirtualTouchpadProcessor::RemoveTouchpad(v23, v12);
      }
    }
LABEL_38:
    ++v6;
  }
  while ( v6 < *((_DWORD *)a2 + 12) );
  if ( v5 )
  {
    if ( !v4 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 378);
    v24 = (unsigned __int64)(10000LL * *((_QWORD *)a2 + 27)) / gliQpcFreq.QuadPart;
    *(_WORD *)((char *)this + 23) = v5;
    *(_WORD *)((char *)this + 21) = v24;
    if ( (int)RIMIDE_InjectGenericHidInput(*((_QWORD *)v4 + 4), 0, (char *)this + 20, 0x3Du) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 390);
  }
}
