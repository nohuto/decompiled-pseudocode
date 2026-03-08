/*
 * XREFs of ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C00272F4
 * Callers:
 *     GreHintSpriteShape @ 0x1C002C80C (GreHintSpriteShape.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C01288C4 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     SFMLOGICALSURFACE_CreateHLSURFCloneWrap @ 0x1C026B380 (SFMLOGICALSURFACE_CreateHLSURFCloneWrap.c)
 * Callees:
 *     ?Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z @ 0x1C002830C (-Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z.c)
 *     ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C00283E0 (-SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00287BC (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C0029D88 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x1C002D6F0 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 */

HLSURF __fastcall SFMLOGICALSURFACE::CreateHLSURFClone(HDEV a1, struct SFMLOGICALSURFACE *a2, int a3, int a4, int a5)
{
  HLSURF v5; // r14
  int v9; // edi
  int v10; // r15d
  __int64 Object; // rax
  __int64 v12; // rbx
  unsigned int v13; // edi
  __int64 v15; // r8
  HLSURF v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+38h] [rbp-48h] BYREF
  __int64 v21; // [rsp+40h] [rbp-40h] BYREF
  __int64 v22; // [rsp+48h] [rbp-38h] BYREF
  __int64 v23; // [rsp+50h] [rbp-30h] BYREF
  __int64 v24; // [rsp+58h] [rbp-28h] BYREF
  __int64 v25; // [rsp+60h] [rbp-20h] BYREF
  int v26; // [rsp+68h] [rbp-18h]
  int v27; // [rsp+6Ch] [rbp-14h]
  __int64 v28; // [rsp+70h] [rbp-10h]
  __int64 v30; // [rsp+C8h] [rbp+48h] BYREF

  v5 = 0LL;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v20);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v19);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v19);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v30);
  v9 = *((_DWORD *)a2 + 63);
  v25 = *((_QWORD *)a2 + 33);
  v26 = *((_DWORD *)a2 + 68);
  v27 = *((_DWORD *)a2 + 69);
  v28 = *((_QWORD *)a2 + 25);
  if ( !v20 || !v19 || !v30 )
    goto LABEL_33;
  if ( a3 )
  {
    if ( *((_QWORD *)a2 + 16) )
    {
      v22 = *((_QWORD *)a2 + 16);
      if ( !RGNOBJ::bCopy((RGNOBJ *)&v20, (struct RGNOBJ *)&v22) )
        goto LABEL_33;
    }
    else
    {
      a3 = 0;
    }
  }
  else
  {
    v9 &= ~2u;
  }
  if ( a4 && *((_QWORD *)a2 + 10) )
  {
    v23 = *((_QWORD *)a2 + 10);
    if ( !RGNOBJ::bCopy((RGNOBJ *)&v19, (struct RGNOBJ *)&v23) )
      goto LABEL_33;
  }
  else
  {
    a4 = 0;
  }
  v10 = a5;
  if ( a5 && *((_QWORD *)a2 + 11) )
  {
    v24 = *((_QWORD *)a2 + 11);
    if ( !RGNOBJ::bCopy((RGNOBJ *)&v30, (struct RGNOBJ *)&v24) )
      goto LABEL_33;
  }
  else
  {
    v10 = 0;
  }
  Object = AllocateObject(304LL, 18LL);
  v12 = Object;
  if ( !Object )
  {
LABEL_33:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v30);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v19);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
    return 0LL;
  }
  if ( (unsigned int)SFMLOGICALSURFACE::Initialize(
                       Object,
                       *((_QWORD *)a2 + 33),
                       *((unsigned int *)a2 + 68),
                       *((unsigned int *)a2 + 69),
                       *((_QWORD *)a2 + 25),
                       *((_DWORD *)a2 + 72)) )
  {
    v21 = 0LL;
    *(_DWORD *)(v12 + 252) = v9;
    *(_DWORD *)(v12 + 212) = *((_DWORD *)a2 + 53);
    *(_DWORD *)(v12 + 240) = *((_DWORD *)a2 + 60);
    if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v21, (struct OBJECT *)v12, 0x12u, 8u) )
    {
      v5 = *(HLSURF *)v12;
      v13 = (v9 & 0x10 | 0x40u) >> 4;
      if ( (int)SpNotifyLSurface(a1, *(HLSURF *)v12, 1, v13, (struct _CD_HLSURF_CREATIONCONTEXT *)&v25) >= 0 )
        *(_QWORD *)(v12 + 24) = a1;
      if ( a3 )
      {
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v20);
        v18 = v20;
        v20 = 0LL;
        *(_QWORD *)(v12 + 128) = v18;
      }
      if ( a4 )
      {
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v19);
        v15 = v19;
        v19 = 0LL;
        v16 = *(HLSURF *)v12;
        *(_QWORD *)(v12 + 80) = v15;
        EtwTraceLifetimeAccum(v16, 1LL);
      }
      if ( v10 )
      {
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v30);
        v17 = v30;
        v30 = 0LL;
        *(_QWORD *)(v12 + 88) = v17;
      }
      EtwLogicalSurfCreateEvent(v5, v13);
    }
    else
    {
      bhLSurfDestroyLogicalSurfaceObject((struct SFMLOGICALSURFACE *)v12, 0);
    }
    if ( v21 )
      _InterlockedDecrement((volatile signed __int32 *)(v21 + 12));
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v30);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v19);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
  return v5;
}
