__int64 __fastcall GreMoveTo(HDC a1, int a2, int a3, _QWORD *a4)
{
  __int64 v7; // r10
  unsigned int v8; // ebx
  _QWORD v10[2]; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-10h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v7 = v10[0];
  v8 = 0;
  if ( v10[0] && (*(_DWORD *)(v10[0] + 36LL) & 0x10000) == 0 )
  {
    if ( a4 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v10[0] + 976LL) + 152LL) & 0x100) != 0 )
      {
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v11, (struct XDCOBJ *)v10, 1026);
        if ( !v11[0] )
        {
LABEL_11:
          DCOBJ::~DCOBJ((DCOBJ *)v10);
          return v8;
        }
        EXFORMOBJ::bXform(
          (EXFORMOBJ *)v11,
          (struct _POINTFIX *)(*(_QWORD *)(v10[0] + 976LL) + 8LL),
          (struct _POINTL *)(*(_QWORD *)(v10[0] + 976LL) + 216LL),
          1uLL);
        v7 = v10[0];
      }
      *a4 = *(_QWORD *)(*(_QWORD *)(v7 + 976) + 216LL);
    }
    *(_DWORD *)(*(_QWORD *)(v7 + 976) + 216LL) = a2;
    *(_DWORD *)(*(_QWORD *)(v10[0] + 976LL) + 220LL) = a3;
    *(_DWORD *)(*(_QWORD *)(v10[0] + 976LL) + 152LL) |= 0x200u;
    *(_DWORD *)(*(_QWORD *)(v10[0] + 976LL) + 152LL) &= ~0x100u;
    if ( (*(_DWORD *)(v10[0] + 248LL) & 1) == 0 )
      *(_DWORD *)(v10[0] + 240LL) = 0;
    v8 = 1;
    goto LABEL_11;
  }
  EngSetLastError(6u);
  if ( v10[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  return 0LL;
}
