/*
 * XREFs of GreMakeFontDir @ 0x1C02D77CC
 * Callers:
 *     NtGdiMakeFontDir @ 0x1C02C64D0 (NtGdiMakeFontDir.c)
 * Callees:
 *     ?Remove@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z @ 0x1C0114FF4 (-Remove@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBI@Z.c)
 *     EngMapFontFileFDInternal @ 0x1C0115154 (EngMapFontFileFDInternal.c)
 *     ?UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C01188EC (-UmfdInsertFontFileViewForLookup@@YAHPEAPEAU_FONTFILEVIEW@@I@Z.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C0118E20 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     EngUnmapFontFileFD @ 0x1C011CB40 (EngUnmapFontFileFD.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C011CC38 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C011CC6C (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ??0AutoExclusiveUmfdLookupLock@@QEAA@XZ @ 0x1C011D930 (--0AutoExclusiveUmfdLookupLock@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     GreFillFontDir @ 0x1C02D7380 (GreFillFontDir.c)
 *     ?LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z @ 0x1C02E30C0 (-LoadFontFile@PDEVOBJ@@QEAA_KKPEA_KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KK@Z.c)
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C02E3118 (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 */

__int64 __fastcall GreMakeFontDir(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  int v6; // r12d
  __int64 v7; // rcx
  __int64 v8; // r14
  int inserted; // ebx
  Gre::Base *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rax
  unsigned __int64 v12; // rbx
  struct _IFIMETRICS *v13; // rax
  struct _IFIMETRICS *v14; // rsi
  void (__fastcall *v15)(struct _IFIMETRICS *, unsigned __int64); // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+40h] [rbp-79h] BYREF
  void *v20; // [rsp+48h] [rbp-71h] BYREF
  struct _FONTFILEVIEW *v21; // [rsp+50h] [rbp-69h] BYREF
  unsigned __int64 v22; // [rsp+58h] [rbp-61h] BYREF
  _BYTE v23[16]; // [rsp+60h] [rbp-59h] BYREF
  ULONG_PTR iFile[8]; // [rsp+70h] [rbp-49h] BYREF
  int v25; // [rsp+B0h] [rbp-9h]
  __int64 v26; // [rsp+C0h] [rbp+7h]
  unsigned int v27; // [rsp+138h] [rbp+7Fh] BYREF

  v3 = 0;
  v22 = 0LL;
  v6 = a1;
  v8 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 23448LL);
  if ( !v8 )
    return 0LL;
  if ( !UmfdHostLifeTimeManager::EnsureUmfdHost(v7) )
    return 0LL;
  v19 = v8;
  memset_0(iFile, 0, 0x78uLL);
  v20 = 0LL;
  v27 = 0;
  v21 = (struct _FONTFILEVIEW *)iFile;
  v26 = a3;
  if ( !(unsigned int)EngMapFontFileFDInternal((__int64)iFile, &v20, &v27, 0) )
    return 0LL;
  inserted = UmfdInsertFontFileViewForLookup(&v21, 1u);
  v11 = Gre::Base::Globals(v10);
  if ( inserted )
  {
    v12 = PDEVOBJ::LoadFontFile(
            (PDEVOBJ *)&v19,
            1u,
            (unsigned __int64 *)&v21,
            &v20,
            &v27,
            0LL,
            *((unsigned __int16 *)v11 + 76),
            0);
    if ( v12 )
    {
      if ( v12 != 0xFFFFFFFF )
      {
        v13 = PDEVOBJ::QueryFont((PDEVOBJ *)&v19, 0LL, v12, 1u, &v22);
        v14 = v13;
        if ( v13 )
        {
          v3 = GreFillFontDir((__int64)v13, v6, a2);
          v15 = *(void (__fastcall **)(struct _IFIMETRICS *, unsigned __int64))(v8 + 3000);
          if ( v15 )
            v15(v14, v22);
        }
        v3 &= -((*(unsigned int (__fastcall **)(unsigned __int64))(v8 + 3032))(v12) != 0);
      }
    }
  }
  if ( v25 )
  {
    AutoExclusiveUmfdLookupLock::AutoExclusiveUmfdLookupLock((AutoExclusiveUmfdLookupLock *)v23);
    v17 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v16) + 32) + 23472LL);
    if ( v17 )
    {
      LODWORD(v19) = v25;
      NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::Remove(v17, &v19);
      v25 = 0;
    }
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v23);
  }
  EngUnmapFontFileFD((ULONG_PTR)iFile);
  vUnreferenceFileviewSection((struct _FILEVIEW *)iFile);
  return v3;
}
