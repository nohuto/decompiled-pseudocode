/*
 * XREFs of ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x1801E2984
 * Callers:
 *     ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x1801E2874 (-ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PATHGEOMETRY_SETPATH@@@Z.c)
 *     ?SetProperty@CPathGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801E2A00 (-SetProperty@CPathGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180037460 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x1801B1408 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     ??8CPathData@@QEBA_NAEBV0@@Z @ 0x1801B145C (--8CPathData@@QEBA_NAEBV0@@Z.c)
 */

void __fastcall CPathGeometry::SetPath(CPathGeometry *this, const struct CPathData *a2)
{
  __int64 *v2; // rsi
  bool v5; // al

  v2 = (__int64 *)((char *)this + 136);
  if ( *((_QWORD *)this + 17) && a2 )
    v5 = CPathData::operator==(*v2, (__int64)a2);
  else
    v5 = *v2 == (_QWORD)a2;
  if ( !v5 )
  {
    Microsoft::WRL::ComPtr<CPathData>::operator=(v2, (__int64)a2);
    *((_DWORD *)this + 8) |= 1u;
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  }
}
