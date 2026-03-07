__int64 __fastcall CWatermarkStack<float,64,2,10>::Top(int *a1, _DWORD *a2)
{
  __int64 result; // rax
  int v4; // ecx

  result = 0LL;
  v4 = *a1;
  if ( !v4 )
    return 2147500037LL;
  *a2 = *(_DWORD *)(*((_QWORD *)a1 + 2) + 4LL * (unsigned int)(v4 - 1));
  return result;
}
