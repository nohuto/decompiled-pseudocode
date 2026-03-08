/*
 * XREFs of ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C000A2AC
 * Callers:
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C0093290 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     ?bIsPalDefault@XEPALOBJ@@QEBAHXZ @ 0x1C000A328 (-bIsPalDefault@XEPALOBJ@@QEBAHXZ.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00467B8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@H@Z @ 0x1C0184A08 (--0MDCOBJA@@QEAA@PEAUHDC__@@H@Z.c)
 */

void __fastcall XEPALOBJ::vRemoveFromList(XEPALOBJ *this, struct XDCOBJ *a2)
{
  int v4; // r8d
  HDC v5; // rdx
  HDC v6; // rdx
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v8[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( !(unsigned int)XEPALOBJ::bIsPalDefault(this) )
  {
    v5 = *(HDC *)(*(_QWORD *)a2 + 984LL);
    if ( v5 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v7, v5, v4);
      if ( v7[0] )
      {
        *(_QWORD *)(v7[0] + 992LL) = *(_QWORD *)(*(_QWORD *)a2 + 992LL);
        XDCOBJ::vAltUnlockFast((XDCOBJ *)v7);
      }
    }
    v6 = *(HDC *)(*(_QWORD *)a2 + 992LL);
    if ( v6 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v8, v6, v4);
      if ( v8[0] )
      {
        *(_QWORD *)(v8[0] + 984LL) = *(_QWORD *)(*(_QWORD *)a2 + 984LL);
        XDCOBJ::vAltUnlockFast((XDCOBJ *)v8);
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)a2 + 984LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 56LL));
  }
  *(_QWORD *)(*(_QWORD *)a2 + 992LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)a2 + 984LL) = 0LL;
}
