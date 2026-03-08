/*
 * XREFs of ?CompleteInteraction@CInteractionProcessor@@QEAAJPEAUIManipulationResource@@@Z @ 0x1801A950C
 * Callers:
 *     ?CompleteInteraction@CInteractionRoot@@UEAAJXZ @ 0x1801A0E00 (-CompleteInteraction@CInteractionRoot@@UEAAJXZ.c)
 *     ?CompleteInteraction@CInteraction@@UEAAJXZ @ 0x180208B80 (-CompleteInteraction@CInteraction@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CInteractionProcessor::CompleteInteraction(
        CInteractionProcessor *this,
        struct IManipulationResource *a2)
{
  struct IManipulationResource *v2; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned int v6; // edi
  __int64 v7; // rcx

  *((_BYTE *)this + 808) &= 0xC0u;
  *((_QWORD *)this + 98) = 0LL;
  v2 = a2;
  *((_DWORD *)this + 198) = 0;
  *((_QWORD *)this + 100) = 0LL;
  *(_QWORD *)((char *)this + 812) = 0LL;
  *(_QWORD *)((char *)this + 820) = 0LL;
  *((_QWORD *)this + 104) = 0LL;
  if ( a2 )
  {
    v4 = *(_QWORD *)a2;
    v5 = 3LL;
    if ( *((_DWORD *)this + 317) != 1 )
      v5 = 0LL;
    (*(void (__fastcall **)(struct IManipulationResource *, __int64))(v4 + 56))(v2, v5);
  }
  *((_BYTE *)this + 148) &= 0xCDu;
  *((_BYTE *)this + 308) &= 0xCDu;
  *((_BYTE *)this + 468) &= 0xCDu;
  *((_BYTE *)this + 628) &= 0xCDu;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 116) = 0;
  *((_DWORD *)this + 156) = 0;
  *(_QWORD *)((char *)this + 1252) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 315) = 0;
  *((_WORD *)this + 624) = 0;
  if ( *(_QWORD *)this )
  {
    (*(void (__fastcall **)(_QWORD, struct IManipulationResource *, struct IManipulationResource *))(**(_QWORD **)this + 32LL))(
      *(_QWORD *)this,
      a2,
      v2);
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)this + 104LL))(*(_QWORD *)this, 0LL);
    if ( (*((_BYTE *)this + 1264) & 8) == 0 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 152LL))(*(_QWORD *)this);
    v7 = *((_QWORD *)this + 20);
    v6 = v7 == 0 ? 0x8007139F : 0;
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 32LL))(v7);
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 20) + 104LL))(*((_QWORD *)this + 20), 0LL);
      if ( (*((_BYTE *)this + 1264) & 8) == 0 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 20) + 152LL))(*((_QWORD *)this + 20));
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 32LL))(*((_QWORD *)this + 40));
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 40) + 104LL))(*((_QWORD *)this + 40), 0LL);
      if ( (*((_BYTE *)this + 1264) & 8) == 0 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 152LL))(*((_QWORD *)this + 40));
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 60) + 32LL))(*((_QWORD *)this + 60));
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 60) + 104LL))(*((_QWORD *)this + 60), 0LL);
      if ( (*((_BYTE *)this + 1264) & 8) == 0 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 60) + 152LL))(*((_QWORD *)this + 60));
    }
  }
  else
  {
    return (unsigned int)-2147019873;
  }
  return v6;
}
