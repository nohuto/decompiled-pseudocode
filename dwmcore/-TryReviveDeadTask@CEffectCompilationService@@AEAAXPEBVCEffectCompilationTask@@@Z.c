/*
 * XREFs of ?TryReviveDeadTask@CEffectCompilationService@@AEAAXPEBVCEffectCompilationTask@@@Z @ 0x1800E382C
 * Callers:
 *     ?BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescription@Composition@UI@Windows@@PEAPEAVCEffectCompilationTask@@@Z @ 0x1800E3414 (-BeginCompile@CEffectCompilationService@@QEAAJPEAVCCompiledEffectTemplate@@PEAUIEffectDescriptio.c)
 * Callees:
 *     ?erase@?$deque@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@@std@@@std@@@2@0@Z @ 0x18001A780 (-erase@-$deque@V-$ComPtr@VCEffectCompilationTask@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VCEffec.c)
 */

void __fastcall CEffectCompilationService::TryReviveDeadTask(
        CEffectCompilationService *this,
        const struct CEffectCompilationTask *a2)
{
  __int64 *v2; // r10
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rdi
  __int64 *v5; // r9
  __int64 v6; // r11
  _QWORD v7[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v8[3]; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v9; // [rsp+50h] [rbp-28h] BYREF

  v2 = (__int64 *)((char *)this + 176);
  v3 = *((_QWORD *)this + 25);
  v4 = v3 + *((_QWORD *)this + 26);
  if ( this == (CEffectCompilationService *)-176LL )
  {
    v5 = 0LL;
  }
  else
  {
    v5 = (__int64 *)*v2;
    if ( *v2 )
    {
      v6 = *v5;
      goto LABEL_4;
    }
  }
  v6 = 0LL;
LABEL_4:
  while ( v3 != v4 )
  {
    if ( *(const struct CEffectCompilationTask **)(*(_QWORD *)(*(_QWORD *)(v6 + 8)
                                                             + 8 * ((*(_QWORD *)(v6 + 16) - 1LL) & (v3 >> 1)))
                                                 + 8 * (v3 & 1)) == a2 )
    {
      v7[1] = 0LL;
      v8[1] = 0LL;
      v7[0] = v5;
      v8[0] = v5;
      v8[2] = v3;
      v7[2] = v3 + 1;
      std::deque<Microsoft::WRL::ComPtr<CEffectCompilationTask>>::erase(v2, &v9, (__int64)v8, (__int64)v7);
      return;
    }
    ++v3;
  }
}
