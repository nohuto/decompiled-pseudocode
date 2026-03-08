/*
 * XREFs of ?OnAddBinding@CAnimation@@MEAAJPEAUAnimationBinding@CBaseAnimation@@@Z @ 0x1800F99E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0xxqf_EventWriteTransfer @ 0x18021C8BC (McTemplateU0xxqf_EventWriteTransfer.c)
 *     ?GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z @ 0x18027D8D4 (-GetInterpolatedValue@CAnimationInterpolator@@QEAA_N_JPEAMPEA_N@Z.c)
 */

__int64 __fastcall CAnimation::OnAddBinding(CAnimation *this, struct CBaseAnimation::AnimationBinding *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  int v6; // edx
  int v7; // ecx
  bool v8; // zf
  int v9; // xmm0_4
  float v11; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 16);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, 0LL);
    if ( v5 )
    {
      v8 = *(_DWORD *)v5 == 1;
      LOBYTE(v9) = 0;
      v11 = 0.0;
      if ( v8 )
      {
        v9 = *(_DWORD *)(v5 + 28);
      }
      else if ( *(_DWORD *)v5 == 4 )
      {
        v9 = *(_DWORD *)(v5 + 16);
      }
      else if ( *(_DWORD *)v5 == 2 )
      {
        CAnimationInterpolator::GetInterpolatedValue((CAnimation *)((char *)this + 264), *(_QWORD *)(v5 + 8), &v11, 0LL);
        LOBYTE(v9) = LOBYTE(v11);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x80u) != 0 )
        McTemplateU0xxqf_EventWriteTransfer(v7, v6, (_DWORD)this, *(_QWORD *)a2, *((_DWORD *)a2 + 2), v9);
    }
  }
  return 0LL;
}
