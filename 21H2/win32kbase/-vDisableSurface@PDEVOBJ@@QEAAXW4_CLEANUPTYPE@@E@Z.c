/*
 * XREFs of ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C00A8750
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00B9900 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C013DBB4 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C002B724 (--1SURFREF@@QEAA@XZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002E210 (HmgDecrementShareReferenceCountEx.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1C00A889C (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C8F1C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::vDisableSurface(_QWORD *a1, unsigned int a2, char a3)
{
  __int64 v3; // rbx
  int v7; // eax
  struct SURFACE *v8; // rdx
  void (__fastcall *v9)(_QWORD); // rax
  _BYTE v10[32]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+40h] [rbp-18h]

  v3 = *a1;
  if ( (*(_DWORD *)(*a1 + 40LL) & 0x80000) == 0 && qword_1C02566E8 )
    qword_1C02566E8(*a1);
  if ( qword_1C02567B0 )
    v7 = qword_1C02567B0();
  else
    v7 = -1073741637;
  if ( v7 >= 0 && qword_1C02567B8 )
    qword_1C02567B8(*a1, a2);
  v8 = *(struct SURFACE **)(*a1 + 2552LL);
  if ( v8 && a3 )
  {
    SURFREF::SURFREF((SURFREF *)v10, v8);
    HmgDecrementShareReferenceCountEx(*(_QWORD *)(*a1 + 2552LL), 0LL);
    *(_QWORD *)(*a1 + 2552LL) = 0LL;
    if ( (*(_DWORD *)(v3 + 40) & 0x8000) != 0 && a2 )
    {
      SURFREF::bDeleteSurface(v10, a2);
    }
    else
    {
      HmgDecrementShareReferenceCountEx(v11, 0LL);
      v9 = *(void (__fastcall **)(_QWORD))(v3 + 2720);
      v11 = 0LL;
      if ( v9 )
        v9(*(_QWORD *)(*a1 + 1800LL));
    }
    SURFREF::~SURFREF((SURFREF *)v10);
  }
  else
  {
    *(_QWORD *)(*a1 + 2552LL) = 0LL;
  }
}
