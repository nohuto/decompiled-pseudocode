/*
 * XREFs of ?ComputeFileviewCheckSumInFontDriverAddressSpace@@YAKPEAPEAU_FONTFILEVIEW@@I@Z @ 0x1C02D7D78
 * Callers:
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C011D1B0 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 * Callees:
 *     ComputeFileviewCheckSum @ 0x1C00BAB00 (ComputeFileviewCheckSum.c)
 *     ??0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C011F720 (--0UmfdHostSharedReadyLock@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ??1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1C028CDF4 (--1AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     ?Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_K@Z @ 0x1C02E29D4 (-Attach@AutoAttachFonDrvProcess@UmfdHostLifeTimeManager@@QEAA_N_K@Z.c)
 */

__int64 __fastcall ComputeFileviewCheckSumInFontDriverAddressSpace(struct _FONTFILEVIEW **a1, unsigned int a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  _BYTE v6[60]; // [rsp+20h] [rbp-58h] BYREF
  int v7; // [rsp+5Ch] [rbp-1Ch]

  v3 = a2;
  v4 = 0;
  UmfdHostLifeTimeManager::UmfdHostSharedReadyLock::UmfdHostSharedReadyLock((UmfdHostLifeTimeManager::UmfdHostSharedReadyLock *)v6);
  v6[56] = 0;
  v7 = 0;
  if ( (_DWORD)v3
    && UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::Attach(
         (UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v6,
         *((_QWORD *)*a1 + 9)) )
  {
    do
    {
      v4 += ComputeFileviewCheckSum(*((_DWORD **)*a1 + 2), *((_DWORD *)*a1 + 6));
      ++a1;
      --v3;
    }
    while ( v3 );
  }
  UmfdHostLifeTimeManager::AutoAttachFonDrvProcess::~AutoAttachFonDrvProcess((UmfdHostLifeTimeManager::AutoAttachFonDrvProcess *)v6);
  return v4;
}
