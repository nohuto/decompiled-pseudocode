__int64 __fastcall DpiInitializeInternal(void *a1, const UNICODE_STRING *a2, _QWORD *a3, char a4)
{
  if ( *(_DWORD *)a3 >= 0x104Eu
    && a3[1]
    && a3[2]
    && a3[3]
    && a3[4]
    && a3[5]
    && a3[6]
    && a3[7]
    && a3[8]
    && (a3[9] || a3[125])
    && a3[10]
    && a3[11]
    && a3[13]
    && a3[14] )
  {
    return DpiInitializeEx(a1, a2, a3, a4);
  }
  WdLogSingleEntry1(2LL, -1073741735LL);
  return 3221225561LL;
}
