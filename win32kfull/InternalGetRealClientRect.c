__int64 __fastcall InternalGetRealClientRect(__int64 a1, __int64 a2, char a3, __int64 a4, int a5)
{
  __int64 v6; // rbp
  __int64 v9; // rcx
  unsigned __int16 v10; // si
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int128 v16; // xmm0
  __int64 v17; // rcx
  unsigned int DpiForSystem; // eax
  unsigned int v19; // eax
  __int64 v20; // [rsp+30h] [rbp-68h] BYREF
  __int128 v21; // [rsp+40h] [rbp-58h] BYREF
  __int128 v22; // [rsp+50h] [rbp-48h] BYREF

  v6 = a4;
  v9 = *(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF;
  if ( (_DWORD)v9 == 669 )
  {
    if ( !a4 )
      v6 = *(_QWORD *)(GetDispInfo(v9) + 96);
    if ( a5 )
      v10 = 0;
    else
      v10 = ((unsigned int)W32GetCurrentThreadDpiAwarenessContext(v9) >> 8) & 0x1FF;
    if ( (a3 & 4) != 0 )
    {
      v16 = *(_OWORD *)GetMonitorRectForDpi(&v20, v6, v10);
      result = (__int64)&v21;
      v21 = v16;
    }
    else
    {
      v11 = *(_QWORD *)(v6 + 40);
      v12 = *(_OWORD *)(v11 + 44);
      v21 = v12;
      if ( v10 )
      {
        v14 = *(unsigned __int16 *)(v11 + 62);
        v22 = *(_OWORD *)(v11 + 28);
        v15 = ExpandMonitorSpaceVertex(v10, v14, v22);
        ScaleDPIRect(
          (unsigned int)&v21,
          (unsigned int)&v21,
          v10,
          *(unsigned __int16 *)(*(_QWORD *)(v6 + 40) + 60LL),
          v15,
          v22);
        v12 = v21;
      }
      v22 = v12;
      result = (__int64)&v22;
    }
    *(_OWORD *)a2 = *(_OWORD *)result;
  }
  else
  {
    result = GetRect(a1, a2, 17);
    if ( (a3 & 1) != 0 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 16LL) & 4) != 0 )
      {
        DpiForSystem = GetDpiForSystem(v17);
        *(_DWORD *)(a2 + 12) += GetDpiDependentMetric(1LL, DpiForSystem);
      }
      result = *(_QWORD *)(a1 + 40);
      if ( (*(_BYTE *)(result + 16) & 2) != 0 )
      {
        v19 = GetDpiForSystem(v17);
        result = GetDpiDependentMetric(0LL, v19);
        *(_DWORD *)(a2 + 8) += result;
      }
    }
  }
  if ( (a3 & 2) != 0 )
  {
    result = gpsi;
    if ( (*(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7) <= 1 )
    {
      result = *(unsigned int *)(gpsi + 2088LL);
      *(_DWORD *)(a2 + 12) -= result;
      return result;
    }
    switch ( *(_DWORD *)(gpsi + 2120LL) & 0xFFFFFFF7 )
    {
      case 2u:
      case 3u:
        result = *(unsigned int *)(gpsi + 2088LL);
        *(_DWORD *)(a2 + 4) += result;
        return result;
      case 4u:
        goto LABEL_29;
      case 5u:
LABEL_28:
        result = *(unsigned int *)(gpsi + 2084LL);
        *(_DWORD *)(a2 + 8) -= result;
        return result;
      case 6u:
LABEL_29:
        result = *(unsigned int *)(gpsi + 2084LL);
        *(_DWORD *)a2 += result;
        return result;
      case 7u:
        goto LABEL_28;
    }
  }
  return result;
}
