/*
 * XREFs of ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C013D890
 * Callers:
 *     NtGdiEngCopyBits @ 0x1C013AFF0 (NtGdiEngCopyBits.c)
 *     NtGdiEngStretchBltROP @ 0x1C013B380 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngBitBlt @ 0x1C013BA90 (NtGdiEngBitBlt.c)
 *     NtGdiEngTextOut @ 0x1C013C110 (NtGdiEngTextOut.c)
 *     NtGdiEngStretchBlt @ 0x1C013D2A0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngAlphaBlend @ 0x1C02B2650 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCheckAbort @ 0x1C02B28E0 (NtGdiEngCheckAbort.c)
 *     NtGdiEngEraseSurface @ 0x1C02B2CB0 (NtGdiEngEraseSurface.c)
 *     NtGdiEngFillPath @ 0x1C02B2E40 (NtGdiEngFillPath.c)
 *     NtGdiEngGradientFill @ 0x1C02B3070 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x1C02B3520 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x1C02B3800 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x1C02B39C0 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x1C02B3E30 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x1C02B4290 (NtGdiEngStrokePath.c)
 *     NtGdiEngTransparentBlt @ 0x1C02B4690 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02B56D0 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0001008 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     _tlgKeywordOn @ 0x1C0030648 (_tlgKeywordOn.c)
 *     ?GetLockableSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1C016BAD8 (-GetLockableSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z.c)
 *     ?ValidateAndReferencePDEV@@YAPEAUHDEV__@@PEAU1@@Z @ 0x1C016D7FC (-ValidateAndReferencePDEV@@YAPEAUHDEV__@@PEAU1@@Z.c)
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1C027367C (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 */

UMPDSURFOBJ *__fastcall UMPDSURFOBJ::UMPDSURFOBJ(UMPDSURFOBJ *this, struct _SURFOBJ *a2, struct _SURFOBJ **a3)
{
  struct _SURFOBJ *LockableSURFOBJ; // rax
  int v5; // ecx
  HDEV hdev; // rdi
  bool v7; // al
  HDEV v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13[5]; // [rsp+40h] [rbp-28h] BYREF
  int v14; // [rsp+70h] [rbp+8h] BYREF
  int v15; // [rsp+78h] [rbp+10h] BYREF
  int v16; // [rsp+88h] [rbp+20h] BYREF

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
      v8 = ValidateAndReferencePDEV(LockableSURFOBJ->hdev);
      *((_QWORD *)this + 2) = v8;
      if ( v8 )
        goto LABEL_23;
      v7 = 0;
    }
    else
    {
      v7 = LockableSURFOBJ->iType == 0;
    }
    if ( !v7 )
    {
      if ( *((_DWORD *)this + 2) )
      {
        EngUnlockSurface(*(SURFOBJ **)this);
        *((_DWORD *)this + 2) = 0;
      }
      *(_QWORD *)this = 0LL;
      if ( (unsigned int)dword_1C032B3D8 > 5 && tlgKeywordOn((__int64)&dword_1C032B3D8, 0x400000000000LL) )
      {
        v14 = 0;
        v13[0] = 0x1000000LL;
        v16 = 80611;
        v15 = (hdev != 0LL) + 1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v9,
          (int)&unk_1C02F50FA,
          v10,
          v11,
          (__int64)&v16,
          (__int64)v13,
          (__int64)&v15,
          (__int64)&v14);
      }
      return this;
    }
LABEL_23:
    CAutoTGO::vGuard((UMPDSURFOBJ *)((char *)this + 24), this, (void (*)(void *))UMPDSURFOBJ::Cleanup);
  }
  return this;
}
