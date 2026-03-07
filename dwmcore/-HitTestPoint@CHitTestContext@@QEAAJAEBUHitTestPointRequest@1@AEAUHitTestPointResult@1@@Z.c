__int64 __fastcall CHitTestContext::HitTestPoint(
        CVisual **this,
        const struct CHitTestContext::HitTestPointRequest *a2,
        struct CHitTestContext::HitTestPointResult *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r14
  struct CHitTestContext::HitTestPointResult *v5; // rsi
  unsigned int *v6; // r12
  _DWORD *v8; // rdx
  unsigned __int64 InputType; // r8
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdi
  CVisual *v13; // rsi
  __int64 v14; // rcx
  unsigned int i; // eax
  __int64 *v16; // r15
  __int64 v17; // r15
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r15
  HANDLE v20; // rbx
  char v22; // al
  HANDLE v23; // rcx
  bool v24; // dl
  int v25; // eax
  unsigned int v26; // ecx
  int v27; // eax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  int v30; // eax
  __int128 v31; // xmm1
  bool v32; // al
  _DWORD *v33; // rax
  char v34; // [rsp+30h] [rbp-99h]
  HANDLE hSourceHandle; // [rsp+38h] [rbp-91h]
  __int64 v36; // [rsp+48h] [rbp-81h]
  unsigned int v37; // [rsp+50h] [rbp-79h]
  __int64 v38; // [rsp+58h] [rbp-71h]
  int v39; // [rsp+60h] [rbp-69h]
  _DWORD *v40; // [rsp+68h] [rbp-61h]
  _DWORD *v41; // [rsp+70h] [rbp-59h]
  CVisual *v42; // [rsp+78h] [rbp-51h] BYREF
  CVisual *v43; // [rsp+80h] [rbp-49h]
  __int64 v44; // [rsp+88h] [rbp-41h] BYREF
  _OWORD v45[4]; // [rsp+90h] [rbp-39h] BYREF
  int v46; // [rsp+D0h] [rbp+7h]
  bool v47; // [rsp+130h] [rbp+67h]
  __int64 v50; // [rsp+148h] [rbp+7Fh] BYREF

  v3 = 0;
  hSourceHandle = 0LL;
  v4 = 0LL;
  v5 = a3;
  v6 = (unsigned int *)a2;
  v40 = (_DWORD *)((char *)a2 + 12);
  v41 = (_DWORD *)((char *)a2 + 8);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    McTemplateU0qqp_EventWriteTransfer(
      *(_QWORD *)(*(_QWORD *)a2 + 64LL),
      (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Start,
      *((_DWORD *)a2 + 2),
      *((_DWORD *)a2 + 3),
      *(_QWORD *)(*(_QWORD *)a2 + 64LL));
  }
  else
  {
    v40 = (_DWORD *)((char *)a2 + 12);
    v41 = (_DWORD *)((char *)a2 + 8);
  }
  CHitTestContext::EvaluateHitTestAttributesAndInputType((__int64)this, v6[5], v6[4]);
  CHitTestContext::HitTestTreeWalk(this, *(_QWORD *)v6);
  v42 = this[14];
  if ( !v42 )
  {
    v20 = 0LL;
    goto LABEL_21;
  }
  v38 = 0LL;
  v43 = *(CVisual **)(*(_QWORD *)v6 + 64LL);
  CMILMatrix::SetToIdentity((CMILMatrix *)v45);
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v47 = *((_DWORD *)this + 24) == 0;
  v13 = v42;
  v36 = 0LL;
  v39 = *((_DWORD *)this + 24);
  LOBYTE(v50) = 0;
  do
  {
    if ( !v10 )
    {
      v10 = (*(__int64 (__fastcall **)(CVisual *, _DWORD *, unsigned __int64, __int64))(*(_QWORD *)v13 + 280LL))(
              v13,
              v8,
              InputType,
              1LL);
      v36 = v10;
    }
    InputType = *((_QWORD *)v13 + 29);
    if ( (*(_DWORD *)InputType & 0x800000) == 0 )
      goto LABEL_14;
    v14 = *(unsigned int *)(InputType + 4);
    v8 = (_DWORD *)(InputType + 8);
    for ( i = 0; i < (unsigned int)v14; v8 = (_DWORD *)((char *)v8 + 1) )
    {
      if ( *(_BYTE *)v8 == 9 )
        break;
      ++i;
    }
    if ( i >= (unsigned int)v14 )
    {
      v16 = 0LL;
    }
    else
    {
      v8 = (_DWORD *)(v14 + 15);
      v16 = (__int64 *)(v14 + 15 + InputType + 8LL * i - (((_BYTE)v14 + 15) & 7));
    }
    v17 = *v16;
    if ( !v17 )
    {
LABEL_13:
      v10 = v36;
      goto LABEL_14;
    }
    v37 = CHitTestContext::AdjustInputTypeForInteraction(this, *((unsigned int *)this + 24), v17, 1LL);
    v22 = CHitTestContext::InteractionMatchesHitTest(this, v37, v17);
    v34 = v22;
    if ( *((_DWORD *)this + 24) != 6 )
      goto LABEL_26;
    if ( (_BYTE)v50 )
    {
      if ( v22 && v4 && (*(_BYTE *)(v4 + 192) & 0x10) != 0 && (*(_BYTE *)(v17 + 192) & 0x10) == 0 )
      {
        v24 = 0;
        v4 = 0LL;
        v23 = 0LL;
        v47 = 0;
        hSourceHandle = 0LL;
      }
      else
      {
LABEL_26:
        v23 = hSourceHandle;
        v24 = v47;
      }
      if ( v4 )
        goto LABEL_29;
      hSourceHandle = v23;
      v47 = v24;
      if ( !v22 )
        goto LABEL_29;
      goto LABEL_45;
    }
    if ( v4 )
      goto LABEL_29;
    if ( !v22 )
    {
      LOBYTE(v50) = ((*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)(v17 + 64) + 88LL))(
                       v17 + 64,
                       5LL,
                       32831LL,
                       0LL)
                  || (*(unsigned int (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)(v17 + 64) + 88LL))(
                       v17 + 64,
                       6LL,
                       32831LL,
                       0LL))
                 && (*(_BYTE *)(v17 + 192) & 0x10) == 0;
      goto LABEL_29;
    }
LABEL_45:
    v4 = v17;
LABEL_29:
    if ( !v47 )
      v47 = (*(unsigned int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v17 + 64) + 80LL))(v17 + 64, v37, 0LL) != 0;
    if ( !CInteraction::HasInputSink((CInteraction *)v17) )
      goto LABEL_13;
    if ( !hSourceHandle && v34 && (!v39 || (unsigned int)CVisual::GetInputQueueType(v13)) )
    {
      hSourceHandle = CVisual::GetInputHandle(v13);
      v12 = **(_QWORD **)&CVisual::GetInputLuid(v13, &v42);
      CVisual::GetWorldTransform(v13, *(_QWORD *)v6, 4LL, v45, 0LL, 0LL);
    }
    if ( v38 == g_luidZero )
    {
      v11 = **(_QWORD **)&CInteraction::GetInputLuid((CInteraction *)v17, &v44);
      v38 = v11;
    }
    v10 = v36;
    if ( !v36 )
    {
      v8 = *(_DWORD **)(v17 + 104);
      if ( v8 )
      {
        if ( *((_BYTE *)v8 + 104) )
        {
          InputType = (unsigned int)CInputSinkStruct::GetInputType(v37);
          v33 = v8 + 16;
          while ( 1 )
          {
            if ( v8 == v33 )
              goto LABEL_72;
            if ( (_DWORD)InputType == *v8 )
              break;
            v8 += 4;
          }
          if ( !v8 )
          {
LABEL_72:
            v10 = 0LL;
            goto LABEL_73;
          }
          v10 = *((_QWORD *)v8 + 1);
LABEL_73:
          v36 = v10;
        }
      }
    }
LABEL_14:
    if ( v13 == v43 )
      break;
    v13 = (CVisual *)*((_QWORD *)v13 + 11);
  }
  while ( v13 );
  v5 = a3;
  v18 = (this[18] - this[17]) >> 3;
  *((_DWORD *)a3 + 4) = v18 + 1;
  if ( (unsigned int)(v18 + 1) <= *(_DWORD *)a3 )
  {
    v19 = 0LL;
    if ( v18 )
    {
      do
      {
        *(_QWORD *)(*((_QWORD *)a3 + 1) + 8 * v19) = **(_QWORD **)&CVisual::GetInputLuid(
                                                                     *((CVisual **)this[17] + v19),
                                                                     &v50);
        ++v19;
      }
      while ( v19 < v18 );
      v6 = (unsigned int *)a2;
    }
    *(_QWORD *)(*((_QWORD *)a3 + 1) + 8 * v18) = v11;
  }
  v20 = hSourceHandle;
  *((_QWORD *)a3 + 3) = v36;
  if ( !hSourceHandle || !v4 || !v47 )
  {
LABEL_20:
    v3 = 0;
LABEL_21:
    InputTraceLogging::DWM::HitTestTreeWalkResult(v6[4], v6[5], *((_QWORD *)v5 + 4), *((_QWORD *)v5 + 3), v20, v4);
    goto LABEL_22;
  }
  v25 = DuplicateCompositionInputSinkHelper(hSourceHandle, (LPHANDLE)a3 + 4);
  if ( v25 >= 0 )
  {
    v27 = *(_DWORD *)(v4 + 1704);
    v28 = v45[1];
    *((_OWORD *)a3 + 3) = v45[0];
    *((_DWORD *)a3 + 29) = v27;
    v29 = v45[2];
    v30 = v46;
    *((_OWORD *)a3 + 4) = v28;
    *((_QWORD *)a3 + 5) = v12;
    v31 = v45[3];
    *((_OWORD *)a3 + 5) = v29;
    *((_OWORD *)a3 + 6) = v31;
    *((_DWORD *)a3 + 28) = v30;
    v32 = v6[4] != 4
       || *((_DWORD *)this + 24) == 6
       && (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)(v4 + 64) + 80LL))(v4 + 64, 6LL);
    *((_BYTE *)a3 + 120) = v32;
    *(_DWORD *)(v4 + 1720) = v6[6];
    *(_BYTE *)(v4 + 192) ^= (*(_BYTE *)(v4 + 192) ^ (2 * *((_BYTE *)this + 128))) & 2;
    goto LABEL_20;
  }
  v3 = v25 | 0x10000000;
  MilInstrumentationCheckHR_MaybeFailFast(v26, &dword_180338CD0, 2u, v25 | 0x10000000, 0x30Au, 0LL);
LABEL_22:
  *((_DWORD *)this + 44) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0qqp_EventWriteTransfer(
      (unsigned int)this[14],
      (unsigned int)&EVTDESC_HIT_TEST_TREE_WALK_Stop,
      *v41,
      *v40,
      (char)this[14]);
  return v3;
}
