/*
 * XREFs of ParseAcquire @ 0x1C000A6C0
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x1C00022D4 (IsCompatableDSDTRevision.c)
 *     HeapAlloc @ 0x1C0008E30 (HeapAlloc.c)
 *     PerformMutexDriverCallbacks @ 0x1C0010328 (PerformMutexDriverCallbacks.c)
 *     LogError @ 0x1C002A2EC (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1C002B810 (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x1C002C540 (PrintDebugMessage.c)
 *     ReleaseASLMutex @ 0x1C002F32C (ReleaseASLMutex.c)
 *     AcquireGL @ 0x1C0065094 (AcquireGL.c)
 *     ReleaseGL @ 0x1C0065C3C (ReleaseGL.c)
 *     QueueContext @ 0x1C00686E4 (QueueContext.c)
 */

__int64 __fastcall ParseAcquire(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // edx
  unsigned int v5; // esi
  int v7; // eax
  __int64 v8; // r9
  __int64 v9; // rdi
  int v10; // eax
  unsigned __int16 v11; // r12
  KSPIN_LOCK *v12; // rdi
  KIRQL v13; // r15
  int v14; // ecx
  __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // r8
  int v19; // eax
  int v20; // eax
  _QWORD *v21; // rbx
  _QWORD *v22; // rdi
  __int64 v23; // r9
  _QWORD *v24; // rax
  _QWORD *i; // rdx
  _QWORD *v26; // rcx
  _QWORD *v27; // r8
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // r8
  __int64 v32; // r10
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rdi
  __int64 v37; // rdx
  _QWORD *v38; // rax
  int v39; // eax
  int v40; // eax
  int v41; // edi
  bool v42; // al
  __int64 v43; // rcx
  __int64 v44; // rcx
  _QWORD *v45; // rax

  v4 = *(_DWORD *)(a2 + 16);
  v5 = a3;
  v7 = v4 & 0xF;
  if ( v7 == 3 )
  {
    v7 = 3;
    goto LABEL_53;
  }
  if ( a3 )
  {
    v7 = 5;
    goto LABEL_53;
  }
  if ( (v4 & 0xF) != 0 )
  {
LABEL_53:
    switch ( v7 )
    {
      case 1:
        goto LABEL_6;
      case 2:
        goto LABEL_8;
      case 3:
        goto LABEL_20;
      case 4:
        goto LABEL_23;
      case 5:
        goto LABEL_25;
      case 6:
        goto LABEL_27;
      default:
        return v5;
    }
  }
  v8 = *(_QWORD *)(a2 + 56);
  v9 = *(_QWORD *)(a2 + 32);
  *(_DWORD *)(a2 + 16) = v4 + 1;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 32), 0, 0) == 2
    && (int)PerformMutexDriverCallbacks(4, v9, a1, v8, 0) >= 0 )
  {
    _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 32), 3, 2);
  }
  v4 = *(_DWORD *)(a2 + 16);
LABEL_6:
  *(_DWORD *)(a2 + 16) = v4 + 1;
  if ( ((v4 + 1) & 0x10000) != 0 )
  {
    v5 = AcquireGL(a1);
    if ( v5 )
      return v5;
  }
  v4 = *(_DWORD *)(a2 + 16);
LABEL_8:
  if ( (v4 & 0x10000) != 0 )
    *(_DWORD *)(a2 + 16) = v4 | 0x20000;
  v10 = *(_DWORD *)(a1 + 64);
  v5 = 0;
  v11 = *(_WORD *)(a2 + 40);
  v12 = *(KSPIN_LOCK **)(a2 + 32);
  if ( (v10 & 4) != 0 )
  {
    v5 = 32773;
    *(_DWORD *)(a1 + 64) = v10 & 0xFFFFFFFB;
LABEL_57:
    v20 = *(_DWORD *)(a2 + 16);
    goto LABEL_19;
  }
  v13 = KeAcquireSpinLockRaiseToDpc(v12 + 23);
  if ( *(_DWORD *)v12 < *(_DWORD *)(a1 + 112) )
  {
    v5 = -1072431083;
    LogError(3222536213LL);
    AcpiDiagTraceAmlError(a1, 3222536213LL);
    PrintDebugMessage(5, 0, 0, 0, 0LL);
  }
  else
  {
    v14 = *((_DWORD *)v12 + 1);
    if ( v14 )
    {
      if ( *(_QWORD *)(v12[1] + 8) == a1 )
      {
        *((_DWORD *)v12 + 1) = v14 + 1;
      }
      else
      {
        QueueContext(a1, v11, v12 + 2);
        v5 = 32772;
      }
    }
    else
    {
      v15 = HeapAlloc(*(struct _SLIST_ENTRY **)(a1 + 320), 1380865871, 0x28u);
      if ( v15 )
      {
        v16 = (_QWORD *)(a1 + 48);
        *(_QWORD *)(v15 + 8) = a1;
        *(_QWORD *)(v15 + 16) = v12;
        v17 = (_QWORD *)(v15 + 24);
        *(_DWORD *)v15 = 1;
        v18 = *(_QWORD *)(a1 + 48);
        if ( *(_QWORD *)(v18 + 8) != a1 + 48 )
          goto LABEL_48;
        *v17 = v18;
        *(_QWORD *)(v15 + 32) = v16;
        *(_QWORD *)(v18 + 8) = v17;
        *v16 = v17;
        v12[1] = v15;
        v19 = *(_DWORD *)v12;
        *((_DWORD *)v12 + 1) = 1;
        *(_DWORD *)(a1 + 112) = v19;
      }
      else
      {
        v5 = -1073741670;
        LogError(3221225626LL);
        AcpiDiagTraceAmlError(a1, 3221225626LL);
        PrintDebugMessage(4, 0, 0, 0, 0LL);
      }
    }
  }
  KeReleaseSpinLock(v12 + 23, v13);
  if ( v5 == 32772 )
  {
    v39 = *(_DWORD *)(a2 + 16);
    if ( (v39 & 0x20000) != 0 )
    {
      *(_DWORD *)(a2 + 16) = v39 & 0xFFFDFFFF;
      v5 = ReleaseGL(a1);
      v40 = *(_DWORD *)(a2 + 16);
      if ( v5 )
      {
        *(_DWORD *)(a2 + 16) = v40 + 3;
        LogError(3222536195LL);
        AcpiDiagTraceAmlError(a1, 3222536195LL);
        PrintDebugMessage(119, v5, 0, 0, 0LL);
        return (unsigned int)-1072431101;
      }
      else
      {
        *(_DWORD *)(a2 + 16) = v40 - 1;
      }
    }
    return v5;
  }
  if ( v5 )
    goto LABEL_57;
  v20 = *(_DWORD *)(a2 + 16) | 0x80000;
LABEL_19:
  *(_DWORD *)(a2 + 16) = v20 + 1;
LABEL_20:
  if ( v5 == 32773
    || *(_DWORD *)(*(_QWORD *)(a2 + 32) + 32LL) != 3
    || (v5 = PerformMutexDriverCallbacks(2, *(_QWORD *)(a2 + 32), a1, *(_QWORD *)(a1 + 80), *(_WORD *)(a2 + 40)),
        v5 != 32772) )
  {
    v4 = ++*(_DWORD *)(a2 + 16);
LABEL_23:
    if ( v5 )
    {
      if ( (v4 & 0x80000) != 0 )
      {
        *(_DWORD *)(a2 + 16) = v4 & 0xFFF7FFFF;
        ReleaseASLMutex(a1, *(_QWORD *)(a2 + 32), 0LL);
        v4 = *(_DWORD *)(a2 + 16);
      }
      if ( (v4 & 0x20000) != 0 )
      {
        *(_DWORD *)(a2 + 16) = v4 & 0xFFFDFFFF;
        v41 = ReleaseGL(a1);
        if ( v41 )
        {
          LogError(3222536195LL);
          AcpiDiagTraceAmlError(a1, 3222536195LL);
          PrintDebugMessage(172, v41, 0, 0, 0LL);
          v5 = -1072431101;
        }
      }
      if ( *(_DWORD *)(*(_QWORD *)(a2 + 32) + 32LL) == 3 )
      {
        if ( *(_WORD *)(a2 + 40) == 0xFFFF )
        {
          *(_DWORD *)(a2 + 16) = 1;
          return v5;
        }
        v5 = 32773;
      }
    }
    v4 = ++*(_DWORD *)(a2 + 16);
LABEL_25:
    if ( (v4 & 0x40000) != 0 )
    {
      *(_WORD *)(*(_QWORD *)(a2 + 48) + 2LL) = 1;
      if ( v5 )
      {
        v42 = IsCompatableDSDTRevision();
        v43 = 0xFFFFFFFFLL;
        if ( v42 )
          v43 = -1LL;
        v5 = 0;
        *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = v43;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(a2 + 48) + 16LL) = 0LL;
      }
    }
    ++*(_DWORD *)(a2 + 16);
LABEL_27:
    v21 = *(_QWORD **)(a1 + 416);
    v22 = v21 - 2;
    *(_QWORD *)(a1 + 416) = v21[1];
    *((_DWORD *)v21 - 4) = 0;
    NewIrql = KeAcquireSpinLockRaiseToDpc(&gmutHeap);
    v23 = *(v21 - 1);
    v24 = *(_QWORD **)(v23 + 40);
    for ( i = (_QWORD *)(v23 + 40); v24 != i; v24 = (_QWORD *)*v24 )
    {
      if ( v21 < v24 )
        break;
    }
    v26 = (_QWORD *)v24[1];
    if ( (_QWORD *)*v26 == v24 )
    {
      v21[1] = v26;
      *v21 = v24;
      *v26 = v21;
      v24[1] = v21;
      v27 = (_QWORD *)*v21;
      v28 = *v21 - 16LL;
      if ( (_QWORD *)*v21 != i )
      {
        v32 = *((unsigned int *)v22 + 1);
        if ( (_QWORD *)v28 == (_QWORD *)((char *)v22 + v32) )
        {
          *((_DWORD *)v22 + 1) = v32 + *(_DWORD *)(v28 + 4);
          v33 = *v27;
          if ( *(_QWORD **)(*v27 + 8LL) != v27 )
            goto LABEL_48;
          v34 = (_QWORD *)v27[1];
          if ( (_QWORD *)*v34 != v27 )
            goto LABEL_48;
          *v34 = v33;
          *(_QWORD *)(v33 + 8) = v34;
        }
      }
      v29 = (_QWORD *)v22[3];
      v30 = v29 - 2;
      if ( v29 != i )
      {
        v35 = *((unsigned int *)v30 + 1);
        if ( v22 == (_QWORD *)((char *)v30 + v35) )
        {
          *((_DWORD *)v30 + 1) = *((_DWORD *)v22 + 1) + v35;
          v44 = *v21;
          if ( *(_QWORD **)(*v21 + 8LL) != v21 )
            goto LABEL_48;
          v45 = (_QWORD *)v21[1];
          if ( (_QWORD *)*v45 != v21 )
            goto LABEL_48;
          *v45 = v44;
          v22 = v30;
          *(_QWORD *)(v44 + 8) = v45;
        }
      }
      if ( *(_QWORD *)(v23 + 32) > (unsigned __int64)v22 + *((unsigned int *)v22 + 1) )
      {
LABEL_32:
        KeReleaseSpinLock(&gmutHeap, NewIrql);
        return v5;
      }
      *(_QWORD *)(v23 + 32) = v22;
      v36 = v22 + 2;
      v37 = *v36;
      if ( *(_QWORD **)(*v36 + 8LL) == v36 )
      {
        v38 = (_QWORD *)v36[1];
        if ( (_QWORD *)*v38 == v36 )
        {
          *v38 = v37;
          *(_QWORD *)(v37 + 8) = v38;
          goto LABEL_32;
        }
      }
    }
LABEL_48:
    __fastfail(3u);
  }
  return v5;
}
