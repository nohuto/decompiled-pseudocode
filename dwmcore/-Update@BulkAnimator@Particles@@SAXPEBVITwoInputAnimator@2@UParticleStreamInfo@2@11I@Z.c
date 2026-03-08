/*
 * XREFs of ?Update@BulkAnimator@Particles@@SAXPEBVITwoInputAnimator@2@UParticleStreamInfo@2@11I@Z @ 0x18023DDE8
 * Callers:
 *     ?ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z @ 0x180240B14 (-ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall Particles::BulkAnimator::Update(__int64 a1, __int64 a2, __int64 *a3, __int64 *a4, unsigned int a5)
{
  unsigned int v9; // ebx
  __int64 result; // rax
  __int64 v11; // r12
  unsigned int v12; // esi
  __int64 v13; // r15
  __int64 v14; // rdi
  __int64 v15; // rbx
  gsl::details *v16; // rcx
  unsigned __int64 v17; // rbx
  __int64 v18; // rbx
  _QWORD v19[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v22; // [rsp+A0h] [rbp+40h]

  v9 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) >> 2;
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v11 = *a3;
  v12 = 0;
  v13 = *a4;
  v22 = result;
  if ( a5 )
  {
    v14 = v9;
    do
    {
      v15 = v13 + 4LL * *((unsigned int *)a4 + 2);
      gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v19, v14);
      v19[1] = v15;
      if ( v19[0] == -1LL
        || !v15 && v19[0]
        || (v17 = *(_QWORD *)a2 + 4 * (*(unsigned int *)(a2 + 8) + (unsigned __int64)(*(_DWORD *)(a2 + 12) * v12)),
            gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v21, v22),
            v21[1] = v17,
            v21[0] == -1LL)
        || !v17 && v21[0]
        || (v18 = v11 + 4LL * *((unsigned int *)a3 + 2),
            gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v20, v14),
            v20[1] = v18,
            v20[0] == -1LL)
        || !v18 && v20[0] )
      {
        gsl::details::terminate(v16);
        JUMPOUT(0x18023DF70LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD *, _QWORD *, _QWORD *))(*(_QWORD *)a1 + 8LL))(a1, v21, v20, v19);
      ++v12;
      v13 += 4LL * *((unsigned int *)a4 + 3);
      result = *((unsigned int *)a3 + 3);
      v11 += 4 * result;
    }
    while ( v12 < a5 );
  }
  return result;
}
