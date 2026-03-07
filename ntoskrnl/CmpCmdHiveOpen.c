__int64 __fastcall CmpCmdHiveOpen(
        const UNICODE_STRING *a1,
        char a2,
        _BYTE *a3,
        _QWORD *a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        __int64 a8,
        void *a9)
{
  BOOLEAN v13; // al
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // r15d
  int inited; // eax
  int v19; // ebx
  unsigned int v20; // eax
  int v21; // ecx
  void *v23; // rdi
  int v24; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v26; // [rsp+30h] [rbp-79h]
  int v27; // [rsp+30h] [rbp-79h]
  int v28; // [rsp+38h] [rbp-71h]
  int v29; // [rsp+38h] [rbp-71h]
  BOOLEAN v30; // [rsp+50h] [rbp-59h] BYREF
  BOOLEAN v31; // [rsp+51h] [rbp-58h] BYREF
  BOOLEAN EnableHardErrors; // [rsp+52h] [rbp-57h]
  __int64 ImpersonationLevel; // [rsp+58h] [rbp-51h] BYREF
  int v34[2]; // [rsp+60h] [rbp-49h] BYREF
  void *v35; // [rsp+68h] [rbp-41h]
  __int64 v36; // [rsp+70h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+78h] [rbp-31h] BYREF
  int *v38; // [rsp+98h] [rbp-11h]
  __int64 v39; // [rsp+A0h] [rbp-9h]

  ImpersonationLevel = a7;
  v36 = a8;
  v35 = a9;
  *(_QWORD *)v34 = a4;
  v13 = IoSetThreadHardErrorMode(0);
  v14 = 0;
  EnableHardErrors = v13;
  if ( (a6 & 1) != 0 )
  {
    v14 = 0x8000;
    if ( (a6 & 2) == 0 )
      v14 = 294912;
  }
  v15 = v14 | 0x80000;
  if ( (a6 & 4) == 0 )
    v15 = v14;
  v16 = v15 | 0x108000;
  if ( (a6 & 8) == 0 )
    v16 = v15;
  v17 = v16 | 2;
  if ( (a5 & 0x20000000) == 0 )
    v17 = v16;
  inited = CmpInitHiveFromFile(a1, v17, a4, a3, a5, ImpersonationLevel, v26, v28, v36, v35);
  v19 = inited;
  if ( !ImpersonationLevel && a2 && (a6 & 0x20) == 0 )
  {
    if ( (v20 = inited + 1073741724, v20 <= 0xE) && (v21 = 17473, _bittest(&v21, v20))
      || v19 == -1073741790
      || v19 == -1073741421 )
    {
      v31 = 0;
      v30 = 0;
      LODWORD(ImpersonationLevel) = 0;
      v23 = (void *)PsReferenceImpersonationTokenEx(
                      KeGetCurrentThread(),
                      1LL,
                      1953261124LL,
                      &v31,
                      &v30,
                      &ImpersonationLevel,
                      0LL);
      v19 = RtlImpersonateSelfEx(2LL, 0LL, 0LL);
      if ( v19 >= 0 )
      {
        v24 = CmpInitHiveFromFile(a1, v17, *(_QWORD **)v34, a3, a5, 0LL, v27, v29, v36, v35);
        CurrentThread = KeGetCurrentThread();
        v19 = v24;
        if ( v23 )
          PsImpersonateClient(CurrentThread, v23, v31, v30, (SECURITY_IMPERSONATION_LEVEL)ImpersonationLevel);
        else
          PsImpersonateClient(CurrentThread, 0LL, 0, 0, SecurityImpersonation);
        if ( v19 >= 0
          && (a5 & 0x2000000) != 0
          && (unsigned int)dword_140C04328 > 5
          && tlgKeywordOn((__int64)&dword_140C04328, 0x400000000008LL) )
        {
          *(_QWORD *)v34 = 0x1000000LL;
          v38 = v34;
          v39 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C04328,
            (unsigned __int8 *)byte_1400365BD,
            0LL,
            0LL,
            3u,
            &v37);
        }
      }
      if ( v23 )
        ObfDereferenceObjectWithTag(v23, 0x746C6644u);
    }
  }
  IoSetThreadHardErrorMode(EnableHardErrors);
  return (unsigned int)v19;
}
