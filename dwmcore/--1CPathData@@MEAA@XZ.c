/*
 * XREFs of ??1CPathData@@MEAA@XZ @ 0x1800A9B0C
 * Callers:
 *     ??_GCPathData@@MEAAPEAXI@Z @ 0x1800A9AD0 (--_GCPathData@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Attach@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAXPEAUID2D1PathGeometry@@@Z @ 0x1800AB9BC (-Attach@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAXPEAUID2D1PathGeometry@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E0830 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CPathData::~CPathData(CPathData *this)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0LL;
  *(_QWORD *)this = &CPathData::`vftable';
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::Attach(&v2, *((_QWORD *)this + 8));
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v2);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 5);
  std::vector<unsigned char>::_Tidy((char *)this + 16);
}
