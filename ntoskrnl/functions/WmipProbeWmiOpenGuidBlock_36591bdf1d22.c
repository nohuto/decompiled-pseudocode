__int64 __fastcall WmipProbeWmiOpenGuidBlock(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        unsigned int *a5,
        int a6,
        int a7)
{
  __int64 v11; // r9
  unsigned int v12; // ecx
  __int64 result; // rax

  if ( IoIs32bitProcess(0LL) )
  {
    if ( a6 == 16 && a7 == 16 )
    {
      v11 = *a5;
      v12 = a5[1];
      goto LABEL_5;
    }
    return 3221225473LL;
  }
  if ( a6 != 24 || a7 != 24 )
    return 3221225473LL;
  v11 = *(_QWORD *)a5;
  v12 = a5[2];
LABEL_5:
  *a4 = v12;
  result = WmipProbeAndCaptureGuidObjectAttributes(a1, a2, a3, v11);
  if ( (int)result >= 0 && (*(_QWORD *)(a1 + 8) || *(_DWORD *)(a1 + 24) || *(_QWORD *)(a1 + 32) || *(_QWORD *)(a1 + 40)) )
    return 3221225485LL;
  return result;
}
