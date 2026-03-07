__int64 __fastcall DpiGetVirtualGpuType(_DWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( *a1 == 1 )
  {
    *a2 = *((_QWORD *)a1 - 674);
  }
  else
  {
    *a2 = *((_QWORD *)a1 - 670);
    return 0LL;
  }
  return result;
}
