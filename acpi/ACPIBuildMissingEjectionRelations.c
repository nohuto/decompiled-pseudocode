__int64 ACPIBuildMissingEjectionRelations()
{
  KIRQL v0; // si
  __int64 v1; // rdx
  ULONG_PTR v2; // rdi
  _QWORD *v3; // rcx
  ULONG_PTR v4; // r14
  int v5; // ebx
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD v9[2]; // [rsp+30h] [rbp-40h] BYREF
  _OWORD v10[2]; // [rsp+40h] [rbp-30h] BYREF
  void *Src; // [rsp+60h] [rbp-10h]

  Src = 0LL;
  v9[1] = v9;
  v9[0] = v9;
  memset(v10, 0, sizeof(v10));
  v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  if ( (__int64 *)AcpiUnresolvedEjectList != &AcpiUnresolvedEjectList )
  {
    ACPIInternalMoveList(&AcpiUnresolvedEjectList, v9);
    while ( (_QWORD *)v9[0] != v9 )
    {
      v1 = *(_QWORD *)v9[0];
      v2 = v9[0] - 848LL;
      if ( *(_QWORD *)(*(_QWORD *)v9[0] + 8LL) != v9[0] )
        goto LABEL_19;
      v3 = *(_QWORD **)(v9[0] + 8LL);
      if ( *v3 != v9[0] )
        goto LABEL_19;
      *v3 = v1;
      *(_QWORD *)(v1 + 8) = v3;
      v4 = AMLIGetNamedChild(*(_QWORD *)(v2 + 760), 1145718111LL);
      if ( v4 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v2 + 732));
        KeReleaseSpinLock(&AcpiDeviceTreeLock, v0);
        v5 = AMLIEvalNameSpaceObject(v4, v10, 0LL, 0LL);
        if ( (unsigned __int8)ACPIInitDereferenceDeviceExtensionUnlocked(v2) )
        {
          v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
        }
        else
        {
          v0 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
          if ( v5 >= 0 )
          {
            if ( WORD1(v10[0]) != 2 )
              KeBugCheckEx(0xA5u, 0xAuLL, v2, v4, WORD1(v10[0]));
            if ( (int)AMLIGetNameSpaceObject(Src) >= 0 )
            {
              dword_1C006F938 = 0;
              pszDest = 0;
              FreeDataBuffs(v10, 1LL);
            }
            v6 = (_QWORD *)qword_1C006F448;
            v7 = (_QWORD *)(v2 + 848);
            if ( *(__int64 **)qword_1C006F448 != &AcpiUnresolvedEjectList )
LABEL_19:
              __fastfail(3u);
          }
          else
          {
            v6 = (_QWORD *)qword_1C006F448;
            v7 = (_QWORD *)(v2 + 848);
            if ( *(__int64 **)qword_1C006F448 != &AcpiUnresolvedEjectList )
              goto LABEL_19;
          }
          *v7 = &AcpiUnresolvedEjectList;
          v7[1] = v6;
          *v6 = v7;
          qword_1C006F448 = (__int64)v7;
        }
        AMLIDereferenceHandleEx(v4);
      }
    }
  }
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v0);
  return 0LL;
}
