__int64 __fastcall NtCreateThreadEx(
        unsigned __int64 a1,
        int a2,
        ULONG_PTR a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  char *v13; // r14
  ULONG *v14; // rdi
  __int64 v15; // rdx
  __int64 result; // rax
  PVOID v17; // rbx
  unsigned __int64 v18; // r12
  unsigned __int64 v19; // rax
  void *v20; // rsp
  __int64 v21; // r12
  unsigned int Thread; // ebx
  __int64 v23; // rcx
  ULONG v24[20]; // [rsp+50h] [rbp-70h] BYREF
  char v25; // [rsp+A0h] [rbp-20h] BYREF
  __int64 v26; // [rsp+A8h] [rbp-18h]
  __int64 v27; // [rsp+B0h] [rbp-10h]
  __int64 v28; // [rsp+B8h] [rbp-8h]
  unsigned int v29; // [rsp+C0h] [rbp+0h] BYREF
  PVOID Object; // [rsp+C8h] [rbp+8h] BYREF
  int v31; // [rsp+D0h] [rbp+10h]
  __int64 v32; // [rsp+D8h] [rbp+18h]
  __int64 v33; // [rsp+E0h] [rbp+20h]
  ULONG *v34; // [rsp+E8h] [rbp+28h]
  __int64 v35; // [rsp+F0h] [rbp+30h] BYREF
  __int64 v36; // [rsp+F8h] [rbp+38h]
  ULONG_PTR v37; // [rsp+100h] [rbp+40h]
  __int64 v38[64]; // [rsp+110h] [rbp+50h] BYREF

  v37 = a3;
  v31 = a2;
  v32 = a5;
  v33 = a6;
  *(_WORD *)((char *)v38 + 1) = 0;
  BYTE3(v38[0]) = 0;
  Object = 0LL;
  v35 = 0LL;
  v29 = 0;
  v34 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( (a7 & 0xFFFFFF80) != 0 )
    return 3221225717LL;
  if ( KeGetCurrentThread()->PreviousMode )
  {
    v23 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v23 = a1;
    *(_QWORD *)v23 = *(_QWORD *)v23;
  }
  memset(v38, 0, 0x1F8uLL);
  if ( !a11
    || (LOBYTE(v15) = KeGetCurrentThread()->PreviousMode,
        result = PspBuildCreateProcessContext(a11, v15, 1LL, v38),
        (int)result >= 0) )
  {
    result = ObpReferenceObjectByHandleWithTag(
               (ULONG_PTR)a4,
               2,
               (__int64)PsProcessType,
               KeGetCurrentThread()->PreviousMode,
               0x72437350u,
               &Object,
               0LL,
               0LL);
    if ( (int)result >= 0 )
    {
      v17 = Object;
      if ( (*((_BYTE *)Object + 992) & 1) != 0 )
      {
        v21 = v32;
      }
      else
      {
        v13 = &v25;
        v25 = 0;
        v27 = a9;
        v28 = a10;
        v26 = a8;
        v34 = v24;
        memset(v24, 0, 0x48uLL);
        v18 = (*((_DWORD *)Object + 629) & 0x4000) != 0 ? 0x800 : 0;
        LODWORD(Object) = (*((_DWORD *)Object + 629) & 0x4000) != 0 ? 1048651 : 1048587;
        v36 = qword_140D1F330;
        RtlGetExtendedContextLength2((unsigned int)Object, &v29, (unsigned int)v18);
        v19 = v29 + 15LL;
        if ( v19 <= v29 )
          v19 = 0xFFFFFFFFFFFFFF0LL;
        v20 = alloca(v19 & 0xFFFFFFFFFFFFFFF0uLL);
        v14 = v24;
        memset(v24, 0, v29);
        RtlInitializeExtendedContext2((__int64)v24, (unsigned int)Object, &v35, v18);
        v21 = v32;
        PspCreateUserContext((__int64)v24, 1, v36, v32, v33);
      }
      ObfDereferenceObjectWithTag(v17, 0x72437350u);
      Thread = PspCreateThread(
                 a1,
                 v31,
                 v37,
                 a4,
                 0LL,
                 (__int64)v38,
                 v38[2],
                 (__int64)v14,
                 (__int64)v34,
                 a7,
                 v21,
                 v33,
                 (__int64)v13);
      PspDeleteCreateProcessContext(v38);
      return Thread;
    }
  }
  return result;
}
