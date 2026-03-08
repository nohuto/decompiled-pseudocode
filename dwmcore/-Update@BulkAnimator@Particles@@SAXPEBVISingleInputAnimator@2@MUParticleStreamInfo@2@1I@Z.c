/*
 * XREFs of ?Update@BulkAnimator@Particles@@SAXPEBVISingleInputAnimator@2@MUParticleStreamInfo@2@1I@Z @ 0x18023DAA0
 * Callers:
 *     ?ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z @ 0x180240B14 (-ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall Particles::BulkAnimator::Update(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, unsigned int a5)
{
  unsigned int v8; // ebx
  __int64 result; // rax
  __int64 v10; // rsi
  unsigned int v11; // edi
  __int64 v12; // r12
  __int64 v13; // rbx
  gsl::details *v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  _QWORD v17[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+90h] [rbp+8h]

  v8 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) >> 2;
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v10 = *a4;
  v11 = 0;
  v19 = result;
  if ( a5 )
  {
    v12 = v8;
    do
    {
      v13 = v10 + 4LL * *((unsigned int *)a4 + 2);
      gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v17, v12);
      v17[1] = v13;
      if ( v17[0] == -1LL
        || !v13 && v17[0]
        || (v15 = *(_QWORD *)a3 + 4 * (*(unsigned int *)(a3 + 8) + (unsigned __int64)(*(_DWORD *)(a3 + 12) * v11)),
            gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)v18, v19),
            v18[1] = v15,
            v18[0] == -1LL)
        || !v15 && v18[0] )
      {
        gsl::details::terminate(v14);
        JUMPOUT(0x18023DBF2LL);
      }
      (*(void (__fastcall **)(__int64, __int64, _QWORD *, _QWORD *))(*(_QWORD *)a1 + 8LL))(a1, v16, v18, v17);
      result = *((unsigned int *)a4 + 3);
      ++v11;
      v10 += 4 * result;
    }
    while ( v11 < a5 );
  }
  return result;
}
