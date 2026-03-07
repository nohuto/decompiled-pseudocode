__int64 __fastcall ParseUnload(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  KIRQL v7; // al
  __int64 v8; // rcx

  v3 = *(_QWORD *)(a2 + 32);
  switch ( *(_DWORD *)(a2 + 16) & 0xF )
  {
    case 0:
      ++*(_DWORD *)(a2 + 16);
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64))ghUnloadTable)(19LL, 1LL, a1) == 259 )
        return 32772;
      goto LABEL_10;
    case 1:
LABEL_10:
      ++*(_DWORD *)(a2 + 16);
      NotifyObjectDestruction(v3);
LABEL_11:
      ++*(_DWORD *)(a2 + 16);
      AMLIApplyNamespaceOverride();
      if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64))ghUnloadTable)(19LL, 2LL, a1) != 259 )
      {
LABEL_12:
        v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 40));
        if ( *(_DWORD *)(v3 + 48) )
        {
          *(_QWORD *)(v3 + 56) = a1;
          a3 = 32772;
        }
        else
        {
          ++*(_DWORD *)(a2 + 16);
          a3 = 0;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 40), v7);
        if ( a3 == 32772 )
          return a3;
        goto LABEL_16;
      }
      return 32772;
    case 2:
      goto LABEL_11;
    case 3:
      goto LABEL_12;
    case 4:
LABEL_16:
      ++*(_DWORD *)(a2 + 16);
      FreeOwnedObjects((_QWORD *)v3);
      a3 = FreeObjOwner(a1, (struct _EX_RUNDOWN_REF *)v3);
      if ( a3 == 32772 )
        return a3;
      goto LABEL_17;
  }
  if ( (*(_DWORD *)(a2 + 16) & 0xF) != 5 )
    return a3;
LABEL_17:
  if ( g_SimulatorCallbackObject )
    Simulator_RefreshTree();
  v8 = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = *(_QWORD *)(v8 + 8);
  HeapFree(v8);
  return a3;
}
