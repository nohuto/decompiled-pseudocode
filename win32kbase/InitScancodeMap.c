void __fastcall InitScancodeMap(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  const WCHAR *v8; // rdi
  __int64 i; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  void *v14; // rbx
  NTSTATUS v15; // eax
  ULONG v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  const WCHAR *v21; // rdi
  void *v22; // rbx
  NTSTATUS v23; // eax
  ULONG v24; // esi
  void *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  NSInstrumentation::CLeakTrackingAllocator *v29; // rdi
  unsigned __int64 v30; // rbx
  int v31; // eax
  __int64 Pool2; // rbx
  _QWORD *v33; // rax
  char v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  void *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  NSInstrumentation::CLeakTrackingAllocator *v47; // rdi
  __int64 v48; // rbx
  int v49; // eax
  __int64 UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64; // rbx
  _QWORD *v51; // rax
  __int64 v52; // r10
  char v53; // r14
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  PULONG ResultLength; // [rsp+30h] [rbp-D8h]
  PULONG ResultLengtha; // [rsp+30h] [rbp-D8h]
  ULONG Length; // [rsp+48h] [rbp-C0h] BYREF
  ULONG v65; // [rsp+4Ch] [rbp-BCh] BYREF
  int v66; // [rsp+50h] [rbp-B8h]
  int v67; // [rsp+54h] [rbp-B4h]
  unsigned int v68; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v69; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v70; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v71; // [rsp+70h] [rbp-98h] BYREF
  __int64 v72; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v73; // [rsp+80h] [rbp-88h] BYREF
  __int64 v74; // [rsp+88h] [rbp-80h] BYREF
  __int64 v75; // [rsp+90h] [rbp-78h] BYREF
  __int64 *v76; // [rsp+98h] [rbp-70h] BYREF
  unsigned int *v77; // [rsp+A0h] [rbp-68h]
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+B8h] [rbp-50h] BYREF
  PVOID BackTrace[20]; // [rsp+C8h] [rbp-40h] BYREF
  PVOID v81[20]; // [rsp+168h] [rbp+60h] BYREF
  __int128 KeyValueInformation; // [rsp+208h] [rbp+100h] BYREF
  size_t Size[2]; // [rsp+218h] [rbp+110h] BYREF
  _WORD v84[40]; // [rsp+228h] [rbp+120h] BYREF
  _WORD v85[40]; // [rsp+278h] [rbp+170h] BYREF

  if ( *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 12640) )
  {
    v25 = *(void **)(SGDGetUserSessionState(v5, v4, v6, v7) + 12640);
    if ( v25 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v25);
    *(_QWORD *)(SGDGetUserSessionState(v26, v25, v27, v28) + 12640) = 0LL;
  }
  v66 = gdwPolicyFlags;
  v8 = L"Scancode Map";
  DestinationString = 0LL;
  KeyValueInformation = 0LL;
  if ( ((unsigned __int64)L"Scancode Map" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v84[0] = 0;
    RtlLoadStringOrError((unsigned __int16)L"Scancode Map", v84);
    v8 = v84;
  }
  for ( i = OpenCacheKeyEx(0LL); ; i = OpenCacheKeyEx(0LL) )
  {
    v14 = (void *)i;
    if ( !i )
      goto LABEL_13;
    Length = 16;
    RtlInitUnicodeString(&DestinationString, v8);
    v15 = ZwQueryValueKey(v14, &DestinationString, KeyValuePartialInformation, &KeyValueInformation, Length, &Length);
    if ( v15 >= 0 )
    {
      Length = DWORD2(KeyValueInformation);
      memmove(0LL, (char *)&KeyValueInformation + 12, DWORD2(KeyValueInformation));
      ZwClose(v14);
      v16 = Length;
      goto LABEL_12;
    }
    if ( v15 == -2147483643 )
      break;
    if ( !v66 )
    {
      if ( v14 )
        ZwClose(v14);
      goto LABEL_13;
    }
    ZwClose(v14);
  }
  ZwClose(v14);
  v16 = DWORD2(KeyValueInformation);
LABEL_12:
  if ( v16 - 13 > 0xFFF1 )
    goto LABEL_13;
  v29 = gpLeakTrackingAllocator;
  v30 = v16 + 8LL;
  v68 = 1835234133;
  v72 = 260LL;
  v31 = *(_DWORD *)gpLeakTrackingAllocator;
  v73 = v30;
  switch ( v31 )
  {
    case 0:
      Pool2 = ExAllocatePool2(260LL, v16 + 8LL, 1835234133LL);
      if ( Pool2 )
        _InterlockedIncrement64((volatile signed __int64 *)v29 + 14);
      goto LABEL_49;
    case 1:
      if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6D637355u)
        && (unsigned __int64)v16 + 24 >= (unsigned __int64)v16 + 8 )
      {
        v33 = (_QWORD *)ExAllocatePool2(v72 & 0xFFFFFFFFFFFFFFFDuLL, v16 + 24LL, v68);
        Pool2 = (__int64)v33;
        if ( !v33
          || (_InterlockedIncrement64((volatile signed __int64 *)v29 + 14),
              *v33 = 1835234133LL,
              Pool2 = (__int64)(v33 + 2),
              v33 == (_QWORD *)-16LL) )
        {
          NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
            *((NSInstrumentation::CPointerHashTable **)v29 + 1),
            (const void *)0x6D637355);
        }
LABEL_49:
        if ( !Pool2 )
          break;
        goto LABEL_52;
      }
      break;
    case 2:
      v70 = 0LL;
      if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x6D637355u, &v70) )
      {
        v76 = &v72;
        v77 = &v68;
        Pool2 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                  v29,
                  &v76,
                  &v73);
        goto LABEL_49;
      }
      v34 = 0;
      if ( v30 < 0x1000 || (v30 & 0xFFF) != 0 )
      {
        v30 = v16 + 24LL;
        v34 = 1;
        v73 = v30;
      }
      Pool2 = ExAllocatePool2(260LL, v30, 1835234133LL);
      if ( !Pool2 )
        break;
      _InterlockedIncrement64((volatile signed __int64 *)v29 + 16);
      NSInstrumentation::CBackTrace::CBackTrace(BackTrace);
      if ( v34 && (unsigned __int64)(Pool2 & 0xFFF) + 16 < 0x1000 )
      {
        if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                v29,
                                Pool2,
                                v70,
                                BackTrace) )
        {
          Pool2 += 16LL;
          goto LABEL_49;
        }
      }
      else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                   v29,
                                   Pool2,
                                   v70,
                                   BackTrace) )
      {
LABEL_52:
        LODWORD(ResultLength) = v16;
        FastGetProfileValue(0LL, (void *)Pool2, (size_t)ResultLength, 0);
        *(_QWORD *)(SGDGetUserSessionState(v36, v35, v37, v38) + 12640) = Pool2;
        break;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v29 + 17);
      _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)Pool2);
      break;
    default:
      break;
  }
LABEL_13:
  if ( *(_QWORD *)(SGDGetUserSessionState(v11, v10, v12, v13) + 12648) )
  {
    v39 = *(void **)(SGDGetUserSessionState(v18, v17, v19, v20) + 12648);
    if ( v39 )
      NSInstrumentation::CLeakTrackingAllocator::Free(gpLeakTrackingAllocator, v39);
    *(_QWORD *)(SGDGetUserSessionState(v40, v39, v41, v42) + 12648) = 0LL;
    *(_DWORD *)(SGDGetUserSessionState(v44, v43, v45, v46) + 12656) = 0;
  }
  v67 = gdwPolicyFlags;
  v21 = L"Scancode Map Ex";
  ValueName = 0LL;
  *(_OWORD *)Size = 0LL;
  if ( ((unsigned __int64)L"Scancode Map Ex" & 0xFFFFFFFFFFFF0000uLL) == 0 )
  {
    v85[0] = 0;
    RtlLoadStringOrError((unsigned __int16)L"Scancode Map Ex", v85);
    v21 = v85;
  }
  while ( 1 )
  {
    v22 = (void *)OpenCacheKeyEx(0LL);
    if ( !v22 )
      return;
    v65 = 16;
    RtlInitUnicodeString(&ValueName, v21);
    v23 = ZwQueryValueKey(v22, &ValueName, KeyValuePartialInformation, Size, v65, &v65);
    if ( v23 >= 0 )
    {
      v65 = Size[1];
      memmove(0LL, (char *)&Size[1] + 4, LODWORD(Size[1]));
      ZwClose(v22);
      v24 = v65;
      goto LABEL_22;
    }
    if ( v23 == -2147483643 )
      break;
    if ( !v67 )
    {
      ZwClose(v22);
      return;
    }
    ZwClose(v22);
  }
  ZwClose(v22);
  v24 = Size[1];
LABEL_22:
  if ( v24 >= 0x10 && (v24 & 0xF) == 0 )
  {
    v47 = gpLeakTrackingAllocator;
    v48 = v24;
    LODWORD(v69) = 1835234133;
    v74 = 260LL;
    v49 = *(_DWORD *)gpLeakTrackingAllocator;
    v75 = v24;
    switch ( v49 )
    {
      case 0:
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           260LL,
                                                                                           v24,
                                                                                           1835234133LL);
        if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
          _InterlockedIncrement64((volatile signed __int64 *)v47 + 14);
        goto LABEL_80;
      case 1:
        if ( NSInstrumentation::CLeakTrackingAllocator::EnsurePoolTagIncrement(gpLeakTrackingAllocator, 0x6D637355u)
          && (unsigned __int64)v24 + 16 >= v24 )
        {
          v51 = (_QWORD *)ExAllocatePool2(v74 & 0xFFFFFFFFFFFFFFFDuLL, v24 + 16LL, (unsigned int)v69);
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)v51;
          if ( !v51
            || (_InterlockedIncrement64((volatile signed __int64 *)v47 + 14),
                *v51 = 1835234133LL,
                UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = (__int64)(v51 + 2),
                v51 == (_QWORD *)-16LL) )
          {
            NSInstrumentation::CPointerHashTable::LookupInterlockedDecrement(
              *((NSInstrumentation::CPointerHashTable **)v47 + 1),
              (const void *)0x6D637355);
          }
LABEL_80:
          if ( !UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
            return;
          goto LABEL_83;
        }
        break;
      case 2:
        v71 = 0LL;
        if ( !NSInstrumentation::CLeakTrackingAllocator::IsTagTracked(gpLeakTrackingAllocator, 0x6D637355u, &v71) )
        {
          v76 = &v74;
          v77 = (unsigned int *)&v69;
          UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = NSInstrumentation::CLeakTrackingAllocator::MakeUntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64___(
                                                                                             v47,
                                                                                             &v76,
                                                                                             &v75);
          goto LABEL_80;
        }
        v53 = 0;
        if ( v24 < 0x1000uLL || (v24 & 0xFFF) != 0 )
        {
          v48 = v24 + 16LL;
          v53 = 1;
          v75 = v48;
        }
        UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 = ExAllocatePool2(
                                                                                           v52,
                                                                                           v48,
                                                                                           1835234133LL);
        if ( UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 )
        {
          _InterlockedIncrement64((volatile signed __int64 *)v47 + 16);
          NSInstrumentation::CBackTrace::CBackTrace(v81);
          if ( v53
            && (unsigned __int64)(UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 & 0xFFF)
             + 16 < 0x1000 )
          {
            if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
                                    v47,
                                    UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                    v71,
                                    v81) )
            {
              UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64 += 16LL;
              goto LABEL_80;
            }
          }
          else if ( (unsigned __int8)NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<0>(
                                       v47,
                                       UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
                                       v71,
                                       v81) )
          {
LABEL_83:
            LODWORD(ResultLengtha) = v24;
            FastGetProfileValue(
              0LL,
              (void *)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64,
              (size_t)ResultLengtha,
              0);
            *(_QWORD *)(SGDGetUserSessionState(v55, v54, v56, v57) + 12648) = UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64;
            *(_DWORD *)(SGDGetUserSessionState(v59, v58, v60, v61) + 12656) = v24 >> 4;
            return;
          }
          _InterlockedIncrement64((volatile signed __int64 *)v47 + 17);
          _lambda_fbf80a8de0504b0922e6810f5f982d9a_::_lambda_invoker_cdecl_<void *>((PVOID)UntrackedAllocation__lambda_992394a475252bc644037de3157b7526__unsigned___int64);
        }
        break;
      default:
        return;
    }
  }
}
