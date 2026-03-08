/*
 * XREFs of ?vSrcOpaqCopyS8D32Unsafe@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0091D70
 * Callers:
 *     ?vSrcOpaqCopyS8D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z @ 0x1C0091C70 (-vSrcOpaqCopyS8D32@@YAXPEBEJJPEAEJJJJKKPEAVSURFACE@@@Z.c)
 * Callees:
 *     ?vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAUBLENDINFO@@KK@Z @ 0x1C0092030 (-vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAUBLENDINFO@@KK@Z.c)
 *     ?vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAUBLENDINFO@@@Z @ 0x1C0092590 (-vGetBlendInfo@@YAXKPEAVSURFACE@@KPEAUBLENDINFO@@@Z.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 */

void __fastcall vSrcOpaqCopyS8D32Unsafe(
        const unsigned __int8 *a1,
        int a2,
        int a3,
        unsigned __int8 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        struct SURFACE *a11)
{
  __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // rbx
  const unsigned __int8 *v15; // rdx
  unsigned __int8 *v16; // r10
  const unsigned __int8 *v18; // r8
  unsigned __int8 *i; // rax
  _BYTE v20[120]; // [rsp+50h] [rbp-78h] BYREF
  const unsigned __int8 *v22; // [rsp+D0h] [rbp+8h]
  unsigned int v24; // [rsp+F8h] [rbp+30h]

  v12 = a2;
  v24 = a6 - a5;
  memset_0(v20, 0, 0x40uLL);
  v14 = *(_QWORD *)(SGDGetSessionState(v13) + 32);
  if ( *(_QWORD *)a11 != *(_QWORD *)(v14 + 464)
    || a10 != *(_DWORD *)(v14 + 476)
    || a9 != *(_DWORD *)(v14 + 472)
    || *(_DWORD *)(v14 + 8584) != *(_DWORD *)(v14 + 484) )
  {
    vGetBlendInfo(4u, a11, a9, (struct BLENDINFO *)v20);
    vClearTypeLookupTableLoop(4u, a11, (struct BLENDINFO *)v20, a9, a10);
  }
  v15 = &a1[v12];
  v22 = &a1[v12];
  v16 = &a4[4 * a5];
  while ( a8 )
  {
    v18 = v15;
    for ( i = v16; i < &v16[4 * v24]; i += 4 )
      *(_DWORD *)i = *(_DWORD *)(v14 + 4LL * *v18++);
    --a8;
    v15 = &v22[a3];
    v22 = v15;
    v16 += a7;
  }
}
