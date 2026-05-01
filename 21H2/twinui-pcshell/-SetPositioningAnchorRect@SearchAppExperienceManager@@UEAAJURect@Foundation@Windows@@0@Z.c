/*
 * XREFs of ?SetPositioningAnchorRect@SearchAppExperienceManager@@UEAAJURect@Foundation@Windows@@0@Z @ 0x180266070
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062024 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SearchAppExperienceManager::SetPositioningAnchorRect(__int64 a1, float *a2, float *a3)
{
  float v5; // xmm1_4
  int v6; // r10d
  int v7; // r9d
  float v8; // xmm1_4
  int v9; // edx
  int v10; // ecx
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  int v16[4]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v17; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a3[1];
  v6 = (int)(float)(*a3 + a3[2]);
  v7 = (int)(float)(v5 + a3[3]);
  *(_DWORD *)(a1 + 572) = (int)*a3;
  *(_DWORD *)(a1 + 576) = (int)v5;
  *(_DWORD *)(a1 + 580) = v6;
  *(_DWORD *)(a1 + 584) = v7;
  v8 = a2[1];
  v9 = (int)(float)(*a2 + a2[2]);
  v10 = (int)(float)(v8 + a2[3]);
  *(_DWORD *)(a1 + 588) = (int)*a2;
  *(_DWORD *)(a1 + 592) = (int)v8;
  *(_DWORD *)(a1 + 596) = v9;
  *(_DWORD *)(a1 + 600) = v10;
  v11 = *(__int64 **)(a1 + 496);
  v12 = *v11;
  *(_OWORD *)v16 = *(_OWORD *)a3;
  v17 = *(_OWORD *)a2;
  v13 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, int *))(v12 + 40))(v11, &v17, v16);
  v14 = v13;
  if ( v13 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33D,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v13);
  return v14;
}
