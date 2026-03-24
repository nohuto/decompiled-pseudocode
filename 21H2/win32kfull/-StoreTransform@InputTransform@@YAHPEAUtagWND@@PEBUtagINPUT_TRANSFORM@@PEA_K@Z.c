/*
 * XREFs of ?StoreTransform@InputTransform@@YAHPEAUtagWND@@PEBUtagINPUT_TRANSFORM@@PEA_K@Z @ 0x1C0003034
 * Callers:
 *     EditionUpdateInputTransformFromHitTest @ 0x1C0002F00 (EditionUpdateInputTransformFromHitTest.c)
 *     ?OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z @ 0x1C01102C0 (-OnInput@InputTransform@@YAHPEAUtagWND@@_K@Z.c)
 * Callees:
 *     ?InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z @ 0x1C000316C (-InitInputTransformList@@YAPEAUtagINPUTTRANSFORMLIST@@PEAUtagWND@@@Z.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0037754 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C006FCC0 (_GetTopLevelWindow.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00C0AD8 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C016E324 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D24C8 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 */

struct _EX_PUSH_LOCK *__fastcall InputTransform::StoreTransform(
        InputTransform *this,
        struct tagWND *a2,
        const struct tagINPUT_TRANSFORM *a3,
        unsigned __int64 *a4)
{
  __int64 v4; // rax
  __int128 v6; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  struct _EX_PUSH_LOCK *result; // rax
  struct _EX_PUSH_LOCK *v11; // rbx
  __int64 v12; // rdx
  __int128 v13; // xmm1
  struct tagWND *v14; // rax
  __int64 TopLevelWindow; // rax
  __int64 v16; // rdi
  float *v17; // rcx
  float *v18; // rax
  float v19; // xmm2_4
  __int64 v20; // [rsp+20h] [rbp-60h] BYREF
  __int128 Source1; // [rsp+30h] [rbp-50h] BYREF
  __int128 v22; // [rsp+40h] [rbp-40h]
  __int128 v23; // [rsp+50h] [rbp-30h]
  __int128 v24; // [rsp+60h] [rbp-20h]

  v4 = *((_QWORD *)this + 5);
  v6 = *((_OWORD *)a2 + 1);
  Source1 = *(_OWORD *)a2;
  v8 = *((_OWORD *)a2 + 2);
  v22 = v6;
  v9 = *((_OWORD *)a2 + 3);
  v23 = v8;
  v24 = v9;
  if ( (*(_DWORD *)(v4 + 288) & 0xF) != 2 )
  {
    v14 = (unsigned int)IsIndependentInputWindow(this) ? GetCompositionInputWindowUIOwner(this) : this;
    TopLevelWindow = GetTopLevelWindow(v14);
    v16 = TopLevelWindow;
    if ( TopLevelWindow )
    {
      v17 = *(float **)(TopLevelWindow + 216);
      if ( v17 )
      {
        if ( *v17 != v17[5] )
        {
          LODWORD(v20) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 334LL);
        }
        if ( *((float *)&Source1 + 2) != 0.0
          || *((float *)&Source1 + 3) != 0.0
          || *((float *)&v22 + 2) != 0.0
          || *((float *)&v22 + 3) != 0.0
          || *(float *)&v23 != 0.0
          || *((float *)&v23 + 1) != 0.0
          || *((float *)&v23 + 2) != 1.0
          || *((float *)&v23 + 3) != 0.0
          || *((float *)&v24 + 2) != 0.0
          || *((float *)&v24 + 3) != 1.0 )
        {
          LODWORD(v20) = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 346LL);
        }
        *(float *)&Source1 = *(float *)&Source1 / **(float **)(v16 + 216);
        *((float *)&Source1 + 1) = *((float *)&Source1 + 1) / **(float **)(v16 + 216);
        *(float *)&v22 = *(float *)&v22 / **(float **)(v16 + 216);
        *((float *)&v22 + 1) = *((float *)&v22 + 1) / **(float **)(v16 + 216);
        v18 = *(float **)(v16 + 216);
        v19 = v18[13];
        *(float *)&v24 = (float)(*(float *)&v24 - v18[12]) / *v18;
        *((float *)&v24 + 1) = (float)(*((float *)&v24 + 1) - v19) / **(float **)(v16 + 216);
      }
    }
  }
  result = InitInputTransformList(this);
  v11 = result;
  if ( result )
  {
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v20, result);
    v12 = *((_QWORD *)v11 + 1);
    if ( (struct _EX_PUSH_LOCK *)v12 == (struct _EX_PUSH_LOCK *)((char *)v11 + 8)
      || (!a3 || *(_QWORD *)(v12 + 16) != *(_QWORD *)a3)
      && ((*((_DWORD *)v11 + 22) & 1) != 0 || RtlCompareMemory(&Source1, (const void *)(v12 + 24), 0x40uLL) != 64) )
    {
      *(_OWORD *)((char *)v11 + 24) = Source1;
      *(_OWORD *)((char *)v11 + 40) = v22;
      *(_OWORD *)((char *)v11 + 56) = v23;
      v13 = v24;
      *((_DWORD *)v11 + 22) |= 1u;
      *(_OWORD *)((char *)v11 + 72) = v13;
    }
    ExReleasePushLockExclusiveEx(v20, 0LL);
    KeLeaveCriticalRegion();
    return (struct _EX_PUSH_LOCK *)1;
  }
  return result;
}
