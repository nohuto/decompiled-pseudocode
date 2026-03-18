/*
 * XREFs of ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C00102CC
 * Callers:
 *     ?ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0010204 (-ReferenceHandleAndLock@CDwmChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0010268 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 * Callees:
 *     ?Current@CProcessData@DirectComposition@@SAPEAV12@XZ @ 0x1C00103C4 (-Current@CProcessData@DirectComposition@@SAPEAV12@XZ.c)
 */

__int64 __fastcall DirectComposition::CChannel::ReferenceHandleAndLock(int a1, struct DirectComposition::CChannel **a2)
{
  unsigned int v4; // esi
  struct DirectComposition::CProcessData *v5; // rax
  struct DirectComposition::CProcessData *v6; // r14
  struct _ERESOURCE *v7; // rbx
  struct _RTL_GENERIC_TABLE *v8; // rcx
  __int64 v9; // rdi
  _QWORD *v10; // rax
  struct _ERESOURCE *v11; // rbx
  int Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+24h] [rbp-24h]
  int v15; // [rsp+2Ch] [rbp-1Ch]

  v4 = 0;
  v5 = DirectComposition::CProcessData::Current();
  v6 = v5;
  if ( v5 )
  {
    v7 = (struct _ERESOURCE *)*((_QWORD *)v5 + 1);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v7, 1u);
    v8 = *(struct _RTL_GENERIC_TABLE **)v6;
    Buffer = a1;
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
    ExReleaseResourceLite(*((PERESOURCE *)v6 + 1));
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
