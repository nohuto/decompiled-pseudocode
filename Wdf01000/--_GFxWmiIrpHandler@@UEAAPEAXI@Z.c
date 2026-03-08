/*
 * XREFs of ??_GFxWmiIrpHandler@@UEAAPEAXI@Z @ 0x1C0029B60
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxWmiIrpHandler@@UEAA@XZ @ 0x1C0029B20 (--1FxWmiIrpHandler@@UEAA@XZ.c)
 */

FxWmiIrpHandler *__fastcall FxWmiIrpHandler::`scalar deleting destructor'(FxWmiIrpHandler *this, unsigned int a2)
{
  char v2; // bl
  FxWmiIrpHandler *v4; // rcx

  v2 = a2;
  FxWmiIrpHandler::~FxWmiIrpHandler(this, a2);
  if ( (v2 & 1) != 0 )
  {
    v4 = (FxWmiIrpHandler *)((char *)this - 48);
    if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
      v4 = this;
    FxPoolFree((FX_POOL_TRACKER *)v4);
  }
  return this;
}
