/*
 * XREFs of NtFlipObjectAddPoolBuffer @ 0x1C007F9A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipPropertySet@@@Z @ 0x1C007E97C (--$CreateFlipPropertySetWorker@VCFlipPropertySet@@@@YAJIPEAUFlipPropertyItem@@_NPEAPEAVCFlipProp.c)
 *     ?AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1C007F06C (-AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 *     ?Release@CFlipPropertySetBase@@QEAAKXZ @ 0x1C007F6D4 (-Release@CFlipPropertySetBase@@QEAAKXZ.c)
 *     ?ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00817F8 (-ResolveHandle@FlipManagerObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

__int64 __fastcall NtFlipObjectAddPoolBuffer(
        void *a1,
        unsigned __int64 *a2,
        void *a3,
        struct _LUID *a4,
        unsigned int a5,
        char *Src)
{
  struct FlipManagerObject *v8; // rdi
  unsigned __int64 v9; // r14
  __int64 v10; // r8
  int v11; // ebx
  char v12; // r8
  struct CFlipPropertySet *v13; // rsi
  struct CFlipPropertySet *v15; // [rsp+30h] [rbp-48h] BYREF
  struct FlipManagerObject *v16; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-38h]
  struct _LUID v18; // [rsp+48h] [rbp-30h] BYREF

  if ( a1 && a2 && a3 && a4 )
  {
    v15 = 0LL;
    v8 = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    if ( &a4[1] < a4 || (unsigned __int64)&a4[1] > MmUserProbeAddress )
      a4 = (struct _LUID *)MmUserProbeAddress;
    v18 = *a4;
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v9 = *a2;
    v17 = *a2;
    KeEnterCriticalRegion();
    v11 = CreateFlipPropertySetWorker<CFlipPropertySet>(a5, Src, v10, &v15);
    v13 = v15;
    if ( v11 >= 0 )
    {
      v11 = FlipManagerObject::ResolveHandle(a1, 2u, v12, &v16);
      v8 = v16;
      if ( v11 >= 0 )
        v11 = FlipManagerObject::AddPoolBuffer(v16, v9, a3, &v18, v13);
    }
    if ( v13 )
      CFlipPropertySetBase::Release(v13);
    if ( v8 )
      ObfDereferenceObject(v8);
    KeLeaveCriticalRegion();
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v11;
}
