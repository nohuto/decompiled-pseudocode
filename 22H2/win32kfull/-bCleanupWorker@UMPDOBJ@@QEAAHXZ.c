/*
 * XREFs of ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C00A1548
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C00A11D0 (NtGdiSetPUMPDOBJ.c)
 *     UMPDOBJ_bCleanupWrap @ 0x1C00A1530 (UMPDOBJ_bCleanupWrap.c)
 *     ??1UMPDREF@@QEAA@XZ @ 0x1C02B1248 (--1UMPDREF@@QEAA@XZ.c)
 * Callees:
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C00A3064 (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 *     DereferenceW32Process @ 0x1C00E5380 (DereferenceW32Process.c)
 *     Feature_2593139002__private_IsEnabledDeviceUsage @ 0x1C016B444 (Feature_2593139002__private_IsEnabledDeviceUsage.c)
 *     EngDeletePath @ 0x1C0286470 (EngDeletePath.c)
 *     ?psoDest@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z @ 0x1C029363C (-psoDest@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z.c)
 *     ?psoMask@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z @ 0x1C0293660 (-psoMask@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z.c)
 *     ?psoSrc@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z @ 0x1C0293684 (-psoSrc@UMPDOBJ@@QEAAHPEAPEAU_SURFOBJ@@H@Z.c)
 */

__int64 __fastcall UMPDOBJ::bCleanupWorker(UMPDOBJ *this)
{
  __int64 result; // rax
  PATHOBJ *v3; // rcx
  void *v4; // rdx
  void *v5; // rdx
  void *v6; // rdx
  int IsEnabledDeviceUsage; // eax
  __int64 v8; // rdx
  _QWORD *v9; // rcx
  void *v10; // rcx
  char v11; // [rsp+20h] [rbp-18h]
  struct _SURFOBJ *v12; // [rsp+40h] [rbp+8h] BYREF

  v11 = 17;
  result = HmgRemoveObject(*(_QWORD *)this, 0LL, 0LL, 1LL, v11, 0LL);
  if ( result )
  {
    v3 = (PATHOBJ *)*((_QWORD *)this + 30);
    if ( v3 )
      EngDeletePath(v3);
    if ( *((_DWORD *)this + 106) )
    {
      v12 = 0LL;
      v4 = (void *)*((_QWORD *)this + 8);
      if ( v4 )
      {
        UMPDOBJ::vClient((UMPDOBJ *)v3, v4);
        UMPDOBJ::psoDest(this, &v12, 0);
      }
      v5 = (void *)*((_QWORD *)this + 10);
      if ( v5 )
      {
        UMPDOBJ::vClient((UMPDOBJ *)v3, v5);
        UMPDOBJ::psoSrc(this, &v12, 0);
      }
      v6 = (void *)*((_QWORD *)this + 12);
      if ( v6 )
      {
        UMPDOBJ::vClient((UMPDOBJ *)v3, v6);
        UMPDOBJ::psoMask(this, &v12, 0);
      }
    }
    if ( *((_QWORD *)this + 44) )
    {
      IsEnabledDeviceUsage = Feature_2593139002__private_IsEnabledDeviceUsage();
      v8 = *((_QWORD *)this + 44);
      v9 = (_QWORD *)*((_QWORD *)this + 47);
      if ( IsEnabledDeviceUsage )
      {
        MmUnmapViewOfSection(*v9, v8);
        DereferenceW32Process(*((_QWORD *)this + 47));
      }
      else
      {
        MmUnmapViewOfSection(v9, v8);
      }
    }
    v10 = (void *)*((_QWORD *)this + 48);
    if ( v10 )
      Win32FreePool(v10);
    return 1LL;
  }
  return result;
}
