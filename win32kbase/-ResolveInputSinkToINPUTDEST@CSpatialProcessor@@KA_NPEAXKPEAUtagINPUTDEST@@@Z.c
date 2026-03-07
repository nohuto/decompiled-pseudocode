bool __fastcall CSpatialProcessor::ResolveInputSinkToINPUTDEST(void *a1, int a2, struct tagINPUTDEST *a3)
{
  struct tagINPUTDEST *v4; // r14
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  unsigned int v12; // r13d
  char v13; // di
  int v14; // edx
  int v15; // r8d
  PVOID v16; // rbx
  __int64 v17; // rdx
  int v18; // r8d
  int v19; // esi
  int v20; // edx
  int v21; // r8d
  _DWORD *v22; // r13
  _DWORD *v23; // r14
  PDEVICE_OBJECT v24; // rcx
  __int16 v25; // r9
  _QWORD *v26; // r13
  __int64 v27; // rbx
  unsigned int v28; // ecx
  unsigned int v29; // edx
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  char v37; // bl
  bool v38; // r14
  int v39; // eax
  int v40; // edx
  int v41; // [rsp+20h] [rbp-E0h]
  int v42; // [rsp+28h] [rbp-D8h]
  int v43; // [rsp+30h] [rbp-D0h]
  int v44; // [rsp+38h] [rbp-C8h]
  char v45; // [rsp+48h] [rbp-B8h]
  PVOID Object; // [rsp+60h] [rbp-A0h] BYREF
  struct tagINPUTDEST *v47; // [rsp+68h] [rbp-98h]
  _QWORD v48[2]; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v49[7]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v50; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v51; // [rsp+100h] [rbp+0h]
  __int128 v52; // [rsp+110h] [rbp+10h]
  __int64 v53; // [rsp+120h] [rbp+20h]

  v47 = a3;
  v4 = a3;
  memset(v49, 0, sizeof(v49));
  v6 = v49[1];
  *(_OWORD *)v4 = v49[0];
  v7 = v49[2];
  *((_OWORD *)v4 + 1) = v6;
  v8 = v49[3];
  *((_OWORD *)v4 + 2) = v7;
  v9 = v49[4];
  *((_OWORD *)v4 + 3) = v8;
  v10 = v49[5];
  *((_OWORD *)v4 + 4) = v9;
  v11 = v49[6];
  *((_OWORD *)v4 + 5) = v10;
  *((_OWORD *)v4 + 6) = v11;
  v12 = GetFromPointerType(a2);
  if ( v12 )
  {
    v13 = 1;
    Object = 0LL;
    if ( (int)CompositionInputObject::ResolveHandle(a1, 1u, 1, (struct CompositionInputObject **)&Object) < 0 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v13 = 0;
      }
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v40 = 36;
        LOBYTE(v40) = v13;
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v40,
          v15,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          5,
          36,
          (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids,
          (char)a1);
      }
      return *(_DWORD *)v4 != 0;
    }
    LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( !(_BYTE)v14 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v16 = Object;
    }
    else
    {
      v16 = Object;
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_qq(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v15,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        5,
        25,
        (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids,
        (char)Object,
        (char)a1);
    }
    memset(v49, 0, sizeof(v49));
    v48[0] = 0LL;
    v53 = 0LL;
    v50 = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    CompositionInputObject::QueryInputQueueForInputType(v16, v12, &v50);
    if ( (_DWORD)v50 == 2 )
    {
      LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v17,
          v18,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          5,
          27,
          (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids);
      }
      if ( (int)CompositionInputObject::GetWindowForInputType(Object, v12, v48) >= 0 )
      {
        v19 = LODWORD(v49[0]) | 4;
LABEL_18:
        LODWORD(v49[0]) = v19;
        goto LABEL_19;
      }
    }
    else if ( (_DWORD)v50 == 3 )
    {
      LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v17,
          v18,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          5,
          26,
          (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids);
      }
      if ( (int)CompositionInputObject::GetWindowForInputType(Object, v12, v48) >= 0 )
      {
        *(_OWORD *)((char *)&v49[2] + 8) = v51;
        v19 = LODWORD(v49[0]) | 6;
        *((_QWORD *)&v49[1] + 1) = *((_QWORD *)&v50 + 1);
        *((_QWORD *)&v49[4] + 1) = v53;
        *(_OWORD *)((char *)&v49[3] + 8) = v52;
        goto LABEL_18;
      }
    }
    else
    {
      LOBYTE(v17) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( (_BYTE)v17 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v17,
          v18,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          5,
          28,
          (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids,
          v50);
      }
    }
    v19 = v49[0];
LABEL_19:
    if ( !v19 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v13 = 0;
      }
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v17) = v13;
        LOBYTE(v18) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v17,
          v18,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          5,
          35,
          (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids);
      }
      v4 = v47;
      if ( *(_DWORD *)v47 )
      {
        LODWORD(v47) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 512LL);
      }
      goto LABEL_50;
    }
    LOBYTE(v17) = -1;
    v22 = (_DWORD *)HMValidateHandleNoSecure(v48[0], v17);
    if ( v22 )
    {
      if ( !gbInDestroyHandleTableObjects
        && !IS_USERCRIT_OWNED_EXCLUSIVE()
        && (!IS_USERCRIT_OWNED_AT_ALL()
         || !tagDomLock::IsLockedExclusive((tagDomLock *)&gDomainHandleManagerLock)
         && !tagDomLock::IsLockedShared((tagDomLock *)&gDomainHandleManagerLock)) )
      {
        __int2c();
      }
      if ( *((_BYTE *)qword_1C02D0E08 + dword_1C02D0E10 * (unsigned int)(unsigned __int16)*v22 + 24) == 1 )
      {
        HIDWORD(v49[5]) = 2;
        v23 = v22;
        *(_QWORD *)&v49[5] = v22;
        v24 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
          || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v20) = 0;
        }
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v20 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v25 = 29;
        goto LABEL_30;
      }
      if ( *((_BYTE *)qword_1C02D0E08 + dword_1C02D0E10 * (unsigned int)(unsigned __int16)*v22 + 24) == 23 )
      {
        HIDWORD(v49[5]) = 1;
        v23 = v22;
        *(_QWORD *)&v49[5] = v22;
        v24 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
          || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v20) = 0;
        }
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v20 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v25 = 30;
LABEL_30:
        WPP_RECORDER_AND_TRACE_SF_q(
          v24->AttachedDevice,
          v20,
          v21,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          5,
          v25,
          (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids,
          (char)v22);
LABEL_31:
        v26 = Object;
        goto LABEL_32;
      }
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
        || (v37 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v37 = 0;
      }
      v38 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( !v37 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v23 = *(_DWORD **)&v49[5];
        goto LABEL_31;
      }
      if ( !gbInDestroyHandleTableObjects
        && !IS_USERCRIT_OWNED_EXCLUSIVE()
        && (!IS_USERCRIT_OWNED_AT_ALL()
         || !tagDomLock::IsLockedExclusive((tagDomLock *)&gDomainHandleManagerLock)
         && !tagDomLock::IsLockedShared((tagDomLock *)&gDomainHandleManagerLock)) )
      {
        __int2c();
      }
      v39 = *v22;
      LOBYTE(v21) = v38;
      v26 = Object;
      LOBYTE(v20) = v37;
      WPP_RECORDER_AND_TRACE_SF_dq(
        WPP_GLOBAL_Control->AttachedDevice,
        v20,
        v21,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v41,
        v42,
        v43,
        v44,
        *((_BYTE *)qword_1C02D0E08 + dword_1C02D0E10 * (unsigned int)(unsigned __int16)v39 + 24),
        (char)Object);
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
        || (LOBYTE(v20) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v20) = 0;
      }
      if ( !(_BYTE)v20 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v26 = Object;
      }
      else
      {
        v26 = Object;
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_q(
          WPP_GLOBAL_Control->AttachedDevice,
          v20,
          v21,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          5,
          32,
          (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids,
          (char)Object);
      }
    }
    v23 = *(_DWORD **)&v49[5];
LABEL_32:
    if ( v23 )
    {
      v27 = v26[2];
      if ( v27 )
      {
        LOBYTE(v20) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v20,
            v21,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            4,
            5,
            33,
            (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids);
        }
        *((_QWORD *)&v49[0] + 1) = v27;
        LODWORD(v49[0]) = v19 | 1;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v23 + 2) + 424LL) + 812LL) & 0x800000) != 0 )
        v28 = v49[1] & 0xFFFFFFFE;
      else
        v28 = (*((_DWORD *)v26 + 46) ^ LODWORD(v49[1])) & 1 ^ LODWORD(v49[1]);
      v29 = *((_DWORD *)v26 + 44);
      *(_QWORD *)&v49[6] = v29;
      LODWORD(v49[1]) = v28;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v13 = 0;
      }
      if ( v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v45 = v29;
        LOBYTE(v29) = v13;
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qqd(
          WPP_GLOBAL_Control->AttachedDevice,
          v29,
          v21,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          4,
          5,
          34,
          (__int64)&WPP_273b2ea8811739318d1fcba13a3b89c9_Traceguids,
          (char)v23,
          v45,
          -(v28 & 1));
      }
      v4 = v47;
      v30 = v49[1];
      *(_OWORD *)v47 = v49[0];
      v31 = v49[2];
      *((_OWORD *)v4 + 1) = v30;
      v32 = v49[3];
      *((_OWORD *)v4 + 2) = v31;
      v33 = v49[4];
      *((_OWORD *)v4 + 3) = v32;
      v34 = v49[5];
      *((_OWORD *)v4 + 4) = v33;
      v35 = v49[6];
      *((_OWORD *)v4 + 5) = v34;
      *((_OWORD *)v4 + 6) = v35;
    }
    else
    {
      v4 = v47;
    }
LABEL_50:
    ObfDereferenceObject(Object);
    return *(_DWORD *)v4 != 0;
  }
  return 0;
}
