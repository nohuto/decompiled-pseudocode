__int64 __fastcall xxxTrackCaptionButton(__int64 *a1, int a2)
{
  unsigned __int16 v2; // di
  int v3; // ebx
  unsigned __int16 v5; // r14
  int v6; // edx
  int v7; // edx
  int v8; // edx
  unsigned int v9; // esi
  int v10; // eax
  __int64 DCEx; // rbx
  __int64 v12; // rbx
  __int64 v13; // rbx
  unsigned __int16 v15[2]; // [rsp+38h] [rbp-29h] BYREF
  int v16; // [rsp+3Ch] [rbp-25h]
  unsigned int v17; // [rsp+40h] [rbp-21h] BYREF
  int v18; // [rsp+44h] [rbp-1Dh]
  int v19; // [rsp+48h] [rbp-19h]
  int v20; // [rsp+4Ch] [rbp-15h]
  BOOL v21; // [rsp+50h] [rbp-11h]
  __int128 v22; // [rsp+58h] [rbp-9h] BYREF
  _OWORD v23[2]; // [rsp+68h] [rbp+7h] BYREF
  __int128 v24; // [rsp+88h] [rbp+27h]

  v2 = 0;
  v15[0] = 0;
  v17 = 0;
  v3 = 0;
  LOWORD(v16) = 0;
  v5 = 0;
  v18 = 0;
  memset(v23, 0, sizeof(v23));
  v24 = 0LL;
  v22 = 0LL;
  v6 = a2 - 8;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v8 = v7 - 11;
      if ( v8 )
      {
        if ( v8 == 1 )
        {
          v9 = 4;
          v5 = 1408;
        }
        else
        {
          v9 = 0;
        }
      }
      else
      {
        v9 = 5;
        v5 = 1296;
      }
    }
    else
    {
      v9 = 3;
      v5 = 1312;
    }
  }
  else
  {
    v9 = 2;
    v5 = 1344;
  }
  v10 = xxxCalcCaptionButton((__int64)a1, v9, (__int16 *)v15, &v22, (int *)&v17, 0);
  v19 = SHIWORD(v10);
  v20 = (__int16)v10;
  if ( v15[0] )
  {
    DCEx = _GetDCEx(a1, 0LL, 65537LL);
    BitBltSysBmp(DCEx, v20, v19, v17 + 1, 1);
    _ReleaseDC(DCEx);
    v16 = 1;
    SetOrClrWF(1, a1, v5, 1);
    xxxWindowEvent(0x800Au, (struct tagWND *)a1, -2, v9, 0);
    v3 = 0;
  }
  else
  {
    v9 = 0;
  }
  xxxSetCapture((__int64)a1);
  do
  {
    if ( (unsigned int)xxxInternalGetMessage(v23, 0LL, 0x200u, 0x20Eu, 1, 0) )
    {
      if ( DWORD2(v23[0]) == 514 )
      {
        xxxReleaseCapture();
        v3 = 1;
        v18 = 1;
      }
      else if ( DWORD2(v23[0]) == 512 )
      {
        if ( v15[0] )
        {
          v21 = PtInRect(&v22, *(unsigned __int64 *)((char *)&v24 + 4));
          if ( (_WORD)v16 != v21 )
          {
            LOWORD(v16) = v21;
            v12 = _GetDCEx(a1, 0LL, 65537LL);
            BitBltSysBmp(v12, v20, v19, v17 + (unsigned __int16)v16, 1);
            _ReleaseDC(v12);
            SetOrClrWF(v21, a1, v5, 1);
            xxxWindowEvent(0x800Au, (struct tagWND *)a1, -2, v9, 0);
            v3 = v18;
          }
        }
      }
    }
    else if ( (unsigned int)xxxInternalGetMessage(v23, 0LL, 0x241u, 0x257u, 1, 0) )
    {
      *(_DWORD *)(gptiCurrent + 488LL) |= 0x8000u;
      xxxDispatchMessage((__int64 *)v23);
      *(_DWORD *)(gptiCurrent + 488LL) &= ~0x8000u;
    }
    else if ( !(unsigned int)xxxSleepThread2(0x1006u, 0, 1, 0, 0LL) )
    {
      break;
    }
  }
  while ( a1 == *(__int64 **)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL) && !v3 );
  if ( v15[0] )
  {
    if ( (_WORD)v16 && v15[0] != 0xF180 )
    {
      v13 = _GetDCEx(a1, 0LL, 65537LL);
      BitBltSysBmp(v13, v20, v19, v17, 1);
      _ReleaseDC(v13);
      SetOrClrWF(0, a1, v5, 1);
      xxxWindowEvent(0x800Au, (struct tagWND *)a1, -2, v9, 0);
    }
    if ( v18 && PtInRect(&v22, *(unsigned __int64 *)((char *)&v24 + 4)) )
      return v15[0];
  }
  return v2;
}
