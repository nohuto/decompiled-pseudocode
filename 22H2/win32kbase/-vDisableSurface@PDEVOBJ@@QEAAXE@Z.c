/*
 * XREFs of ?vDisableSurface@PDEVOBJ@@QEAAXE@Z @ 0x1C00BBAF0
 * Callers:
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C00C68C0 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C0155C9C (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C003F8A0 (--1SURFREF@@QEAA@XZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C00421F0 (HmgDecrementShareReferenceCountEx.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHH@Z @ 0x1C004BD9C (-bDeleteSurface@SURFREF@@QEAAHH@Z.c)
 *     ??0SURFREF@@QEAA@PEAVSURFACE@@@Z @ 0x1C00BBBE4 (--0SURFREF@@QEAA@PEAVSURFACE@@@Z.c)
 *     ?bAllowDDICall@PDEVOBJ@@QEAAHXZ @ 0x1C00BBC20 (-bAllowDDICall@PDEVOBJ@@QEAAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::vDisableSurface(PDEVOBJ *this, char a2)
{
  __int64 v2; // rbx
  struct SURFACE *v5; // rdx
  void (__fastcall *v6)(_QWORD); // rax
  _BYTE v7[32]; // [rsp+20h] [rbp-38h] BYREF
  int *v8; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  v9 = v2;
  if ( (*(_DWORD *)(v2 + 40) & 0x80000) == 0 && qword_1C0294B00 )
    qword_1C0294B00(v2);
  if ( qword_1C0294BB8 && (int)qword_1C0294BB8() >= 0 && qword_1C0294BC0 )
    qword_1C0294BC0(*(_QWORD *)this);
  v5 = *(struct SURFACE **)(*(_QWORD *)this + 2528LL);
  if ( v5 && a2 )
  {
    SURFREF::SURFREF((SURFREF *)v7, v5);
    HmgDecrementShareReferenceCountEx(*(int **)(*(_QWORD *)this + 2528LL), 0LL);
    *(_QWORD *)(*(_QWORD *)this + 2528LL) = 0LL;
    if ( (unsigned int)PDEVOBJ::bAllowDDICall((PDEVOBJ *)&v9) )
    {
      HmgDecrementShareReferenceCountEx(v8, 0LL);
      v8 = 0LL;
      v6 = *(void (__fastcall **)(_QWORD))(v2 + 2696);
      if ( v6 )
        v6(*(_QWORD *)(*(_QWORD *)this + 1768LL));
    }
    else
    {
      SURFREF::bDeleteSurface((SURFREF *)v7);
    }
    SURFREF::~SURFREF((SURFREF *)v7);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 2528LL) = 0LL;
  }
}
