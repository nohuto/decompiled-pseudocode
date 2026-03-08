/*
 * XREFs of ?GetLockableSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1C029B758
 * Callers:
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C02C958C (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0102BC4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C027773C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?IsSurfaceLockable@@YAHPEAU_SURFOBJ@@PEAPEAUDHPDEV__@@@Z @ 0x1C029B958 (-IsSurfaceLockable@@YAHPEAU_SURFOBJ@@PEAPEAUDHPDEV__@@@Z.c)
 */

struct _SURFOBJ *__fastcall UMPDSURFOBJ::GetLockableSURFOBJ(UMPDSURFOBJ *this, struct _SURFOBJ *a2)
{
  SURFOBJ *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  HSURF hsurf; // [rsp+40h] [rbp-18h]
  UMPDSURFOBJ *p_lDelta; // [rsp+60h] [rbp+8h] BYREF
  int v9; // [rsp+68h] [rbp+10h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

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
      if ( (unsigned int)dword_1C0357098 > 5 )
      {
        if ( tlgKeywordOn((__int64)&dword_1C0357098, 0x400000000000LL) )
        {
          LODWORD(p_lDelta) = 0;
          v9 = 1;
          v11 = 0x1000000LL;
          v10 = 75782;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
            v3,
            byte_1C03200B1,
            v4,
            v5,
            (__int64)&v10,
            (__int64)&v11,
            (__int64)&v9,
            (__int64)&p_lDelta);
        }
      }
    }
  }
  return v2;
}
