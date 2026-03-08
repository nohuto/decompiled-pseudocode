/*
 * XREFs of ?GetForceForAxis@CNaturalAnimation@@QEAAJW4ScrollAxis@@MMPEAPEAUIScalarForce@@@Z @ 0x1802394BC
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x180230C64 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z @ 0x18009995C (-Get@CWeakResourceReference@@KAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ClearState@CNaturalAnimation@@AEAAXXZ @ 0x180238F38 (-ClearState@CNaturalAnimation@@AEAAXXZ.c)
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x18023AC9C (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CNaturalAnimation::GetForceForAxis(
        __int64 a1,
        int a2,
        float a3,
        float a4,
        struct CWeakResourceReference *a5)
{
  struct CWeakResourceReference *v5; // r15
  char *v8; // rax
  char *v9; // r14
  char *v10; // rbx
  int v11; // eax
  __int64 v12; // rcx
  int v13; // esi
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  struct CWeakResourceReference *v17; // rcx
  void *retaddr; // [rsp+68h] [rbp+0h]

  v5 = a5;
  *(_QWORD *)a5 = 0LL;
  v8 = (char *)operator new(0x28uLL);
  v9 = v8;
  if ( v8 )
  {
    *(_QWORD *)(v8 + 12) = 0LL;
    *(_QWORD *)(v8 + 20) = 0LL;
    *(_QWORD *)(v8 + 28) = 0LL;
    *((_DWORD *)v8 + 9) = 0;
    *((_DWORD *)v8 + 2) = 0;
    *(_QWORD *)v8 = &CNaturalAnimationScalarForceAdapater::`vftable';
    ((void (__fastcall *)(char *))CNaturalAnimationScalarForceAdapater::`vftable')(v8);
    v10 = v9;
  }
  else
  {
    v9 = 0LL;
    v10 = 0LL;
  }
  if ( a2 )
  {
    if ( a2 != 1 )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    *(float *)(a1 + 376) = a4;
    *(float *)(a1 + 340) = a3;
  }
  else
  {
    *(float *)(a1 + 372) = a4;
    *(float *)(a1 + 336) = a3;
  }
  *(_BYTE *)(a1 + 588) |= 0x10u;
  CNaturalAnimation::ClearState((CNaturalAnimation *)a1);
  v11 = CNaturalAnimation::SetupAnimationIfNecessary((CNaturalAnimation *)a1);
  v13 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x39Bu, 0LL);
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 16);
    a5 = 0LL;
    *((_QWORD *)v9 + 3) = v14;
    *((_DWORD *)v9 + 4) = a2;
    v15 = CWeakResourceReference::Get((struct CResource *)a1, &a5);
    v13 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x94u, 0LL);
      v17 = a5;
    }
    else
    {
      v17 = 0LL;
      *((_QWORD *)v9 + 4) = a5;
    }
    if ( v17 )
      (*(void (__fastcall **)(struct CWeakResourceReference *))(*(_QWORD *)v17 + 8LL))(v17);
    if ( v13 >= 0 )
    {
      *(_QWORD *)v5 = v9;
      return (unsigned int)v13;
    }
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0, v13, 0x39Du, 0LL);
  }
  if ( v10 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 8LL))(v10);
  return (unsigned int)v13;
}
