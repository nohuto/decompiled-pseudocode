/*
 * XREFs of ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C0079F18
 * Callers:
 *     GreHintSpriteShape @ 0x1C00D41D4 (GreHintSpriteShape.c)
 *     ?bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@PEAPEAV3@@Z @ 0x1C0134444 (-bSpDwmCreateLogicalSurface@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagSIZE@@P.c)
 *     SFMLOGICALSURFACE_CreateHLSURFCloneWrap @ 0x1C0268A70 (SFMLOGICALSURFACE_CreateHLSURFCloneWrap.c)
 * Callees:
 *     ?Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z @ 0x1C007C85C (-Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z.c)
 *     ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C007C930 (-SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C007E7B4 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x1C00D5374 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00D5ED4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0HmgInsertObjectHelper@@QEAA@XZ @ 0x1C02651D4 (--0HmgInsertObjectHelper@@QEAA@XZ.c)
 */

HLSURF __fastcall SFMLOGICALSURFACE::CreateHLSURFClone(HDEV a1, struct SFMLOGICALSURFACE *a2, int a3, int a4, int a5)
{
  HLSURF v5; // r14
  int v9; // edi
  int v11; // r15d
  __int64 Object; // rax
  __int64 v13; // rbx
  unsigned int v14; // edi
  __int64 v15; // rax
  __int64 v16; // r8
  HLSURF v17; // rcx
  __int64 v18; // rax
  __int64 v19; // [rsp+30h] [rbp-51h] BYREF
  __int64 v20; // [rsp+38h] [rbp-49h] BYREF
  __int64 v21; // [rsp+40h] [rbp-41h] BYREF
  __int64 v22; // [rsp+48h] [rbp-39h] BYREF
  __int64 v23; // [rsp+50h] [rbp-31h] BYREF
  __int64 v24; // [rsp+58h] [rbp-29h] BYREF
  int v25; // [rsp+60h] [rbp-21h]
  int v26; // [rsp+64h] [rbp-1Dh]
  __int64 v27; // [rsp+68h] [rbp-19h]
  _BYTE v28[32]; // [rsp+70h] [rbp-11h] BYREF
  __int64 v29; // [rsp+90h] [rbp+Fh]
  __int64 v31; // [rsp+E8h] [rbp+67h] BYREF

  v5 = 0LL;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v20);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v20);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v19);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v19);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v31);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v31);
  v9 = *((_DWORD *)a2 + 63);
  v24 = *((_QWORD *)a2 + 33);
  v25 = *((_DWORD *)a2 + 68);
  v26 = *((_DWORD *)a2 + 69);
  v27 = *((_QWORD *)a2 + 25);
  if ( !v20 || !v19 || !v31 )
    goto LABEL_7;
  if ( a3 )
  {
    if ( *((_QWORD *)a2 + 16) )
    {
      v21 = *((_QWORD *)a2 + 16);
      if ( !RGNOBJ::bCopy((RGNOBJ *)&v20, (struct RGNOBJ *)&v21) )
        goto LABEL_7;
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
    v22 = *((_QWORD *)a2 + 10);
    if ( !RGNOBJ::bCopy((RGNOBJ *)&v19, (struct RGNOBJ *)&v22) )
      goto LABEL_7;
  }
  else
  {
    a4 = 0;
  }
  v11 = a5;
  if ( a5 && *((_QWORD *)a2 + 11) )
  {
    v23 = *((_QWORD *)a2 + 11);
    if ( !RGNOBJ::bCopy((RGNOBJ *)&v31, (struct RGNOBJ *)&v23) )
      goto LABEL_7;
  }
  else
  {
    v11 = 0;
  }
  Object = AllocateObject(304LL, 18LL, 1LL);
  v13 = Object;
  if ( !Object )
  {
LABEL_7:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v31);
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
    *(_DWORD *)(v13 + 252) = v9;
    *(_DWORD *)(v13 + 212) = *((_DWORD *)a2 + 53);
    *(_DWORD *)(v13 + 240) = *((_DWORD *)a2 + 60);
    HmgInsertObjectHelper::HmgInsertObjectHelper((HmgInsertObjectHelper *)v28);
    if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)v28, (struct OBJECT *)v13, 0x12u, 8u) )
    {
      v5 = *(HLSURF *)v13;
      v14 = (v9 & 0x10 | 0x40u) >> 4;
      if ( (int)SpNotifyLSurface(a1, *(HLSURF *)v13, 1, v14, (struct _CD_HLSURF_CREATIONCONTEXT *)&v24) >= 0 )
        *(_QWORD *)(v13 + 24) = a1;
      if ( a3 )
      {
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v20);
        v15 = v20;
        v20 = 0LL;
        *(_QWORD *)(v13 + 128) = v15;
      }
      if ( a4 )
      {
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v19);
        v16 = v19;
        v19 = 0LL;
        v17 = *(HLSURF *)v13;
        *(_QWORD *)(v13 + 80) = v16;
        EtwTraceLifetimeAccum(v17, 1LL);
      }
      if ( v11 )
      {
        RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v31);
        v18 = v31;
        v31 = 0LL;
        *(_QWORD *)(v13 + 88) = v18;
      }
      EtwLogicalSurfCreateEvent(v5, v14);
    }
    else
    {
      bhLSurfDestroyLogicalSurfaceObject((struct SFMLOGICALSURFACE *)v13, 0);
    }
    if ( v29 )
      _InterlockedDecrement((volatile signed __int32 *)(v29 + 12));
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v28);
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v31);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v19);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v20);
  return v5;
}
