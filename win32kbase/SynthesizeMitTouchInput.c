char __fastcall SynthesizeMitTouchInput(unsigned int *a1)
{
  unsigned int v2; // eax
  unsigned __int64 v3; // rdx
  NSInstrumentation::CLeakTrackingAllocator *v4; // rcx
  __int64 QuotaZInit; // rdi
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  char *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // r14
  unsigned int *v13; // rax
  char *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  char v23; // si
  struct tagRECT v25; // [rsp+30h] [rbp-50h] BYREF
  struct tagRECT v26; // [rsp+40h] [rbp-40h] BYREF
  __int128 v27; // [rsp+50h] [rbp-30h] BYREF
  __int64 v28; // [rsp+60h] [rbp-20h]
  __int128 v29; // [rsp+68h] [rbp-18h] BYREF
  __int64 v30; // [rsp+78h] [rbp-8h]
  __int64 v31; // [rsp+B0h] [rbp+30h] BYREF

  v30 = 0LL;
  v28 = 0LL;
  v2 = *a1 - 1;
  v29 = 0LL;
  v27 = 0LL;
  if ( v2 > 9 )
    return 0;
  if ( !TouchExtensibility::ghInjectionDevice )
    goto LABEL_27;
  if ( !HMValidateHandleNoSecure((int)TouchExtensibility::hDeviceUser, 19) )
    TouchExtensibility::ghInjectionDevice = 0LL;
  if ( !TouchExtensibility::ghInjectionDevice )
  {
LABEL_27:
    if ( !(unsigned int)CreateInjectionDevice() )
      return 0;
  }
  QuotaZInit = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(v4, v3, 0xF0uLL, 0x7A747355u);
  v7 = NSInstrumentation::CLeakTrackingAllocator::AllocateQuotaZInit(
         (NSInstrumentation::CLeakTrackingAllocator *)*a1,
         v6,
         192LL * *a1,
         0x7A747355u);
  v8 = (char *)v7;
  if ( QuotaZInit && v7 )
  {
    *(_QWORD *)(QuotaZInit + 232) = v7;
    v9 = 0LL;
    *(_QWORD *)(QuotaZInit + 32) = TouchExtensibility::ghInjectionDevice;
    *(_DWORD *)(QuotaZInit + 192) = 1;
    v10 = *((_QWORD *)a1 + 12);
    *(_DWORD *)(QuotaZInit + 28) = 0;
    *(_QWORD *)(QuotaZInit + 48) = v10;
    *(_DWORD *)(QuotaZInit + 24) = *a1;
    if ( *a1 )
    {
      while ( 1 )
      {
        v31 = 0LL;
        v11 = 18 * v9;
        v12 = 192 * v9;
        v13 = &a1[36 * v9];
        v14 = &v8[192 * v9];
        *((_OWORD *)v14 + 1) = *((_OWORD *)v13 + 1);
        *((_OWORD *)v14 + 2) = *((_OWORD *)v13 + 2);
        *((_OWORD *)v14 + 3) = *((_OWORD *)v13 + 3);
        *((_OWORD *)v14 + 4) = *((_OWORD *)v13 + 4);
        *((_OWORD *)v14 + 5) = *((_OWORD *)v13 + 5);
        *((_OWORD *)v14 + 6) = *((_OWORD *)v13 + 6);
        *((_OWORD *)v14 + 7) = *((_OWORD *)v13 + 7);
        *((_OWORD *)v14 + 8) = *((_OWORD *)v13 + 8);
        *((_OWORD *)v14 + 9) = *((_OWORD *)v13 + 9);
        v15 = *((_QWORD *)v13 + 8);
        *(_QWORD *)&v8[192 * v9 + 48] = v15;
        v25 = TouchExtensibility::rcHimetricRect;
        v26 = TouchExtensibility::rcLogicalRect;
        if ( !(unsigned int)ConvertPointCoordinates(v15, &v26.left, &v25.left, &v31) )
          break;
        v16 = v31;
        v9 = (unsigned int)(v9 + 1);
        *(_QWORD *)&v8[v12 + 56] = v31;
        *(_QWORD *)&v8[v12 + 72] = v16;
        *(_QWORD *)&v8[v12 + 32] = *(_QWORD *)(QuotaZInit + 32);
        *(_DWORD *)&v8[v12 + 80] = a1[2 * v11 + 20];
        *(_QWORD *)&v8[v12 + 96] = *(_QWORD *)&a1[2 * v11 + 24];
        LOWORD(v16) = a1[2 * v11 + 5];
        *(_DWORD *)&v8[v12 + 20] = 0;
        *(_WORD *)&v8[v12 + 8] = v16;
        if ( (unsigned int)v9 >= *a1 )
          goto LABEL_12;
      }
      v23 = 0;
    }
    else
    {
LABEL_12:
      if ( qword_1C02D65C8 )
      {
        qword_1C02D65C8(QuotaZInit, &v29, Win32FreePool);
        if ( qword_1C02D65C8 )
          qword_1C02D65C8(v8, &v27, Win32FreePool);
      }
      v17 = HMValidateHandleNoSecure((int)TouchExtensibility::hDeviceUser, 19);
      InputTraceLogging::RIM::InjectInput(v17);
      v22 = SGDGetUserSessionState(v19, v18, v20, v21);
      CTouchProcessor::ProcessInjectedInput(
        *(struct _KTHREAD ***)(v22 + 3424),
        (__int64)TouchExtensibility::ghInjectionDevice,
        (struct RIMCOMPLETEFRAME *)QuotaZInit,
        a1[1] != 0,
        a1[3],
        a1[2] != 0);
      v23 = 1;
      if ( qword_1C02D65D8 )
      {
        qword_1C02D65D8(&v27);
        if ( qword_1C02D65D8 )
          qword_1C02D65D8(&v29);
      }
    }
    goto LABEL_20;
  }
  v23 = 0;
  if ( QuotaZInit )
LABEL_20:
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, (char *)QuotaZInit);
  if ( v8 )
    NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v8);
  return v23;
}
