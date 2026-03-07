__int64 __fastcall GetCPD(__int64 a1, __int16 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 *i; // rbx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v12; // rax
  _QWORD v13[2]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v14[2]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v15[2]; // [rsp+40h] [rbp-10h] BYREF

  SmartObjStackRefBase<tagCLS>::Init(v13, 0LL);
  if ( (a2 & 0x60) != 0 || (a2 & 0x80u) != 0 )
    a1 = *(_QWORD *)(a1 + 136);
  if ( a1 != *(_QWORD *)v13[0] )
  {
    if ( v13[0] != gSmartObjNullRef && !--*(_DWORD *)(v13[0] + 8LL) )
    {
      if ( *(_BYTE *)(v13[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v13[0]);
    }
    if ( a1 )
    {
      v13[0] = *(_QWORD *)(a1 + 128);
      ++*(_DWORD *)(v13[0] + 8LL);
    }
    else
    {
      v13[0] = gSmartObjNullRef;
    }
  }
  for ( i = *(__int64 **)(*(_QWORD *)v13[0] + 48LL); i; i = (__int64 *)i[7] )
  {
    v12 = i[5];
    if ( *(_QWORD *)(v12 + 16) == a3 && *(_WORD *)(v12 + 24) == a2 )
      goto LABEL_11;
  }
  LOBYTE(v6) = 7;
  v8 = HMAllocObject(gptiCurrent, *(_QWORD *)(gptiCurrent + 456LL), v6);
  i = (__int64 *)v8;
  if ( v8 )
  {
    v9 = *(_QWORD *)v13[0];
    v14[0] = v8 + 56;
    v14[1] = *(_QWORD *)(v9 + 48);
    HMAssignmentLock(v14, 0LL);
    v15[1] = i;
    v15[0] = *(_QWORD *)v13[0] + 48LL;
    HMAssignmentLock(v15, 0LL);
    *(_QWORD *)(i[5] + 16) = a3;
    *(_WORD *)(i[5] + 24) = a2;
LABEL_11:
    v10 = *i;
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v13);
    return (unsigned int)v10 | 0xFFFF0000LL;
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v13);
  return 0LL;
}
