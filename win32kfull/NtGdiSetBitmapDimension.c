__int64 __fastcall NtGdiSetBitmapDimension(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v5; // r8d
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( a1 )
  {
    v5 = GreSetBitmapDimension(a1, a2, a3, &v7);
    if ( v5 && a4 )
    {
      if ( (unsigned __int64)a4 >= MmUserProbeAddress )
        a4 = (_QWORD *)MmUserProbeAddress;
      *a4 = v7;
    }
  }
  else
  {
    return 0;
  }
  return v5;
}
