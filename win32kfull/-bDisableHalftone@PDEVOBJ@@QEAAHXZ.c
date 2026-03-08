/*
 * XREFs of ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C001826C
 * Callers:
 *     PDEVOBJ_bDisableHalftoneWrap @ 0x1C0018170 (PDEVOBJ_bDisableHalftoneWrap.c)
 * Callees:
 *     HT_DestroyDeviceHalftoneInfo @ 0x1C0018188 (HT_DestroyDeviceHalftoneInfo.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C001A4A0 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall PDEVOBJ::bDisableHalftone(PDEVOBJ *this)
{
  _DWORD *v2; // r14
  unsigned int v3; // edi
  char v4; // bp
  _QWORD *v5; // rcx
  bool v6; // bl
  bool v7; // al
  bool v8; // cl
  __int64 i; // rbx
  __int64 ThreadWin32Thread; // r15
  bool v12; // bl
  int v13; // eax

  v2 = PDEVOBJ::pDevHTInfo(this);
  if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x100) != 0 )
  {
    for ( i = 1448LL; i < 1496; i += 8LL )
      bDeleteSurface(*(_QWORD *)(i + *(_QWORD *)this));
  }
  v3 = 1;
  v4 = 1;
  v5 = *(_QWORD **)(*(_QWORD *)this + 1504LL);
  if ( v5 )
  {
    v6 = (unsigned int)bDeletePalette(*v5) != 0;
    v7 = (unsigned int)HT_DestroyDeviceHalftoneInfo(*(_DWORD **)(*(_QWORD *)this + 1504LL)) != 0;
    if ( !v6 || !v7 )
      v4 = 0;
  }
  v8 = 1;
  if ( v2 != *(_DWORD **)(*(_QWORD *)this + 1504LL) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v12 = (unsigned int)bDeletePalette(*(_QWORD *)v2) != 0;
    v13 = HT_DestroyDeviceHalftoneInfo(v2);
    v8 = v12 && v13;
    *(_QWORD *)(ThreadWin32Thread + 288) = 0LL;
  }
  *(_QWORD *)(*(_QWORD *)this + 1504LL) = 0LL;
  if ( !v4 || !v8 )
    return 0;
  return v3;
}
