__int64 __fastcall NtUserFunctionalizeDisplayConfig(
        int a1,
        unsigned int *a2,
        volatile void *a3,
        unsigned __int64 a4,
        __int64 a5,
        volatile void *a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  volatile void *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // esi
  void *QuotaZInit; // r15
  _DWORD *v24; // rdx
  __int64 CurrentProcessWow64Process; // rax
  unsigned __int64 v26; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v27; // rcx
  unsigned int v28; // edx
  unsigned int v29; // eax
  __int64 *i; // rcx
  _OWORD *v31; // r8
  _OWORD *v32; // r11
  unsigned int v33; // r9d
  unsigned int j; // r10d
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // ebx
  unsigned int v41; // [rsp+30h] [rbp-118h] BYREF
  unsigned int v42; // [rsp+34h] [rbp-114h]
  _DWORD v43[2]; // [rsp+38h] [rbp-110h] BYREF
  void *v44; // [rsp+40h] [rbp-108h]
  __int64 *v45; // [rsp+48h] [rbp-100h]
  int v46; // [rsp+50h] [rbp-F8h]
  int v47; // [rsp+54h] [rbp-F4h]
  __int64 v48; // [rsp+68h] [rbp-E0h] BYREF
  int v49; // [rsp+70h] [rbp-D8h]
  void *v50; // [rsp+78h] [rbp-D0h]
  volatile void *Address; // [rsp+80h] [rbp-C8h]
  __int64 v52; // [rsp+90h] [rbp-B8h]
  _QWORD v53[10]; // [rsp+B0h] [rbp-98h] BYREF

  v52 = a5;
  Address = a6;
  v44 = 0LL;
  v41 = 0;
  v43[0] = -1;
  v48 = 0LL;
  v49 = 0;
  memset(v53, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v53[1]);
  v53[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v53[3]) = 59;
  LOBYTE(v53[6]) = -1;
  v43[1] = -1073741811;
  PrivateAPI::_anonymous_namespace_::EnterSharedCritInternal(v11, v10, v12, v13);
  PtiCurrentShared(v15, v14, v16, v17);
  if ( !gbVideoInitialized )
  {
    v22 = -1073741823;
    QuotaZInit = v44;
LABEL_45:
    if ( a4 && !(unsigned int)DrvIsDisplayStateCurrent(1LL, &v48) )
      v22 = -1071774921;
    goto LABEL_48;
  }
  v24 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v24 = (_DWORD *)MmUserProbeAddress;
  *v24 = *v24;
  v41 = *a2;
  if ( v41 - 1 > 0x3FF )
    ExRaiseStatus(-1073741811);
  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(MmUserProbeAddress, v24, v20, v21);
  ProbeForWrite(a3, 216LL * v41, CurrentProcessWow64Process != 0 ? 1 : 4);
  QuotaZInit = (void *)NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v27, v26, 216LL * v41, 0x63447355u);
  v44 = QuotaZInit;
  if ( !QuotaZInit )
    ExRaiseStatus(-1073741801);
  v45 = 0LL;
  v50 = 0LL;
  v42 = 0;
  v28 = 0;
  v46 = 0;
  v29 = 0;
  for ( i = (__int64 *)a3; ; i += 27 )
  {
    v45 = i;
    v42 = v29;
    if ( v29 >= v41 )
      break;
    if ( *i < 0 )
      v46 = ++v28;
    ++v29;
  }
  if ( v41 != v28 )
    ExRaiseStatus(-1073741811);
  v31 = a3;
  v45 = (__int64 *)a3;
  v32 = QuotaZInit;
  v50 = QuotaZInit;
  v33 = 0;
  v47 = 0;
  for ( j = 0; ; ++j )
  {
    v42 = j;
    if ( j >= v28 )
      break;
    if ( *(__int64 *)v31 < 0 )
    {
      if ( v33 >= v28 )
        ExRaiseStatus(-1073741811);
      *v32 = *v31;
      v32[1] = v31[1];
      v32[2] = v31[2];
      v32[3] = v31[3];
      v32[4] = v31[4];
      v32[5] = v31[5];
      v32[6] = v31[6];
      v32[7] = v31[7];
      v32[8] = v31[8];
      v32[9] = v31[9];
      v32[10] = v31[10];
      v32[11] = v31[11];
      v32[12] = v31[12];
      *((_QWORD *)v32 + 26) = *((_QWORD *)v31 + 26);
      if ( *(__int64 *)v32 >= 0 )
        ExRaiseStatus(-1073741790);
      v47 = ++v33;
      v32 = (_OWORD *)((char *)v32 + 216);
      v50 = v32;
    }
    v31 = (_OWORD *)((char *)v31 + 216);
    v45 = (__int64 *)v31;
  }
  if ( v33 != v28 )
    ExRaiseStatus(-1073741811);
  if ( !Address )
    ExRaiseStatus(-1073741811);
  ProbeForWrite(Address, 4uLL, 4u);
  if ( a4 )
  {
    if ( ((PsGetCurrentProcessWow64Process(v36, v35, v37, v38) == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a4 + 12 > MmUserProbeAddress || a4 + 12 < a4 )
      *(_BYTE *)MmUserProbeAddress = 0;
    v48 = *(_QWORD *)a4;
    v49 = *(_DWORD *)(a4 + 8);
  }
  if ( !(unsigned int)UserIsWddmConnectedSession() )
  {
    v22 = -1073741790;
    goto LABEL_45;
  }
  if ( a4 && !(unsigned int)DrvIsDisplayStateCurrent(1LL, &v48) )
  {
    v22 = -1071774921;
    goto LABEL_45;
  }
  v22 = DrvFunctionalizeDisplayConfig((unsigned int)&v41, (_DWORD)QuotaZInit, a1, v52, (__int64)v43);
  if ( v22 == -2147483643 )
    v22 = -1073741789;
  v39 = v41;
  memmove((void *)a3, QuotaZInit, 216LL * v41);
  *a2 = v39;
  v19 = Address;
  *(_DWORD *)Address = v43[0];
  if ( v22 < 0 )
    goto LABEL_45;
LABEL_48:
  if ( QuotaZInit )
  {
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)QuotaZInit);
    v44 = 0LL;
  }
  UserSessionSwitchLeaveCrit((__int64)v19, v18, v20, v21);
  return (unsigned int)v22;
}
