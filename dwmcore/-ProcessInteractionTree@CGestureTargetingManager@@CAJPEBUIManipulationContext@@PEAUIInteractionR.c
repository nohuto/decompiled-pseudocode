/*
 * XREFs of ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1801A4ED8
 * Callers:
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1801A4ED8 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z @ 0x1801A5288 (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800EB9F4 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1F6C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     RemoveCountFromEndOfArray_AxisWithType_ @ 0x180129862 (RemoveCountFromEndOfArray_AxisWithType_.c)
 *     ?CombineInteractionFilter@CGestureTargetingManager@@CA?AUInteractionAxis@@AEBU2@0@Z @ 0x1801A4568 (-CombineInteractionFilter@CGestureTargetingManager@@CA-AUInteractionAxis@@AEBU2@0@Z.c)
 *     _anonymous_namespace_::DisableBufferingForInteraction @ 0x1801A45F4 (_anonymous_namespace_--DisableBufferingForInteraction.c)
 *     ?ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionResource@@W4InputType@@PEAUInteractionAxisGroup@@3PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@PEAPEAU3@7@Z @ 0x1801A4ED8 (-ProcessInteractionTree@CGestureTargetingManager@@CAJPEBUIManipulationContext@@PEAUIInteractionR.c)
 *     RemoveCountFromEndOfArrayAndFree @ 0x1801A551C (RemoveCountFromEndOfArrayAndFree.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessInteractionTree(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD),
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 (__fastcall ***a6)(_QWORD),
        _OWORD *a7,
        _DWORD *a8,
        _QWORD *a9,
        _QWORD *a10)
{
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r13
  __int64 (__fastcall *v17)(__int64); // rax
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, _QWORD, __int64 *); // rbx
  int v20; // r14d
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64, __int64 (__fastcall ***)(_QWORD), _QWORD); // rdi
  unsigned int v24; // ebx
  int v25; // eax
  __int64 (__fastcall **v26)(_QWORD); // rax
  _OWORD *v27; // r13
  _QWORD *v28; // r15
  __int64 (__fastcall ***v30)(_QWORD); // [rsp+50h] [rbp-71h] BYREF
  unsigned int v31; // [rsp+58h] [rbp-69h]
  __int64 v32; // [rsp+60h] [rbp-61h]
  unsigned int v33; // [rsp+68h] [rbp-59h] BYREF
  int v34; // [rsp+6Ch] [rbp-55h] BYREF
  int v35; // [rsp+70h] [rbp-51h] BYREF
  __int64 v36; // [rsp+78h] [rbp-49h] BYREF
  _QWORD *v37; // [rsp+80h] [rbp-41h]
  _QWORD *v38; // [rsp+88h] [rbp-39h]
  _OWORD *v39; // [rsp+90h] [rbp-31h] BYREF
  __int128 v40; // [rsp+A0h] [rbp-21h] BYREF

  *(_QWORD *)&v40 = a5;
  v30 = a6;
  *a8 = 3;
  v39 = a7;
  *a9 = 0LL;
  v38 = a10;
  v32 = a4;
  *a10 = 0LL;
  v13 = *(_QWORD *)a1;
  v31 = a3;
  v37 = a9;
  v14 = (*(__int64 (__fastcall **)(__int64))(v13 + 32))(a1);
  v15 = *(_QWORD *)a1;
  v16 = v14;
  v36 = 0LL;
  v34 = 0;
  v35 = 0;
  v17 = *(__int64 (__fastcall **)(__int64))(v15 + 112);
  v33 = 0;
  v18 = v17(a1);
  v19 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 128LL);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v36);
  v20 = v19(v18, a3, &v36);
  if ( v20 >= 0 )
  {
    v21 = v32;
    v22 = v40;
    v20 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), __int64, __int64, int *, _QWORD, int *, __int64 (__fastcall ***)(_QWORD), unsigned int *))(*a2)[3])(
            a2,
            v36,
            v32,
            &v34,
            v40,
            &v35,
            v30,
            &v33);
    if ( v20 >= 0 )
    {
      if ( v16 )
      {
        v23 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD), _QWORD))(*(_QWORD *)a1 + 56LL);
        v24 = v23(a1, a2, v31);
        if ( v24 > (unsigned int)v23(a1, (__int64 (__fastcall ***)(_QWORD))v16, v31)
          || (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, v16) )
        {
          v22 = v40;
          v21 = v32;
        }
        else
        {
          v25 = (*a2)[19](a2);
          v22 = v40;
          v21 = v32;
          if ( !v25 )
          {
            v20 = CGestureTargetingManager::ProcessInteractionTree(
                    a1,
                    v16,
                    v31,
                    v32,
                    v40,
                    (__int64)v30,
                    (__int64)v39,
                    (__int64)a8,
                    (__int64)v37,
                    (__int64)v38);
            if ( v20 < 0 )
              goto LABEL_21;
          }
        }
      }
      RemoveCountFromEndOfArrayAndFree(v33, v30);
      if ( *a8 != 3 )
      {
LABEL_20:
        RemoveCountFromEndOfArray_AxisWithType_(v34, v21 + 8);
        RemoveCountFromEndOfArray_AxisWithType_(v35, v22 + 8);
        goto LABEL_21;
      }
      v26 = *a2;
      v40 = 0LL;
      v27 = v39;
      v20 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _OWORD *, __int64, __int64, __int64 (__fastcall ***)(_QWORD), __int64, _DWORD *, __int128 *))v26[4])(
              a2,
              v39,
              v21,
              v22,
              v30,
              v36,
              a8,
              &v40);
      *v27 = *(_OWORD *)CGestureTargetingManager::CombineInteractionFilter((__int64)&v39, (__int64)v27, (__int64)&v40);
      if ( v20 >= 0 && *a8 == 2
        || *a8 == 1 && anonymous_namespace_::DisableBufferingForInteraction(a1, (__int64)a2, v31) )
      {
        *a8 = 2;
        v30 = a2;
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v30);
        Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v30);
        v20 = 0;
        *v37 = a2;
        Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v30);
LABEL_17:
        if ( *a8 == 4 )
        {
          *a8 = 3;
          v28 = v38;
          if ( !*v38 )
          {
            v30 = a2;
            Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v30);
            Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v30);
            *v28 = a2;
            v20 = 0;
            Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v30);
          }
        }
        goto LABEL_20;
      }
      if ( v20 >= 0 )
        goto LABEL_17;
    }
  }
LABEL_21:
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v36);
  return (unsigned int)v20;
}
