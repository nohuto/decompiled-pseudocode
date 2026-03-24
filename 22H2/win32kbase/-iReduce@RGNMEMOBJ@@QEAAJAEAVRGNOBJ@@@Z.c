/*
 * XREFs of ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00BDCFC
 * Callers:
 *     GreExtCreateRegion @ 0x1C0024210 (GreExtCreateRegion.c)
 * Callees:
 *     ?vInitialize@RGNMEMOBJ@@QEAAXK@Z @ 0x1C002C4A8 (-vInitialize@RGNMEMOBJ@@QEAAXK@Z.c)
 *     ?vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ @ 0x1C002CBC0 (-vPushThreadGuardedObject@RGNMEMOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C002CCE4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C0031758 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C0035490 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     ?vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z @ 0x1C0035D50 (-vSet@RGNOBJ@@QEAAXPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall RGNMEMOBJ::iReduce(RGNMEMOBJ *this, struct RGNOBJ *a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rcx
  __int64 v8; // rax
  struct _RECTL *v9; // [rsp+20h] [rbp-20h] BYREF
  int v10; // [rsp+28h] [rbp-18h]
  struct _RECTL v11; // [rsp+30h] [rbp-10h] BYREF

  v3 = 0;
  v9 = 0LL;
  v10 = 0;
  RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v9, 112LL, a3);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v9);
  v11.left = -134217728;
  v11.right = 0x7FFFFFF;
  v11.top = -134217728;
  v11.bottom = 0x7FFFFFF;
  if ( v9
    && (RGNOBJ::vSet(&v9, &v11),
        *(_DWORD *)(*(_QWORD *)this + 96LL) = 0x7FFFFFFF,
        *(_DWORD *)(*(_QWORD *)this + 100LL) = 0x7FFFFFFF,
        *(_DWORD *)(*(_QWORD *)this + 104LL) = 0x80000000,
        *(_DWORD *)(*(_QWORD *)this + 108LL) = 0x80000000,
        (unsigned int)RGNOBJ::bMerge(this, (struct RGNOBJ *)&v9, a2, 8u)) )
  {
    v3 = RGNOBJ::iComplexity(this);
  }
  else
  {
    v7 = *(_QWORD *)this;
    *(_DWORD *)(v7 + 80) = 16;
    *(_DWORD *)(v7 + 84) = 1;
    *(_QWORD *)(v7 + 96) = 0LL;
    *(_QWORD *)(v7 + 104) = 0LL;
    v8 = *(_QWORD *)(v7 + 88);
    *(_DWORD *)v8 = 0;
    *(_DWORD *)(v8 + 4) = 0x80000000;
    *(_QWORD *)(v8 + 8) = 0x7FFFFFFFLL;
    *(_QWORD *)(v7 + 40) = v8 + 16;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((REGION **)&v9);
  return v3;
}
