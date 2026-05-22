/*
 * XREFs of ??1SharedObjectBase@@MEAA@XZ @ 0x1800BEE64
 * Callers:
 *     ??1GameInputServerProxy@@EEAA@XZ @ 0x180042DA4 (--1GameInputServerProxy@@EEAA@XZ.c)
 *     ??_E?$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAAPEAXI@Z @ 0x180042EB0 (--_E-$SharedUnknownBase@UIGameInputServer@@UIAgileObject@@UINoMarshal@@@@MEAAPEAXI@Z.c)
 *     ??_GSharedObjectBase@@MEAAPEAXI@Z @ 0x1800BEE90 (--_GSharedObjectBase@@MEAAPEAXI@Z.c)
 *     ??1SipcServer@@EEAA@XZ @ 0x1800BF32C (--1SipcServer@@EEAA@XZ.c)
 *     ??_E?$SharedUnknownBase@UISIPCEndpoint@@@@MEAAPEAXI@Z @ 0x1800BF3C0 (--_E-$SharedUnknownBase@UISIPCEndpoint@@@@MEAAPEAXI@Z.c)
 *     ??_G?$SharedUnknownBase@UISIPCServer@@@@MEAAPEAXI@Z @ 0x1800BF410 (--_G-$SharedUnknownBase@UISIPCServer@@@@MEAAPEAXI@Z.c)
 *     ??_GSipcEndpoint@@EEAAPEAXI@Z @ 0x1800BF580 (--_GSipcEndpoint@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall SharedObjectBase::~SharedObjectBase(SharedObjectBase *this)
{
  *(_QWORD *)this = &SharedObjectBase::`vftable';
  if ( *((_QWORD *)this + 1) )
    __fastfail(0xEu);
}
