__int64 __fastcall CInteractionProcessor::ProcessInput(
        CInteractionProcessor *this,
        const struct CInteraction *a2,
        const struct tagPOINTER_INFO *a3,
        int a4,
        const struct CMILMatrix *a5,
        struct IManipulationResource *a6,
        bool *a7)
{
  int v10; // edx
  __int64 v11; // r10
  __int64 v12; // rax
  unsigned int started; // esi
  __int64 v14; // rdx
  __int64 v15; // r10
  __int64 v16; // r11
  int v17; // eax
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int64 v21; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v22; // r8
  __int64 v23; // rcx
  int v24; // eax
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  int v28; // eax
  __int64 v31; // [rsp+30h] [rbp-A1h] BYREF
  __int64 v32; // [rsp+38h] [rbp-99h] BYREF
  __int64 v33; // [rsp+40h] [rbp-91h] BYREF
  __int64 v34; // [rsp+48h] [rbp-89h] BYREF
  CInteractionProcessor *v35; // [rsp+50h] [rbp-81h] BYREF
  __int64 v36; // [rsp+58h] [rbp-79h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+60h] [rbp-71h] BYREF
  __int64 *v38; // [rsp+80h] [rbp-51h]
  int v39; // [rsp+88h] [rbp-49h]
  int v40; // [rsp+8Ch] [rbp-45h]
  CInteractionProcessor **v41; // [rsp+90h] [rbp-41h]
  int v42; // [rsp+98h] [rbp-39h]
  int v43; // [rsp+9Ch] [rbp-35h]
  __int64 *v44; // [rsp+A0h] [rbp-31h]
  int v45; // [rsp+A8h] [rbp-29h]
  int v46; // [rsp+ACh] [rbp-25h]
  __int64 *v47; // [rsp+B0h] [rbp-21h]
  int v48; // [rsp+B8h] [rbp-19h]
  int v49; // [rsp+BCh] [rbp-15h]
  __int64 *v50; // [rsp+C0h] [rbp-11h]
  int v51; // [rsp+C8h] [rbp-9h]
  int v52; // [rsp+CCh] [rbp-5h]
  __int64 *v53; // [rsp+D0h] [rbp-1h]
  int v54; // [rsp+D8h] [rbp+7h]
  int v55; // [rsp+DCh] [rbp+Bh]

  if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
  {
    v12 = *((_QWORD *)this + 60);
    v55 = 0;
    v52 = 0;
    v49 = 0;
    v46 = 0;
    v43 = 0;
    v40 = 0;
    v31 = v12;
    v32 = *((_QWORD *)this + 40);
    v33 = *((_QWORD *)this + 20);
    v34 = *(_QWORD *)this;
    v53 = &v31;
    v50 = &v32;
    v47 = &v33;
    v44 = &v34;
    v41 = &v35;
    v38 = &v36;
    v54 = v10 + 6;
    v51 = v10 + 6;
    v48 = v10 + 6;
    v45 = v10 + 6;
    v42 = v10 + 6;
    v39 = v10 + 6;
    v35 = this;
    v36 = v11;
    tlgWriteTransfer_EventWriteTransfer(
      (__int64)&dword_1803E07D0,
      (unsigned __int8 *)dword_18037B891,
      0LL,
      0LL,
      v10 + 6,
      &v37);
  }
  started = 0;
  *a7 = 0;
  *((_DWORD *)this + 197) = ConvertToInputType(*(_DWORD *)a3, *((_DWORD *)a3 + 3));
  *((_DWORD *)this + 198) = a4;
  *((_QWORD *)this + 100) = *((_QWORD *)a3 + 2);
  if ( !CMILMatrix::IsEqualTo<0>((float *)this + 210, (float *)a5) )
  {
    *(_OWORD *)v15 = *(_OWORD *)v14;
    *(_OWORD *)(v15 + 16) = *(_OWORD *)(v14 + 16);
    *(_OWORD *)(v15 + 32) = *(_OWORD *)(v14 + 32);
    *(_OWORD *)(v15 + 48) = *(_OWORD *)(v14 + 48);
    *(_DWORD *)(v15 + 64) = *(_DWORD *)(v14 + 64);
    anonymous_namespace_::DecomposeMatrix(
      (CMILMatrix *)v15,
      v16,
      (CInteractionProcessor *)((char *)this + 908),
      (CInteractionProcessor *)((char *)this + 976),
      (CInteractionProcessor *)((char *)this + 1044),
      (CInteractionProcessor *)((char *)this + 1112));
    v17 = *((_DWORD *)this + 243);
    v18 = *(_OWORD *)((char *)this + 924);
    *(_OWORD *)((char *)this + 1180) = *(_OWORD *)((char *)this + 908);
    v19 = *(_OWORD *)((char *)this + 940);
    *(_OWORD *)((char *)this + 1196) = v18;
    v20 = *(_OWORD *)((char *)this + 956);
    *(_OWORD *)((char *)this + 1212) = v19;
    *(_OWORD *)((char *)this + 1228) = v20;
    *((_DWORD *)this + 311) = v17;
    if ( !CMILMatrix::Invert((CInteractionProcessor *)((char *)this + 1180), v21, v22) )
    {
      v24 = *((_DWORD *)this + 243);
      v25 = *(_OWORD *)((char *)this + 924);
      *(_OWORD *)v23 = *(_OWORD *)((char *)this + 908);
      v26 = *(_OWORD *)((char *)this + 940);
      *(_OWORD *)(v23 + 16) = v25;
      v27 = *(_OWORD *)((char *)this + 956);
      *(_OWORD *)(v23 + 32) = v26;
      *(_OWORD *)(v23 + 48) = v27;
      *(_DWORD *)(v23 + 64) = v24;
    }
    *a7 = 1;
  }
  if ( !*((_DWORD *)this + 196) )
  {
    v28 = ConvertToInputType(*(_DWORD *)a3, *((_DWORD *)a3 + 3));
    started = CInteractionProcessor::StartInteraction(this, 0LL, 0LL, a6, v28);
  }
  *((_BYTE *)this + 808) &= ~0x10u;
  switch ( *((_DWORD *)this + 197) )
  {
    case 2:
      return (unsigned int)CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ProcessInput(
                             this,
                             (int *)this + 196,
                             (__int64)a3,
                             (__int64)this + 1272);
    case 3:
      return (unsigned int)CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::ProcessInput(
                             (_QWORD *)this + 20,
                             (int *)this + 196,
                             (__int64)a3,
                             (__int64)this + 1272);
    case 4:
      if ( CInteractionProcessor::AllowPenGestureDetection(this) )
        return (unsigned int)CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::ProcessInput(
                               (_QWORD *)this + 40,
                               (int *)this + 196,
                               (__int64)a3,
                               (__int64)this + 1272);
      break;
    case 6:
      return (unsigned int)CInputTypeContext<DwmMousewheelInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>,enum DwmInteractionTypeMousewheelPrimitiveType::FlagsEnum>::ProcessInput(
                             (_QWORD *)this + 60,
                             (int *)this + 196,
                             (__int64)a3,
                             (__int64)this + 1272);
  }
  return started;
}
