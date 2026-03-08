/*
 * XREFs of ?CreateDoorbell@DXGHWQUEUE@@QEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z @ 0x1C0311FAC
 * Callers:
 *     ?DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z @ 0x1C03130A8 (-DxgkCreateDoorbellInternal@@YAJPEAU_D3DKMT_CREATE_DOORBELL@@_N@Z.c)
 * Callees:
 *     ??0DXGDOORBELL@@IEAA@PEAVDXGHWQUEUE@@@Z @ 0x1C005161C (--0DXGDOORBELL@@IEAA@PEAVDXGHWQUEUE@@@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0EA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C00518EC (--2-$DXGQUOTAALLOCATOR@$0EA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGDOORBELL@@IEAAPEAXI@Z @ 0x1C0051918 (--_GDXGDOORBELL@@IEAAPEAXI@Z.c)
 *     ?Initialize@DXGDOORBELL@@IEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z @ 0x1C03147B8 (-Initialize@DXGDOORBELL@@IEAAJPEAU_D3DKMT_CREATE_DOORBELL@@@Z.c)
 */

__int64 __fastcall DXGHWQUEUE::CreateDoorbell(DXGDOORBELL **this, struct _D3DKMT_CREATE_DOORBELL *a2)
{
  DXGDOORBELL *v4; // rax
  int v5; // edi
  DXGDOORBELL *v6; // rcx

  v4 = (DXGDOORBELL *)DXGQUOTAALLOCATOR<64,1265072196>::operator new(136LL);
  if ( v4 )
    v4 = DXGDOORBELL::DXGDOORBELL(v4, (struct DXGHWQUEUE *)this);
  this[18] = v4;
  if ( v4 )
  {
    v5 = DXGDOORBELL::Initialize(v4, a2);
    if ( v5 < 0 )
    {
      v6 = this[18];
      if ( v6 )
        DXGDOORBELL::`scalar deleting destructor'(v6);
      this[18] = 0LL;
    }
  }
  else
  {
    v5 = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
  }
  return (unsigned int)v5;
}
