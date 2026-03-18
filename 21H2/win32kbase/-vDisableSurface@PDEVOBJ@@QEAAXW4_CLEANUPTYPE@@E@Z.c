/*
 * XREFs of ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C00CE0D0
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0074810 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C016AB74 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??1SURFREF@@QEAA@XZ @ 0x1C001F08C (--1SURFREF@@QEAA@XZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0021710 (HmgDecrementShareReferenceCountEx.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1C00C9214 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::vDisableSurface(_QWORD *a1, unsigned int a2, char a3)
{
  __int64 v3; // rbx
  struct SURFACE *v7; // rdx
  void (__fastcall *v8)(_QWORD); // rax
  _BYTE v9[32]; // [rsp+20h] [rbp-38h] BYREF
  SURFACE *v10; // [rsp+40h] [rbp-18h]

  v3 = *a1;
  if ( (*(_DWORD *)(*a1 + 40LL) & 0x80000) == 0 && qword_1C029B468 )
    qword_1C029B468(*a1);
  if ( qword_1C029B520 && (int)qword_1C029B520() >= 0 && qword_1C029B528 )
    qword_1C029B528(*a1, a2);
  v7 = *(struct SURFACE **)(*a1 + 2528LL);
  if ( v7 && a3 )
  {
    SURFREF::SURFREF((SURFREF *)v9, v7);
    HmgDecrementShareReferenceCountEx(*(unsigned int **)(*a1 + 2528LL), 0LL);
    *(_QWORD *)(*a1 + 2528LL) = 0LL;
    if ( (*(_DWORD *)(v3 + 40) & 0x8000) != 0 && a2 )
    {
      if ( (unsigned int)SURFACE::bDeleteSurface(v10, a2, 0) )
        v10 = 0LL;
    }
    else
    {
      HmgDecrementShareReferenceCountEx((unsigned int *)v10, 0LL);
      v8 = *(void (__fastcall **)(_QWORD))(v3 + 2696);
      v10 = 0LL;
      if ( v8 )
        v8(*(_QWORD *)(*a1 + 1768LL));
    }
    SURFREF::~SURFREF((SURFREF *)v9);
  }
  else
  {
    *(_QWORD *)(*a1 + 2528LL) = 0LL;
  }
}
