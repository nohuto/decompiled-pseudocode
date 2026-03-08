/*
 * XREFs of ??1?$CAtlasedRectsGroupGeneratedT@VCAtlasedRectsGroup@@VCContent@@@@MEAA@XZ @ 0x180023124
 * Callers:
 *     ??_ECAtlasedRectsGroup@@UEAAPEAXI@Z @ 0x1800230E0 (--_ECAtlasedRectsGroup@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$UnRegisterNotifiers@VCTransform@@@CResource@@QEAAXPEAV?$vector@PEAVCTransform@@V?$allocator@PEAVCTransform@@@std@@@std@@@Z @ 0x180023234 (--$UnRegisterNotifiers@VCTransform@@@CResource@@QEAAXPEAV-$vector@PEAVCTransform@@V-$allocator@P.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall CAtlasedRectsGroupGeneratedT<CAtlasedRectsGroup,CContent>::~CAtlasedRectsGroupGeneratedT<CAtlasedRectsGroup,CContent>(
        struct CResource **this)
{
  CResource::UnRegisterNotifierInternal((CResource *)this, this[9]);
  this[9] = 0LL;
  CResource::UnRegisterNotifiers<CTransform>((CResource *)this);
  if ( this[10] )
  {
    std::_Deallocate<16,0>(this[10], (this[12] - this[10]) & 0xFFFFFFFFFFFFFFF8uLL);
    this[10] = 0LL;
    this[11] = 0LL;
    this[12] = 0LL;
  }
  CResource::~CResource((CResource *)this);
}
