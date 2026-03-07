__int64 __fastcall CheckForSegmentedSignatureBlob(
        void *a1,
        __int64 a2,
        struct _HIDP_VALUE_CAPS *a3,
        unsigned __int16 *a4)
{
  int v5; // ebx
  int v6; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // r8d
  unsigned __int16 v15; // r10
  unsigned __int16 v16; // dx
  USHORT *p_ReportCount; // rax
  USHORT v18; // r9
  unsigned __int16 v20; // [rsp+58h] [rbp+10h] BYREF

  v20 = a2;
  v5 = 0;
  v6 = 0;
  if ( !*(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 216) )
    return (unsigned int)-1073741668;
  v13 = SGDGetUserSessionState(v10, v9, v11, v12);
  v14 = (*(__int64 (__fastcall **)(__int64, struct _HIDP_VALUE_CAPS *, unsigned __int16 *, void *))(v13 + 216))(
          2LL,
          a3,
          &v20,
          a1);
  if ( v14 < 0 )
    return (unsigned int)-1073741668;
  v15 = v20;
  v16 = 0;
  if ( !v20 )
    return (unsigned int)-1073741668;
  p_ReportCount = &a3->ReportCount;
  do
  {
    v18 = p_ReportCount[18];
    if ( v18 == 198 )
    {
      if ( *(_DWORD *)(p_ReportCount - 1) == 65544 && *(p_ReportCount - 10) >= 0xFF00u )
        v5 = 1;
    }
    else if ( v18 == 199 && *p_ReportCount == 32 && *(p_ReportCount - 1) == 8 && *(p_ReportCount - 10) >= 0xFF00u )
    {
      v6 = 1;
      *a4 = v16;
    }
    ++v16;
    p_ReportCount += 36;
  }
  while ( v16 < v15 );
  if ( !v6 || !v5 )
    return (unsigned int)-1073741668;
  return (unsigned int)v14;
}
