/*
 * XREFs of ?Update@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C004411C
 * Callers:
 *     UpdateDirtyVisRgnTrackers @ 0x1C00440C0 (UpdateDirtyVisRgnTrackers.c)
 * Callees:
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x1C0044204 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 */

void __fastcall CVisRgnTrackerProp::Update(CVisRgnTrackerProp *this)
{
  _QWORD *v1; // rdx
  unsigned int v2; // edi
  bool v4; // cl
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rax
  char v8; // r8

  v1 = (_QWORD *)*((_QWORD *)this + 2);
  v2 = 18;
  v4 = 0;
  v5 = v1[13];
  if ( v5 )
  {
    v6 = v1[3];
    if ( v6 )
    {
      v7 = *(_QWORD *)(v6 + 8);
      if ( v7 )
        v4 = v5 == *(_QWORD *)(v7 + 24);
    }
  }
  *((_BYTE *)this + 73) = 0;
  v8 = *(_BYTE *)(v1[5] + 31LL) & 0x10;
  if ( *((_BYTE *)this + 72) || v8 )
  {
    *((_BYTE *)this + 72) = v8 != 0;
    if ( !v4 && (*(_BYTE *)(v1[5] + 31LL) & 4) != 0 )
      v2 = 26;
    if ( (*((_DWORD *)this + 10) & 8) != 0 )
      CVisRgnTrackerProp::UpdateTrackerRegion(this, v2, 0);
    if ( (*((_DWORD *)this + 10) & 6) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 31LL) & 2) != 0 )
        v2 |= 4u;
      CVisRgnTrackerProp::UpdateTrackerRegion(this, v2, 1u);
    }
    if ( (*((_DWORD *)this + 10) & 0xF) != 0 )
      CVisRgnTrackerProp::UpdateTrackerRegion(this, 0, 2u);
  }
}
