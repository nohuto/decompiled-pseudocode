/*
 * XREFs of ?ProcessAddViewer@CHolographicClient@@AEAAXPEAUIUnknown@@@Z @ 0x1802A9F10
 * Callers:
 *     ?ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z @ 0x1802AA1A4 (-ProcessMessage@CHolographicClient@@AEAAXIPEAUIUnknown@@PEAX111@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CHolographicClient::ProcessAddViewer(CHolographicClient *this, struct IUnknown *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v7; // rdx
  unsigned int v8; // edx
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_6be85f9e_fb49_4826_8b19_a61973c8ea67,
         &v11) >= 0 )
  {
    v3 = v11;
    v4 = *((unsigned int *)this + 46);
    v5 = 0LL;
    v6 = *((_QWORD *)this + 20);
    if ( (_DWORD)v4 )
    {
      v7 = (_QWORD *)*((_QWORD *)this + 20);
      while ( v11 != *v7 )
      {
        v5 = (unsigned int)(v5 + 1);
        ++v7;
        if ( (unsigned int)v5 >= (unsigned int)v4 )
          goto LABEL_6;
      }
      goto LABEL_11;
    }
LABEL_6:
    v8 = v4 + 1;
    if ( (int)v4 + 1 < (unsigned int)v4 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_16:
      v3 = v11;
LABEL_11:
      if ( v3 )
        (*(void (__fastcall **)(__int64, _QWORD *, __int64, __int64))(*(_QWORD *)v3 + 16LL))(v3, v7, v5, v6);
      return;
    }
    if ( v8 > *((_DWORD *)this + 45) )
    {
      v9 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 160, 8, 1, &v11);
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xC0u, 0LL);
        goto LABEL_16;
      }
    }
    else
    {
      *(_QWORD *)(v6 + 8 * v4) = v11;
      *((_DWORD *)this + 46) = v8;
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 3) + 200LL))(*((_QWORD *)this + 3), v11, v5);
    v3 = 0LL;
    v11 = 0LL;
    goto LABEL_11;
  }
}
