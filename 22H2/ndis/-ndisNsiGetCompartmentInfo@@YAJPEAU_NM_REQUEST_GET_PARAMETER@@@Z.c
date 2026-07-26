/*
 * XREFs of ?ndisNsiGetCompartmentInfo@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0013900
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C0013D6C (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 *     NdisGetSessionCompartmentId @ 0x1C0013DA0 (NdisGetSessionCompartmentId.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C0013DD8 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x1C0035D54 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memmove @ 0x1C0040840 (memmove.c)
 */

__int64 __fastcall ndisNsiGetCompartmentInfo(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  char v1; // r12
  struct _NDIS_IF_COMPARTMENT_BLOCK *v3; // rbx
  int v4; // edi
  struct _KTHREAD *CurrentThread; // r15
  unsigned int v6; // r14d
  unsigned int *ThreadProperty; // rax
  unsigned int SessionCompartmentId; // ebp
  unsigned int v9; // eax
  unsigned int ThreadSessionId; // eax
  KIRQL v11; // r8
  KIRQL v12; // al
  int v13; // ecx
  KIRQL v14; // r11
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  char *v16; // r13
  unsigned int v17; // ebp
  int v18; // r15d
  int v19; // r14d
  int v20; // eax
  unsigned int v21; // ebp
  KIRQL v22; // bp
  int v24; // ecx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v25; // rax
  __int64 v26; // rdx
  struct _KEVENT *v27; // rcx
  char v28; // [rsp+40h] [rbp-58h]
  __int64 v29; // [rsp+48h] [rbp-50h] BYREF
  __int128 v30; // [rsp+50h] [rbp-48h]

  v1 = 0;
  v3 = 0LL;
  v28 = 0;
  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x15u,
      (struct _GUID *)&WPP_f54e675e1845396bafe5da195840d2ea_Traceguids,
      a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) == 4 && *((_DWORD *)a1 + 12) && *((_QWORD *)a1 + 5) )
  {
    CurrentThread = KeGetCurrentThread();
    v6 = **((_DWORD **)a1 + 2);
    ThreadProperty = (unsigned int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
    if ( ThreadProperty )
    {
      SessionCompartmentId = *ThreadProperty;
      LODWORD(v29) = ThreadProperty[1];
      HIDWORD(v29) = SessionCompartmentId;
      ObfDereferenceObject(ThreadProperty);
      v9 = SessionCompartmentId;
    }
    else
    {
      SessionCompartmentId = 0;
      v29 = 0LL;
      v9 = 0;
    }
    if ( !v9 )
    {
      ThreadSessionId = ndisCmGetThreadSessionId(CurrentThread);
      SessionCompartmentId = NdisGetSessionCompartmentId(ThreadSessionId);
      HIDWORD(v29) = SessionCompartmentId;
    }
    KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    v30 = *(_OWORD *)((char *)ndisIfFindCompartmentBlock(SessionCompartmentId) + 1684);
    KeReleaseSpinLock(&ndisIfListLock, v11);
    v12 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    v13 = *((_DWORD *)a1 + 14);
    v14 = v12;
    if ( v13 )
    {
      v24 = v13 - 1;
      if ( !v24 )
      {
        v6 = 0;
        goto LABEL_47;
      }
      if ( v24 == 1 )
      {
LABEL_47:
        while ( 1 )
        {
          v25 = qword_1C00E5B38;
          v3 = 0LL;
          while ( v25 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00E5B38 )
          {
            if ( *((_DWORD *)v25 + 4) > v6 )
            {
              v3 = v25;
              break;
            }
            v25 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v25;
          }
          if ( !v3 )
            break;
          v6 = *((_DWORD *)v3 + 4);
          if ( ndisIsCompartmentAccessibleByClient(v3, (const struct _NDIS_NSI_CLIENT_INFO *)&v29, 1u) )
            goto LABEL_13;
        }
      }
      else
      {
        v4 = -1073741808;
      }
    }
    else
    {
      CompartmentBlock = ndisIfFindCompartmentBlock(v6);
      v3 = CompartmentBlock;
      if ( CompartmentBlock )
      {
        if ( SessionCompartmentId != *((_DWORD *)CompartmentBlock + 4) )
        {
          v26 = v30 - *(_QWORD *)((char *)CompartmentBlock + 1684);
          if ( (_QWORD)v30 == *(_QWORD *)((char *)CompartmentBlock + 1684) )
            v26 = *((_QWORD *)&v30 + 1) - *(_QWORD *)((char *)CompartmentBlock + 1692);
          if ( v26 && ((*((_DWORD *)CompartmentBlock + 420) & 2) != 0 || SessionCompartmentId != 1) )
            v3 = 0LL;
        }
LABEL_13:
        if ( v3 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v3 + 11);
          v28 = 1;
          **((_DWORD **)a1 + 2) = *((_DWORD *)v3 + 4);
        }
      }
    }
    KeReleaseSpinLock(&ndisIfListLock, v14);
    if ( v4 >= 0 )
    {
      if ( v3 )
      {
        if ( *((_DWORD *)a1 + 8) )
        {
          v4 = -1073741808;
        }
        else
        {
          v16 = (char *)*((_QWORD *)a1 + 5);
          v17 = *((_DWORD *)a1 + 13);
          v18 = *((_DWORD *)a1 + 12);
          if ( v16 )
          {
            while ( v18 > 0 )
            {
              if ( v1 )
                break;
              if ( v17 <= 0x234 )
              {
                if ( v17 == 564 )
                {
                  v20 = 516;
                  v19 = 1080;
                }
                else if ( v17 )
                {
                  switch ( v17 )
                  {
                    case 8u:
                      v20 = 8;
                      v19 = 16;
                      break;
                    case 0x10u:
                      v19 = 32;
                      goto LABEL_27;
                    case 0x20u:
                      v19 = 48;
LABEL_27:
                      v20 = 16;
                      break;
                    case 0x30u:
                      v20 = 516;
                      v19 = 564;
                      break;
                    default:
LABEL_76:
                      v1 = 1;
                      continue;
                  }
                }
                else
                {
                  v20 = 4;
                  v19 = 8;
                }
              }
              else
              {
                switch ( v17 )
                {
                  case 0x438u:
                    v19 = 1096;
                    goto LABEL_27;
                  case 0x448u:
                    v20 = 516;
                    v19 = 1616;
                    break;
                  case 0x650u:
                    v20 = 4;
                    v19 = 1620;
                    break;
                  case 0x654u:
                    v19 = 1636;
                    v1 = 1;
                    goto LABEL_27;
                  default:
                    goto LABEL_76;
                }
              }
              if ( v18 < v20 )
                goto LABEL_76;
              memmove(v16, (char *)v3 + v17 + 64, (unsigned int)v20);
              v16 += v19 - v17;
              v18 += v17 - v19;
              v17 = v19;
            }
            v21 = v17 - *((_DWORD *)a1 + 13);
            *((_DWORD *)a1 + 12) = v21;
            if ( !v21 )
              v4 = -1073741811;
          }
          else
          {
            *((_DWORD *)a1 + 12) = 0;
          }
        }
      }
      else
      {
        v4 = *((_DWORD *)a1 + 14) != 0 ? -2147483622 : -1073741772;
      }
    }
    if ( v28 )
    {
      v22 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v3 + 11, 0xFFFFFFFF) == 1 )
      {
        v27 = (struct _KEVENT *)*((_QWORD *)v3 + 214);
        if ( v27 )
          KeSetEvent(v27, 0, 0);
      }
      KeReleaseSpinLock(&ndisIfListLock, v22);
    }
  }
  else
  {
    v4 = -1073741808;
  }
  KeLeaveCriticalRegion();
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x16u,
      (struct _GUID *)&WPP_f54e675e1845396bafe5da195840d2ea_Traceguids,
      (char)a1,
      v4);
  return (unsigned int)v4;
}
