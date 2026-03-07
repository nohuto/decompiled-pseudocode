void __fastcall rimDoRimDevChangeAsyncWorkItem(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebx
  __int64 v3; // rsi
  __int64 v5; // rdx
  bool v6; // cf
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  int v12; // eax
  int PointerDeviceInfo; // eax
  int v14; // edx
  __int64 v15; // r8
  int v16; // eax

  v1 = *(_QWORD *)(a1 + 56);
  v2 = 1;
  v3 = *(_QWORD *)(a1 + 24);
  v5 = v1 + 72;
  v6 = v1 != 0;
  v7 = *(_DWORD *)(a1 + 112);
  v8 = v5 & -(__int64)v6;
  if ( v7 == 1 )
  {
    if ( (*(_DWORD *)((v5 & -(__int64)v6) + 0x50) & 1) != 0 )
    {
      PointerDeviceInfo = rimInUserCritCreatePointerDeviceInfo(a1, v8);
      *(_DWORD *)(v8 + 80) &= ~1u;
      if ( PointerDeviceInfo < 0 )
      {
        LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v14,
            v15,
            (_DWORD)gRimLog,
            2,
            1,
            16,
            (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids);
        RIMFreeSpecificDevOnCreateFailure(v3, v8, v15);
        return;
      }
    }
    goto LABEL_3;
  }
  if ( v7 != 3 || (v16 = rimOnPnpRemoveCompleteInUserCrit(*(_QWORD *)(a1 + 24), v8), (v2 = v16) != 0) )
LABEL_3:
    rimDoRimDevChange(v3, v8, *(unsigned int *)(a1 + 112));
  v11 = *(_DWORD *)(a1 + 112);
  switch ( v11 )
  {
    case 3:
      if ( v2 )
        RIMFreeDev(v3, v8);
      break;
    case 2:
      RIMLockExclusive(v3 + 760);
      v12 = *(_DWORD *)(v8 + 80);
      if ( (v12 & 2) != 0 )
      {
        *(_DWORD *)(v8 + 80) = v12 & 0xFFFFFFFD;
        RIMStartDeviceSpecificRead((HANDLE *)v3, v8);
      }
      *(_QWORD *)(v3 + 768) = 0LL;
      ExReleasePushLockExclusiveEx(v3 + 760, 0LL);
      KeLeaveCriticalRegion();
      break;
    case 4:
      rimFreeSpecificDevFinal((__int64 *)v3, v8, v9, v10);
      break;
  }
}
