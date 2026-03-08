/*
 * XREFs of ??1CHolographicExclusivePresentData@@EEAA@XZ @ 0x1802ABAF0
 * Callers:
 *     ??_GCHolographicExclusivePresentData@@EEAAPEAXI@Z @ 0x1802ABB6C (--_GCHolographicExclusivePresentData@@EEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHolographicExclusivePresentData::~CHolographicExclusivePresentData(
        CHolographicExclusivePresentData *this)
{
  char *v2; // rcx
  char *v3; // rcx
  char *v4; // rcx

  *(_QWORD *)this = &CHolographicExclusivePresentData::`vftable'{for `IHolographicExclusivePresentData'};
  *((_QWORD *)this + 1) = &CHolographicExclusivePresentData::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  v2 = (char *)*((_QWORD *)this + 6);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  v3 = (char *)*((_QWORD *)this + 5);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v3);
  v4 = (char *)*((_QWORD *)this + 4);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
}
