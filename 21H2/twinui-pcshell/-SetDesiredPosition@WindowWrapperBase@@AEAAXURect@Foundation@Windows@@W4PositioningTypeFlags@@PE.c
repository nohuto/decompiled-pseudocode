/*
 * XREFs of ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18000D1C0
 * Callers:
 *     _lambda_401d01c73f60d7ebe16a53195295e8a5_::operator() @ 0x18000CFE8 (_lambda_401d01c73f60d7ebe16a53195295e8a5_--operator().c)
 *     _lambda_e77970cd92140e07acf370381d6037d8_::operator() @ 0x18000D0D8 (_lambda_e77970cd92140e07acf370381d6037d8_--operator().c)
 *     _lambda_e510b34b5f630f9aeb424769ab376110_::operator() @ 0x18034E550 (_lambda_e510b34b5f630f9aeb424769ab376110_--operator().c)
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18000E758 (-IsPPIEdition@@YA_NXZ.c)
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180025914 (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::SetDesiredPosition(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v8; // rdx
  float v9; // xmm1_4
  char v10; // r14
  float v11; // xmm1_4
  _OWORD *v12; // r8
  __int64 result; // rax
  __int128 v14; // xmm1
  char v15; // si
  _OWORD v16[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h]
  int v18; // [rsp+48h] [rbp-30h]

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 216LL))(*(_QWORD *)(a1 + 288));
  *(_BYTE *)(a1 + 512) = 1;
  if ( (a3 & 1) != 0 )
  {
    v9 = *(float *)a2;
    if ( *(float *)(a1 + 496) == *(float *)a2 && *(float *)(a1 + 500) == *(float *)(a2 + 4) )
    {
      a3 &= ~1u;
    }
    else
    {
      *(_DWORD *)(a1 + 500) = *(_DWORD *)(a2 + 4);
      *(float *)(a1 + 496) = v9;
    }
  }
  v10 = 0;
  if ( (a3 & 2) != 0 )
  {
    v11 = *(float *)(a2 + 8);
    if ( *(float *)(a1 + 504) == v11 && *(float *)(a1 + 508) == *(float *)(a2 + 12) )
    {
      if ( !IsPPIEdition() )
        a3 &= ~2u;
    }
    else
    {
      v10 = 1;
      *(_DWORD *)(a1 + 508) = *(_DWORD *)(a2 + 12);
      *(float *)(a1 + 504) = v11;
    }
  }
  v12 = (_OWORD *)(a1 + 520);
  result = *(unsigned int *)(a1 + 560);
  v18 = *(_DWORD *)(a1 + 560);
  v14 = *(_OWORD *)(a1 + 536);
  v16[0] = *(_OWORD *)(a1 + 520);
  v17 = *(_QWORD *)(a1 + 552);
  v16[1] = v14;
  if ( a4 )
  {
    *v12 = *(_OWORD *)a4;
    *(_OWORD *)(a1 + 536) = *(_OWORD *)(a4 + 16);
    *(_QWORD *)(a1 + 552) = *(_QWORD *)(a4 + 32);
    result = *(unsigned int *)(a4 + 40);
    *(_DWORD *)(a1 + 560) = result;
  }
  v15 = 0;
  if ( a4 )
  {
    result = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)a1 + 144LL))(a1, v16);
    v15 = result;
  }
  if ( (a3 & 3) != 0 || v15 )
  {
    LOBYTE(v12) = v15;
    LOBYTE(v8) = v10;
    (*(void (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)a1 + 152LL))(a1, v8, v12);
    result = WindowWrapperBase::PushBoundsToWindow(a1, a3);
    if ( ((a3 & 2) != 0 || v15) && !*(_BYTE *)(a1 + 580) )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 200LL))(a1);
  }
  return result;
}
