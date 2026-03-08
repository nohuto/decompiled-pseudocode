/*
 * XREFs of ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x1800AB908
 * Callers:
 *     ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x1800AB374 (-ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z.c)
 *     ?SetProperty@CPathGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180244710 (-SetProperty@CPathGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1800AB96C (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BBC80 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??8CPathData@@QEBA_NAEBV0@@Z @ 0x18012DEDA (--8CPathData@@QEBA_NAEBV0@@Z.c)
 */

void __fastcall CPathGeometry::SetPath(CPathGeometry *this, const struct CPathData *a2, __int64 a3)
{
  _QWORD *v3; // rsi
  char v6; // al

  v3 = (_QWORD *)((char *)this + 144);
  if ( *((_QWORD *)this + 18) && a2 )
    v6 = CPathData::operator==(*v3, a2, a3);
  else
    v6 = *v3 == (_QWORD)a2;
  if ( !v6 )
  {
    Microsoft::WRL::ComPtr<CPathData>::operator=(v3, a2);
    *((_DWORD *)this + 8) |= 1u;
    CResource::NotifyOnChanged(this, 0LL, 0LL);
  }
}
