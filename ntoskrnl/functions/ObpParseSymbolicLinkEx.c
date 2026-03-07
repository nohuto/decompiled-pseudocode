__int64 __fastcall ObpParseSymbolicLinkEx(
        unsigned __int16 *Object,
        POBJECT_TYPE ObjectType,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        KPROCESSOR_MODE a4,
        int a5,
        __int64 a6,
        unsigned __int16 *a7,
        int a8,
        int a9,
        __int64 a10,
        unsigned __int16 **a11)
{
  __int64 v12; // rcx
  __int64 v14; // rdx
  bool v15; // si
  int v16; // eax
  unsigned int v18; // edi
  unsigned __int16 *v19; // r13
  size_t v20; // r12
  unsigned int v21; // edi
  char *v22; // rsi
  char *v23; // rcx
  unsigned __int16 *v24; // rcx
  unsigned __int16 **v25; // rax
  NTSTATUS v27; // eax
  int IntegrityLevel; // r12d
  char IsSandboxedToken; // al
  void *v30; // r12
  __int64 Pool2; // rax
  unsigned __int16 *v32; // r9
  KPROCESSOR_MODE v33; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v34; // [rsp+32h] [rbp-CEh] BYREF
  unsigned int v35; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v36; // [rsp+38h] [rbp-C8h]
  unsigned int v37; // [rsp+40h] [rbp-C0h]
  _QWORD v38[2]; // [rsp+48h] [rbp-B8h] BYREF
  int v39; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v40; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned __int16 **v41; // [rsp+60h] [rbp-A0h]
  PVOID Objecta; // [rsp+68h] [rbp-98h] BYREF
  __int128 v43; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v45; // [rsp+A0h] [rbp-60h]
  __int64 v46; // [rsp+A8h] [rbp-58h]
  __int64 v47; // [rsp+B0h] [rbp-50h]
  _DWORD v48[2]; // [rsp+B8h] [rbp-48h] BYREF
  int *v49; // [rsp+C0h] [rbp-40h]
  __int64 v50; // [rsp+C8h] [rbp-38h]
  int *v51; // [rsp+D0h] [rbp-30h]
  __int64 v52; // [rsp+D8h] [rbp-28h]
  unsigned __int16 *v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  _QWORD *v55; // [rsp+F0h] [rbp-10h]
  __int64 v56; // [rsp+F8h] [rbp-8h]

  v12 = a10;
  v14 = 0LL;
  v15 = 0;
  v41 = a11;
  v16 = *((_DWORD *)Object + 7);
  v33 = a4;
  v36 = a10;
  v37 = 0;
  Objecta = 0LL;
  v43 = 0LL;
  if ( (v16 & 2) != 0 )
  {
    IsSandboxedToken = RtlIsSandboxedToken(a3 + 1);
    a4 = v33;
    v12 = v36;
    v15 = IsSandboxedToken == 0;
    v14 = 0LL;
  }
  if ( *((_DWORD *)Object + 9) < 0x4000u || v15 )
  {
    IntegrityLevel = ObpGetIntegrityLevel(a3 + 1);
    if ( IntegrityLevel < 0 )
      goto LABEL_30;
    a4 = v33;
    v18 = v37;
    v14 = 0LL;
    v12 = v36;
  }
  else
  {
    v18 = 0;
  }
  if ( *((_DWORD *)Object + 9) < v18 || v15 )
  {
    _m_prefetchw(Object + 14);
    if ( _InterlockedOr((volatile signed __int32 *)Object + 7, 0x80000000) >= 0 )
    {
      v35 = 0;
      v30 = 0LL;
      v38[1] = L"UNKNOWN";
      v38[0] = 1048590LL;
      if ( (unsigned int)ObQueryNameStringMode((_DWORD)Object, 0, 0, (unsigned int)&v35, 0) == -1073741820 )
      {
        Pool2 = ExAllocatePool2(256LL, v35, 1833853519LL);
        v30 = (void *)Pool2;
        if ( Pool2 )
          ObQueryNameStringMode((_DWORD)Object, Pool2, v35, (unsigned int)&v35, 0);
      }
      if ( (unsigned int)dword_140C02F98 > 5 && tlgKeywordOn((__int64)&dword_140C02F98, 0x400000000000LL) )
      {
        v46 = 2LL;
        v48[1] = 0;
        v45 = v48;
        v47 = *((_QWORD *)v32 + 1);
        v48[0] = *v32;
        v39 = *((_DWORD *)Object + 9);
        v49 = &v39;
        v51 = (int *)&v40;
        v53 = &v34;
        v55 = v38;
        v50 = 4LL;
        v40 = v18;
        v52 = 4LL;
        LOBYTE(v34) = v15;
        v54 = 1LL;
        v38[0] = 0x1000000LL;
        v56 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C02F98,
          (unsigned __int8 *)byte_14002D565,
          0LL,
          0LL,
          8u,
          &v44);
      }
      if ( v30 )
        ExFreePoolWithTag(v30, 0);
      a4 = v33;
    }
    if ( v15 )
    {
      IntegrityLevel = -1073741772;
      goto LABEL_30;
    }
    v12 = v36;
  }
  if ( *a7 )
  {
    if ( **((_WORD **)a7 + 1) != 92 )
    {
      IntegrityLevel = -1073741788;
      goto LABEL_30;
    }
    goto LABEL_10;
  }
  if ( ObjectType == ObpSymbolicLinkObjectType )
  {
    if ( (*((_DWORD *)Object + 7) & 1) != 0 )
    {
      if ( PsIsCurrentThreadInServerSilo(v12, v14) )
      {
LABEL_58:
        v12 = v36;
        goto LABEL_10;
      }
      a4 = v33;
    }
    v27 = ObReferenceObjectByPointer(Object, 0, ObjectType, a4);
    IntegrityLevel = v27;
    if ( v27 >= 0 )
    {
      *v41 = Object;
      goto LABEL_30;
    }
    if ( v27 != -1073741788 )
      goto LABEL_30;
    goto LABEL_58;
  }
LABEL_10:
  if ( (*((_DWORD *)Object + 7) & 8) != 0 )
    *(_DWORD *)(v12 + 4) &= *((_DWORD *)Object + 8);
  if ( (*((_DWORD *)Object + 7) & 4) != 0 )
    *(_QWORD *)(v36 + 8) = PdcCreateWatchdogAroundClientCall();
  v19 = Object + 4;
  if ( (*((_DWORD *)Object + 7) & 0x10) != 0 )
  {
    IntegrityLevel = (*(__int64 (__fastcall **)(unsigned __int16 *, _QWORD, __int128 *, PVOID *))v19)(
                       Object,
                       *((_QWORD *)Object + 2),
                       &v43,
                       &Objecta);
    if ( IntegrityLevel < 0 )
      goto LABEL_30;
    v19 = (unsigned __int16 *)&v43;
  }
  v20 = *v19;
  if ( *v19
    && *(_WORD *)(*((_QWORD *)v19 + 1) + 2 * ((unsigned __int64)*v19 >> 1) - 2) == 92
    && *a7
    && **((_WORD **)a7 + 1) == 92 )
  {
    v20 = (unsigned int)(v20 - 2);
  }
  v21 = v20 + *a7;
  if ( v21 > 0xFFF0 )
  {
    IntegrityLevel = -1073741562;
  }
  else
  {
    v34 = *(_WORD *)(a6 + 2);
    if ( v34 > (unsigned __int16)v21 )
    {
      v22 = *(char **)(a6 + 8);
LABEL_20:
      if ( *a7 )
        memmove(&v22[v20], *((const void **)a7 + 1), *a7);
      memmove(v22, *((const void **)v19 + 1), v20);
      *(_WORD *)&v22[2 * ((unsigned __int64)(unsigned __int16)v21 >> 1)] = 0;
      v23 = *(char **)(a6 + 8);
      if ( v22 != v23 && v23 )
        ExFreePoolWithTag(v23, 0);
      v24 = (unsigned __int16 *)Objecta;
      *(_WORD *)(a6 + 2) = v34;
      v25 = v41;
      *(_QWORD *)(a6 + 8) = v22;
      *(_WORD *)a6 = v21;
      if ( v24 )
      {
        *v25 = v24;
        return 280LL;
      }
      else
      {
        *v25 = Object;
        if ( (*((_DWORD *)Object + 7) & 1) != 0 )
          return 872LL;
        else
          return 260LL;
      }
    }
    v34 = v21 + 2;
    v22 = (char *)ExAllocatePool2(256LL, (unsigned __int16)(v21 + 2), 1833853519LL);
    if ( v22 )
      goto LABEL_20;
    IntegrityLevel = -1073741670;
  }
LABEL_30:
  if ( Objecta )
    ObfDereferenceObject(Objecta);
  return (unsigned int)IntegrityLevel;
}
