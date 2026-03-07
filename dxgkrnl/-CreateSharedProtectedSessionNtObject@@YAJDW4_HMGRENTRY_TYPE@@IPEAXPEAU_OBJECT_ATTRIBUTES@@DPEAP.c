__int64 __fastcall CreateSharedProtectedSessionNtObject(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6,
        _QWORD *a7)
{
  struct DXGPROCESS *v7; // r14
  char v9; // r12
  struct DXGPROCESS *Current; // rbx
  __int64 v11; // rdi
  struct DXGGLOBAL *Global; // rax
  unsigned int v13; // eax
  __int64 v14; // r8
  int v15; // edx
  DXGPROTECTEDSESSION *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // r9
  struct DXGPROCESS *v19; // rdx
  int v20; // eax
  PVOID v21; // rcx
  _QWORD *v22; // rbx
  char v24[8]; // [rsp+50h] [rbp-10h] BYREF
  char v25; // [rsp+58h] [rbp-8h]
  PVOID Object; // [rsp+A8h] [rbp+48h] BYREF

  v7 = (struct DXGPROCESS *)a3;
  Object = 0LL;
  v9 = a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    LODWORD(v11) = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_19:
    v21 = Object;
    if ( Object )
    {
      ObfDereferenceObject(Object);
      v21 = 0LL;
    }
    goto LABEL_24;
  }
  Global = DXGGLOBAL::GetGlobal();
  DXGPROTECTEDSESSIONMUTEX::DXGPROTECTEDSESSIONMUTEX((DXGPROTECTEDSESSIONMUTEX *)v24, Global);
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
  v13 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
  if ( v13 >= *((_DWORD *)Current + 74) )
    goto LABEL_9;
  v14 = *((_QWORD *)Current + 35);
  if ( (((unsigned int)v7 >> 25) & 0x60) != (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0x60) )
    goto LABEL_9;
  if ( (*(_DWORD *)(v14 + 16LL * v13 + 8) & 0x2000) != 0 )
    goto LABEL_9;
  v15 = *(_DWORD *)(v14 + 16LL * v13 + 8) & 0x1F;
  if ( !v15 )
    goto LABEL_9;
  if ( a2 != v15 )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_9:
    v16 = 0LL;
    goto LABEL_10;
  }
  v16 = *(DXGPROTECTEDSESSION **)(v14 + 16LL * v13);
LABEL_10:
  _InterlockedDecrement((volatile signed __int32 *)Current + 66);
  ExReleasePushLockSharedEx((char *)Current + 248, 0LL);
  KeLeaveCriticalRegion();
  if ( !v16 )
  {
    v19 = v7;
    v11 = -1073741811LL;
LABEL_17:
    WdLogSingleEntry2(3LL, v19, v11);
    if ( v25 )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
    goto LABEL_19;
  }
  LOBYTE(v18) = a6;
  LOBYTE(v17) = v9;
  v20 = ObCreateObject(v17, g_pDxgkSharedProtectedSessionObjectType, a5, v18, 0LL, 8, 0, 0, &Object);
  v11 = v20;
  if ( v20 < 0 )
  {
    if ( Object )
    {
      WdLogSingleEntry1(1LL, 554LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pObject == NULL", 554LL, 0LL, 0LL, 0LL, 0LL);
    }
    v19 = Current;
    goto LABEL_17;
  }
  v22 = Object;
  DXGPROTECTEDSESSION::AddReference(v16, 0);
  *v22 = v16;
  if ( v25 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  v21 = Object;
LABEL_24:
  *a7 = v21;
  return (unsigned int)v11;
}
