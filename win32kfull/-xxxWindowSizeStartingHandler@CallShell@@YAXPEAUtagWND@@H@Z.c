void __fastcall CallShell::xxxWindowSizeStartingHandler(CallShell *this, struct tagWND *a2)
{
  int v2; // r14d
  int IsEnabledDeviceUsage; // eax
  __int64 v5; // rsi
  unsigned __int16 ModifiersStateForShell; // ax
  __int64 v7; // rdx
  int v8; // r9d
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // rdi
  unsigned __int16 v12; // ax
  __int64 v13; // rdx
  int v14; // ecx
  char v15; // dl
  __int64 v16; // [rsp+20h] [rbp-69h]
  __int128 v17; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v18[16]; // [rsp+60h] [rbp-29h] BYREF
  int v19; // [rsp+70h] [rbp-19h]
  int v20; // [rsp+74h] [rbp-15h]
  int v21; // [rsp+78h] [rbp-11h]
  int v22; // [rsp+7Ch] [rbp-Dh]

  v2 = (int)a2;
  IsEnabledDeviceUsage = Feature_1200431418__private_IsEnabledDeviceUsage();
  v5 = *((_QWORD *)this + 2);
  if ( IsEnabledDeviceUsage )
  {
    memset_0(&v17, 0, 0x68uLL);
    *(_QWORD *)&v17 = *(_QWORD *)this;
    DWORD2(v17) = 2;
    v19 = v2;
    ModifiersStateForShell = anonymous_namespace_::GetModifiersStateForShell(v5);
    v7 = *((_QWORD *)this + 5) + 88LL;
    v20 = ModifiersStateForShell;
    TransformRectBetweenCoordinateSpaces(v18, v7, *(_QWORD *)(*(_QWORD *)(v5 + 456) + 320LL), this);
    if ( (unsigned int)anonymous_namespace_::xxxCallIAMWindowManagementHandler(&v17, 0) )
    {
      v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 672LL);
      if ( v9 )
      {
        v10 = v21;
        *(_DWORD *)(v9 + 324) = v22;
        *(_DWORD *)(v9 + 320) = v10;
        LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_Dq(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            v8,
            WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
            v8,
            v16,
            1u,
            0x19u,
            (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids);
      }
    }
  }
  else
  {
    v11 = *(_QWORD *)(v5 + 672);
    memset_0(&v17, 0, 0x68uLL);
    *(_QWORD *)&v17 = *(_QWORD *)this;
    DWORD2(v17) = 2;
    v19 = v2;
    v12 = anonymous_namespace_::GetModifiersStateForShell(v5);
    v13 = *((_QWORD *)this + 5) + 88LL;
    v20 = v12;
    TransformRectBetweenCoordinateSpaces(v18, v13, *(_QWORD *)(*(_QWORD *)(v5 + 456) + 320LL), this);
    if ( (unsigned int)anonymous_namespace_::xxxCallIAMWindowManagementHandler(&v17, 0) )
    {
      v14 = v21;
      *(_DWORD *)(v11 + 324) = v22;
      *(_DWORD *)(v11 + 320) = v14;
      v15 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_Dq(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v15,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          26,
          v16,
          1u,
          0x1Au,
          (__int64)&WPP_d7b966a89d883197b9d56150dca2c288_Traceguids);
    }
  }
}
