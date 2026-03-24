/*
 * XREFs of ?Update@CVisRgnTrackerProp@@QEAAXXZ @ 0x1C00393FC
 * Callers:
 *     UpdateDirtyVisRgnTrackers @ 0x1C00393A0 (UpdateDirtyVisRgnTrackers.c)
 * Callees:
 *     ?UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z @ 0x1C00394E8 (-UpdateTrackerRegion@CVisRgnTrackerProp@@AEAAXKI@Z.c)
 */

void __fastcall CVisRgnTrackerProp::Update(CVisRgnTrackerProp *this)
{
  _QWORD *v1; // rdx
  unsigned int v2; // edi
  char v4; // cl
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rax
  char v9; // r8
  int v10; // eax
  unsigned int v11; // edx

  v1 = (_QWORD *)*((_QWORD *)this + 1);
  v2 = 18;
  v4 = 0;
  v5 = v1[13];
  if ( v5 )
  {
    v6 = v1[3];
    v7 = 0LL;
    if ( v6 )
    {
      v8 = *(_QWORD *)(v6 + 8);
      if ( v8 )
        v7 = *(_QWORD *)(v8 + 24);
    }
    if ( v5 == v7 )
      v4 = 1;
  }
  *((_BYTE *)this + 65) = 0;
  v9 = *(_BYTE *)(v1[5] + 31LL) & 0x10;
  if ( *((_BYTE *)this + 64) || v9 )
  {
    *((_BYTE *)this + 64) = v9 != 0;
    if ( !v4 && (*(_BYTE *)(v1[5] + 31LL) & 4) != 0 )
      v2 = 26;
    v10 = *((_DWORD *)this + 8);
    if ( (v10 & 8) != 0 )
    {
      CVisRgnTrackerProp::UpdateTrackerRegion(this, v2, 0);
      v10 = *((_DWORD *)this + 8);
    }
    if ( (v10 & 6) != 0 )
    {
      v11 = v2 | 4;
      if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 31LL) & 2) == 0 )
        v11 = v2;
      CVisRgnTrackerProp::UpdateTrackerRegion(this, v11, 1u);
      v10 = *((_DWORD *)this + 8);
    }
    if ( (v10 & 0xF) != 0 )
      CVisRgnTrackerProp::UpdateTrackerRegion(this, 0, 2u);
  }
}
