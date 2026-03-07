__int64 __fastcall MiMapProcessExecutable(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v3; // eax
  int v5; // ebx
  unsigned int v7; // eax
  __int64 v8; // r12
  __int64 result; // rax
  unsigned int v10; // edi
  unsigned __int64 v11; // rcx
  BOOL v12; // r14d
  unsigned int v13; // ebx
  int v14; // eax
  unsigned __int64 v15; // rcx
  char v16; // al
  __int64 v17; // [rsp+58h] [rbp-21h]
  __int64 v18; // [rsp+70h] [rbp-9h] BYREF
  __int64 v19; // [rsp+78h] [rbp-1h] BYREF
  __int64 v20; // [rsp+80h] [rbp+7h]
  _OWORD v21[2]; // [rsp+88h] [rbp+Fh] BYREF
  unsigned __int64 v22; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = *(_DWORD *)(a2 + 56);
  v5 = a2;
  memset(v21, 0, sizeof(v21));
  if ( (v3 & 0x20) == 0 )
    return 3221225545LL;
  if ( (*a3 & 0x80u) == 0 || (result = MiSessionCreate(), (int)result >= 0) )
  {
    v7 = *a3;
    v23 = 0LL;
    v22 = 0LL;
    v18 = 0LL;
    v8 = 4LL;
    v19 = 5LL;
    v20 = 32LL;
    result = MmMapViewOfSectionEx(
               v5,
               a1,
               (int)&v22,
               (__int64)&v18,
               (__int64)&v23,
               (unsigned __int8)(v7 & 0x10) << 25,
               4,
               &v19,
               1,
               0,
               0LL,
               v17,
               0x2000000);
    v10 = result;
    if ( (int)result >= 0 )
    {
      v11 = v22;
      v12 = 0;
      *(_QWORD *)(a1 + 1312) = v22;
      v13 = *a3;
      if ( (*a3 & 0x10) != 0 )
      {
        MiFillPteHierarchy(v11, (unsigned __int64 *)v21);
        while ( 1 )
        {
          v15 = *(&v20 + v8--);
          v16 = MI_READ_PTE_LOCK_FREE(v15);
          if ( (v16 & 1) == 0 )
          {
LABEL_18:
            *a3 = v13 & 0xFFFFFFEF;
            goto LABEL_5;
          }
          if ( v16 < 0 )
            break;
          if ( v8 == 1 )
            goto LABEL_18;
        }
        v12 = (v13 & 0x20) != 0;
      }
LABEL_5:
      result = PsMapSystemDlls(a1, v12);
      if ( (int)result >= 0 )
      {
        result = MiCfgInitializeProcess(a1);
        if ( (int)result >= 0 )
        {
          v14 = MiCommitInitialVadMetadataBits();
          if ( v14 < 0 )
            return (unsigned int)v14;
          return v10;
        }
      }
    }
  }
  return result;
}
