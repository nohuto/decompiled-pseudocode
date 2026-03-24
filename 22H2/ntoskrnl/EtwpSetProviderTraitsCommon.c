/*
 * XREFs of EtwpSetProviderTraitsCommon @ 0x1406BC01C
 * Callers:
 *     EtwpSetProviderTraitsUm @ 0x1406BBE50 (EtwpSetProviderTraitsUm.c)
 *     EtwpSetProviderTraitsKm @ 0x14077F048 (EtwpSetProviderTraitsKm.c)
 * Callees:
 *     RtlULongAdd @ 0x140200578 (RtlULongAdd.c)
 *     RtlRbInsertNodeEx @ 0x1402C0B10 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1402C1170 (RtlRbRemoveNode.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     strnlen @ 0x1403D34D0 (strnlen.c)
 *     Feature_1445264698__private_IsEnabledDeviceUsage @ 0x1403F8A24 (Feature_1445264698__private_IsEnabledDeviceUsage.c)
 *     TraitsCompare @ 0x1406799E0 (TraitsCompare.c)
 *     EtwpReleaseProviderTraitsReference @ 0x14067DEA8 (EtwpReleaseProviderTraitsReference.c)
 *     EtwpGetProviderGroupFromTraits @ 0x1406BC308 (EtwpGetProviderGroupFromTraits.c)
 *     EtwpAddRegEntryToGroup @ 0x1406BC360 (EtwpAddRegEntryToGroup.c)
 *     AddDecodeGuidToSessions @ 0x140941B9C (AddDecodeGuidToSessions.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpSetProviderTraitsCommon(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        const char *P,
        unsigned int a6,
        PFAST_MUTEX FastMutex,
        __int64 a8)
{
  char *v8; // rdi
  struct _FAST_MUTEX *v9; // r15
  bool v11; // r14
  char *v12; // rbp
  __int16 v13; // r13
  unsigned int v14; // ebx
  __int64 v15; // rdx
  bool v16; // zf
  ULONG *v17; // r14
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  bool v20; // bp
  char v21; // r15
  unsigned int v22; // r9d
  int v23; // eax
  unsigned __int64 v24; // rax
  int IsEnabledDeviceUsage; // eax
  ULONG v26; // eax
  NTSTATUS v27; // eax
  int v28; // eax
  bool v29; // dl
  __int128 *ProviderGroupFromTraits; // rax
  bool v32; // [rsp+30h] [rbp-88h]
  ULONG pulResult; // [rsp+34h] [rbp-84h] BYREF
  int v34; // [rsp+38h] [rbp-80h]
  PKGUARDED_MUTEX Mutex; // [rsp+40h] [rbp-78h]
  __int64 v36; // [rsp+48h] [rbp-70h]
  __int64 v37; // [rsp+50h] [rbp-68h]
  __int128 v38; // [rsp+58h] [rbp-60h] BYREF

  v8 = (char *)P;
  v9 = FastMutex;
  v11 = 0;
  v12 = (char *)P;
  v36 = a3;
  v13 = 0;
  v34 = a2;
  v37 = a1;
  Mutex = FastMutex;
  pulResult = 0;
  *(_QWORD *)&v38 = P;
  if ( a6 < 3 )
    goto LABEL_2;
  if ( *((unsigned __int16 *)P + 14) != a6 )
    goto LABEL_2;
  v15 = (unsigned int)strnlen(P + 30, a6 - 2) + 3;
  v16 = (_DWORD)v15 == a6;
  if ( (unsigned int)v15 > a6 )
    goto LABEL_2;
  if ( (unsigned int)v15 < a6 )
  {
    while ( (int)v15 + 2 <= a6 )
    {
      LODWORD(v15) = *(unsigned __int16 *)&P[v15 + 28] + (_DWORD)v15;
      v16 = (_DWORD)v15 == a6;
      if ( (unsigned int)v15 >= a6 )
        goto LABEL_8;
    }
LABEL_2:
    v14 = -1073741566;
    goto LABEL_48;
  }
LABEL_8:
  if ( !v16 )
    goto LABEL_2;
  v17 = (ULONG *)(P + 24);
  *(_OWORD *)P = 0LL;
  *((_QWORD *)P + 2) = 0LL;
  *((_DWORD *)P + 6) = 1;
  ExAcquireFastMutex(FastMutex);
  v32 = (unsigned int)Feature_1445264698__private_IsEnabledDeviceUsage() != 0;
  if ( (*(_BYTE *)(a8 + 8) & 1) != 0 )
  {
    v18 = *(_QWORD *)a8;
    if ( !*(_QWORD *)a8 )
    {
LABEL_14:
      v18 = 0LL;
      v20 = 0;
      v21 = 0;
LABEL_15:
      RtlRbInsertNodeEx((unsigned __int64 *)a8, v18, v20, (unsigned __int64)P);
      v22 = 0;
      v12 = 0LL;
      goto LABEL_16;
    }
    v19 = a8 ^ v18;
  }
  else
  {
    v19 = *(_QWORD *)a8;
    v18 = *(_QWORD *)a8;
  }
  if ( !v19 )
    goto LABEL_14;
  v20 = 0;
  v21 = 0;
  if ( !v18 )
    goto LABEL_27;
  while ( 1 )
  {
    v23 = TraitsCompare((__int64)P, v18);
    if ( v23 <= 0 )
      break;
    v24 = *(_QWORD *)(v18 + 8);
    if ( !v24 )
    {
      v20 = 1;
      goto LABEL_15;
    }
LABEL_25:
    v18 = v24;
  }
  if ( v23 < 0 )
  {
    v24 = *(_QWORD *)v18;
    if ( !*(_QWORD *)v18 )
      goto LABEL_15;
    goto LABEL_25;
  }
  v21 = 1;
LABEL_27:
  if ( !v21 )
    goto LABEL_15;
  v8 = (char *)v18;
  IsEnabledDeviceUsage = Feature_1445264698__private_IsEnabledDeviceUsage();
  v22 = 0;
  v17 = (ULONG *)(v18 + 24);
  v16 = IsEnabledDeviceUsage == 0;
  v26 = *(_DWORD *)(v18 + 24);
  if ( v16 )
  {
    v12 = (char *)v38;
    *v17 = v26 + 1;
LABEL_16:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a4 + 104), (signed __int64)v8, 0LL) )
    {
      if ( v21 )
      {
        --*v17;
      }
      else
      {
        RtlRbRemoveNode((unsigned __int64 *)a8, (unsigned __int64)v8);
        v12 = v8;
      }
      v14 = -1073741823;
    }
    else
    {
      v14 = v22;
    }
    v28 = Feature_1445264698__private_IsEnabledDeviceUsage();
    v29 = 0;
    v9 = Mutex;
    if ( !v28 )
      v29 = v32;
    v11 = v29;
    KeReleaseGuardedMutex(Mutex);
    if ( !v14 )
    {
      if ( *((_WORD *)v8 + 14) == 22 && *(_DWORD *)(v8 + 30) == 33559296 )
      {
        if ( (unsigned __int8)AddDecodeGuidToSessions(a4) )
          v13 = 1024;
      }
      else if ( !*(_QWORD *)(a4 + 40) )
      {
        ProviderGroupFromTraits = (__int128 *)EtwpGetProviderGroupFromTraits();
        if ( ProviderGroupFromTraits )
        {
          v38 = *ProviderGroupFromTraits;
          v14 = EtwpAddRegEntryToGroup(a4, (unsigned int)&v38, v37, v34, v36);
          if ( v14 )
          {
            EtwpReleaseProviderTraitsReference(a4);
            goto LABEL_48;
          }
        }
      }
      _InterlockedOr16((volatile signed __int16 *)(a4 + 98), v13 | 0x200);
    }
  }
  else
  {
    v27 = RtlULongAdd(v26, 1u, &pulResult);
    v12 = (char *)v38;
    v14 = v27;
    if ( v27 >= 0 )
    {
      *v17 = pulResult;
      goto LABEL_16;
    }
    v11 = v32;
    v9 = Mutex;
  }
LABEL_48:
  if ( (unsigned int)Feature_1445264698__private_IsEnabledDeviceUsage() && v11 )
    KeReleaseGuardedMutex(v9);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  return v14;
}
