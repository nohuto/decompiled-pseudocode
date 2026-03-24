/*
 * XREFs of ?Update@BulkAnimator@Particles@@SAXPEBVISingleInputAnimator@2@MUParticleStreamInfo@2@1I@Z @ 0x1801DBDD8
 * Callers:
 *     ?ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z @ 0x1801DEB14 (-ApplyActiveBehaviors@CParticleEmitterVisual@@IEAAXM@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Particles::BulkAnimator::Update(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, unsigned int a5)
{
  __int64 v8; // rbx
  __int64 result; // rax
  __int64 v10; // r14
  unsigned int v11; // edi
  __int64 i; // r13
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  _QWORD v17[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+48h] [rbp-30h]

  v8 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) >> 2;
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v10 = *a4;
  v11 = 0;
  for ( i = (unsigned int)result; v11 < a5; v10 += 4 * result )
  {
    v13 = *((unsigned int *)a4 + 2);
    v17[0] = v8;
    v14 = v10 + 4 * v13;
    v17[1] = v14;
    if ( !v14 && v8
      || (v15 = *(unsigned int *)(a3 + 8),
          v16 = v11 * *(_DWORD *)(a3 + 12),
          v18 = i,
          (v19 = *(_QWORD *)a3 + 4 * (v15 + v16)) == 0)
      && (_DWORD)i )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    (*(void (__fastcall **)(__int64, __int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 8LL))(a1, v14, &v18, v17);
    result = *((unsigned int *)a4 + 3);
    ++v11;
  }
  return result;
}
