/*
 * XREFs of ?bCopy@RGNOBJAPI@@QEAAHAEAVRGNOBJ@@@Z @ 0x1C0027DA0
 * Callers:
 *     GreCombineRgn @ 0x1C006EFF0 (GreCombineRgn.c)
 *     GreCopyVisRgn @ 0x1C00CA430 (GreCopyVisRgn.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0023C00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C0024160 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ?bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z @ 0x1C0024D60 (-bSwap@RGNOBJAPI@@QEAAHPEAVRGNOBJ@@@Z.c)
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C0025A8C (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vCopy@RGNOBJ@@QEAAXAEAV1@@Z @ 0x1C00267E0 (-vCopy@RGNOBJ@@QEAAXAEAV1@@Z.c)
 */

__int64 __fastcall RGNOBJAPI::bCopy(RGNOBJAPI *this, struct RGNOBJ *a2)
{
  __int64 v3; // r8
  unsigned int v5; // edx
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v9; // ebx
  __int128 *v10; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+28h] [rbp-10h]

  v3 = *(_QWORD *)a2;
  v5 = 112;
  v6 = *(_DWORD *)(*(_QWORD *)this + 24LL);
  v7 = *(_DWORD *)(v3 + 80);
  if ( (v6 >= v7 || *(_DWORD *)(v3 + 24) <= 0x70u) && (v6 <= 0x70 || *(_DWORD *)(v3 + 24) > 0x70u) )
  {
    RGNOBJ::vCopy(this, a2);
    return 1LL;
  }
  else
  {
    if ( v7 > 0x70 )
      v5 = *(_DWORD *)(v3 + 80);
    v9 = 0;
    v11 = 0;
    RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v10, v5);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v10);
    if ( v10 )
    {
      RGNOBJ::vCopy((RGNOBJ *)&v10, a2);
      v9 = RGNOBJAPI::bSwap((struct OBJECT **)this, &v10);
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
    return v9;
  }
}
