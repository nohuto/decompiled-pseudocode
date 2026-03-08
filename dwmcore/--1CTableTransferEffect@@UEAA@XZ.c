/*
 * XREFs of ??1CTableTransferEffect@@UEAA@XZ @ 0x18025106C
 * Callers:
 *     ??_GCTableTransferEffect@@UEAAPEAXI@Z @ 0x1802510B0 (--_GCTableTransferEffect@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1800EE108 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall CTableTransferEffect::~CTableTransferEffect(CTableTransferEffect *this)
{
  `vector destructor iterator'(
    (char *)this + 184,
    40LL,
    4LL,
    (void (__fastcall *)(char *))DynArrayIA<float,2,0>::~DynArrayIA<float,2,0>);
  CFilterEffect::~CFilterEffect(this);
}
