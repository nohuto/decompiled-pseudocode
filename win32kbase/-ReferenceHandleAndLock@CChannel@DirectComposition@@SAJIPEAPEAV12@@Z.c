/*
 * XREFs of ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C005F398
 * Callers:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C005F334 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C006A510 (-ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CChannel::ReferenceHandleAndLock(
        __int64 a1,
        struct DirectComposition::CChannel **a2)
{
  int v3; // ebp
  unsigned int v4; // esi
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v6; // r14
  struct _ERESOURCE *v7; // rbx
  struct _RTL_GENERIC_TABLE *v8; // rcx
  __int64 v9; // rdi
  _QWORD *v10; // rax
  struct _ERESOURCE *v11; // rbx
  int Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+24h] [rbp-24h]
  int v15; // [rsp+2Ch] [rbp-1Ch]

  v3 = a1;
  v4 = 0;
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process && *CurrentProcessWin32Process && (v6 = CurrentProcessWin32Process[32]) != 0 )
  {
    v7 = *(struct _ERESOURCE **)(v6 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v7, 1u);
    v8 = *(struct _RTL_GENERIC_TABLE **)v6;
    Buffer = v3;
    v14 = 0LL;
    v9 = 0LL;
    v15 = 0;
    v10 = RtlLookupElementGenericTable(v8, &Buffer);
    if ( v10 )
      v9 = v10[1];
    if ( v9 )
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
    else
      v4 = -1073741790;
    ExReleaseResourceLite(*(PERESOURCE *)(v6 + 8));
    KeLeaveCriticalRegion();
    if ( v9 )
    {
      v11 = *(struct _ERESOURCE **)(v9 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v11, 1u);
      *a2 = (struct DirectComposition::CChannel *)v9;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v4;
}
