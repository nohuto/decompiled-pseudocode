/*
 * XREFs of VidSchEscape @ 0x1C003F6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     VidSchiForceTdr @ 0x1C00473F4 (VidSchiForceTdr.c)
 */

__int64 __fastcall VidSchEscape(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  int v5; // ecx
  unsigned int v6; // eax
  __int64 v7; // rbp
  int v8; // ecx
  unsigned int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 *v13; // rax
  __int64 v14; // rcx
  _QWORD v16[4]; // [rsp+50h] [rbp-38h] BYREF
  __int16 v17; // [rsp+70h] [rbp-18h]

  v4 = -1073741811;
  if ( !*(_DWORD *)a2 )
  {
    v8 = *(_DWORD *)(a2 + 4) != 0;
    v9 = *(_DWORD *)(a1 + 2536) & 0xFFFFFFFE;
    goto LABEL_37;
  }
  if ( *(_DWORD *)a2 != 2 )
  {
    if ( *(_DWORD *)a2 != 4 )
    {
      switch ( *(_DWORD *)a2 )
      {
        case 5:
          g_TdrConfig[6] = *(_DWORD *)(a2 + 4);
          g_TdrConfig[7] = *(_DWORD *)(a2 + 8);
          return 0;
        case 6:
          VidSchiForceTdr(a1);
          return 0;
        case 7:
          *(_DWORD *)(a1 + 232) = *(_DWORD *)(a2 + 4);
          return 0;
        case 8:
          if ( !(unsigned __int8)RtlIsZeroMemory(a2 + 32, 16LL) )
          {
            WdLogSingleEntry1(1LL, -1073741811LL);
            ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Reserved fields should not be set, returning 0x%I64x",
              -1073741811LL,
              0LL,
              0LL,
              0LL,
              0LL);
            return v4;
          }
          v5 = *(_DWORD *)(a2 + 12);
          v6 = *(_DWORD *)(a2 + 16);
          if ( !v5 )
          {
            v7 = v6;
            if ( v6 > *(_DWORD *)(a1 + 40) )
            {
LABEL_13:
              WdLogSingleEntry1(1LL, v7);
              ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
                0LL,
                0x40000LL,
                0xFFFFFFFFLL,
                L"Invalid VidPnSourceId:%u",
                v7,
                0LL,
                0LL,
                0LL,
                0LL);
              return v4;
            }
            v17 = 0;
            v16[0] = a1 + 1728;
            AcquireSpinLock::Acquire((Acquire *)v16);
            *(_DWORD *)(*(_QWORD *)(a1 + 8 * v7 + 3200) + 82936LL) = *(_DWORD *)(a2 + 28);
LABEL_18:
            v4 = 0;
            AcquireSpinLock::Release((AcquireSpinLock *)v16);
            return v4;
          }
          if ( v5 == 1 )
          {
            v7 = *(unsigned int *)(a2 + 16);
            if ( v6 > *(_DWORD *)(a1 + 40) )
              goto LABEL_13;
            v17 = 0;
            v16[0] = a1 + 1728;
            AcquireSpinLock::Acquire((Acquire *)v16);
            *(_DWORD *)(*(_QWORD *)(a1 + 8 * v7 + 3200) + 82932LL) = *(_DWORD *)(a2 + 24);
            goto LABEL_18;
          }
          if ( v5 != 2 )
            return v4;
          *(_BYTE *)(*(_QWORD *)(((__int64 (*)(void))DxgCoreInterface[6])() + 64) + 138LL) = *(_BYTE *)(a2 + 20);
          return 0;
      }
      return v4;
    }
    v8 = *(_DWORD *)(a2 + 4) != 0 ? 0x200 : 0;
    v9 = *(_DWORD *)(a1 + 2536) & 0xFFFFFDFF;
LABEL_37:
    *(_DWORD *)(a1 + 2536) = v9 | v8;
    return 0;
  }
  v10 = *(_DWORD *)(a2 + 4);
  switch ( v10 )
  {
    case 4:
      _InterlockedAnd((volatile signed __int32 *)(a1 + 36), 0xFFFFFFEF);
      return 0;
    case 5:
      _InterlockedAnd((volatile signed __int32 *)(a1 + 36), 0xFFFFFFF8);
      return 0;
    case 8:
      v11 = *(unsigned int *)(a2 + 8);
      if ( (unsigned int)v11 < *(_DWORD *)(a1 + 80) )
      {
        v12 = (unsigned int)v11;
        v13 = *(__int64 **)(a1 + 632);
        if ( (unsigned int)v11 < *(_DWORD *)(a1 + 704) )
          v13 += v11;
        v14 = *v13;
        if ( (*(_DWORD *)(*v13 + 12) & 2) != 0 )
        {
          *(_DWORD *)(v14 + 2028) = 1;
          *(_BYTE *)(v14 + 2026) = 1;
          *(_QWORD *)(a1 + 1224) = MEMORY[0xFFFFF78000000320];
          KeSetEvent((PRKEVENT)(a1 + 1192), 0, 0);
          return v4;
        }
        RtlSetBitEx(a1 + 584, v12);
        return 0;
      }
      break;
  }
  return v4;
}
