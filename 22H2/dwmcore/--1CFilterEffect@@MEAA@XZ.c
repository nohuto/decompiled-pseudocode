/*
 * XREFs of ??1CFilterEffect@@MEAA@XZ @ 0x1801C1E78
 * Callers:
 *     ??_GCAffineTransform2DEffect@@UEAAPEAXI@Z @ 0x1801C2A60 (--_GCAffineTransform2DEffect@@UEAAPEAXI@Z.c)
 *     ??_ECShadowEffect@@UEAAPEAXI@Z @ 0x1801C2AB0 (--_ECShadowEffect@@UEAAPEAXI@Z.c)
 *     ??_GCCompositeEffect@@UEAAPEAXI@Z @ 0x1801C2B50 (--_GCCompositeEffect@@UEAAPEAXI@Z.c)
 *     ??_GCBrightnessEffect@@UEAAPEAXI@Z @ 0x1801C2BA0 (--_GCBrightnessEffect@@UEAAPEAXI@Z.c)
 *     ??_GCColorMatrixEffect@@UEAAPEAXI@Z @ 0x1801C2C90 (--_GCColorMatrixEffect@@UEAAPEAXI@Z.c)
 *     ??_GCFilterEffect@@MEAAPEAXI@Z @ 0x1801C2EC0 (--_GCFilterEffect@@MEAAPEAXI@Z.c)
 *     ??_GCLinearTransferEffect@@UEAAPEAXI@Z @ 0x18023A800 (--_GCLinearTransferEffect@@UEAAPEAXI@Z.c)
 *     ??1CTableTransferEffect@@UEAA@XZ @ 0x18025472C (--1CTableTransferEffect@@UEAA@XZ.c)
 *     ??_ECTurbulenceEffect@@UEAAPEAXI@Z @ 0x180255250 (--_ECTurbulenceEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CMap@_K_KV?$CMapEqualHelper@_K_K@@@@QEAAXXZ @ 0x18010ECB4 (-RemoveAll@-$CMap@_K_KV-$CMapEqualHelper@_K_K@@@@QEAAXXZ.c)
 *     ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAA@XZ @ 0x1801C185C (--1-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAA@XZ.c)
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x18021C3A4 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 */

void __fastcall CFilterEffect::~CFilterEffect(CFilterEffect *this)
{
  *(_QWORD *)this = &CFilterEffect::`vftable';
  CFilterEffect::EmptyFilterInputMap(this);
  CMap<unsigned __int64,unsigned __int64,CMapEqualHelper<unsigned __int64,unsigned __int64>>::RemoveAll((__int64)this + 136);
  CDeviceResourceTable<CD2DInk,CInk>::~CDeviceResourceTable<CD2DInk,CInk>((_QWORD *)this + 10);
  *(_QWORD *)this = &CNotificationResource::`vftable';
  CResource::~CResource(this);
}
