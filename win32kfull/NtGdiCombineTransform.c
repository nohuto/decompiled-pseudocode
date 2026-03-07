__int64 __fastcall NtGdiCombineTransform(ULONG64 a1, struct _XFORML *a2, struct _XFORML *a3)
{
  __int64 result; // rax
  __int128 v6; // [rsp+20h] [rbp-58h] BYREF
  __int64 v7; // [rsp+30h] [rbp-48h]
  struct _XFORML v8; // [rsp+38h] [rbp-40h] BYREF
  struct _XFORML v9; // [rsp+50h] [rbp-28h] BYREF

  memset(&v9, 0, sizeof(v9));
  memset(&v8, 0, sizeof(v8));
  v6 = 0LL;
  v7 = 0LL;
  result = ProbeAndConvertXFORM(a2, &v9) && ProbeAndConvertXFORM(a3, &v8);
  if ( (_DWORD)result )
  {
    result = GreCombineTransform(&v6, &v9, &v8);
    if ( (_DWORD)result )
    {
      if ( a1 >= MmUserProbeAddress )
        a1 = MmUserProbeAddress;
      *(_OWORD *)a1 = v6;
      *(_QWORD *)(a1 + 16) = v7;
    }
  }
  return result;
}
