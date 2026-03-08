/*
 * XREFs of ?CleanupAfterWalking@CBspPreComputeHelper@@QEAAXXZ @ 0x1801D4808
 * Callers:
 *     ?EndWalk@SubTreeContext@CPreComputeContext@@QEAAXJ@Z @ 0x1801B30E4 (-EndWalk@SubTreeContext@CPreComputeContext@@QEAAXJ@Z.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18004891C (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?Optimize@?$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ @ 0x18008C8F8 (-Optimize@-$CWatermarkStack@_N$0EA@$01$09@@QEAAXXZ.c)
 *     ?Optimize@?$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAAXXZ @ 0x18008C960 (-Optimize@-$CWatermarkStack@W4Enum@MilDepthMode@@$0EA@$01$09@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

void __fastcall CBspPreComputeHelper::CleanupAfterWalking(CBspPreComputeHelper *this)
{
  int v2; // edi
  int v3; // eax
  __int64 v4; // r14
  unsigned int v5; // eax
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  unsigned int v17; // eax
  __int64 v18; // rsi
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rsi
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  int v28; // eax
  __int64 v29; // rsi
  int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  __int64 v34; // rsi
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  int v38; // eax
  __int64 v39; // rsi
  int v40; // eax
  __int64 v41; // rcx
  int v42; // eax
  int v43; // eax
  int v44; // eax
  __int64 v45; // rcx
  void *v46; // [rsp+60h] [rbp+30h] BYREF

  v2 = 0;
  *((_DWORD *)this + 88) = 0;
  CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Optimize((__int64)this + 320);
  CWatermarkStack<bool,64,2,10>::Optimize((__int64)this + 288);
  CWatermarkStack<enum MilDepthMode::Enum,64,2,10>::Optimize((__int64)this + 256);
  v3 = *((_DWORD *)this + 58);
  v4 = 64LL;
  if ( v3 == 10 )
  {
    v5 = *((_DWORD *)this + 62);
    v6 = 64LL;
    if ( v5 > 0x40 )
      v6 = v5;
    if ( (unsigned __int64)(3 * v6) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v6) <= *((_DWORD *)this + 57) )
    {
      v46 = 0LL;
      v7 = HrMalloc(4uLL, (unsigned int)v6, &v46);
      if ( v7 >= 0 )
      {
        operator delete(*((void **)this + 30));
        *((_QWORD *)this + 30) = v46;
        *((_DWORD *)this + 57) = v6;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 62) = 0;
    v9 = 0;
  }
  else
  {
    v9 = v3 + 1;
  }
  *((_DWORD *)this + 58) = v9;
  v10 = *((_DWORD *)this + 50);
  if ( v10 == 10 )
  {
    v11 = *((_DWORD *)this + 54);
    v12 = 64LL;
    if ( v11 > 0x40 )
      v12 = v11;
    if ( (unsigned __int64)(3 * v12) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v12) <= *((_DWORD *)this + 49) )
    {
      v46 = 0LL;
      v13 = HrMalloc(4uLL, (unsigned int)v12, &v46);
      if ( v13 >= 0 )
      {
        operator delete(*((void **)this + 26));
        *((_QWORD *)this + 26) = v46;
        *((_DWORD *)this + 49) = v12;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 54) = 0;
    v15 = 0;
  }
  else
  {
    v15 = v10 + 1;
  }
  *((_DWORD *)this + 50) = v15;
  v16 = *((_DWORD *)this + 42);
  if ( v16 == 10 )
  {
    v17 = *((_DWORD *)this + 46);
    v18 = 64LL;
    if ( v17 > 0x40 )
      v18 = v17;
    if ( (unsigned __int64)(3 * v18) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v18) <= *((_DWORD *)this + 41) )
    {
      v46 = 0LL;
      v19 = HrMalloc(4uLL, (unsigned int)v18, &v46);
      if ( v19 >= 0 )
      {
        operator delete(*((void **)this + 22));
        *((_QWORD *)this + 22) = v46;
        *((_DWORD *)this + 41) = v18;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 46) = 0;
    v21 = 0;
  }
  else
  {
    v21 = v16 + 1;
  }
  *((_DWORD *)this + 42) = v21;
  v22 = *((_DWORD *)this + 34);
  if ( v22 == 10 )
  {
    v23 = *((_DWORD *)this + 38);
    v24 = 64LL;
    if ( v23 > 0x40 )
      v24 = v23;
    if ( (unsigned __int64)(3 * v24) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v24) <= *((_DWORD *)this + 33) )
    {
      v46 = 0LL;
      v25 = HrMalloc(4uLL, (unsigned int)v24, &v46);
      if ( v25 >= 0 )
      {
        operator delete(*((void **)this + 18));
        *((_QWORD *)this + 18) = v46;
        *((_DWORD *)this + 33) = v24;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 38) = 0;
    v27 = 0;
  }
  else
  {
    v27 = v22 + 1;
  }
  *((_DWORD *)this + 34) = v27;
  v28 = *((_DWORD *)this + 26);
  if ( v28 == 8 )
  {
    v29 = 8LL;
    if ( *((_DWORD *)this + 30) > 8u )
      v29 = *((unsigned int *)this + 30);
    if ( (unsigned __int64)(3 * v29) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v29) <= *((_DWORD *)this + 25) )
    {
      v46 = 0LL;
      v30 = HrMalloc(0x44uLL, (unsigned int)v29, &v46);
      if ( v30 >= 0 )
      {
        operator delete(*((void **)this + 14));
        *((_QWORD *)this + 14) = v46;
        *((_DWORD *)this + 25) = v29;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 30) = 0;
    v32 = 0;
  }
  else
  {
    v32 = v28 + 1;
  }
  *((_DWORD *)this + 26) = v32;
  v33 = *((_DWORD *)this + 18);
  if ( v33 == 8 )
  {
    v34 = 8LL;
    if ( *((_DWORD *)this + 22) > 8u )
      v34 = *((unsigned int *)this + 22);
    if ( (unsigned __int64)(3 * v34) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v34) <= *((_DWORD *)this + 17) )
    {
      v46 = 0LL;
      v35 = HrMalloc(0x44uLL, (unsigned int)v34, &v46);
      if ( v35 >= 0 )
      {
        operator delete(*((void **)this + 10));
        *((_QWORD *)this + 10) = v46;
        *((_DWORD *)this + 17) = v34;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 22) = 0;
    v37 = 0;
  }
  else
  {
    v37 = v33 + 1;
  }
  *((_DWORD *)this + 18) = v37;
  v38 = *((_DWORD *)this + 10);
  if ( v38 == 10 )
  {
    v39 = 64LL;
    if ( *((_DWORD *)this + 14) > 0x40u )
      v39 = *((unsigned int *)this + 14);
    if ( (unsigned __int64)(3 * v39) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v39) <= *((_DWORD *)this + 9) )
    {
      v46 = 0LL;
      v40 = HrMalloc(8uLL, (unsigned int)v39, &v46);
      if ( v40 >= 0 )
      {
        operator delete(*((void **)this + 6));
        *((_QWORD *)this + 6) = v46;
        *((_DWORD *)this + 9) = v39;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 14) = 0;
    v42 = 0;
  }
  else
  {
    v42 = v38 + 1;
  }
  *((_DWORD *)this + 10) = v42;
  v43 = *((_DWORD *)this + 2);
  if ( v43 == 10 )
  {
    if ( *((_DWORD *)this + 6) > 0x40u )
      v4 = *((unsigned int *)this + 6);
    if ( (unsigned __int64)(3 * v4) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFFLL, 0LL, 0, -2147024362, 0x106u, 0LL);
    }
    else if ( (unsigned int)(3 * v4) <= *((_DWORD *)this + 1) )
    {
      v46 = 0LL;
      v44 = HrMalloc(8uLL, (unsigned int)v4, &v46);
      if ( v44 >= 0 )
      {
        operator delete(*((void **)this + 2));
        *((_QWORD *)this + 2) = v46;
        *((_DWORD *)this + 1) = v4;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x116u, 0LL);
      }
    }
    *((_DWORD *)this + 6) = 0;
  }
  else
  {
    v2 = v43 + 1;
  }
  *((_DWORD *)this + 2) = v2;
}
