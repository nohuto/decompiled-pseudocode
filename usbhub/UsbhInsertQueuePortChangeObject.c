__int64 __fastcall UsbhInsertQueuePortChangeObject(__int64 a1, unsigned __int16 a2, _DWORD *a3, int a4, __int64 a5)
{
  __int64 v6; // r14
  unsigned int v9; // ebp
  _DWORD *v10; // rdx
  int v11; // edx
  _DWORD *Pool2; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rcx
  void (__fastcall *v20)(_QWORD, _DWORD *); // rax
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rbx
  _QWORD *v27; // rcx
  _DWORD v29[14]; // [rsp+40h] [rbp-38h] BYREF

  v6 = a2;
  v9 = -1073741670;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      49,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      a2);
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v10 = *(_DWORD **)(a1 + 64);
  if ( !v10 )
    goto LABEL_49;
  if ( *v10 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v10);
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 56LL, 1112885333LL);
  if ( Pool2 )
  {
    v9 = 0;
    if ( (UsbhLogMask & 8) != 0 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 1413771367;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = v6;
        *(_QWORD *)(v14 + 24) = 0LL;
      }
    }
    if ( !(_WORD)v6 )
      goto LABEL_44;
    v15 = *(_QWORD *)(a1 + 64);
    if ( v15 )
    {
      if ( *(_DWORD *)v15 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v15);
      if ( (unsigned __int16)v6 <= *(unsigned __int8 *)(v15 + 2938) )
      {
        v16 = *(_QWORD *)(v15 + 3056);
        if ( v16 )
        {
          v17 = v16 + 2928 * v6 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            v18 = *(_QWORD *)(v15 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
            *(_DWORD *)v18 = 1044672615;
            *(_QWORD *)(v18 + 8) = 0LL;
            *(_QWORD *)(v18 + 16) = v6;
            *(_QWORD *)(v18 + 24) = v17;
          }
          if ( v17 )
          {
            *((_WORD *)Pool2 + 2) = v6;
            Pool2[2] = *a3;
            *Pool2 = 1145332592;
            v19 = *(_QWORD *)(a1 + 64);
            v29[0] = 0;
            if ( !v19 )
              UsbhTrapFatal_Dbg(a1, 0LL);
            if ( *(_DWORD *)v19 != 541218120 )
              UsbhTrapFatal_Dbg(a1, v19);
            v20 = *(void (__fastcall **)(_QWORD, _DWORD *))(v19 + 4592);
            if ( v20 )
            {
              v20(*(_QWORD *)(v19 + 4560), v29);
              v21 = v29[0];
            }
            else
            {
              v21 = 0;
            }
            v22 = (unsigned int)Pool2[2];
            *((_QWORD *)Pool2 + 5) = a5;
            Pool2[8] = v21;
            Pool2[12] = a4;
            if ( (UsbhLogMask & 0x200) != 0 )
            {
              v15 = *(_QWORD *)(a1 + 64);
              if ( v15 )
              {
                v23 = *(_QWORD *)(v15 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
                *(_DWORD *)v23 = 1145262193;
                *(_QWORD *)(v23 + 8) = 0LL;
                *(_QWORD *)(v23 + 16) = v17;
                *(_QWORD *)(v23 + 24) = v22;
              }
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
              && LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_dD(
                WPP_GLOBAL_Control->DeviceExtension,
                v15,
                v22,
                50,
                (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
                v6,
                Pool2[2]);
            }
            if ( a4 == 1 )
            {
              v24 = UsbhLatchPdo(a1, (unsigned __int16)v6, Pool2, 1230065731LL);
              if ( !v24 )
              {
                v9 = -1073741811;
LABEL_35:
                ExFreePoolWithTag(Pool2, 0);
                goto LABEL_45;
              }
              if ( v24 != a5 )
              {
                v9 = -1073741811;
                UsbhUnlatchPdo(a1, v24, (__int64)Pool2, 0x49515043u);
                goto LABEL_35;
              }
            }
            if ( (Pool2[2] & 0x16) != 0 )
              _InterlockedIncrement((volatile signed __int32 *)(v17 + 2876));
            if ( (Pool2[2] & 1) != 0 )
            {
              if ( *(_BYTE *)(v17 + 2839) )
                goto LABEL_35;
              v25 = v17 + 456;
              *(_BYTE *)(v17 + 2839) = 1;
              v27 = *(_QWORD **)(v17 + 464);
              v26 = Pool2 + 4;
              if ( *v27 == v17 + 456 )
              {
LABEL_40:
                *v26 = v25;
                v26[1] = v27;
                *v27 = v26;
                *(_QWORD *)(v25 + 8) = v26;
                KeSetEvent((PRKEVENT)(v17 + 496), 0, 0);
                goto LABEL_45;
              }
            }
            else
            {
              v25 = v17 + 456;
              v26 = Pool2 + 4;
              v27 = *(_QWORD **)(v17 + 464);
              if ( *v27 == v17 + 456 )
                goto LABEL_40;
            }
            __fastfail(3u);
          }
        }
      }
LABEL_44:
      ExFreePoolWithTag(Pool2, 0);
      v9 = -1073741811;
      goto LABEL_45;
    }
LABEL_49:
    UsbhTrapFatal_Dbg(a1, 0LL);
  }
LABEL_45:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dd(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      1,
      51,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v6,
      v9);
  return v9;
}
