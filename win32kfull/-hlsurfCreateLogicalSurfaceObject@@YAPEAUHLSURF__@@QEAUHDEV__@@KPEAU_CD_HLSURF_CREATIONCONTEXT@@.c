/*
 * XREFs of ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C00286CC
 * Callers:
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C00284DC (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 * Callees:
 *     ?Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z @ 0x1C002830C (-Initialize@SFMLOGICALSURFACE@@QEAAHPEAUHWND__@@IIU_LUID@@W4_HLSURF_DISPOSITION@@@Z.c)
 *     ?SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C00283E0 (-SpNotifyLSurface@@YAJPEAUHDEV__@@PEAUHLSURF__@@HKPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z.c)
 *     ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C0029D88 (-Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x1C002D6F0 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 */

HLSURF __fastcall hlsurfCreateLogicalSurfaceObject(_QWORD *a1, unsigned int a2, struct _CD_HLSURF_CREATIONCONTEXT *a3)
{
  __int64 Object; // rax
  HLSURF v7; // rbx
  __int64 v8; // rdi
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  Object = AllocateObject(304LL, 18LL);
  v7 = 0LL;
  v8 = Object;
  if ( Object
    && (unsigned int)SFMLOGICALSURFACE::Initialize(
                       Object,
                       *(_QWORD *)a3,
                       *((_DWORD *)a3 + 2),
                       *((_DWORD *)a3 + 3),
                       *((_QWORD *)a3 + 2),
                       1) )
  {
    v10 = 0LL;
    if ( HmgInsertObjectHelper::Insert((HmgInsertObjectHelper *)&v10, (struct OBJECT *)v8, 0x12u, 8u) )
    {
      v7 = *(HLSURF *)v8;
      if ( (int)SpNotifyLSurface(a1, *(HLSURF *)v8, 1, a2, a3) >= 0 )
        *(_QWORD *)(v8 + 24) = a1;
      EtwLogicalSurfCreateEvent(v7, a2);
    }
    else
    {
      bhLSurfDestroyLogicalSurfaceObject((struct SFMLOGICALSURFACE *)v8, 0);
    }
    if ( v10 )
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 12));
  }
  return v7;
}
