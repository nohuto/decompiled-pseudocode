__int64 __fastcall SetSysColor(unsigned int a1, unsigned int NearestColor, char a3)
{
  __int64 v4; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rsi
  HBRUSH v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v19; // rdx
  __int64 SolidBrushInternal; // rcx
  int v21; // ebx
  int v22; // ebx
  int v23; // ebx
  int v24; // ebx
  int v25; // ebx
  _QWORD v26[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a1;
  PsEnterPriorityRegion();
  v10 = SGDGetUserSessionState(v7, v6, v8, v9);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v10 + 16));
  v11 = (unsigned int)v4;
  *((_DWORD *)gpsi + v4 + 1111) = NearestColor;
  if ( (a3 & 4) != 0
    && (*((_DWORD *)gpDispInfo + 33) & 2) != 0
    && ((_DWORD)v4 == 1 || (_DWORD)v4 == 15 || (_DWORD)v4 == 16 || (_DWORD)v4 == 20) )
  {
    GreSetMagicColors(*((HDC *)gpDispInfo + 7));
  }
  if ( (a3 & 8) != 0
    || (a3 & 2) != 0
    && (v21 = v4 - 1) != 0
    && (v22 = v21 - 9) != 0
    && (v23 = v22 - 1) != 0
    && (v24 = v23 - 1) != 0
    && (v25 = v24 - 12) != 0
    && (unsigned int)(v25 - 3) >= 2 )
  {
    NearestColor = GreGetNearestColor(*((HDC *)gpDispInfo + 7));
  }
  *((_DWORD *)gpsi + v11 + 1142) = NearestColor;
  v12 = (HBRUSH)*((_QWORD *)gpsi + v11 + 587);
  if ( v12 )
  {
    GreSetSolidBrushInternal(v12, NearestColor, 0, 1);
  }
  else
  {
    SolidBrushInternal = hCreateSolidBrushInternal(NearestColor, 0, 0LL, 0);
    *((_QWORD *)gpsi + v11 + 587) = SolidBrushInternal;
    if ( SolidBrushInternal )
    {
      LOBYTE(v19) = 16;
      HmgMarkUndeletable(SolidBrushInternal, v19);
    }
    GreSetBrushOwner(*((HBRUSH *)gpsi + v11 + 587), 0);
    BRUSHSELOBJ::BRUSHSELOBJ((BRUSHSELOBJ *)v26, *((HBRUSH *)gpsi + v11 + 587));
    if ( v26[0] )
      *(_DWORD *)(v26[0] + 40LL) |= 0x40200u;
    BRUSHSELOBJ::~BRUSHSELOBJ((BRUSHSELOBJ *)v26);
  }
  v17 = SGDGetUserSessionState(v14, v13, v15, v16);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v17 + 16));
  return PsLeavePriorityRegion();
}
