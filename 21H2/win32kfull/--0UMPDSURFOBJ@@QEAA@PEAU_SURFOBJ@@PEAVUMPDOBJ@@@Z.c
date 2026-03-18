/*
 * XREFs of ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0128EA0
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C0125BC0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C0127170 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C01281A0 (NtGdiEngBitBlt.c)
 *     NtGdiEngTextOut @ 0x1C0128770 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C0128AE0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B0FA0 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCheckAbort @ 0x1C02B1210 (NtGdiEngCheckAbort.c)
 *     NtGdiEngEraseSurface @ 0x1C02B1540 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02B16C0 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02B18D0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02B1CF0 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02B1F10 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02B20C0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B2510 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02B2830 (NtGdiEngStrokePath.c)
 *     NtGdiEngTransparentBlt @ 0x1C02B2B00 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02B3A90 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ?GetLockableSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1C015E148 (-GetLockableSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z.c)
 *     ?ValidateAndReferencePDEV@@YAPEAUHDEV__@@PEAU1@@Z @ 0x1C015F77C (-ValidateAndReferencePDEV@@YAPEAUHDEV__@@PEAU1@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C01D1F5C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1C02713D4 (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 */

UMPDSURFOBJ *__fastcall UMPDSURFOBJ::UMPDSURFOBJ(UMPDSURFOBJ *this, struct _SURFOBJ *a2, struct _SURFOBJ **a3)
{
  struct _SURFOBJ *LockableSURFOBJ; // rax
  int v5; // ecx
  HDEV hdev; // rdi
  int v7; // r8d
  int v8; // r9d
  HDEV v10; // rax
  __int64 v11[5]; // [rsp+40h] [rbp-28h] BYREF
  int v12; // [rsp+70h] [rbp+8h] BYREF
  int v13; // [rsp+78h] [rbp+10h] BYREF
  int v14; // [rsp+88h] [rbp+20h] BYREF

  *((_QWORD *)this + 2) = 0LL;
  LockableSURFOBJ = a2;
  *((_DWORD *)this + 14) = 0;
  *(_QWORD *)this = a2;
  if ( !a2
    || (a2 != a3[9]
      ? (a2 != a3[11]
       ? (a2 != a3[13]
        ? (LockableSURFOBJ = 0LL)
        : (LockableSURFOBJ = a3[12]))
       : (LockableSURFOBJ = a3[10]))
      : (LockableSURFOBJ = a3[8]),
        (*(_QWORD *)this = LockableSURFOBJ) != 0LL
     || (LockableSURFOBJ = UMPDSURFOBJ::GetLockableSURFOBJ(this, a2),
         *(_QWORD *)this = LockableSURFOBJ,
         v5 = 1,
         !LockableSURFOBJ)) )
  {
    v5 = 0;
  }
  *((_DWORD *)this + 2) = v5;
  if ( LockableSURFOBJ )
  {
    hdev = LockableSURFOBJ->hdev;
    if ( hdev )
    {
      v10 = ValidateAndReferencePDEV(LockableSURFOBJ->hdev);
      *((_QWORD *)this + 2) = v10;
      if ( !v10 )
        goto LABEL_15;
    }
    else if ( LockableSURFOBJ->iType )
    {
LABEL_15:
      if ( *((_DWORD *)this + 2) )
      {
        EngUnlockSurface(*(SURFOBJ **)this);
        *((_DWORD *)this + 2) = 0;
      }
      *(_QWORD *)this = 0LL;
      if ( (unsigned int)dword_1C03263F8 > 5 && tlgKeywordOn((__int64)&dword_1C03263F8, 0x400000000000LL) )
      {
        v12 = 0;
        v11[0] = 0x1000000LL;
        v14 = 80611;
        v13 = (hdev != 0LL) + 1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (unsigned int)&dword_1C03263F8,
          (unsigned int)&unk_1C02F2504,
          v7,
          v8,
          (__int64)&v14,
          (__int64)v11,
          (__int64)&v13,
          (__int64)&v12);
      }
      return this;
    }
    CAutoTGO::vGuard((UMPDSURFOBJ *)((char *)this + 24), this, (void (*)(void *))UMPDSURFOBJ::Cleanup);
  }
  return this;
}
