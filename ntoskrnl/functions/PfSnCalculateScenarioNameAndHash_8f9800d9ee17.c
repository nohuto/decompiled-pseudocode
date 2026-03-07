__int64 __fastcall PfSnCalculateScenarioNameAndHash(
        __int64 a1,
        _OWORD *a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        _QWORD *a8,
        unsigned __int8 *a9,
        _DWORD *a10,
        __int64 a11,
        _OWORD *a12)
{
  _OWORD *v12; // rbp
  const void *ImageFileName; // rdx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int8 IsHostingApplication; // al
  __int64 result; // rax
  _WORD *v22; // rbx
  unsigned __int8 *v23; // rsi
  int v24[10]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v25; // [rsp+50h] [rbp+8h] BYREF

  v12 = a12;
  *a2 = 0LL;
  a2[1] = 0LL;
  v25 = 0;
  a2[2] = 0LL;
  v24[0] = 0;
  *((_QWORD *)a2 + 6) = 0LL;
  *((_DWORD *)a2 + 14) = 0;
  ImageFileName = (const void *)PfSnFindImageFileName(v12, &v25);
  if ( !ImageFileName )
    return 3221225485LL;
  v17 = v25;
  if ( v25 >= 0x1D )
    v17 = 29LL;
  v18 = 2 * v17;
  memmove(a2, ImageFileName, 2 * v17);
  v19 = a11;
  *(_WORD *)((char *)a2 + v18) = 0;
  *a4 = *(_DWORD *)(v19 + 1524);
  IsHostingApplication = PfSnIsHostingApplication((wchar_t *)a2);
  result = PfSnScanCommandLine(a6, a5, IsHostingApplication);
  if ( (int)result >= 0 )
  {
    v22 = a8;
    v23 = a9;
    result = PfSnCheckModernApp(v24, a7, a9, a8);
    if ( (int)result >= 0 )
    {
      if ( v24[0] )
      {
        *a10 |= 8u;
        *(_QWORD *)(a3 + 8) = v23;
        *(_WORD *)a3 = *v22;
        *(_WORD *)(a3 + 2) = *v22;
      }
      else
      {
        *(_OWORD *)a3 = *v12;
      }
      return 0LL;
    }
  }
  return result;
}
