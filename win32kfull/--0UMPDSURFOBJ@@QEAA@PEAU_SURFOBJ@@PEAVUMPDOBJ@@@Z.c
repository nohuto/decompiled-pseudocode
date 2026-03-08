/*
 * XREFs of ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02C958C
 * Callers:
 *     NtGdiEngAlphaBlend @ 0x1C02CAC30 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngBitBlt @ 0x1C02CAFD0 (NtGdiEngBitBlt.c)
 *     NtGdiEngCheckAbort @ 0x1C02CB4E0 (NtGdiEngCheckAbort.c)
 *     NtGdiEngCopyBits @ 0x1C02CB640 (NtGdiEngCopyBits.c)
 *     NtGdiEngEraseSurface @ 0x1C02CBF90 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02CC0E0 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02CC2F0 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02CC710 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02CCA50 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02CCC00 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02CD010 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02CD470 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02CDA40 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02CDD70 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x1C02CE030 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x1C02CE3E0 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02CF650 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C027773C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?GetLockableSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1C029B758 (-GetLockableSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z.c)
 *     ?ValidateAndReferencePDEV@@YAPEAUHDEV__@@PEAU1@@Z @ 0x1C02C9E18 (-ValidateAndReferencePDEV@@YAPEAUHDEV__@@PEAU1@@Z.c)
 */

UMPDSURFOBJ *__fastcall UMPDSURFOBJ::UMPDSURFOBJ(UMPDSURFOBJ *this, struct _SURFOBJ *a2, struct _SURFOBJ **a3)
{
  struct _SURFOBJ *LockableSURFOBJ; // rax
  int v5; // ecx
  HDEV hdev; // rdi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  HDEV v11; // rax
  __int64 v12[5]; // [rsp+40h] [rbp-28h] BYREF
  int v13; // [rsp+70h] [rbp+8h] BYREF
  int v14; // [rsp+78h] [rbp+10h] BYREF
  int v15; // [rsp+88h] [rbp+20h] BYREF

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
      v11 = ValidateAndReferencePDEV(LockableSURFOBJ->hdev);
      *((_QWORD *)this + 2) = v11;
      if ( !v11 )
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
      if ( (unsigned int)dword_1C0357098 > 5 && tlgKeywordOn((__int64)&dword_1C0357098, 0x400000000000LL) )
      {
        v13 = 0;
        v12[0] = 0x1000000LL;
        v15 = 80611;
        v14 = (hdev != 0LL) + 1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v7,
          byte_1C03200B1,
          v8,
          v9,
          (__int64)&v15,
          (__int64)v12,
          (__int64)&v14,
          (__int64)&v13);
      }
      return this;
    }
    if ( !*((_DWORD *)this + 14) )
    {
      PushThreadGuardedObject((char *)this + 24, this, UMPDSURFOBJ::Cleanup);
      *((_DWORD *)this + 14) = 1;
    }
  }
  return this;
}
