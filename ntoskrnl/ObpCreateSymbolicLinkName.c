__int16 __fastcall ObpCreateSymbolicLinkName(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  int v4; // r14d
  __int64 *v5; // rcx
  struct _LIST_ENTRY *CurrentServerSiloGlobals; // rax
  unsigned __int16 v7; // dx
  struct _LIST_ENTRY *CurrentSilo; // rax
  __int64 v9; // rsi
  struct _LIST_ENTRY *v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rsi
  struct _OBJECT_TYPE *v15; // rax
  char v16; // di
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v23; // r12
  int v24; // r15d
  void *v25; // rdi
  struct _KTHREAD *v26; // rcx
  bool v27; // zf
  __int128 v28; // xmm0
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  __int128 v34; // [rsp+20h] [rbp-40h] BYREF
  __int128 v35; // [rsp+30h] [rbp-30h] BYREF
  __int128 v36; // [rsp+40h] [rbp-20h] BYREF
  __int64 v37; // [rsp+50h] [rbp-10h]
  __int64 v38; // [rsp+A0h] [rbp+40h]
  PVOID Object; // [rsp+A8h] [rbp+48h]

  v1 = a1 - 48;
  LOWORD(v2) = *(unsigned __int8 *)(a1 - 48 + 26);
  v4 = 64;
  v35 = 0LL;
  if ( (v2 & 2) != 0 )
  {
    v2 = ObpInfoMaskToOffset[v2 & 3];
    v5 = (__int64 *)(v1 - v2);
    if ( v1 != v2 )
    {
      v2 = *v5;
      if ( *(_QWORD *)(*v5 + 304) )
      {
        if ( *((_WORD *)v5 + 4) == 4 )
        {
          v2 = v5[2];
          if ( *(_WORD *)(v2 + 2) == 58 )
          {
            CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
            LOWORD(v2) = NLS_UPCASE((__int64)CurrentServerSiloGlobals[77].Flink, v7);
            if ( (unsigned __int16)(v2 - 65) <= 0x19u )
            {
              *(_DWORD *)(a1 + 24) = (unsigned __int16)v2 - 64;
              v37 = 0LL;
              v36 = 0LL;
              CurrentSilo = PsGetCurrentSilo();
              Object = OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO((__int64)CurrentSilo);
              v9 = (__int64)Object;
              ObfReferenceObject(Object);
              v34 = *(_OWORD *)(a1 + 8);
              v10 = PsGetCurrentServerSiloGlobals();
LABEL_9:
              v11 = v9;
              v12 = *(_QWORD *)((unsigned __int64)v10->Flink & 0xFFFFFFFFFFFFFFF0uLL);
              if ( v12 && (unsigned __int16)v34 >= 8u && **((_QWORD **)&v34 + 1) == 0x5C003F003F005CLL )
              {
                *((_QWORD *)&v34 + 1) += 8LL;
                LOWORD(v34) = v34 - 8;
                v11 = v12;
              }
              ObpLockDirectoryShared((__int64)&v36, v11);
              while ( (unsigned __int8)ObpParseComponentName(&v34, &v35) )
              {
                v13 = ObpLookupDirectoryEntry(&v35, 0LL, &v36);
                v14 = v13;
                if ( !v13 )
                  goto LABEL_18;
                v15 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v13 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v13 - 48) >> 8)];
                if ( v15 != ObpDirectoryObjectType )
                {
                  if ( v15 == ObpSymbolicLinkObjectType && !*(_DWORD *)(v14 + 24) )
                  {
                    if ( v4 )
                    {
                      --v4;
                      ObpUnlockDirectory((__int64)&v36);
                      if ( (_WORD)v34 || (*(_DWORD *)(a1 + 28) & 0xE) != 0 )
                        *(_DWORD *)(a1 + 28) &= ~0x20u;
                      v28 = *(_OWORD *)(v14 + 8);
                      v9 = (__int64)Object;
                      v34 = v28;
                      goto LABEL_9;
                    }
                    v14 = 0LL;
                  }
LABEL_18:
                  v38 = *(_QWORD *)(*(_QWORD *)(v1 - ObpInfoMaskToOffset[*(_BYTE *)(v1 + 26) & 3]) + 304LL);
                  v16 = 1;
                  if ( !v14 )
                    goto LABEL_26;
                  if ( ((unsigned __int8)ObHeaderCookie ^ (unsigned __int8)(*(_BYTE *)(v14 - 24) ^ ((unsigned __int16)(v14 - 48) >> 8))) != *(_BYTE *)(IoDeviceObjectType + 40) )
                  {
                    v14 = 0LL;
                    goto LABEL_26;
                  }
                  v17 = *(_DWORD *)(v14 + 72);
                  if ( v17 > 0x10 )
                  {
                    v29 = v17 - 18;
                    if ( v29 )
                    {
                      v30 = v29 - 1;
                      if ( v30 )
                      {
                        v31 = v30 - 1;
                        if ( v31 )
                        {
                          v32 = v31 - 16;
                          if ( !v32 )
                          {
                            v16 = 6;
                            goto LABEL_26;
                          }
                          if ( v32 != 4 )
                            goto LABEL_56;
                        }
                      }
                    }
                  }
                  else if ( v17 != 16 )
                  {
                    v18 = v17 - 2;
                    if ( v18 && (v19 = v18 - 1) != 0 )
                    {
                      v20 = v19 - 4;
                      if ( !v20 || v20 - 1 <= 1 )
                      {
                        v16 = ((*(_DWORD *)(v14 + 52) & 1) == 0) + 2;
                        goto LABEL_26;
                      }
LABEL_56:
                      v16 = 0;
                    }
                    else
                    {
                      v16 = 5;
                    }
LABEL_26:
                    v21 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
                    if ( !v14 || (*(_DWORD *)(a1 + 28) & 0x20) == 0 )
                      v14 = a1;
                    ObfReferenceObject((PVOID)v14);
                    CurrentThread = KeGetCurrentThread();
                    --CurrentThread->SpecialApcDisable;
                    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v10[7].Blink, 0LL);
                    v23 = (unsigned int)v21;
                    *(_BYTE *)(v21 + v38 + 260) = v16;
                    v24 = 1 << v21;
                    *(_DWORD *)(v38 + 256) |= v24;
                    v25 = (void *)ObFastReplaceObject((volatile __int64 *)(v38 + 32 + 8 * v23), v14);
                    if ( v38 == ((unsigned __int64)v10->Flink & 0xFFFFFFFFFFFFFFF0uLL) )
                      LODWORD(v10->Blink) |= v24;
                    else
                      ++*((_DWORD *)&v10->Blink + v23 + 1);
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v10[7].Blink, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)&v10[7].Blink);
                    KeAbPostRelease((ULONG_PTR)&v10[7].Blink);
                    v26 = KeGetCurrentThread();
                    v27 = v26->SpecialApcDisable++ == -1;
                    if ( v27 && ($C71981A45BEB2B45F82C232A7085991E *)v26->ApcState.ApcListHead[0].Flink != &v26->152 )
                      KiCheckForKernelApcDelivery();
                    if ( v25 )
                      ObDereferenceObjectDeferDelete(v25);
                    break;
                  }
                  v16 = 4;
                  goto LABEL_26;
                }
                ObpLockChildDirectory(&v36, v14, 0LL);
              }
              if ( (_QWORD)v36 )
                ObpUnlockDirectory((__int64)&v36);
              LOWORD(v2) = ObfDereferenceObject(Object);
            }
          }
        }
      }
    }
  }
  return v2;
}
