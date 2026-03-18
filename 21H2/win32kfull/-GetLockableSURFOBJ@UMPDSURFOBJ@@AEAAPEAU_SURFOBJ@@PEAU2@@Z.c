/*
 * XREFs of ?GetLockableSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1C015E148
 * Callers:
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0128EA0 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     ?IsSurfaceLockable@@YAHPEAU_SURFOBJ@@PEAPEAUDHPDEV__@@@Z @ 0x1C015E26C (-IsSurfaceLockable@@YAHPEAU_SURFOBJ@@PEAPEAUDHPDEV__@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C01D1F5C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

struct _SURFOBJ *__fastcall UMPDSURFOBJ::GetLockableSURFOBJ(UMPDSURFOBJ *this, struct _SURFOBJ *a2)
{
  SURFOBJ *v2; // rbx
  int v3; // r8d
  int v4; // r9d
  HSURF hsurf; // [rsp+40h] [rbp-18h]
  UMPDSURFOBJ *p_lDelta; // [rsp+60h] [rbp+8h] BYREF
  int v8; // [rsp+68h] [rbp+10h] BYREF
  int v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  p_lDelta = this;
  hsurf = 0LL;
  if ( a2 )
  {
    p_lDelta = (UMPDSURFOBJ *)&a2[-1].lDelta;
    if ( a2[-1].lDelta == 1431130959 )
      hsurf = *(HSURF *)&a2[-1].iBitmapFormat;
  }
  if ( hsurf )
    v2 = EngLockSurface(hsurf);
  else
    v2 = 0LL;
  if ( v2 )
  {
    if ( !(unsigned int)IsSurfaceLockable(v2, 0LL) )
    {
      EngUnlockSurface(v2);
      v2 = 0LL;
      if ( (unsigned int)dword_1C03263F8 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C03263F8, 0x400000000000LL) )
        {
          LODWORD(p_lDelta) = 0;
          v8 = 1;
          v10 = 0x1000000LL;
          v9 = 75782;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            (unsigned int)&dword_1C03263F8,
            (unsigned int)&unk_1C02F2504,
            v3,
            v4,
            (__int64)&v9,
            (__int64)&v10,
            (__int64)&v8,
            (__int64)&p_lDelta);
        }
      }
    }
  }
  return v2;
}
