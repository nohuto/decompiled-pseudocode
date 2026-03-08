/*
 * XREFs of xxxCreateWindowSmIcon @ 0x1C010A268
 * Callers:
 *     xxxGetWindowSmIcon @ 0x1C009FCA8 (xxxGetWindowSmIcon.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C0107A14 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxRecreateSmallIcons @ 0x1C0230A50 (xxxRecreateSmallIcons.c)
 * Callees:
 *     GetDpiForSystem @ 0x1C0045E5C (GetDpiForSystem.c)
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     GetDpiDependentMetric @ 0x1C00A45B4 (GetDpiDependentMetric.c)
 *     xxxClientCopyImage @ 0x1C0107FC0 (xxxClientCopyImage.c)
 *     HMValidateHandleNoRip @ 0x1C01083AC (HMValidateHandleNoRip.c)
 */

__int64 __fastcall xxxCreateWindowSmIcon(__int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r14
  int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  __int64 v13; // rax

  v5 = 0LL;
  v7 = HMValidateHandleNoRip(a2, 3);
  if ( v7 )
  {
    DpiForSystem = GetDpiForSystem(v6);
    DpiDependentMetric = GetDpiDependentMetric(21, DpiForSystem);
    v11 = GetDpiForSystem(v10);
    v12 = GetDpiDependentMetric(20, v11);
    v13 = xxxClientCopyImage(
            *(_QWORD *)v7,
            (unsigned int)(*(_WORD *)(v7 + 74) != 3) + 1,
            v12,
            DpiDependentMetric,
            a3 != 0 ? 0x4000 : 0);
    if ( v13 )
    {
      v5 = *(_QWORD *)v13;
      if ( *(_QWORD *)v13 )
      {
        *(_DWORD *)(v13 + 80) |= 0x80u;
        *(_QWORD *)(a1[5] + 264) = v5;
        if ( !a3 )
          SetOrClrWF(1, a1, 0x720u, 1);
      }
    }
  }
  return v5;
}
