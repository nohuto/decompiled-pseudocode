__int64 __fastcall GreSetDIBColorTable(HDC a1, unsigned int a2, int a3, struct tagRGBQUAD *a4)
{
  unsigned int v7; // ebx
  SURFACE *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ecx
  int v12; // ebx
  __int64 v14; // [rsp+28h] [rbp-29h] BYREF
  _QWORD v15[3]; // [rsp+30h] [rbp-21h] BYREF
  __int128 v16; // [rsp+48h] [rbp-9h] BYREF
  __int64 v17; // [rsp+58h] [rbp+7h]
  int v18; // [rsp+60h] [rbp+Fh]
  _QWORD v19[2]; // [rsp+68h] [rbp+17h] BYREF
  __int16 v20; // [rsp+78h] [rbp+27h]
  __int64 v21; // [rsp+80h] [rbp+2Fh]
  __int64 v22; // [rsp+88h] [rbp+37h]
  __int64 v23; // [rsp+90h] [rbp+3Fh]

  v7 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  if ( v15[0] )
  {
    v19[1] = 0LL;
    v16 = 0LL;
    v20 = 256;
    v17 = 0LL;
    v18 = 0;
    v19[0] = 0LL;
    v23 = 0LL;
    v22 = 0LL;
    v21 = 0LL;
    DEVLOCKOBJ::vLockNoDrawing((DEVLOCKOBJ *)&v16, (struct XDCOBJ *)v15);
    v8 = XDCOBJ::pSurfaceEff((XDCOBJ *)v15);
    if ( SURFACE::bDIBSection(v8) && (unsigned int)(*(_DWORD *)(v10 + 96) - 1) <= 2 )
    {
      *(_DWORD *)(*(_QWORD *)(v15[0] + 976LL) + 152LL) |= 0xFu;
      v14 = *(_QWORD *)(v9 + 128);
      v11 = *(_DWORD *)(v14 + 28);
      if ( a2 < v11 )
      {
        v12 = *(_DWORD *)(v14 + 28);
        if ( a2 + a3 <= v11 )
          v12 = a2 + a3;
        v7 = v12 - a2;
        XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v14, a4, a2, v7);
      }
    }
    else
    {
      EngSetLastError(6u);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v16);
    if ( v19[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v19);
  }
  else
  {
    EngSetLastError(6u);
  }
  if ( v15[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v15);
  return v7;
}
