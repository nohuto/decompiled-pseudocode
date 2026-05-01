/*
 * XREFs of ?PointerUp@CMultitaskingViewElementBase@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x180412EC0
 * Callers:
 *     ?PointerUp@CMultitaskingViewFrameElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18041A720 (-PointerUp@CMultitaskingViewFrameElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInpu.c)
 *     ?PointerUp@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInputArgs@@@Z @ 0x18041EA20 (-PointerUp@CMultitaskingViewButtonElement@@UEAA_NW4PointerButton@@AEBVMultitaskingViewPointerInp.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ?_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA?AVMultitaskingViewPointerInputArgs@@AEBV2@@Z @ 0x180413D4C (-_MapArgumentsToChild@CMultitaskingViewElementBase@@IEAA-AVMultitaskingViewPointerInputArgs@@AEB.c)
 *     ?_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ @ 0x1804141D4 (-_ResetCapture@CMultitaskingViewElementBase@@IEAAXXZ.c)
 */

char __fastcall CMultitaskingViewElementBase::PointerUp(__int64 **a1, unsigned int a2, __int64 *a3)
{
  char v6; // bl
  __int64 *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r8
  char v10; // al
  _BYTE v12[56]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  ((void (__fastcall *)(__int64 **, __int64 *))(*a1)[25])(a1, a3);
  v6 = 0;
  if ( *((_DWORD *)a1 + 25) == a2 )
  {
    v7 = a1[16];
    if ( v7 )
    {
      v8 = *v7;
      v9 = CMultitaskingViewElementBase::_MapArgumentsToChild(a1, v12, a3);
      v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64))(v8 + 208))(v7, a2, v9);
    }
    else
    {
      v13 = *a3;
      if ( !((unsigned __int8 (__fastcall *)(__int64 **, __int64 *))(*a1)[14])(a1, &v13) )
      {
LABEL_7:
        CMultitaskingViewElementBase::_ResetCapture((CMultitaskingViewElementBase *)a1);
        return v6;
      }
      v10 = ((__int64 (__fastcall *)(__int64 **, _QWORD, __int64 *))(*a1)[69])(a1, a2, a3);
    }
    v6 = v10;
    goto LABEL_7;
  }
  return v6;
}
