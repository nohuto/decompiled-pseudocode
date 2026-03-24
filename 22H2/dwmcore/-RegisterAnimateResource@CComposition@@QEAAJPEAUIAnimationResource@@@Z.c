/*
 * XREFs of ?RegisterAnimateResource@CComposition@@QEAAJPEAUIAnimationResource@@@Z @ 0x180029DC4
 * Callers:
 *     ?RegisterAnimateResource@CBaseAnimation@@QEAAJXZ @ 0x180029D80 (-RegisterAnimateResource@CBaseAnimation@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800B8944 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CComposition::RegisterAnimateResource(CComposition *this, struct IAnimationResource *a2)
{
  unsigned int v3; // eax
  unsigned int v4; // r8d
  int v5; // ebx
  __int64 v6; // rsi
  unsigned int v7; // eax
  int v9; // eax
  unsigned int v10; // ecx
  struct IAnimationResource *v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  v3 = *((_DWORD *)this + 140);
  v4 = v3 + 1;
  if ( v3 + 1 < v3 )
  {
    v5 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    v5 = 0;
    if ( v4 <= *((_DWORD *)this + 139) )
    {
      *(_QWORD *)(*((_QWORD *)this + 67) + 8LL * v3) = a2;
      *((_DWORD *)this + 140) = v4;
      goto LABEL_4;
    }
    v9 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 536, 8LL, 1LL, &v11);
    v5 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xC0u, 0LL);
  }
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v5, 0x7B5u, 0LL);
    return (unsigned int)v5;
  }
LABEL_4:
  v6 = (*(__int64 (__fastcall **)(struct IAnimationResource *))(*(_QWORD *)v11 + 16LL))(v11);
  v7 = (*(__int64 (__fastcall **)(struct IAnimationResource *))(*(_QWORD *)v11 + 32LL))(v11);
  if ( v6 || v7 )
    (*(void (__fastcall **)(_QWORD, _QWORD, unsigned __int64, __int64))(**((_QWORD **)this + 63) + 48LL))(
      *((_QWORD *)this + 63),
      v7,
      (unsigned __int64)v11 | 0xDD00000000000000uLL,
      v6);
  return (unsigned int)v5;
}
