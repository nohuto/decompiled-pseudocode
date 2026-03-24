/*
 * XREFs of ?GetLockableSURFOBJ@UMPDSURFOBJ@@AEAAPEAU_SURFOBJ@@PEAU2@@Z @ 0x1C016B1C8
 * Callers:
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C013D3AC (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x1C0001008 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?IsSurfaceLockable@@YAHPEAU_SURFOBJ@@PEAPEAUDHPDEV__@@@Z @ 0x1C016B2FC (-IsSurfaceLockable@@YAHPEAU_SURFOBJ@@PEAPEAUDHPDEV__@@@Z.c)
 */

struct _SURFOBJ *__fastcall UMPDSURFOBJ::GetLockableSURFOBJ(UMPDSURFOBJ *this, struct _SURFOBJ *a2)
{
  SURFOBJ *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  HSURF hsurf; // [rsp+40h] [rbp-18h]
  __int64 v9; // [rsp+48h] [rbp-10h] BYREF
  UMPDSURFOBJ *v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF
  LONG *p_lDelta; // [rsp+78h] [rbp+20h]

  v10 = this;
  hsurf = 0LL;
  if ( a2 )
  {
    p_lDelta = &a2[-1].lDelta;
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
      if ( (unsigned int)dword_1C032A3D8 > 5
        && (qword_1C032A3E8 & 0x400000000000LL) != 0
        && (qword_1C032A3F0 & 0x400000000000LL) == qword_1C032A3F0 )
      {
        LODWORD(v10) = 0;
        v11 = 1;
        v9 = 0x1000000LL;
        v12 = 75782;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v3,
          (int)&unk_1C02F401A,
          v4,
          v5,
          (__int64)&v12,
          (__int64)&v9,
          (__int64)&v11,
          (__int64)&v10);
      }
    }
  }
  return v2;
}
