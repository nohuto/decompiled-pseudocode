/*
 * XREFs of ?UpdateAnimateValues@CAnimation@@UEAA_NXZ @ 0x1800C51A0
 * Callers:
 *     ??1CAnimation@@UEAA@XZ @ 0x1800C58A0 (--1CAnimation@@UEAA@XZ.c)
 * Callees:
 *     ?EndAnimation@CAnimation@@AEAAXXZ @ 0x1800C5A6C (-EndAnimation@CAnimation@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xxxqf_EventWriteTransfer @ 0x18012E10E (McTemplateU0xxxqf_EventWriteTransfer.c)
 *     ?GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEAM@Z @ 0x18027D704 (-GetAdjustedHandoffValue@CAnimationInterpolator@@IEAA_N_JMW4Enum@DwmAnimationHandoffType@@M_KPEA.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x18027DB64 (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 */

char __fastcall CAnimation::UpdateAnimateValues(CAnimation *this)
{
  unsigned __int64 v2; // rcx
  bool v3; // zf
  __int64 v4; // r12
  _QWORD *v5; // r14
  unsigned int (__fastcall ***v6)(_QWORD); // rcx
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 (__fastcall ***v9)(_QWORD); // rcx
  unsigned int v10; // edi
  unsigned int v11; // edi
  __int64 v12; // rax
  unsigned int i; // edi
  unsigned int v14; // eax
  __int64 v15; // rdi
  int v16; // ecx
  unsigned __int64 v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rbp
  double v22; // xmm6_8
  __int64 v23; // rax
  double v24; // xmm0_8
  double v25; // xmm6_8
  float v26; // xmm6_4
  char v27; // bp
  char AdjustedHandoffValue; // si
  char v29; // al
  _BYTE *v30; // rdi
  __int64 v31; // rax
  unsigned int v32; // ebp
  int v33; // edx
  unsigned int v34; // eax
  CAnimation *v35; // rbp
  __int64 v37; // rsi
  __int64 v38; // r13
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rdx
  int v43; // [rsp+20h] [rbp-A8h]
  float *v44; // [rsp+30h] [rbp-98h]
  __int64 v45; // [rsp+38h] [rbp-90h]
  int v46; // [rsp+40h] [rbp-88h] BYREF
  __int64 v47; // [rsp+48h] [rbp-80h]
  __int64 v48; // [rsp+50h] [rbp-78h]
  _QWORD v49[3]; // [rsp+58h] [rbp-70h] BYREF
  char v50; // [rsp+D0h] [rbp+8h]
  double v51; // [rsp+D0h] [rbp+8h]
  float v52; // [rsp+D8h] [rbp+10h] BYREF
  float v53; // [rsp+E0h] [rbp+18h] BYREF
  int v54; // [rsp+E8h] [rbp+20h] BYREF

  v2 = *(_QWORD *)(*((_QWORD *)this - 6) + 608LL);
  if ( v2 < *((_QWORD *)this + 9) || !*((_DWORD *)this + 8) )
    return 0;
  v3 = *((_BYTE *)this + 60) == 0;
  v4 = *((_QWORD *)this + 17);
  *((_BYTE *)this + 56) = 1;
  if ( v3 )
    v4 += v2 - *((_QWORD *)this + 18);
  v53 = 0.0;
  v5 = (_QWORD *)((char *)this + 200);
  v46 = 0;
  v6 = (unsigned int (__fastcall ***)(_QWORD))*((_QWORD *)this + 25);
  v49[0] = 0LL;
  v54 = 0;
  v7 = v4;
  v52 = 0.0;
  if ( (**v6)(v6) )
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 8LL))(*v5, 0LL);
  else
    v8 = 0LL;
  v9 = (__int64 (__fastcall ***)(_QWORD))*v5;
  v47 = v8;
  v10 = (**v9)(v9) - 1;
  if ( v10 >= (**(unsigned int (__fastcall ***)(_QWORD))*v5)(*v5) )
    v48 = 0LL;
  else
    v48 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 8LL))(*v5, v10);
  v50 = 0;
  if ( !v8 )
    goto LABEL_63;
  v11 = *((_DWORD *)this + 52);
  if ( v11 != -1 )
  {
    v12 = v11 >= (**(unsigned int (__fastcall ***)(_QWORD))*v5)(*v5)
        ? 0LL
        : (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 8LL))(*v5, v11);
    if ( *(_QWORD *)(v12 + 8) > v4 )
      *((_DWORD *)this + 52) = -1;
  }
  for ( i = *((_DWORD *)this + 52);
        ++i < (unsigned __int64)(**(__int64 (__fastcall ***)(_QWORD))*v5)(*v5);
        *((_DWORD *)this + 52) = i )
  {
    v31 = i >= (**(unsigned int (__fastcall ***)(_QWORD))*v5)(*v5)
        ? 0LL
        : (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 8LL))(*v5, i);
    if ( *(_QWORD *)(v31 + 8) > v4 )
      break;
  }
  v14 = *((_DWORD *)this + 52);
  if ( v14 == -1 )
  {
LABEL_63:
    v30 = (char *)this + 58;
    AdjustedHandoffValue = 0;
    *((_BYTE *)this + 58) = 0;
    goto LABEL_60;
  }
  v15 = v8 + 32LL * v14;
  v16 = *(_DWORD *)v15;
  if ( *(_DWORD *)v15 == 4 || v16 == 6 && v15 == v48 )
    v50 = 1;
  while ( 1 )
  {
    if ( ((v16 - 3) & 0xFFFFFFFC) != 0 || v16 == 4 )
    {
      switch ( v16 )
      {
        case 1:
          v22 = (double)((int)v7 - *(_DWORD *)(v15 + 8));
          v23 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 24LL))(*v5);
          if ( v23 < 0 )
            v24 = (double)(int)(v23 & 1 | ((unsigned __int64)v23 >> 1))
                + (double)(int)(v23 & 1 | ((unsigned __int64)v23 >> 1));
          else
            v24 = (double)(int)v23;
          v25 = v22 / v24;
          v26 = *(float *)(v15 + 16) * (v25 * v25) * v25
              + *(float *)(v15 + 20) * (v25 * v25)
              + *(float *)(v15 + 24) * v25
              + *(float *)(v15 + 28);
          break;
        case 2:
          v26 = CAnimationInterpolator::InterpolateSinusoidal(
                  (CAnimation *)((char *)this + 200),
                  (const struct DwmAnimationPrimitive *)v15,
                  v7);
          break;
        case 4:
          v26 = *(float *)(v15 + 16);
          break;
        default:
          goto LABEL_63;
      }
      if ( !_finite(v26) )
        goto LABEL_63;
      v27 = v50;
      v52 = v26;
      v29 = (*(__int64 (__fastcall **)(_QWORD, int *, int *, _QWORD *))(*(_QWORD *)*v5 + 16LL))(*v5, &v54, &v46, v49);
      AdjustedHandoffValue = v29;
      if ( !v29 )
        goto LABEL_53;
      if ( v54 )
      {
        v44 = &v52;
        HIWORD(v43) = HIWORD(v46);
        AdjustedHandoffValue = CAnimationInterpolator::GetAdjustedHandoffValue((char *)this + 200, v4);
        if ( !AdjustedHandoffValue )
          goto LABEL_53;
        v26 = v52;
      }
      v30 = (char *)this + 58;
      v53 = v26;
      *((_BYTE *)this + 58) = v50;
      goto LABEL_54;
    }
    if ( v8 == v15 )
      goto LABEL_41;
    v17 = 0LL;
    v18 = 0LL;
    v19 = (**(unsigned int (__fastcall ***)(_QWORD))*v5)(*v5)
        ? (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v5 + 8LL))(*v5, 0LL)
        : 0LL;
    switch ( *(_DWORD *)v15 )
    {
      case 3:
        v20 = *(_QWORD *)(v15 + 16);
        if ( v20 )
        {
          v21 = v7 - *(_QWORD *)(v15 + 8);
          if ( v20 == 43046875 )
            v17 = v21 % 0x290D7DB;
          else
            v17 = v21 % v20;
        }
        v18 = *(_QWORD *)(v15 + 8) + v17 - v20;
        if ( v18 < *(_QWORD *)(v19 + 8) )
        {
          v18 = *(_QWORD *)(v15 + 8);
          v7 = v18;
          goto LABEL_31;
        }
        break;
      case 5:
        v37 = *(_QWORD *)(v15 + 8);
        v38 = v7 - v37;
        v39 = v37 - *(_QWORD *)(v19 + 8);
        if ( v38 <= v39 )
          v39 = v38;
        v18 = v37 - v39;
        break;
      case 6:
        v18 = *(_QWORD *)(v15 + 8);
        v7 = v18;
        goto LABEL_31;
    }
    v7 = v18;
    if ( *(_QWORD *)(v15 + 8) < v18 )
      goto LABEL_41;
LABEL_31:
    v15 -= 32LL;
    if ( *(_QWORD *)(v15 + 8) > v18 )
      break;
LABEL_34:
    v8 = v47;
    v16 = *(_DWORD *)v15;
  }
  while ( v15 != v47 )
  {
    v15 -= 32LL;
    if ( *(_QWORD *)(v15 + 8) <= v18 )
      goto LABEL_34;
  }
LABEL_41:
  AdjustedHandoffValue = 0;
  v27 = 0;
LABEL_53:
  *((_BYTE *)this + 58) = v27;
  v30 = (char *)this + 58;
  if ( !AdjustedHandoffValue )
    goto LABEL_60;
LABEL_54:
  v32 = 0;
  v51 = (double)(int)v4 / (double)(int)g_qpcFrequency.LowPart;
  if ( *((_DWORD *)this + 8) )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64, float *))(**(_QWORD **)(*((_QWORD *)this + 1) + 16LL * v32) + 96LL))(
        *(_QWORD *)(*((_QWORD *)this + 1) + 16LL * v32),
        *(unsigned int *)(*((_QWORD *)this + 1) + 16LL * v32 + 8),
        18LL,
        &v53);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x100) != 0 )
        McTemplateU0xxxqf_EventWriteTransfer(
          *((_QWORD *)this + 1),
          v33,
          LODWORD(v51),
          (_DWORD)this - 64,
          *(_QWORD *)(*((_QWORD *)this + 1) + 16LL * v32),
          *(_DWORD *)(*((_QWORD *)this + 1) + 16LL * v32 + 8),
          SLOBYTE(v53));
      v34 = *((_DWORD *)this + 8);
      ++v32;
    }
    while ( v32 < v34 );
    if ( v34 )
      *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this - 6) + 424LL) + 448LL) |= 2u;
  }
LABEL_60:
  v35 = (CAnimation *)((char *)this - 64);
  if ( *((_DWORD *)this + 59) )
  {
    if ( *((_DWORD *)this + 58) )
    {
      v40 = *((unsigned int *)this + 30);
      if ( (unsigned int)v40 < *((_DWORD *)this + 28) )
      {
        do
        {
          v41 = *((_QWORD *)this + 11);
          v42 = 2 * v40;
          if ( *(_QWORD *)(v41 + 8 * v42) > v4 )
            break;
          v49[0] = *((unsigned int *)this + 59);
          v49[1] = *((unsigned int *)this + 58);
          LODWORD(v45) = *(_DWORD *)(v41 + 8 * v42 + 12);
          LODWORD(v44) = *(_DWORD *)(v41 + 8 * v42 + 8);
          LOWORD(v43) = 0;
          CoreUICallSend(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this - 6) + 1240LL) + 40LL),
            v49,
            2LL,
            1LL,
            v43,
            &unk_180339407,
            v44,
            v45);
          v40 = (unsigned int)(*((_DWORD *)this + 30) + 1);
          *((_DWORD *)this + 30) = v40;
        }
        while ( (unsigned int)v40 < *((_DWORD *)this + 28) );
        v35 = (CAnimation *)((char *)this - 64);
      }
    }
  }
  if ( *v30 )
  {
    if ( !*((_BYTE *)this + 59) )
      CAnimation::EndAnimation(v35);
  }
  return AdjustedHandoffValue;
}
