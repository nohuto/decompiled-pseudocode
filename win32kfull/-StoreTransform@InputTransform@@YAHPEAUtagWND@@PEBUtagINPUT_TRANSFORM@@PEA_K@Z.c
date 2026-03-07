__int64 __fastcall InputTransform::StoreTransform(
        InputTransform *this,
        struct tagWND *a2,
        const struct tagINPUT_TRANSFORM *a3,
        unsigned __int64 *a4)
{
  __int64 v4; // rax
  __int128 v6; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  _DWORD *v13; // rdi
  __int64 v14; // rcx
  __int128 v15; // xmm1
  struct tagWND *v16; // rax
  __int64 TopLevelWindow; // rax
  __int64 v18; // rdi
  float *v19; // rcx
  float *v20; // rax
  float v21; // xmm2_4
  _QWORD v22[2]; // [rsp+20h] [rbp-60h] BYREF
  __int128 Source1; // [rsp+30h] [rbp-50h] BYREF
  __int128 v24; // [rsp+40h] [rbp-40h]
  __int128 v25; // [rsp+50h] [rbp-30h]
  __int128 v26; // [rsp+60h] [rbp-20h]

  v4 = *((_QWORD *)this + 5);
  v6 = *((_OWORD *)a2 + 1);
  Source1 = *(_OWORD *)a2;
  v8 = *((_OWORD *)a2 + 2);
  v24 = v6;
  v9 = *((_OWORD *)a2 + 3);
  v25 = v8;
  v26 = v9;
  if ( (*(_DWORD *)(v4 + 288) & 0xF) != 2 )
  {
    v16 = (unsigned int)IsIndependentInputWindow(this) ? GetCompositionInputWindowUIOwner(this) : this;
    TopLevelWindow = GetTopLevelWindow(v16);
    v18 = TopLevelWindow;
    if ( TopLevelWindow )
    {
      v19 = *(float **)(TopLevelWindow + 216);
      if ( v19 )
      {
        if ( *v19 != v19[5] )
        {
          LODWORD(v22[0]) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 353LL);
        }
        if ( *((float *)&Source1 + 2) != 0.0
          || *((float *)&Source1 + 3) != 0.0
          || *((float *)&v24 + 2) != 0.0
          || *((float *)&v24 + 3) != 0.0
          || *(float *)&v25 != 0.0
          || *((float *)&v25 + 1) != 0.0
          || *((float *)&v25 + 2) != 1.0
          || *((float *)&v25 + 3) != 0.0
          || *((float *)&v26 + 2) != 0.0
          || *((float *)&v26 + 3) != 1.0 )
        {
          LODWORD(v22[0]) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 365LL);
        }
        *(float *)&Source1 = *(float *)&Source1 / **(float **)(v18 + 216);
        *((float *)&Source1 + 1) = *((float *)&Source1 + 1) / **(float **)(v18 + 216);
        *(float *)&v24 = *(float *)&v24 / **(float **)(v18 + 216);
        *((float *)&v24 + 1) = *((float *)&v24 + 1) / **(float **)(v18 + 216);
        v20 = *(float **)(v18 + 216);
        v21 = v20[13];
        *(float *)&v26 = (float)(*(float *)&v26 - v20[12]) / *v20;
        *((float *)&v26 + 1) = (float)(*((float *)&v26 + 1) - v21) / **(float **)(v18 + 216);
      }
    }
  }
  result = (__int64)InitInputTransformList(this);
  v11 = result;
  if ( result )
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v22, (struct _EX_PUSH_LOCK *)result);
    v12 = *(_QWORD *)(v11 + 8);
    if ( v12 == v11 + 8 )
    {
      v13 = (_DWORD *)(v11 + 88);
    }
    else if ( a3 && *(_QWORD *)(v12 + 16) == *(_QWORD *)a3
           || (v13 = (_DWORD *)(v11 + 88), (*(_DWORD *)(v11 + 88) & 1) == 0)
           && RtlCompareMemory(&Source1, (const void *)(v12 + 24), 0x40uLL) == 64 )
    {
      NSInstrumentation::CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>::~CAutoExclusiveCReaderWriterLock<NSInstrumentation::CPlatformReaderWriterLock>(v22);
      return 1LL;
    }
    v14 = v22[0];
    *(_OWORD *)(v11 + 24) = Source1;
    *(_OWORD *)(v11 + 40) = v24;
    *(_OWORD *)(v11 + 56) = v25;
    v15 = v26;
    *v13 |= 1u;
    *(_OWORD *)(v11 + 72) = v15;
    ExReleasePushLockExclusiveEx(v14, 0LL);
    KeLeaveCriticalRegion();
    return 1LL;
  }
  return result;
}
