/*
 * XREFs of ??1CInk@@UEAA@XZ @ 0x1801BEC94
 * Callers:
 *     ??_ECInk@@UEAAPEAXI@Z @ 0x1801BFEC0 (--_ECInk@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??1?$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAA@XZ @ 0x1801BE62C (--1-$CDeviceResourceTable@VCD2DInk@@VCInk@@@@QEAA@XZ.c)
 */

void __fastcall CInk::~CInk(CInk *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &CInk::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CInk::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CInk::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 160;
  v3 = *(int *)(*((_QWORD *)this + 8) + 8LL);
  *(_DWORD *)((char *)this + v3 + 60) = v3 - 176;
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 144);
  CDeviceResourceTable<CD2DInk,CInk>::~CDeviceResourceTable<CD2DInk,CInk>((_QWORD *)this + 9);
  CResource::~CResource(this);
}
