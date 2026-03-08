/*
 * XREFs of PopEtEnergyTrackerCreate @ 0x14084F34C
 * Callers:
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PsEnumProcesses @ 0x1407809CC (PsEnumProcesses.c)
 *     NtClose @ 0x1407C00E0 (NtClose.c)
 *     ObCreateObjectEx @ 0x1407D1090 (ObCreateObjectEx.c)
 *     ObInsertObject @ 0x1407F0A20 (ObInsertObject.c)
 */

__int64 __fastcall PopEtEnergyTrackerCreate(int *a1, HANDLE *a2)
{
  int v2; // eax
  bool v5; // cf
  int inserted; // edi
  _OWORD *v7; // rbx
  _DWORD *v8; // rbx
  unsigned __int64 UnbiasedInterruptTime; // rax
  ULONG_PTR v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  int v13; // esi
  PVOID *NewObject; // [rsp+20h] [rbp-49h]
  __int128 v16; // [rsp+50h] [rbp-19h] BYREF
  __int128 v17; // [rsp+60h] [rbp-9h]
  _DWORD v18[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v19; // [rsp+78h] [rbp+Fh]
  __int64 v20; // [rsp+80h] [rbp+17h]
  int v21; // [rsp+88h] [rbp+1Fh]
  int v22; // [rsp+8Ch] [rbp+23h]
  __int128 v23; // [rsp+90h] [rbp+27h]
  PVOID Object; // [rsp+D0h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+E0h] [rbp+77h] BYREF

  v2 = *a1;
  Object = 0LL;
  Handle = 0LL;
  v18[1] = 0;
  v22 = 0;
  v16 = 0LL;
  v17 = 0LL;
  if ( (unsigned int)(v2 - 1) > 0x3FFFF )
    *a1 = 0x40000;
  if ( PopEtGlobals )
  {
    v18[0] = 48;
    v19 = 0LL;
    v5 = KeGetCurrentThread()->PreviousMode != 0;
    v20 = 0LL;
    v23 = 0LL;
    v21 = v5 ? 0 : 0x200;
    inserted = ObCreateObjectEx(
                 0,
                 *(_DWORD **)(PopEtGlobals + 32),
                 (__int64)v18,
                 KeGetCurrentThread()->PreviousMode,
                 (__int64)NewObject,
                 640,
                 0,
                 0,
                 &Object,
                 0LL);
    if ( inserted < 0 )
    {
      v8 = Object;
    }
    else
    {
      v7 = Object;
      memset(Object, 0, 0x280uLL);
      v7[1] = 0LL;
      *((_QWORD *)v7 + 2) = 0LL;
      *((_QWORD *)v7 + 8) = 0LL;
      *((_QWORD *)v7 + 9) = 0LL;
      *((_QWORD *)v7 + 6) = 0LL;
      *((_QWORD *)v7 + 7) = 0LL;
      memset(v7 + 5, 0, 0x200uLL);
      *((_QWORD *)v7 + 12) = PopEtGlobals + 960;
      *((_QWORD *)v7 + 4) = *(_QWORD *)a1;
      *((_DWORD *)v7 + 10) = a1[2];
      *((_DWORD *)v7 + 159) |= 1u;
      v8 = Object;
      *((_DWORD *)Object + 148) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      v10 = PopEtGlobals + 16;
      v8[149] = UnbiasedInterruptTime / 0x2710;
      v8[150] = 1;
      PopAcquireRwLockExclusive(v10);
      v11 = PopEtGlobals;
      v12 = *(_QWORD **)(PopEtGlobals + 8);
      if ( *v12 != PopEtGlobals )
        __fastfail(3u);
      *(_QWORD *)v8 = PopEtGlobals;
      *((_QWORD *)v8 + 1) = v12;
      *v12 = v8;
      *(_QWORD *)(v11 + 8) = v8;
      PopReleaseRwLock(v11 + 16);
      v16 = 1uLL;
      v17 = (unsigned __int64)v8;
      inserted = PsEnumProcesses(PopEtProcessEnumSnapshotCallback, (__int64)&v16);
      if ( inserted >= 0 )
      {
        PopAcquireRwLockExclusive((ULONG_PTR)(v8 + 4));
        v13 = v8[153];
        if ( !v13 )
          v8[159] &= ~1u;
        PopReleaseRwLock((ULONG_PTR)(v8 + 4));
        if ( v13 )
        {
          inserted = -1073741670;
        }
        else
        {
          inserted = ObInsertObject(v8, 0LL, 1u, 1u, 0LL, &Handle);
          if ( inserted < 0 )
          {
            v8 = 0LL;
          }
          else
          {
            inserted = 0;
            *a2 = Handle;
            Handle = 0LL;
          }
        }
      }
    }
    if ( Handle )
      NtClose(Handle);
    if ( v8 )
      ObfDereferenceObject(v8);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)inserted;
}
