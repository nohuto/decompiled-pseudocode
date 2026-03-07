__int64 __fastcall CInteractionProcessor::CalculateDetectedInteractions(
        CInteractionProcessor *this,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        InteractionConfigurationGroup *a5,
        _DWORD *a6,
        __int64 a7,
        _DWORD *a8)
{
  InteractionConfigurationGroup *v10; // rax
  int v13; // edi
  int v14; // ecx
  int v15; // eax
  bool v16; // zf
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  int v19; // eax
  __int64 v20; // rcx
  int v21; // ebx
  InteractionConfigurationGroup *v22; // r9
  unsigned int v23; // r10d
  int v24; // eax
  int v25; // edi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // r10d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned int v33; // r10d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  unsigned int v37; // r8d
  int v38; // r10d
  int v39; // ebx
  int v40; // r10d
  __int64 v41; // rax
  unsigned int v42; // eax
  unsigned int v43; // edx
  int v44; // eax
  __int64 v45; // rcx
  InteractionConfigurationGroup *v47; // [rsp+40h] [rbp-38h] BYREF
  int v48; // [rsp+48h] [rbp-30h] BYREF
  int v49; // [rsp+4Ch] [rbp-2Ch] BYREF
  _DWORD *v50; // [rsp+50h] [rbp-28h]
  int v51; // [rsp+58h] [rbp-20h] BYREF
  int v52; // [rsp+5Ch] [rbp-1Ch]
  int v53; // [rsp+60h] [rbp-18h]

  v10 = a5;
  *a4 = 0;
  *a6 = 0;
  v13 = 0;
  *a8 = 0;
  v50 = a8;
  v14 = *((_DWORD *)this + 197);
  v47 = a5;
  if ( v14 == 2 )
  {
    v15 = CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            (char *)this,
            a2,
            a3,
            a4,
            (__int64)a5,
            a6);
  }
  else if ( v14 == 3 )
  {
    v15 = CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            (char *)this + 160,
            a2,
            a3,
            a4,
            (__int64)a5,
            a6);
  }
  else if ( v14 != 4 || (v16 = !CInteractionProcessor::AllowPenGestureDetection(this), v10 = v47, v16) )
  {
    if ( *((_DWORD *)this + 197) != 6 )
      goto LABEL_11;
    v15 = CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            (char *)this + 480,
            a2,
            a3,
            a4,
            (__int64)v10,
            a6);
  }
  else
  {
    v15 = CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            (char *)this + 320,
            a2,
            a3,
            a4,
            (__int64)v47,
            a6);
  }
  v13 = v15;
  if ( v15 < 0 )
    return (unsigned int)v13;
LABEL_11:
  if ( (*((_BYTE *)this + 1264) & 3) == 0 )
    return (unsigned int)v13;
  v17 = operator new(0x88uLL);
  v18 = v17;
  if ( v17 )
  {
    memset_0(v17, 0, 0x88uLL);
    v18[3] = 0LL;
    v18[2] = 0LL;
    *((_DWORD *)v18 + 8) = 0;
    v18[7] = 0LL;
    v18[5] = 0LL;
    v18[6] = 0LL;
    *((_DWORD *)v18 + 16) = 0;
    v18[11] = 0LL;
    v18[9] = 0LL;
    v18[10] = 0LL;
    *((_DWORD *)v18 + 24) = 0;
    v18[15] = 0LL;
    v18[13] = 0LL;
    v18[14] = 0LL;
    *((_DWORD *)v18 + 32) = 0;
    v19 = *((_DWORD *)this + 162);
    v47 = (InteractionConfigurationGroup *)v18;
    *(_DWORD *)v18 = v19;
    DynArrayImpl<0>::AddMultipleAndSet((__int64)v47 + 8, 12, *((_DWORD *)this + 170), *((_QWORD *)this + 82));
    DynArrayImpl<0>::AddMultipleAndSet((__int64)v47 + 40, 12, *((_DWORD *)this + 178), *((_QWORD *)this + 86));
    DynArrayImpl<0>::AddMultipleAndSet((__int64)v47 + 72, 12, *((_DWORD *)this + 186), *((_QWORD *)this + 90));
    DynArrayImpl<0>::AddMultipleAndSet((__int64)v47 + 104, 12, *((_DWORD *)this + 194), *((_QWORD *)this + 94));
    anonymous_namespace_::GetTemporaryConfigWithMask((__int64)this + 1308, &v49, &v48);
    v21 = v48;
    v22 = v47;
    if ( !v48 )
      goto LABEL_36;
    if ( !*((_DWORD *)v47 + 24) )
    {
      v51 = 1;
      v52 = -1;
      v53 = 0;
      v13 = DynArray<DwmTouchInteractionConfigurationPrimitive,0>::AddMultipleAndSet((__int64)v47 + 72, &v51, 1LL);
      if ( v13 < 0 )
        goto LABEL_44;
      v22 = v47;
    }
    if ( !*((_DWORD *)v22 + 32) )
    {
      v51 = 1;
      v52 = -1;
      v53 = 0;
      v13 = DynArray<DwmTouchpadInteractionConfigurationPrimitive,0>::AddMultipleAndSet((__int64)v22 + 104, &v51, 1LL);
      if ( v13 < 0 )
        goto LABEL_44;
      v22 = v47;
    }
    if ( !*((_DWORD *)v22 + 16) )
    {
      v51 = 1;
      v52 = -1;
      v53 = 0;
      v13 = DynArray<DwmPenInteractionConfigurationPrimitive,0>::AddMultipleAndSet((__int64)v22 + 40, &v51, 1LL);
      if ( v13 < 0 )
        goto LABEL_44;
      v22 = v47;
    }
    if ( *((_DWORD *)v22 + 8) )
    {
LABEL_26:
      v23 = 0;
      v24 = v49;
      if ( *((_DWORD *)v22 + 24) )
      {
        v25 = v49 & v21;
        do
        {
          v26 = *((_QWORD *)v22 + 9);
          v27 = v23++;
          v28 = 3 * v27;
          v20 = v25 | *(_DWORD *)(v26 + 12 * v27 + 8) & (unsigned int)~v21;
          *(_DWORD *)(v26 + 4 * v28 + 8) = v20;
          v22 = v47;
        }
        while ( v23 < *((_DWORD *)v47 + 24) );
      }
      v29 = 0;
      if ( *((_DWORD *)v22 + 32) )
      {
        do
        {
          v30 = *((_QWORD *)v22 + 13);
          v31 = v29++;
          v32 = 3 * v31;
          v20 = v24 & v21 | (unsigned int)~v21 & *(_DWORD *)(v30 + 12 * v31 + 8);
          *(_DWORD *)(v30 + 4 * v32 + 8) = v20;
          v22 = v47;
        }
        while ( v29 < *((_DWORD *)v47 + 32) );
      }
      v33 = 0;
      if ( *((_DWORD *)v22 + 16) )
      {
        do
        {
          v34 = *((_QWORD *)v22 + 5);
          v35 = v33++;
          v36 = 3 * v35;
          v20 = v24 & v21 | *(_DWORD *)(v34 + 12 * v35 + 8) & (unsigned int)~v21;
          *(_DWORD *)(v34 + 4 * v36 + 8) = v20;
          v22 = v47;
        }
        while ( v33 < *((_DWORD *)v47 + 16) );
      }
      v37 = 0;
      if ( *((_DWORD *)v22 + 8) )
      {
        v38 = v21;
        v39 = v24 & v21;
        v40 = ~v38;
        do
        {
          v20 = *((_QWORD *)v22 + 1);
          v41 = v37++;
          *(_DWORD *)(v20 + 12 * v41 + 8) = v39 | v40 & *(_DWORD *)(v20 + 12 * v41 + 8);
          v22 = v47;
        }
        while ( v37 < *((_DWORD *)v47 + 8) );
      }
LABEL_36:
      v42 = *(_DWORD *)(a7 + 24);
      v43 = v42 + 1;
      if ( v42 + 1 < v42 )
      {
        v13 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024362, 0xB5u, 0LL);
      }
      else
      {
        v13 = 0;
        if ( v43 <= *(_DWORD *)(a7 + 20) )
        {
          *(_QWORD *)(*(_QWORD *)a7 + 8LL * v42) = v22;
          *(_DWORD *)(a7 + 24) = v43;
LABEL_40:
          ++*v50;
          return (unsigned int)v13;
        }
        v44 = DynArrayImpl<0>::AddMultipleAndSet(a7, 8, 1, &v47);
        v13 = v44;
        if ( v44 >= 0 )
          goto LABEL_40;
        MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0xC0u, 0LL);
      }
      goto LABEL_44;
    }
    v51 = 1;
    v52 = -1;
    v53 = 0;
    v13 = DynArray<DwmMousewheelInteractionConfigurationPrimitive,0>::AddMultipleAndSet((__int64)v22 + 8, &v51, 1LL);
    if ( v13 >= 0 )
    {
      v22 = v47;
      goto LABEL_26;
    }
  }
  else
  {
    v47 = 0LL;
    v13 = -2147024882;
  }
LABEL_44:
  if ( v47 )
    InteractionConfigurationGroup::`scalar deleting destructor'(v47);
  return (unsigned int)v13;
}
