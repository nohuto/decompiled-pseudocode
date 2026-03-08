/*
 * XREFs of ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C00434E0
 * Callers:
 *     GreCopyVisRgn @ 0x1C003CF00 (GreCopyVisRgn.c)
 *     GreCombineRgn @ 0x1C0041BD0 (GreCombineRgn.c)
 * Callees:
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C0043670 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0044250 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0045420 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0053220 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0055304 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     memmove @ 0x1C00E1EC0 (memmove.c)
 */

__int64 __fastcall RGNOBJAPI::bCopy(RGNOBJAPI *this, struct RGNOBJ *a2)
{
  __int64 v2; // rbp
  __int64 v4; // r14
  bool v5; // cf
  unsigned int v7; // edx
  _DWORD *v8; // rax
  __int64 v9; // r10
  unsigned int v10; // ecx
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // ecx
  unsigned int v24; // esi
  __int64 v25; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)a2;
  v4 = *(_QWORD *)this;
  v5 = *(_QWORD *)a2 != 0LL;
  v7 = 112;
  v8 = (_DWORD *)((v2 + 24) & -(__int64)v5);
  v9 = *(_QWORD *)this + 24LL;
  v5 = *(_QWORD *)this != 0LL;
  v10 = v8[6];
  v11 = *(_DWORD *)(v9 & -(__int64)v5);
  if ( (v11 >= v10 || *v8 <= 0x70u) && (v11 <= 0x70 || *v8 > 0x70u) )
  {
    v12 = v2 + 48;
    v13 = v4 + 48;
    if ( !v2 )
      v12 = 24LL;
    v14 = v2 + 32;
    v15 = v4 + 32;
    if ( !v4 )
      v13 = 24LL;
    *(_DWORD *)v13 = *(_DWORD *)v12;
    v16 = v2 + 52;
    if ( !v2 )
      v16 = 28LL;
    v17 = v4 + 52;
    if ( !v4 )
      v17 = 28LL;
    *(_DWORD *)v17 = *(_DWORD *)v16;
    v18 = v2 + 56;
    if ( !v2 )
      v18 = 32LL;
    v19 = v4 + 56;
    if ( !v4 )
      v19 = 32LL;
    *(_OWORD *)v19 = *(_OWORD *)v18;
    if ( !v2 )
      v14 = 8LL;
    if ( !v4 )
      v15 = 8LL;
    memmove(*(void **)v15, *(const void **)v14, *(unsigned int *)v12);
    v20 = v2 + 40;
    v21 = v4 + 40;
    if ( !v2 )
      v20 = 16LL;
    v22 = *(_DWORD *)v20 - *(_DWORD *)v14;
    if ( !v4 )
      v21 = 16LL;
    *(_QWORD *)v21 = *(_QWORD *)v15 + v22;
    return 1LL;
  }
  else
  {
    if ( v10 > 0x70 )
      v7 = v8[6];
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v25, v7);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v25);
    v24 = 0;
    if ( v25 )
    {
      RGNOBJ::vCopy((RGNOBJ *)&v25, a2);
      v24 = RGNOBJAPI::bSwap(this, (struct RGNOBJ *)&v25);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v25);
    return v24;
  }
}
