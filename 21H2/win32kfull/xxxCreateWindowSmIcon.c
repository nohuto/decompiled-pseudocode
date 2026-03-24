/*
 * XREFs of xxxCreateWindowSmIcon @ 0x1C0025180
 * Callers:
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C0023584 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxGetWindowSmIcon @ 0x1C0038D48 (xxxGetWindowSmIcon.c)
 *     xxxRecreateSmallIcons @ 0x1C024343C (xxxRecreateSmallIcons.c)
 * Callees:
 *     xxxClientCopyImage @ 0x1C0023A6C (xxxClientCopyImage.c)
 *     HMValidateHandleNoRip @ 0x1C0023C6C (HMValidateHandleNoRip.c)
 *     SetOrClrWF @ 0x1C004DFA8 (SetOrClrWF.c)
 *     GetDpiDependentMetric @ 0x1C00614D0 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0063CBC (GetDpiForSystem.c)
 */

__int64 __fastcall xxxCreateWindowSmIcon(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 *v7; // r12
  __int16 v8; // di
  unsigned int DpiForSystem; // eax
  int DpiDependentMetric; // ebx
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rax

  v5 = 0LL;
  v6 = HMValidateHandleNoRip(a2, 3);
  v7 = (__int64 *)v6;
  if ( v6 )
  {
    v8 = *(_WORD *)(v6 + 74);
    DpiForSystem = GetDpiForSystem();
    DpiDependentMetric = GetDpiDependentMetric(21LL, DpiForSystem);
    v11 = GetDpiForSystem();
    v12 = GetDpiDependentMetric(20LL, v11);
    v13 = xxxClientCopyImage(*v7, (unsigned int)(v8 != 3) + 1, v12, DpiDependentMetric, a3 != 0 ? 0x4000 : 0);
    if ( v13 )
    {
      v5 = *(_QWORD *)v13;
      if ( *(_QWORD *)v13 )
      {
        *(_DWORD *)(v13 + 80) |= 0x80u;
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 264LL) = v5;
        if ( !a3 )
          SetOrClrWF(1LL, a1, 1824LL, 1LL);
      }
    }
  }
  return v5;
}
